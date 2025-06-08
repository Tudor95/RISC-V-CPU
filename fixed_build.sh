#!/bin/bash
# fixed_build.sh - Build script that handles Xilinx IP cores

set -e

GREEN='\033[0;32m'
YELLOW='\033[0;33m'
RED='\033[0;31m'
BLUE='\033[0;34m'
NC='\033[0m'

PROJECT_DIR=$(pwd)
BUILD_DIR="$PROJECT_DIR/build"
SRC_DIR="$PROJECT_DIR/src"

echo -e "${GREEN}Building RISC-V CPU with Xilinx IP handling${NC}"

mkdir -p "$BUILD_DIR"
cd "$BUILD_DIR"

echo -e "${YELLOW}Step 1: Creating Xilinx IP simulation replacements...${NC}"

# Create the IP replacement file if it doesn't exist
if [ ! -f "../xilinx_ip_sim.v" ]; then
    echo "Creating xilinx_ip_sim.v with IP core replacements..."
    # The file content would be created here - you can copy from the artifact above
    echo -e "${RED}Please create xilinx_ip_sim.v from the provided artifact${NC}"
fi

echo -e "${YELLOW}Step 2: Analyzing CPU files and dependencies...${NC}"

# Find all Verilog files
mapfile -t CPU_FILES < <(find "$SRC_DIR/cpu" -name "*.v" -not -name "*_tb.v")
mapfile -t RAM_FILES < <(find "$SRC_DIR" -name "*ram*.v" 2>/dev/null || true)
mapfile -t UART_FILES < <(find "$SRC_DIR" -name "*uart*.v" 2>/dev/null || true)

echo "Found files:"
echo "  CPU files: ${#CPU_FILES[@]}"
echo "  RAM files: ${#RAM_FILES[@]}"
echo "  UART files: ${#UART_FILES[@]}"

# Check for missing IP cores
echo -e "${YELLOW}Step 3: Checking for missing Xilinx IP cores...${NC}"

MISSING_IP=()
for file in "${CPU_FILES[@]}"; do
    # Check for clock wizard
    if grep -q "clk_wiz_0" "$file"; then
        echo "  Found clk_wiz_0 reference in $(basename "$file")"
        MISSING_IP+=("clk_wiz_0")
    fi
    
    # Check for block RAM
    if grep -q "blk_mem_gen" "$file"; then
        echo "  Found blk_mem_gen reference in $(basename "$file")"
        MISSING_IP+=("blk_mem_gen")
    fi
    
    # Check for FIFO
    if grep -q "fifo_generator" "$file"; then
        echo "  Found fifo_generator reference in $(basename "$file")"
        MISSING_IP+=("fifo_generator")
    fi
    
    # Check for simple_ram include
    if grep -q '`include.*simple_ram' "$file"; then
        echo "  Found simple_ram include in $(basename "$file")"
        MISSING_IP+=("simple_ram")
    fi
done

# Remove duplicates
MISSING_IP=($(printf "%s\n" "${MISSING_IP[@]}" | sort -u))

echo "Missing IP cores that need simulation models:"
for ip in "${MISSING_IP[@]}"; do
    echo "  - $ip"
done

echo -e "${YELLOW}Step 4: Preparing Verilator command...${NC}"

# Build Verilator arguments
VERILATOR_ARGS=(
    "verilator"
    "--cc"
    "--exe"
    "--build"
    "--trace"
    "-Wall"
    "-Wno-UNUSED"        # Suppress unused warnings for IP replacements
    "-Wno-UNDRIVEN"      # Suppress undriven warnings initially
    "-Wno-MODDUP"        # Allow duplicate modules (for IP replacements)
    "--top-module" "tb_riscv_cpu"
)

# Add include directories
VERILATOR_ARGS+=("-I$SRC_DIR/cpu")
if [ -d "$SRC_DIR/ram" ]; then
    VERILATOR_ARGS+=("-I$SRC_DIR/ram")
fi
if [ -d "$SRC_DIR/uart" ]; then
    VERILATOR_ARGS+=("-I$SRC_DIR/uart")
fi
VERILATOR_ARGS+=("-I$SRC_DIR")
VERILATOR_ARGS+=("-I$BUILD_DIR")

# Add IP simulation replacements FIRST (so they're found before missing ones)
if [ -f "../xilinx_ip_sim.v" ]; then
    VERILATOR_ARGS+=("../xilinx_ip_sim.v")
    echo "Added Xilinx IP simulation replacements"
fi

# Add all source files
for file in "${CPU_FILES[@]}"; do
    VERILATOR_ARGS+=("$file")
done

for file in "${RAM_FILES[@]}"; do
    VERILATOR_ARGS+=("$file")
done

for file in "${UART_FILES[@]}"; do
    VERILATOR_ARGS+=("$file")
done

# Add testbench
VERILATOR_ARGS+=("../tb_riscv_cpu.sv")

echo -e "${YELLOW}Step 5: Building with Verilator...${NC}"
echo "Command: ${VERILATOR_ARGS[@]}"

# Check if testbench exists
if [ ! -f "../tb_riscv_cpu.sv" ]; then
    echo -e "${RED}Error: tb_riscv_cpu.sv not found${NC}"
    echo "Please ensure the testbench file exists in the project directory"
    exit 1
fi

# Run Verilator
if "${VERILATOR_ARGS[@]}"; then
    echo -e "${GREEN}Build successful!${NC}"
    
    # Create test program
    cat > test_program.hex << 'EOF'
// Simple RISC-V test program
// Tests basic arithmetic operations
00100093  // addi x1, x0, 1      # x1 = 1
00200113  // addi x2, x0, 2      # x2 = 2  
002081B3  // add  x3, x1, x2     # x3 = 1 + 2 = 3
00A00213  // addi x4, x0, 10     # x4 = 10
403202B3  // sub  x5, x4, x3     # x5 = 10 - 3 = 7
00000013  // nop
00000013  // nop
00000013  // nop
EOF
    
    # Create run script
    cat > run_sim.sh << 'EOF'
#!/bin/bash
echo "Running RISC-V CPU simulation..."
./obj_dir/Vtb_riscv_cpu +trace
echo "Simulation complete. Check cpu_sim.vcd for waveforms."
echo "To view: gtkwave cpu_sim.vcd"
EOF
    chmod +x run_sim.sh
    
    echo -e "${GREEN}Setup complete!${NC}"
    echo ""
    echo "To run simulation:"
    echo "  cd $BUILD_DIR"
    echo "  ./run_sim.sh"
    echo ""
    echo "To view waveforms:"
    echo "  gtkwave cpu_sim.vcd"
    
else
    echo -e "${RED}Build failed!${NC}"
    echo ""
    echo -e "${BLUE}Common issues and solutions:${NC}"
    echo "1. Missing CPU instantiation in testbench"
    echo "   - Run: ./instantiate_cpu.sh to generate proper instantiation"
    echo ""
    echo "2. Missing Xilinx IP simulation models"
    echo "   - Ensure xilinx_ip_sim.v exists with required IP models"
    echo ""
    echo "3. Port connection mismatches"
    echo "   - Check CPU module ports vs testbench connections"
    echo ""
    echo "4. Include file paths"
    echo "   - Verify all included files exist"
    
    # Show specific missing modules if any
    if [ ${#MISSING_IP[@]} -gt 0 ]; then
        echo ""
        echo -e "${YELLOW}Required IP simulation models:${NC}"
        for ip in "${MISSING_IP[@]}"; do
            echo "  - $ip (add to xilinx_ip_sim.v)"
        done
    fi
    
    exit 1
fi