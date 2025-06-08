#!/bin/bash
# final_build.sh - Complete build script with all compatibility fixes

set -e

GREEN='\033[0;32m'
YELLOW='\033[0;33m'
RED='\033[0;31m'
BLUE='\033[0;34m'
NC='\033[0m'

PROJECT_DIR=$(pwd)
BUILD_DIR="$PROJECT_DIR/build"
SRC_DIR="$PROJECT_DIR/src"

echo -e "${GREEN}Final RISC-V CPU Build with All Compatibility Fixes${NC}"

# Clean build directory
rm -rf "$BUILD_DIR"
mkdir -p "$BUILD_DIR"
cd "$BUILD_DIR"

echo -e "${YELLOW}Step 1: Applying compatibility fixes...${NC}"

# Apply fixes if the fix script exists
if [ -f "../fix_compatibility.sh" ]; then
    echo "Running compatibility fixes..."
    cd ..
    chmod +x fix_compatibility.sh
    ./fix_compatibility.sh
    cd "$BUILD_DIR"
else
    echo "Applying inline fixes..."
    
    # Quick fix for the most common issues
    if [ -f "$SRC_DIR/cpu/cache.v" ]; then
        # Fix parameter names in cache.v
        sed 's/AddrBusWidth/ADDR_WIDTH/g; s/DataBusByteWidth/DATA_WIDTH/g' \
            "$SRC_DIR/cpu/cache.v" > cache_fixed.v
        echo "Fixed cache.v parameter names"
    fi
    
    if [ -f "$SRC_DIR/cpu/library/fifo.v" ]; then
        # Fix buffer name conflict
        sed 's/reg \[WIDTH-1:0\] buffer\[SIZE-1:0\];/reg [WIDTH-1:0] fifo_buffer[SIZE-1:0];/g; s/buffer\[/fifo_buffer[/g' \
            "$SRC_DIR/cpu/library/fifo.v" > fifo_fixed.v
        echo "Fixed fifo.v variable hiding"
    fi
fi

echo -e "${YELLOW}Step 2: Creating comprehensive IP simulation models...${NC}"

