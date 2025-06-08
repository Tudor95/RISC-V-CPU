#include <iostream>
#include <string>
#include "sim.h"
#include "mmu.h"
#include "processor.h"

static sim_t* spike_sim = nullptr;
static processor_t* spike_proc = nullptr;

extern "C" {
    void spike_init(const char* elf_file) {
        std::vector<std::string> args;
        args.push_back(elf_file);
        
        spike_sim = new sim_t(1, 1, false, 0, 0, true, nullptr, args);
        spike_proc = spike_sim->get_core(0);
        
        std::cout << "SPIKE initialized with " << elf_file << std::endl;
    }
    
    void spike_step() {
        if (spike_sim) {
            spike_sim->step(1);
        }
    }
    
    unsigned int spike_get_pc() {
        if (spike_proc) {
            return spike_proc->get_state()->pc;
        }
        return 0;
    }
    
    unsigned int spike_get_reg(int reg_num) {
        if (spike_proc && reg_num >= 0 && reg_num < 32) {
            return spike_proc->get_state()->XPR[reg_num];
        }
        return 0;
    }
    
    void spike_compare_state(unsigned int pc, unsigned int regs[32]) {
        if (!spike_proc) return;
        
        auto state = spike_proc->get_state();
        bool match = true;
        
        // Compare PC
        if (state->pc != pc) {
            std::cout << "PC MISMATCH: SPIKE=" << std::hex << state->pc 
                     << " CPU=" << pc << std::endl;
            match = false;
        }
        
        // Compare registers
        for (int i = 1; i < 32; i++) {  // Skip x0
            if (state->XPR[i] != regs[i]) {
                std::cout << "REG MISMATCH x" << i << ": SPIKE=" 
                         << std::hex << state->XPR[i] 
                         << " CPU=" << regs[i] << std::endl;
                match = false;
            }
        }
        
        if (match) {
            std::cout << "STATE MATCH at PC=" << std::hex << pc << std::endl;
        }
    }
    
    void spike_cleanup() {
        if (spike_sim) {
            delete spike_sim;
            spike_sim = nullptr;
            spike_proc = nullptr;
        }
    }
}