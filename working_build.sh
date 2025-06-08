#!/bin/bash
# working_build.sh - Final working build script

set -e

echo "=== RISC-V CPU Build (Fixed Version) ==="

# Clean build
rm -rf build
mkdir -p build
cd build

# Step 1: Apply the simple fixes
echo "Step 1: Applying compatibility fixes..."

# Fix cache.v parameter names
if [ -f "../src/cpu/cache.v" ]; then
    sed 's/AddrBusWidth/ADDR_WIDTH/g; s/DataBusByteWidth/DATA_WIDTH/g' \
        "../src/cpu/cache.v" > cache_fixed.v
    echo "✅ Fixed cache.v"
fi

# Fix fifo.v buffer naming
if [ -f "../src/cpu/library/fifo.v" ]; then
    sed 's/reg \[WIDTH-1:0\] buffer\[SIZE-1:0\];/reg [WIDTH-1:0] fifo_buffer[SIZE-1:0];/g; s/buffer\[/fifo_buffer[/g' \
        "../src/cpu/library/fifo.v" > fifo_fixed.v
    echo "✅ Fixed fifo.v"
fi

# Step 2: Create complete IP models
echo "Step 2: Creating IP simulation models..."

cat > ip_models.v << 'EOF'
`timescale 1ns/1ps

module clk_wiz_0 (
    input  wire clk_in1,
    input  wire reset,
    output wire clk_out1,
    output wire locked
);
    assign clk_out1 = clk_in1;
    assign locked = ~reset;
endmodule

module simple_ram #(
    parameter ADDR_WIDTH = 12,
    parameter DATA_WIDTH = 4
)(
    input  wire                      clk,
    input  wire                      rst,
    input  wire [1:0]                rw_flag,
    input  wire [ADDR_WIDTH-1:0]     addr,
    input  wire [DATA_WIDTH*8-1:0]   write_data,
    input  wire [DATA_WIDTH-1:0]     write_mask,
    output reg  [DATA_WIDTH*8-1:0]   read_data,
    output reg                       busy,
    output reg                       done
);
    
    localparam REAL_DATA_WIDTH = DATA_WIDTH * 8;
    localparam DEPTH = 1 << ADDR_WIDTH;
    reg [REAL_DATA_WIDTH-1:0] memory [0:DEPTH-1];
    
    always @(posedge clk) begin
        if (rst) begin
            read_data <= 0;
            busy <= 0;
            done <= 0;
        end else begin
            busy <= |rw_flag;
            done <= |rw_flag;
            if (rw_flag[1]) begin
                if (DATA_WIDTH >= 1 && write_mask[0]) memory[addr][7:0] <= write_data[7:0];
                if (DATA_WIDTH >= 2 && write_mask[1]) memory[addr][15:8] <= write_data[15:8];
                if (DATA_WIDTH >= 3 && write_mask[2]) memory[addr][23:16] <= write_data[23:16];
                if (DATA_WIDTH >= 4 && write_mask[3]) memory[addr][31:24] <= write_data[31:24];
            end
            if (rw_flag[0]) begin
                read_data <= memory[addr];
            end
        end
    end
    
    initial begin
        integer i;
        for (i = 0; i < DEPTH; i = i + 1) memory[i] = 0;
    end
endmodule

module simple_ram_alt #(
    parameter ADDR_WIDTH = 12,
    parameter DATA_WIDTH = 4
)(
    input  wire                      clk,
    input  wire                      rst,
    input  wire [1:0]                rw_flag,
    input  wire [ADDR_WIDTH-1:0]     addr,
    input  wire [DATA_WIDTH*8-1:0]   write_data,
    input  wire [DATA_WIDTH-1:0]     write_mask,
    output reg  [DATA_WIDTH*8-1:0]   read_data,
    output reg                       busy,
    output reg                       done
);
    
    localparam REAL_DATA_WIDTH = DATA_WIDTH * 8;
    localparam DEPTH = 1 << ADDR_WIDTH;
    reg [REAL_DATA_WIDTH-1:0] memory [0:DEPTH-1];
    
    always @(posedge clk) begin
        if (rst) begin
            read_data <= 0;
            busy <= 0;
            done <= 0;
        end else begin
            busy <= |rw_flag;
            done <= |rw_flag;
            if (rw_flag[1]) begin
                if (DATA_WIDTH >= 1 && write_mask[0]) memory[addr][7:0] <= write_data[7:0];
                if (DATA_WIDTH >= 2 && write_mask[1]) memory[addr][15:8] <= write_data[15:8];
                if (DATA_WIDTH >= 3 && write_mask[2]) memory[addr][23:16] <= write_data[23:16];
                if (DATA_WIDTH >= 4 && write_mask[3]) memory[addr][31:24] <= write_data[31:24];
            end
            if (rw_flag[0]) begin
                read_data <= memory[addr];
            end
        end
    end
    
    initial begin
        integer i;
        for (i = 0; i < DEPTH; i = i + 1) memory[i] = 0;
    end
endmodule
EOF

echo "✅ Created IP models"

# Step 3: Build with Verilator
echo "Step 3: Building with Verilator..."

# Collect source files, using fixed versions where available
SOURCE_FILES=(
    "ip_models.v"
)

# Add fixed cache if available, otherwise original
if [ -f "cache_fixed.v" ]; then
    SOURCE_FILES+=("cache_fixed.v")
elif [ -f "../src/cpu/cache.v" ]; then
    SOURCE_FILES+=("../src/cpu/cache.v")
fi

# Add fixed fifo if available
if [ -f "fifo_fixed.v" ]; then
    SOURCE_FILES+=("fifo_fixed.v")
fi

# Add all other CPU files except cache.v and fifo.v (to avoid duplicates)
for file in ../src/cpu/*.v; do
    if [[ "$(basename "$file")" != "cache.v" ]] && [[ "$(basename "$file")" != "*_tb.v" ]]; then
        SOURCE_FILES+=("$file")
    fi
done

# Add library files except fifo.v
for file in ../src/cpu/library/*.v; do
    if [[ "$(basename "$file")" != "fifo.v" ]]; then
        SOURCE_FILES+=("$file")
    fi
done

# Add testbench
SOURCE_FILES+=("../tb_riscv_cpu.sv")

echo "Source files to compile:"
for file in "${SOURCE_FILES[@]}"; do
    echo "  $file"
done

# Run Verilator with timing support
verilator \
    --cc \
    --exe \
    --build \
    --trace \
    --no-timing \
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
    "${SOURCE_FILES[@]}"

if [ $? -eq 0 ]; then
    echo ""
    echo "🎉 BUILD SUCCESSFUL!"
    
    # Create run script
    cat > run.sh << 'EOF'
#!/bin/bash
echo "Running RISC-V CPU simulation..."
echo "This is a basic testbench - you'll need to add the actual CPU instantiation"
./obj_dir/Vtb_riscv_cpu +trace
echo ""
echo "Simulation complete!"
echo "View waveforms with: gtkwave cpu_sim.vcd"
EOF
    chmod +x run.sh
    
    echo ""
    echo "Next steps:"
    echo "1. Run simulation: cd build && ./run.sh"
    echo "2. Add actual CPU instantiation to tb_riscv_cpu.sv"
    echo "3. View waveforms: gtkwave build/cpu_sim.vcd"
    
else
    echo ""
    echo "❌ BUILD FAILED"
    echo "Check the error messages above"
    exit 1
fi
