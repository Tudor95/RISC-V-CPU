#!/bin/bash
# simple_fix.sh - Quick fixes for the compatibility issues

set -e

GREEN='\033[0;32m'
YELLOW='\033[0;33m'
RED='\033[0;31m'
NC='\033[0m'

echo -e "${GREEN}Applying quick compatibility fixes${NC}"

# Backup original files
echo -e "${YELLOW}Creating backups...${NC}"
if [ ! -d "src_backup" ]; then
    cp -r src src_backup
    echo "Backup created"
fi

# Fix 1: Parameter names in cache.v
echo -e "${YELLOW}Fixing cache.v parameter names...${NC}"
if [ -f "src/cpu/cache.v" ]; then
    sed -i.bak 's/AddrBusWidth/ADDR_WIDTH/g' src/cpu/cache.v
    sed -i 's/DataBusByteWidth/DATA_WIDTH/g' src/cpu/cache.v
    echo "Fixed cache.v"
else
    echo "cache.v not found"
fi

# Fix 2: Buffer name conflict in fifo.v
echo -e "${YELLOW}Fixing fifo.v variable hiding...${NC}"
if [ -f "src/cpu/library/fifo.v" ]; then
    sed -i.bak 's/reg \[WIDTH-1:0\] buffer\[SIZE-1:0\];/reg [WIDTH-1:0] fifo_buffer[SIZE-1:0];/' src/cpu/library/fifo.v
    sed -i 's/buffer\[/fifo_buffer[/g' src/cpu/library/fifo.v
    echo "Fixed fifo.v"
else
    echo "fifo.v not found"
fi

# Fix 3: Create IP models
echo -e "${YELLOW}Creating IP simulation models...${NC}"
cat > ip_models.v << 'IPEOF'
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
IPEOF

echo "Created ip_models.v"

echo -e "${GREEN}Fixes applied successfully!${NC}"
echo "Changes made:"
echo "1. Fixed parameter names in cache.v"
echo "2. Fixed variable hiding in fifo.v" 
echo "3. Created ip_models.v with simulation models"
echo ""
echo "Backup saved in src_backup/"