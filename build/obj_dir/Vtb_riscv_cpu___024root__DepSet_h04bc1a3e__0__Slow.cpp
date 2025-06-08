// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_riscv_cpu.h for the primary calling header

#include "Vtb_riscv_cpu__pch.h"
#include "Vtb_riscv_cpu__Syms.h"
#include "Vtb_riscv_cpu___024root.h"

VL_ATTR_COLD void Vtb_riscv_cpu___024root___eval_initial__TOP(Vtb_riscv_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    vlSelf->tb_riscv_cpu__DOT__cycle_count = 0U;
    vlSelf->tb_riscv_cpu__DOT__max_cycles = 0x7d0U;
    vlSelf->tb_riscv_cpu__DOT__simulation_done = 0U;
    vlSelf->tb_riscv_cpu__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x400U, vlSelf->tb_riscv_cpu__DOT__unnamedblk1__DOT__i)) {
        vlSelf->tb_riscv_cpu__DOT__inst_mem[(0x3ffU 
                                             & vlSelf->tb_riscv_cpu__DOT__unnamedblk1__DOT__i)] = 0x13U;
        vlSelf->tb_riscv_cpu__DOT__data_mem[(0x3ffU 
                                             & vlSelf->tb_riscv_cpu__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelf->tb_riscv_cpu__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->tb_riscv_cpu__DOT__unnamedblk1__DOT__i);
    }
    vlSelf->tb_riscv_cpu__DOT__inst_mem[0U] = 0x100093U;
    vlSelf->tb_riscv_cpu__DOT__inst_mem[1U] = 0x200113U;
    vlSelf->tb_riscv_cpu__DOT__inst_mem[2U] = 0x2081b3U;
    vlSelf->tb_riscv_cpu__DOT__inst_mem[3U] = 0xa00213U;
    vlSelf->tb_riscv_cpu__DOT__inst_mem[4U] = 0x403202b3U;
    vlSelf->tb_riscv_cpu__DOT__inst_mem[5U] = 0x512023U;
    vlSelf->tb_riscv_cpu__DOT__inst_mem[6U] = 0x12303U;
    vlSelf->tb_riscv_cpu__DOT__inst_mem[7U] = 0x13U;
    VL_WRITEF("Test program loaded:\n  inst_mem[0] = 0x%08x\n  inst_mem[1] = 0x%08x\n  inst_mem[2] = 0x%08x\n  inst_mem[3] = 0x%08x\n  inst_mem[4] = 0x%08x\n  inst_mem[5] = 0x%08x\n  inst_mem[6] = 0x%08x\n  inst_mem[7] = 0x%08x\n",
              32,vlSelf->tb_riscv_cpu__DOT__inst_mem
              [0U],32,vlSelf->tb_riscv_cpu__DOT__inst_mem
              [1U],32,vlSelf->tb_riscv_cpu__DOT__inst_mem
              [2U],32,vlSelf->tb_riscv_cpu__DOT__inst_mem
              [3U],32,vlSelf->tb_riscv_cpu__DOT__inst_mem
              [4U],32,vlSelf->tb_riscv_cpu__DOT__inst_mem
              [5U],32,vlSelf->tb_riscv_cpu__DOT__inst_mem
              [6U],32,vlSelf->tb_riscv_cpu__DOT__inst_mem
              [7U]);
    vlSelf->tb_riscv_cpu__DOT__unnamedblk1__DOT__i = 8U;
    __Vtemp_2[0U] = 0x2e766364U;
    __Vtemp_2[1U] = 0x5f73696dU;
    __Vtemp_2[2U] = 0x637075U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_2));
    vlSymsp->_traceDumpOpen();
    VL_WRITEF("VCD dumping enabled -> cpu_sim.vcd\n");
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x80U, vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__unnamedblk1__DOT__i)) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[(0x7fU 
                                                                                & vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__unnamedblk1__DOT__i);
    }
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x80U, vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__unnamedblk1__DOT__i)) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[(0x7fU 
                                                                                & vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__unnamedblk1__DOT__i);
    }
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[0U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[1U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[2U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[3U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[4U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[5U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[6U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[7U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[8U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[9U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[0xaU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[0xbU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[0xcU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[0xdU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[0xeU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[0xfU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[0x10U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[0x11U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[0x12U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[0x13U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[0x14U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[0x15U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[0x16U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[0x17U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[0x18U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[0x19U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[0x1aU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[0x1bU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[0x1cU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[0x1dU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[0x1eU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[0x1fU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__unnamedblk1__DOT__i = 0x20U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[0U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[1U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[2U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[3U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[4U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[5U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[6U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[7U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[8U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[9U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[0xaU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[0xbU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[0xcU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[0xdU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[0xeU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[0xfU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[0x10U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[0x11U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[0x12U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[0x13U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[0x14U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[0x15U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[0x16U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[0x17U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[0x18U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[0x19U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[0x1aU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[0x1bU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[0x1cU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[0x1dU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[0x1eU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[0x1fU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__unnamedblk1__DOT__i = 0x20U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[0U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[1U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[2U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[3U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[4U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[5U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[6U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[7U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[8U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[9U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[0xaU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[0xbU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[0xcU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[0xdU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[0xeU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[0xfU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[0x10U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[0x11U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[0x12U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[0x13U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[0x14U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[0x15U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[0x16U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[0x17U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[0x18U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[0x19U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[0x1aU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[0x1bU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[0x1cU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[0x1dU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[0x1eU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[0x1fU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__unnamedblk1__DOT__i = 0x20U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[0U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[1U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[2U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[3U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[4U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[5U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[6U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[7U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[8U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[9U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[0xaU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[0xbU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[0xcU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[0xdU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[0xeU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[0xfU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[0x10U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[0x11U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[0x12U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[0x13U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[0x14U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[0x15U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[0x16U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[0x17U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[0x18U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[0x19U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[0x1aU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[0x1bU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[0x1cU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[0x1dU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[0x1eU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[0x1fU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__unnamedblk1__DOT__i = 0x20U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_id_tmp[1U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_id_tmp[2U] = 1U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__one_hot_lookup[0U] = 1U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__one_hot_lookup[1U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__one_hot_lookup[2U] = 1U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__one_hot_lookup[3U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_id_tmp[1U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_id_tmp[2U] = 1U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp[3U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp[4U] = 1U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp[5U] = 2U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp[6U] = 3U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[0U] = 3U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[1U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[2U] = 1U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[3U] = 2U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[4U] = 2U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[5U] = 3U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[6U] = 3U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[7U] = 3U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[8U] = 3U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[9U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[0xaU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[0xbU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[0xcU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[0xdU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[0xeU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[0xfU] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp[3U] = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp[4U] = 1U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp[5U] = 2U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp[6U] = 3U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_riscv_cpu___024root___dump_triggers__stl(Vtb_riscv_cpu___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_riscv_cpu___024root___eval_triggers__stl(Vtb_riscv_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
    vlSelf->__VstlTriggered.set(1U, (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_tmp.neq(vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_tmp__0) 
                                     | vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_id_tmp.neq(vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_id_tmp__0)));
    vlSelf->__VstlTriggered.set(2U, vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_tmp.neq(vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_tmp__0));
    vlSelf->__VstlTriggered.set(3U, (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_tmp.neq(vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_tmp__0) 
                                     | vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_id_tmp.neq(vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_id_tmp__0)));
    vlSelf->__VstlTriggered.set(4U, vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_tmp.neq(vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_tmp__0));
    vlSelf->__VstlTriggered.set(5U, (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp.neq(vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp__0) 
                                     | vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp.neq(vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp__0)));
    vlSelf->__VstlTriggered.set(6U, vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp.neq(vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp__0));
    vlSelf->__VstlTriggered.set(7U, (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp.neq(vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp__0) 
                                     | vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp.neq(vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp__0)));
    vlSelf->__VstlTriggered.set(8U, vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp.neq(vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp__0));
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_tmp__0.assign(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_tmp);
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_id_tmp__0.assign(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_id_tmp);
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_tmp__0.assign(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_tmp);
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_id_tmp__0.assign(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_id_tmp);
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp__0.assign(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp);
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp__0.assign(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp);
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp__0.assign(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp);
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp__0.assign(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp);
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.set(1U, 1U);
        vlSelf->__VstlTriggered.set(2U, 1U);
        vlSelf->__VstlTriggered.set(3U, 1U);
        vlSelf->__VstlTriggered.set(4U, 1U);
        vlSelf->__VstlTriggered.set(5U, 1U);
        vlSelf->__VstlTriggered.set(6U, 1U);
        vlSelf->__VstlTriggered.set(7U, 1U);
        vlSelf->__VstlTriggered.set(8U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_riscv_cpu___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
