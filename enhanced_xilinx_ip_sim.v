// enhanced_xilinx_ip_sim.v - Complete IP replacements for simulation
`timescale 1ns/1ps

// Clock Wizard IP
module clk_wiz_0 (
    input  wire clk_in1,
    input  wire reset,
    output wire clk_out1,
    output wire locked
);
    assign clk_out1 = clk_in1;
    assign locked = ~reset;
endmodule

// Alternative simple_ram with different parameter names (for compatibility)
module simple_ram_alt #(
    parameter AddrBusWidth = 12,
    parameter DataBusByteWidth = 4
)(
    input  wire                        clk,
    input  wire                        rst,
    input  wire [1:0]                  rw_flag,
    input  wire [AddrBusWidth-1:0]     addr,
    input  wire [DataBusByteWidth*8-1:0] write_data,
    input  wire [DataBusByteWidth-1:0] write_mask,
    output reg  [DataBusByteWidth*8-1:0] read_data,
    output reg                         busy,
    output reg                         done
);

    localparam DATA_WIDTH = DataBusByteWidth * 8;
    localparam DEPTH = 1 << AddrBusWidth;
    
    reg [DATA_WIDTH-1:0] memory [0:DEPTH-1];
    
    always @(posedge clk) begin
        if (rst) begin
            read_data <= 0;
            busy <= 0;
            done <= 0;
        end else begin
            busy <= |rw_flag;
            done <= |rw_flag;
            
            if (rw_flag[1]) begin  // Write
                if (DataBusByteWidth >= 1 && write_mask[0]) 
                    memory[addr][7:0] <= write_data[7:0];
                if (DataBusByteWidth >= 2 && write_mask[1]) 
                    memory[addr][15:8] <= write_data[15:8];
                if (DataBusByteWidth >= 3 && write_mask[2]) 
                    memory[addr][23:16] <= write_data[23:16];
                if (DataBusByteWidth >= 4 && write_mask[3]) 
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
            memory[i] = {DATA_WIDTH{1'b0}};
        end
    end
    
endmodule

// FIFO replacement
module fifo_generator_0 #(
    parameter DATA_WIDTH = 8,
    parameter DEPTH = 512
)(
    input  wire                   clk,
    input  wire                   rst,
    input  wire                   wr_en,
    input  wire [DATA_WIDTH-1:0]  din,
    output wire                   full,
    input  wire                   rd_en,
    output reg  [DATA_WIDTH-1:0]  dout,
    output wire                   empty
);
    
    localparam ADDR_WIDTH = $clog2(DEPTH);
    
    reg [DATA_WIDTH-1:0] memory [0:DEPTH-1];
    reg [ADDR_WIDTH:0] wr_ptr = 0;
    reg [ADDR_WIDTH:0] rd_ptr = 0;
    
    wire [ADDR_WIDTH:0] count = wr_ptr - rd_ptr;
    
    assign full = (count == DEPTH);
    assign empty = (count == 0);
    
    always @(posedge clk) begin
        if (rst) begin
            wr_ptr <= 0;
            rd_ptr <= 0;
            dout <= 0;
        end else begin
            if (wr_en && !full) begin
                memory[wr_ptr[ADDR_WIDTH-1:0]] <= din;
                wr_ptr <= wr_ptr + 1;
            end
            
            if (rd_en && !empty) begin
                dout <= memory[rd_ptr[ADDR_WIDTH-1:0]];
                rd_ptr <= rd_ptr + 1;
            end
        end
    end
    
endmodule
