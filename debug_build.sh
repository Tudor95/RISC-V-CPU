#!/bin/bash
# debug_build.sh - Build with timing analysis and debug info

set -e

GREEN='\033[0;32m'
YELLOW='\033[0;33m'
RED='\033[0;31m'
NC='\033[0m'

PROJECT_DIR=$(pwd)
BUILD_DIR="$PROJECT_DIR/build"
SRC_DIR="$PROJECT_DIR/src"

echo -e "${GREEN}Debug Build for RISC-V CPU${NC}"

mkdir -p "$BUILD_DIR"
cd "$BUILD_DIR"

# Find CPU files
mapfile -t CPU_FILES < <(find "$SRC_DIR/cpu" -name "*.v" -not -name "*_tb.v")

echo "Found ${#CPU_FILES[@]} CPU files"

# Create enhanced Verilator command for debugging
VERILATOR_ARGS=(
    "verilator"
    "--cc"
    "--exe" 
    "--build"
    "--trace"
    "--trace-depth" "3"          # Deeper trace for debugging
    "-Wall"
    "-Wno-UNUSED"                # Suppress unused signal warnings initially
    "-Wno-UNDRIVEN"             # Suppress undriven signal warnings initially  
    "--top-module" "tb_riscv_cpu"
    "--assert"                   # Enable assertions
    "--debug"                    # Enable debug info
    "-O3"                        # Optimize for performance
)

# Add include paths
VERILATOR_ARGS+=("-I$SRC_DIR/cpu")
if [ -d "$SRC_DIR/ram" ]; then
    VERILATOR_ARGS+=("-I$SRC_DIR/ram")
fi
VERILATOR_ARGS+=("-I$SRC_DIR")

# Add timing analysis flags
VERILATOR_ARGS+=(
    "--timing"                   # Enable timing analysis
    "-CFLAGS" "-DVL_DEBUG"      # Enable debug in generated C++
    "-CFLAGS" "-g"              # Debug symbols
    "-CFLAGS" "-O0"             # No optimization for debugging
)

# Add source files
for file in "${CPU_FILES[@]}"; do
    VERILATOR_ARGS+=("$file")
done
VERILATOR_ARGS+=("../tb_riscv_cpu.sv")

echo -e "${YELLOW}Building with debug options...${NC}"

# Check testbench exists
if [ ! -f "../tb_riscv_cpu.sv" ]; then
    echo -e "${RED}Creating basic testbench template...${NC}"
    cat > ../tb_riscv_cpu.sv << 'EOF'
`timescale 1ns/1ps

module tb_riscv_cpu;
    reg clk = 0;
    reg rst_n = 0;
    
    // Clock generation
    always #5 clk = ~clk;
    
    // Reset sequence
    initial begin
        #100 rst_n = 1;
        #1000 $finish;
    end
    
    // Basic CPU instantiation - REPLACE WITH ACTUAL MODULE
    // You need to replace this with the actual CPU module and ports
    
    initial begin
        $dumpfile("cpu_sim.vcd"); 
        $dumpvars(0, tb_riscv_cpu);
        $display("Testbench started");
    end
    
endmodule
EOF
    echo "Basic testbench created. You need to add the actual CPU instantiation."
fi

# Run Verilator
echo "Command: ${VERILATOR_ARGS[@]}"
"${VERILATOR_ARGS[@]}"

if [ $? -eq 0 ]; then
    echo -e "${GREEN}Build successful!${NC}"
    
    # Create run script with debug options
    cat > run_sim.sh << 'EOF'
#!/bin/bash
echo "Running simulation with debug output..."
./obj_dir/Vtb_riscv_cpu +trace +vcd
echo "Simulation complete. Check cpu_sim.vcd for waveforms."
EOF
    chmod +x run_sim.sh
    
    echo -e "${GREEN}Debug simulation ready!${NC}"
    echo "Run with: cd build && ./run_sim.sh"
    echo "View waves: gtkwave cpu_sim.vcd"
    
else
    echo -e "${RED}Build failed. Common timing issues:${NC}"
    echo "1. Clock/reset signals not properly connected"
    echo "2. Combinational loops in design"
    echo "3. Missing or incorrect port connections"
    echo "4. Timing violations in memory interfaces"
    echo ""
    echo "Check the Verilator warnings above for specific issues."
fi