# Create the most complete IP replacement file
cat > ip_models.v << 'EOF'
// ip_models.v - Complete IP models for RISC-V CPU simulation
`timescale 1ns/1ps

//=================================================================
// Clock Wizard - Multiple variants
//=================================================================
module clk_wiz_0 (
    input  wire clk_in1,
    input  wire reset,
    output wire clk_out1,
    output wire locked
);
    assign clk_out1 = clk_in1;
    assign locked = ~reset;
endmodule

//=================================================================
// Compatible simple_ram with original parameter names
//=================================================================
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
            
            if (rw_flag[1]) begin  // Write
                if (DATA_WIDTH >= 1 && write_mask[0]) 
                    memory[addr][7:0] <= write_data[7:0];
                if (DATA_WIDTH >= 2 && write_mask[1]) 
                    memory[addr][15:8] <= write_data[15:8];
                if (DATA_WIDTH >= 3 && write_mask[2]) 
                    memory[addr][23:16] <= write_data[23:16];
                if (DATA_WIDTH >= 4 && write_mask[3]) 
                    memory[addr][31:24] <= write_data[31:24];
            end
            
            if (rw_flag[0]) begin  // Read
                read_data <= memory[addr];
            end
        end
    end
    
    initial begin
        integer i;
        for (i = 0; i < DEPTH; i = i + 1) begin
            memory[i] = {REAL_DATA_WIDTH{1'b0}};
        end
    end
endmodule

//=================================================================
// Fixed FIFO module
//=================================================================
module fifo #(
    parameter SIZE_BIT = 4,
    parameter WIDTH = 8
)(
    input wire                CLK,
    input wire                RST,
    input wire                read_flag,
    output reg [WIDTH-1:0]    read_data,
    input wire                write_flag,
    input wire [WIDTH-1:0]    write_data,
    output wire               empty,
    output wire               full
);
    
    localparam SIZE = 1 << SIZE_BIT;
    
    // Renamed to avoid conflict
    reg [WIDTH-1:0] fifo_buffer[SIZE-1:0];
    reg [SIZE_BIT:0] read_ptr = 0;
    reg [SIZE_BIT:0] write_ptr = 0;
    
    wire [SIZE_BIT:0] count = write_ptr - read_ptr;
    
    assign empty = (count == 0);
    assign full = (count == SIZE);
    
    always @(posedge CLK) begin
        if (RST) begin
            read_ptr <= 0;
            write_ptr <= 0;
            read_data <= 0;
        end else begin
            if (write_flag && !full) begin
                fifo_buffer[write_ptr[SIZE_BIT-1:0]] <= write_data;
                write_ptr <= write_ptr + 1;
            end
            
            if (read_flag && !empty) begin
                read_data <= fifo_buffer[read_ptr[SIZE_BIT-1:0]];
                read_ptr <= read_ptr + 1;
            end
        end
    end
    
endmodule

//=================================================================
// Block RAM replacement
//=================================================================
module blk_mem_gen_0 #(
    parameter ADDR_WIDTH = 10,
    parameter DATA_WIDTH = 32
)(
    input  wire                    clka,
    input  wire                    ena,
    input  wire [3:0]              wea,
    input  wire [ADDR_WIDTH-1:0]   addra,
    input  wire [DATA_WIDTH-1:0]   dina,
    output reg  [DATA_WIDTH-1:0]   douta
);
    
    localparam DEPTH = 1 << ADDR_WIDTH;
    reg [DATA_WIDTH-1:0] memory [0:DEPTH-1];
    
    always @(posedge clka) begin
        if (ena) begin
            if (|wea) begin
                if (wea[0]) memory[addra][7:0]   <= dina[7:0];
                if (wea[1]) memory[addra][15:8]  <= dina[15:8];
                if (wea[2]) memory[addra][23:16] <= dina[23:16];
                if (wea[3]) memory[addra][31:24] <= dina[31:24];
            end
            douta <= memory[addra];
        end
    end
    
    initial begin
        integer i;
        for (i = 0; i < DEPTH; i = i + 1) begin
            memory[i] = {DATA_WIDTH{1'b0}};
        end
    end
    
endmodule
EOF

echo "Created complete IP models"

echo -e "${YELLOW}Step 3: Finding and organizing source files...${NC}"

# Find all source files, excluding problematic ones
ALL_V_FILES=()

# Add IP models first
ALL_V_FILES+=("ip_models.v")

# Add fixed files if they exist
if [ -f "cache_fixed.v" ]; then
    ALL_V_FILES+=("cache_fixed.v")
elif [ -f "$SRC_DIR/cpu/cache.v" ]; then
    ALL_V_FILES+=("$SRC_DIR/cpu/cache.v")
fi

if [ -f "fifo_fixed.v" ]; then
    ALL_V_FILES+=("fifo_fixed.v")
fi

# Add other CPU files (excluding cache.v and fifo.v if we have fixed versions)
while IFS= read -r -d '' file; do
    basename_file=$(basename "$file")
    if [[ "$basename_file" != "cache.v" ]] && [[ "$basename_file" != "fifo.v" ]] && [[ "$basename_file" != "*_tb.v" ]]; then
        ALL_V_FILES+=("$file")
    fi
done < <(find "$SRC_DIR" -name "*.v" -not -path "*/library/fifo.v" -print0)

# Add library files except problematic ones
if [ -d "$SRC_DIR/cpu/library" ]; then
    while IFS= read -r -d '' file; do
        basename_file=$(basename "$file")
        if [[ "$basename_file" != "fifo.v" ]]; then
            ALL_V_FILES+=("$file")
        fi
    done < <(find "$SRC_DIR/cpu/library" -name "*.v" -print0)
fi

echo "Total source files: ${#ALL_V_FILES[@]}"

echo -e "${YELLOW}Step 4: Building with Verilator...${NC}"

# Build Verilator command
VERILATOR_ARGS=(
    "verilator"
    "--cc"
    "--exe"
    "--build"
    "--trace"
    "-Wall"
    "-Wno-UNUSED"
    "-Wno-UNDRIVEN"
    "-Wno-VARHIDDEN"     # Suppress variable hiding warnings
    "-Wno-MODDUP"        # Allow duplicate modules
    "-Wno-PINMISSING"    # Allow missing pins
    "--top-module" "tb_riscv_cpu"
    "--Mdir" "obj_dir"
)

# Add include paths
VERILATOR_ARGS+=("-I$SRC_DIR")
VERILATOR_ARGS+=("-I$SRC_DIR/cpu")
VERILATOR_ARGS+=("-I$SRC_DIR/cpu/library")
if [ -d "$SRC_DIR/ram" ]; then
    VERILATOR_ARGS+=("-I$SRC_DIR/ram")
fi
if [ -d "$SRC_DIR/uart" ]; then
    VERILATOR_ARGS+=("-I$SRC_DIR/uart")
fi

# Add all source files
for file in "${ALL_V_FILES[@]}"; do
    VERILATOR_ARGS+=("$file")
done

# Add testbench
VERILATOR_ARGS+=("../tb_riscv_cpu.sv")

echo "Verilator command:"
printf '%s ' "${VERILATOR_ARGS[@]}"
echo ""

# Check testbench exists
if [ ! -f "../tb_riscv_cpu.sv" ]; then
    echo -e "${RED}Creating minimal testbench...${NC}"
    cat > ../tb_riscv_cpu.sv << 'EOF'
`timescale 1ns/1ps

module tb_riscv_cpu;
    reg clk = 0;
    reg rst_n = 0;
    
    always #5 clk = ~clk;
    
    initial begin
        #100 rst_n = 1;
        #1000 $finish;
    end
    
    initial begin
        $dumpfile("cpu_sim.vcd");
        $dumpvars(0, tb_riscv_cpu);
    end
    
    // TODO: Add actual CPU instantiation here
    // The build will show you what modules are available
    
endmodule
EOF
fi

# Run Verilator
if "${VERILATOR_ARGS[@]}" 2>&1 | tee build.log; then
    echo -e "${GREEN}Build successful!${NC}"
    
    cat > run_sim.sh << 'EOF'
#!/bin/bash
echo "Running RISC-V simulation..."
./obj_dir/Vtb_riscv_cpu +trace
echo "Done. View with: gtkwave cpu_sim.vcd"
EOF
    chmod +x run_sim.sh
    
    echo -e "${GREEN}Ready to run: ./run_sim.sh${NC}"
    
else
    echo -e "${RED}Build failed. Analyzing errors...${NC}"
    
    echo -e "${BLUE}Build log summary:${NC}"
    if [ -f "build.log" ]; then
        echo "Errors found:"
        grep -i "error\|Error" build.log || echo "No explicit errors found"
        echo ""
        echo "Warnings found:"
        grep -i "warning\|Warning" build.log | head -10 || echo "No warnings found"
    fi
    
    echo ""
    echo -e "${YELLOW}Next steps:${NC}"
    echo "1. Check build.log for specific errors"
    echo "2. Update testbench with actual CPU module instantiation"
    echo "3. Fix any remaining parameter mismatches"
    
    exit 1
fi