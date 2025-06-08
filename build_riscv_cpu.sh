#!/bin/bash
# build_riscv_cpu.sh - Build script for RISC-V CPU with Verilator

set -e  # Exit on any error

# Configuration
PROJECT_DIR=$(pwd)
BUILD_DIR="$PROJECT_DIR/build"
SRC_DIR="$PROJECT_DIR/src"

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[0;33m'
NC='\033[0m' # No Color

echo -e "${GREEN}Building RISC-V CPU with Verilator${NC}"

# Create build directory
mkdir -p "$BUILD_DIR"
cd "$BUILD_DIR"

echo -e "${YELLOW}Step 1: Analyzing source files...${NC}"

# Find all Verilog files - using array to handle paths properly
mapfile -t CPU_FILES < <(find "$SRC_DIR/cpu" -name "*.v" -not -name "*_tb.v")

echo "Found CPU files:"
for file in "${CPU_FILES[@]}"; do
    echo "  $file"
done

# Check for defines.v
if [ -f "$SRC_DIR/cpu/defines.v" ]; then
    DEFINES_FILE="$SRC_DIR/cpu/defines.v"
    echo "Found defines file: $DEFINES_FILE"
else
    echo -e "${RED}Warning: defines.v not found, you may need to create one${NC}"
fi

echo -e "${YELLOW}Step 2: Finding top-level module...${NC}"

# Search for modules in a cleaner way
echo "Searching for modules in CPU files..."
declare -a ALL_MODULES

for file in "${CPU_FILES[@]}"; do
    if [ -f "$file" ]; then
        while IFS= read -r line; do
            if [[ $line =~ ^module[[:space:]]+([a-zA-Z_][a-zA-Z0-9_]*) ]]; then
                module_name="${BASH_REMATCH[1]}"
                ALL_MODULES+=("$module_name")
                echo "  Found module '$module_name' in $(basename "$file")"
            fi
        done < "$file"
    fi
done

# Remove duplicates and sort
IFS=$'\n' ALL_MODULES=($(sort -u <<<"${ALL_MODULES[*]}"))
unset IFS

echo "All discovered modules:"
for module in "${ALL_MODULES[@]}"; do
    echo "  $module"
done

# Try to identify the top module
TOP_MODULE=""

# Strategy 1: Look for modules with specific patterns
for module in "${ALL_MODULES[@]}"; do
    case $module in
        cpu|CPU|riscv_cpu|risc_v_cpu|processor|core|cpu_top|riscv_top)
            TOP_MODULE="$module"
            echo "Found likely top module: $TOP_MODULE"
            break
            ;;
    esac
done

# Strategy 2: If not found, look for modules that contain "cpu" or "riscv"
if [ -z "$TOP_MODULE" ]; then
    for module in "${ALL_MODULES[@]}"; do
        if [[ $module =~ cpu|riscv|processor ]]; then
            TOP_MODULE="$module"
            echo "Found CPU-related module: $TOP_MODULE"
            break
        fi
    done
fi

# Strategy 3: Manual selection if still not found
if [ -z "$TOP_MODULE" ]; then
    echo -e "${YELLOW}Could not auto-detect top module. Available modules:${NC}"
    for i in "${!ALL_MODULES[@]}"; do
        echo "  $((i+1)). ${ALL_MODULES[i]}"
    done
    echo -e "${YELLOW}Please select the top module (enter number):${NC}"
    read -p "Choice: " choice
    if [[ "$choice" =~ ^[0-9]+$ ]] && [ "$choice" -ge 1 ] && [ "$choice" -le "${#ALL_MODULES[@]}" ]; then
        TOP_MODULE="${ALL_MODULES[$((choice-1))]}"
    else
        echo "Invalid choice, using first module as default"
        TOP_MODULE="${ALL_MODULES[0]}"
    fi
fi

echo "Using top module: $TOP_MODULE"

echo -e "${YELLOW}Step 3: Preparing Verilator command...${NC}"

# Create verilator command array to handle arguments properly
VERILATOR_ARGS=(
    "verilator"
    "--cc"                    # Generate C++ code
    "--exe"                   # Create executable  
    "--build"                 # Build immediately
    "--trace"                 # Enable VCD tracing
    "-Wall"                   # Enable warnings
    "--top-module" "tb_riscv_cpu"  # Specify testbench as top
)

# Add include paths
VERILATOR_ARGS+=("-I$SRC_DIR/cpu")
if [ -d "$SRC_DIR/ram" ]; then
    VERILATOR_ARGS+=("-I$SRC_DIR/ram")
fi
VERILATOR_ARGS+=("-I$SRC_DIR")

# Add source files
for file in "${CPU_FILES[@]}"; do
    VERILATOR_ARGS+=("$file")
done
VERILATOR_ARGS+=("../tb_riscv_cpu.sv")

# Optional: Add DPI support for SPIKE (commented out by default)
# VERILATOR_ARGS+=("../spike_dpi.cpp")
# VERILATOR_ARGS+=("-CFLAGS" "\"-I$HOME/riscv-tools/include\"")
# VERILATOR_ARGS+=("-LDFLAGS" "\"-L$HOME/riscv-tools/lib -lriscv -lfdt\"")

echo -e "${YELLOW}Step 4: Running Verilator...${NC}"
echo "Command: ${VERILATOR_ARGS[@]}"

# Check if testbench exists
if [ ! -f "../tb_riscv_cpu.sv" ]; then
    echo -e "${RED}Error: tb_riscv_cpu.sv not found in project directory${NC}"
    echo "Please create the testbench file first"
    exit 1
fi

# Execute Verilator
"${VERILATOR_ARGS[@]}"

if [ $? -eq 0 ]; then
    echo -e "${GREEN}Build successful!${NC}"
    echo -e "${GREEN}Executable created: $BUILD_DIR/obj_dir/Vtb_riscv_cpu${NC}"
    
    echo -e "${YELLOW}Step 5: Creating test program...${NC}"
    # Create a simple test program in hex format
    cat > test_program.hex << 'EOF'
// Simple RISC-V test program (RV32I instructions)
// addi x1, x0, 1    # x1 = 1
// addi x2, x0, 2    # x2 = 2  
// add  x3, x1, x2   # x3 = x1 + x2 = 3
// addi x4, x0, 10   # x4 = 10
// sub  x5, x4, x3   # x5 = 10 - 3 = 7
// nop (addi x0, x0, 0)
00100093
00200113  
002081B3
00A00213
403202B3
00000013
EOF
    
    echo -e "${GREEN}Setup complete!${NC}"
    echo ""
    echo "Top module detected: $TOP_MODULE"
    echo "Files processed: ${#CPU_FILES[@]} Verilog files"
    echo ""
    echo "To run simulation:"
    echo "  cd $BUILD_DIR"
    echo "  ./obj_dir/Vtb_riscv_cpu"
    echo ""
    echo "To view waveforms:"
    echo "  gtkwave cpu_sim.vcd"
    echo ""
    echo -e "${YELLOW}Note: You may need to update the testbench to match the actual ports of '$TOP_MODULE'${NC}"
    
else
    echo -e "${RED}Build failed! Check the errors above.${NC}"
    echo ""
    echo "Common fixes:"
    echo "1. Update testbench module instantiation to match '$TOP_MODULE'"
    echo "2. Check port names and widths in the CPU module"
    echo "3. Verify all include files are present"
    exit 1
fi