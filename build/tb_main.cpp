#include "Vtb_riscv_cpu.h"
#include "verilated.h" 
#include "verilated_vcd_c.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vtb_riscv_cpu* top = new Vtb_riscv_cpu;
    
    // VCD setup
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("cpu_sim.vcd");
    
    vluint64_t main_time = 0;
    
    // Let Verilog testbench control everything
    while (!Verilated::gotFinish() && main_time < 200000) {
        top->eval();
        tfp->dump(main_time);
        main_time++;
    }
    
    tfp->close();
    delete top;
    return 0;
}