// compatible_simple_ram.v - Verilator-compatible simple RAM
`timescale 1ns/1ps

module simple_ram #(
    parameter ADDR_WIDTH = 12,
    parameter DATA_WIDTH = 4,  // Width in bytes
    parameter DEPTH = 4096
)(
    input  wire                      clk,
    input  wire                      rst,
    input  wire [1:0]                rw_flag,     // [0]=read, [1]=write
    input  wire [ADDR_WIDTH-1:0]     addr,
    input  wire [DATA_WIDTH*8-1:0]   write_data,
    input  wire [DATA_WIDTH-1:0]     write_mask,
    output reg  [DATA_WIDTH*8-1:0]   read_data,
    output reg                       busy,
    output reg                       done
);

    localparam REAL_DATA_WIDTH = DATA_WIDTH * 8;
    
    // Memory array
    reg [REAL_DATA_WIDTH-1:0] memory [0:DEPTH-1];
    
    // Simple single-cycle memory
    always @(posedge clk) begin
        if (rst) begin
            read_data <= 0;
            busy <= 0;
            done <= 0;
        end else begin
            busy <= |rw_flag;
            done <= |rw_flag;
            
            if (rw_flag[1]) begin  // Write operation
                // Handle byte-wise writes based on mask
                if (DATA_WIDTH >= 1 && write_mask[0]) 
                    memory[addr][7:0] <= write_data[7:0];
                if (DATA_WIDTH >= 2 && write_mask[1]) 
                    memory[addr][15:8] <= write_data[15:8];
                if (DATA_WIDTH >= 3 && write_mask[2]) 
                    memory[addr][23:16] <= write_data[23:16];
                if (DATA_WIDTH >= 4 && write_mask[3]) 
                    memory[addr][31:24] <= write_data[31:24];
            end
            
            if (rw_flag[0]) begin  // Read operation
                read_data <= memory[addr];
            end
        end
    end
    
    // Initialize memory
    initial begin
        integer i;
        for (i = 0; i < DEPTH; i = i + 1) begin
            memory[i] = {REAL_DATA_WIDTH{1'b0}};
        end
    end
    
endmodule
