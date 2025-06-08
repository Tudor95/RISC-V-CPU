// xilinx_ip_sim.v - Simulation replacements for Xilinx IP cores
// This file provides behavioral models for Xilinx IP used in the RISC-V CPU

`timescale 1ns/1ps

//=================================================================
// Clock Wizard IP Replacement
//=================================================================
module clk_wiz_0 (
    input  wire clk_in1,
    input  wire reset,
    output wire clk_out1,
    output wire locked
);
    
    // Simple clock pass-through for simulation
    // In real FPGA, this would be a PLL/MMCM generating specific frequencies
    assign clk_out1 = clk_in1;
    assign locked = ~reset;
    
    // Optional: Add some delay to simulate PLL lock time
    reg locked_reg = 0;
    always @(posedge clk_in1 or posedge reset) begin
        if (reset)
            locked_reg <= 0;
        else
            locked_reg <= 1;
    end
    
    // For more realistic simulation, uncomment this:
    // assign locked = locked_reg;
    
endmodule

//=================================================================
// Block RAM IP Replacement (if needed)
//=================================================================
module blk_mem_gen_0 #(
    parameter ADDR_WIDTH = 10,
    parameter DATA_WIDTH = 32,
    parameter DEPTH = 1024
)(
    input  wire                    clka,
    input  wire                    ena,
    input  wire [3:0]              wea,
    input  wire [ADDR_WIDTH-1:0]   addra,
    input  wire [DATA_WIDTH-1:0]   dina,
    output reg  [DATA_WIDTH-1:0]   douta,
    
    input  wire                    clkb,
    input  wire                    enb,
    input  wire [3:0]              web,
    input  wire [ADDR_WIDTH-1:0]   addrb,
    input  wire [DATA_WIDTH-1:0]   dinb,
    output reg  [DATA_WIDTH-1:0]   doutb
);
    
    // Simple dual-port RAM
    reg [DATA_WIDTH-1:0] memory [0:DEPTH-1];
    
    // Port A
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
    
    // Port B
    always @(posedge clkb) begin
        if (enb) begin
            if (|web) begin
                if (web[0]) memory[addrb][7:0]   <= dinb[7:0];
                if (web[1]) memory[addrb][15:8]  <= dinb[15:8];
                if (web[2]) memory[addrb][23:16] <= dinb[23:16];
                if (web[3]) memory[addrb][31:24] <= dinb[31:24];
            end
            doutb <= memory[addrb];
        end
    end
    
    // Initialize memory
    initial begin
        integer i;
        for (i = 0; i < DEPTH; i = i + 1) begin
            memory[i] = 32'h0;
        end
    end
    
endmodule

//=================================================================
// FIFO IP Replacement (if needed)
//=================================================================
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
    output wire                   empty,
    output wire [8:0]             data_count
);
    
    localparam ADDR_WIDTH = $clog2(DEPTH);
    
    reg [DATA_WIDTH-1:0] memory [0:DEPTH-1];
    reg [ADDR_WIDTH:0] wr_ptr = 0;
    reg [ADDR_WIDTH:0] rd_ptr = 0;
    
    wire [ADDR_WIDTH:0] count = wr_ptr - rd_ptr;
    
    assign full = (count == DEPTH);
    assign empty = (count == 0);
    assign data_count = count[8:0];
    
    // Write
    always @(posedge clk) begin
        if (rst) begin
            wr_ptr <= 0;
        end else if (wr_en && !full) begin
            memory[wr_ptr[ADDR_WIDTH-1:0]] <= din;
            wr_ptr <= wr_ptr + 1;
        end
    end
    
    // Read
    always @(posedge clk) begin
        if (rst) begin
            rd_ptr <= 0;
            dout <= 0;
        end else if (rd_en && !empty) begin
            dout <= memory[rd_ptr[ADDR_WIDTH-1:0]];
            rd_ptr <= rd_ptr + 1;
        end
    end
    
endmodule

//=================================================================
// Simple RAM IP Replacement (if simple_ram.v is missing)
//=================================================================
module simple_ram #(
    parameter ADDR_WIDTH = 12,
    parameter DATA_WIDTH = 32,
    parameter DEPTH = 4096
)(
    input  wire                    clk,
    input  wire                    rst,
    input  wire [1:0]              rw_flag,  // [0]=read, [1]=write
    input  wire [ADDR_WIDTH-1:0]   addr,
    input  wire [DATA_WIDTH-1:0]   write_data,
    input  wire [3:0]              write_mask,
    output reg  [DATA_WIDTH-1:0]   read_data,
    output reg                     busy,
    output reg                     done
);
    
    reg [DATA_WIDTH-1:0] memory [0:DEPTH-1];
    
    // Simple memory with one cycle latency
    always @(posedge clk) begin
        if (rst) begin
            read_data <= 0;
            busy <= 0;
            done <= 0;
        end else begin
            busy <= |rw_flag;
            done <= |rw_flag;
            
            if (rw_flag[1]) begin  // Write
                if (write_mask[0]) memory[addr][7:0]   <= write_data[7:0];
                if (write_mask[1]) memory[addr][15:8]  <= write_data[15:8];
                if (write_mask[2]) memory[addr][23:16] <= write_data[23:16];
                if (write_mask[3]) memory[addr][31:24] <= write_data[31:24];
            end
            
            if (rw_flag[0]) begin  // Read
                read_data <= memory[addr];
            end
        end
    end
    
    // Initialize memory
    initial begin
        integer i;
        for (i = 0; i < DEPTH; i = i + 1) begin
            memory[i] = 32'h0;
        end
    end
    
endmodule

//=================================================================
// UART IP Replacement (basic behavioral model)
//=================================================================
module uart_tx (
    input  wire       clk,
    input  wire       rst,
    input  wire [7:0] data_in,
    input  wire       send,
    output reg        tx,
    output reg        busy
);
    
    reg [3:0] bit_count = 0;
    reg [7:0] shift_reg = 0;
    reg [15:0] baud_count = 0;
    localparam BAUD_DIV = 868; // 115200 baud at 100MHz
    
    always @(posedge clk) begin
        if (rst) begin
            tx <= 1;
            busy <= 0;
            bit_count <= 0;
            baud_count <= 0;
        end else begin
            if (!busy && send) begin
                busy <= 1;
                shift_reg <= data_in;
                bit_count <= 0;
                baud_count <= 0;
                tx <= 0; // Start bit
            end else if (busy) begin
                if (baud_count == BAUD_DIV-1) begin
                    baud_count <= 0;
                    bit_count <= bit_count + 1;
                    
                    if (bit_count < 8) begin
                        tx <= shift_reg[bit_count];
                    end else if (bit_count == 8) begin
                        tx <= 1; // Stop bit
                    end else begin
                        busy <= 0;
                        tx <= 1;
                    end
                end else begin
                    baud_count <= baud_count + 1;
                end
            end
        end
    end
    
endmodule

module uart_rx (
    input  wire       clk,
    input  wire       rst,
    input  wire       rx,
    output reg  [7:0] data_out,
    output reg        data_valid
);
    
    reg [3:0] bit_count = 0;
    reg [7:0] shift_reg = 0;
    reg [15:0] baud_count = 0;
    reg receiving = 0;
    localparam BAUD_DIV = 868;
    
    always @(posedge clk) begin
        if (rst) begin
            data_out <= 0;
            data_valid <= 0;
            receiving <= 0;
            bit_count <= 0;
            baud_count <= 0;
        end else begin
            data_valid <= 0;
            
            if (!receiving && !rx) begin // Start bit detected
                receiving <= 1;
                bit_count <= 0;
                baud_count <= BAUD_DIV/2; // Sample in middle
            end else if (receiving) begin
                if (baud_count == BAUD_DIV-1) begin
                    baud_count <= 0;
                    
                    if (bit_count < 8) begin
                        shift_reg[bit_count] <= rx;
                        bit_count <= bit_count + 1;
                    end else begin // Stop bit
                        receiving <= 0;
                        data_out <= shift_reg;
                        data_valid <= 1;
                    end
                end else begin
                    baud_count <= baud_count + 1;
                end
            end
        end
    end
    
endmodule
