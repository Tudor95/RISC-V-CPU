// tb_riscv_cpu.sv - Fixed testbench with correct port widths and timing
`timescale 1ns/1ps

module tb_riscv_cpu;
    
    // Clock and reset
    reg clk;
    reg rst_n;
    
    // Test program memory
    reg [31:0] inst_mem [0:1023];
    reg [31:0] data_mem [0:1023]; 
    
    // CPU memory interface signals - corrected widths based on actual CPU ports
    wire [63:0] mem_addr;      // 64-bit address from CPU
    wire [63:0] mem_data_o;    // 64-bit data output from CPU
    reg  [63:0] mem_data_i;    // 64-bit data input to CPU  
    wire [3:0]  mem_rwe;       // 4-bit read/write enable from CPU
    wire [7:0]  mem_sel;       // 8-bit byte select from CPU
    reg  [1:0]  mem_busy;      // 2-bit memory busy signal to CPU
    reg  [1:0]  mem_done;      // 2-bit memory operation done signal to CPU
    
    // Memory operation state machine
    typedef enum logic [1:0] {
        MEM_IDLE   = 2'b00,
        MEM_BUSY   = 2'b01,
        MEM_DONE   = 2'b10,
        MEM_ERROR  = 2'b11
    } mem_state_t;
    
    mem_state_t mem_state;
    
    // Memory operation tracking
    reg mem_operation_pending;
    reg [31:0] pending_addr;
    reg [3:0]  pending_we;
    reg [7:0]  pending_sel;
    reg [63:0] pending_data;
    
    // Simulation control
    integer cycle_count;
    integer max_cycles;
    reg simulation_done;
    
    //=================================================================
    // CPU INSTANTIATION - Fixed port connections
    //=================================================================
    
    riscv_cpu dut (
        .clk(clk),
        .rst(~rst_n),
        
        // Memory interface - all widths corrected
        .mem_data_i(mem_data_i),    // 64-bit input
        .mem_busy_i(mem_busy),      // 2-bit input  
        .mem_done_i(mem_done),      // 2-bit input
        .mem_rwe_o(mem_rwe),        // 4-bit output
        .mem_addr_o(mem_addr),      // 64-bit output
        .mem_sel_o(mem_sel),        // 8-bit output
        .mem_data_o(mem_data_o)     // 64-bit output
    );
    
    //=================================================================
    // CLOCK GENERATION - Fixed to avoid combinational loops
    //=================================================================
    
    initial begin
        clk = 1'b0;
        forever begin
            #5 clk = 1'b1;
            #5 clk = 1'b0;
        end
    end
    
    //=================================================================
    // RESET GENERATION
    //=================================================================
    
    initial begin
        rst_n = 1'b0;
        repeat(20) @(posedge clk);
        rst_n = 1'b1;
        $display("Reset released at time %0t", $time);
    end
    
    //=================================================================
    // MEMORY MODEL WITH PROPER STATE MACHINE
    //=================================================================
    
    always @(posedge clk) begin
        if (!rst_n) begin
            mem_data_i <= 64'h0;
            mem_busy <= 2'b00;
            mem_done <= 2'b00;
            mem_state <= MEM_IDLE;
            mem_operation_pending <= 1'b0;
            pending_addr <= 32'h0;
            pending_we <= 4'h0;
            pending_sel <= 8'h0;
            pending_data <= 64'h0;
        end else begin
            case (mem_state)
                MEM_IDLE: begin
                    mem_busy <= 2'b00;
                    mem_done <= 2'b00;
                    
                    // Detect memory operation (read or write)
                    if (|mem_rwe || |mem_sel) begin
                        // Start memory operation
                        mem_busy <= 2'b01;
                        mem_state <= MEM_BUSY;
                        
                        // Store operation details (use lower 32 bits of address)
                        pending_addr <= mem_addr[31:0];
                        pending_we <= mem_rwe;
                        pending_sel <= mem_sel;
                        pending_data <= mem_data_o;
                        mem_operation_pending <= 1'b1;
                        
                        $display("MEM START [%0t]: addr=0x%08x we=%02x sel=%02x", 
                                 $time, mem_addr[31:0], mem_rwe, mem_sel);
                    end
                end
                
                MEM_BUSY: begin
                    // Single cycle memory operation
                    if (mem_operation_pending) begin
                        if (|pending_we) begin
                            // Write operation
                            $display("MEM WRITE [%0t]: addr=0x%08x data=0x%016x we=%02x sel=%02x", 
                                     $time, pending_addr, pending_data, pending_we, pending_sel);
                            
                            // Write to appropriate memory region based on address
                            if (pending_addr < 32'h1000) begin
                                // Instruction memory region (0x0000-0x0FFF)
                                if (pending_we[0] && pending_sel[0]) inst_mem[pending_addr[11:2]][7:0]   <= pending_data[7:0];
                                if (pending_we[1] && pending_sel[1]) inst_mem[pending_addr[11:2]][15:8]  <= pending_data[15:8];
                                if (pending_we[2] && pending_sel[2]) inst_mem[pending_addr[11:2]][23:16] <= pending_data[23:16];
                                if (pending_we[3] && pending_sel[3]) inst_mem[pending_addr[11:2]][31:24] <= pending_data[31:24];
                            end else begin
                                // Data memory region (0x1000+)
                                if (pending_we[0] && pending_sel[0]) data_mem[pending_addr[11:2]][7:0]   <= pending_data[7:0];
                                if (pending_we[1] && pending_sel[1]) data_mem[pending_addr[11:2]][15:8]  <= pending_data[15:8];
                                if (pending_we[2] && pending_sel[2]) data_mem[pending_addr[11:2]][23:16] <= pending_data[23:16];
                                if (pending_we[3] && pending_sel[3]) data_mem[pending_addr[11:2]][31:24] <= pending_data[31:24];
                            end
                        end else begin
                            // Read operation
                            if (pending_addr < 32'h1000) begin
                                // Read from instruction memory
                                mem_data_i <= {32'h0, inst_mem[pending_addr[11:2]]};  // Zero-extend to 64 bits
                                $display("MEM READ INST [%0t]: addr=0x%08x data=0x%08x", 
                                         $time, pending_addr, inst_mem[pending_addr[11:2]]);
                            end else begin
                                // Read from data memory  
                                mem_data_i <= {32'h0, data_mem[pending_addr[11:2]]};  // Zero-extend to 64 bits
                                $display("MEM READ DATA [%0t]: addr=0x%08x data=0x%08x", 
                                         $time, pending_addr, data_mem[pending_addr[11:2]]);
                            end
                        end
                        
                        mem_operation_pending <= 1'b0;
                    end
                    
                    // Move to done state
                    mem_busy <= 2'b00;
                    mem_done <= 2'b01;
                    mem_state <= MEM_DONE;
                end
                
                MEM_DONE: begin
                    // Complete the operation
                    mem_done <= 2'b00;
                    mem_state <= MEM_IDLE;
                end
                
                MEM_ERROR: begin
                    // Error state - return to idle
                    mem_busy <= 2'b00;
                    mem_done <= 2'b00;
                    mem_state <= MEM_IDLE;
                end
                
                default: begin
                    // Default case to handle any unexpected states
                    mem_state <= MEM_IDLE;
                end
            endcase
        end
    end
    
    //=================================================================
    // TEST PROGRAM LOADING
    //=================================================================
    
    initial begin
        // Initialize variables
        integer i;
        cycle_count = 0;
        max_cycles = 2000;
        simulation_done = 1'b0;
        
        // Initialize memories
        
        for (i = 0; i < 1024; i = i + 1) begin
            inst_mem[i] = 32'h00000013;  // NOP instructions
            data_mem[i] = 32'h00000000;  // Zero data
        end
        
        // Load test program
        inst_mem[0]  = 32'h00100093;  // addi x1, x0, 1      # x1 = 1
        inst_mem[1]  = 32'h00200113;  // addi x2, x0, 2      # x2 = 2
        inst_mem[2]  = 32'h002081B3;  // add  x3, x1, x2     # x3 = 1 + 2 = 3
        inst_mem[3]  = 32'h00A00213;  // addi x4, x0, 10     # x4 = 10
        inst_mem[4]  = 32'h403202B3;  // sub  x5, x4, x3     # x5 = 10 - 3 = 7
        inst_mem[5]  = 32'h00512023;  // sw   x5, 0(x2)      # mem[2] = 7 (store test)
        inst_mem[6]  = 32'h00012303;  // lw   x6, 0(x2)      # x6 = mem[2] (load test)
        inst_mem[7]  = 32'h00000013;  // nop
        
        $display("Test program loaded:");
        for (i = 0; i < 8; i = i + 1) begin
            $display("  inst_mem[%0d] = 0x%08x", i, inst_mem[i]);
        end
    end
    
    //=================================================================
    // SIMULATION CONTROL
    //=================================================================
    
    // Cycle counter
    always @(posedge clk) begin
        if (rst_n) begin
            cycle_count <= cycle_count + 1;
            if (cycle_count >= max_cycles) begin
                simulation_done <= 1'b1;
            end
        end
    end
    
    // CPU monitoring
    always @(posedge clk) begin
        if (rst_n && cycle_count > 0) begin
            $display("CYCLE %0d [%0t]: mem_addr=0x%08x mem_rwe=%02x mem_sel=%02x", 
                     cycle_count, $time, mem_addr[31:0], mem_rwe, mem_sel);
        end
    end
    
    // Simulation termination
    always @(posedge clk) begin
        if (simulation_done) begin
            $display("========================================");
            $display("Simulation completed");
            $display("Total cycles: %0d", cycle_count);
            $display("Final memory contents:");
            for (int i = 0; i < 8; i++) begin
                $display("  data_mem[%0d] = 0x%08x", i, data_mem[i]);
            end
            $display("========================================");
            $finish;
        end
    end
    
    //=================================================================
    // INITIALIZATION
    //=================================================================
    
    initial begin
        $display("========================================");
        $display("RISC-V CPU Testbench - Fixed Version");
        $display("Max cycles: %0d", max_cycles);
        $display("========================================");
        
        // Wait for reset to be released
        wait(rst_n == 1'b1);
        $display("Starting simulation at time %0t", $time);
    end
    
    //=================================================================
    // WAVEFORM DUMPING
    //=================================================================
    
    initial begin
        $dumpfile("cpu_sim.vcd");
        $dumpvars(0, tb_riscv_cpu);
        $display("VCD dumping enabled -> cpu_sim.vcd");
    end
    
endmodule
