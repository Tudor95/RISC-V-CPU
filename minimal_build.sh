#!/bin/bash
# minimal_build.sh - Simple working build script

set -e

echo "=== Minimal RISC-V CPU Build ==="

# Clean and create build directory
rm -rf build
mkdir -p build
cd build

# Check if fixes were applied
if [ ! -f "../ip_models.v" ]; then
    echo "Applying quick fixes first..."
    cd ..
    chmod +x simple_fix.sh
    ./simple_fix.sh
    cd build
fi

echo "Building with Verilator..."

# Simple Verilator command with all necessary files
verilator \
    --cc \
    --exe \
    --build \
    --trace \
    -Wall \
    -Wno-UNUSED \
    -Wno-UNDRIVEN \
    -Wno-VARHIDDEN \
    -Wno-MODDUP \
    -Wno-PINMISSING \
    --top-module tb_riscv_cpu \
    -I../src \
    -I../src/cpu \
    -I../src/cpu/library \
    ../ip_models.v \
    ../src/cpu/*.v \
    ../src/cpu/library/*.v \
    ../tb_riscv_cpu.sv

if [ $? -eq 0 ]; then
    echo "✅ Build successful!"
    
    # Create run script
    cat > run.sh << 'EOF'
#!/bin/bash
echo "Running RISC-V CPU simulation..."
./obj_dir/Vtb_riscv_cpu +trace
echo "Done. View with: gtkwave cpu_sim.vcd"
EOF
    chmod +x run.sh
    
    echo ""
    echo "To run simulation: cd build && ./run.sh"
    echo "To view waves: gtkwave build/cpu_sim.vcd"
    
else
    echo "❌ Build failed!"
    echo "Check the errors above."
    exit 1
fi