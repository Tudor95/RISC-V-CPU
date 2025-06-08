#include "Vtb_riscv_cpu.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    Vtb_riscv_cpu* top = new Vtb_riscv_cpu;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("cpu_sim.vcd");
    
    vluint64_t sim_time = 0;
    while (!Verilated::gotFinish() && sim_time < 50000) {
        top->eval();
        tfp->dump(sim_time++);
    }
    
    tfp->close();
    delete top;
    delete tfp;
    
    printf("Simulation completed! Check cpu_sim.vcd\n");
    return 0;
}
