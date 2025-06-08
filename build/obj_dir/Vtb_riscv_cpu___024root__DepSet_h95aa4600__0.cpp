// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_riscv_cpu.h for the primary calling header

#include "Vtb_riscv_cpu__pch.h"
#include "Vtb_riscv_cpu___024root.h"

VL_ATTR_COLD void Vtb_riscv_cpu___024root___eval_initial__TOP(Vtb_riscv_cpu___024root* vlSelf);
VlCoroutine Vtb_riscv_cpu___024root___eval_initial__TOP__Vtiming__0(Vtb_riscv_cpu___024root* vlSelf);
VlCoroutine Vtb_riscv_cpu___024root___eval_initial__TOP__Vtiming__1(Vtb_riscv_cpu___024root* vlSelf);
VlCoroutine Vtb_riscv_cpu___024root___eval_initial__TOP__Vtiming__2(Vtb_riscv_cpu___024root* vlSelf);

void Vtb_riscv_cpu___024root___eval_initial(Vtb_riscv_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___eval_initial\n"); );
    // Body
    Vtb_riscv_cpu___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_riscv_cpu___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_riscv_cpu___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_riscv_cpu___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_tmp__0 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_tmp;
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_id_tmp__0 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_id_tmp;
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_tmp__0 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_tmp;
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_id_tmp__0 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_id_tmp;
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp__0 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp;
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp__0 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp;
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp__0 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp;
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp__0 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp;
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_tmp__1 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_tmp;
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_id_tmp__1 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_id_tmp;
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_tmp__1 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_tmp;
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_id_tmp__1 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_id_tmp;
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp__1 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp;
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp__1 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp;
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp__1 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp;
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp__1 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp;
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__clk__0 
        = vlSelf->tb_riscv_cpu__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT____Vcellinp__dut__rst__0 
        = vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst;
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__rst_n__0 
        = vlSelf->tb_riscv_cpu__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vtb_riscv_cpu___024root___eval_initial__TOP__Vtiming__0(Vtb_riscv_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_riscv_cpu__DOT__clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "../src/../tb_riscv_cpu.sv", 
                                           70);
        vlSelf->tb_riscv_cpu__DOT__clk = 1U;
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "../src/../tb_riscv_cpu.sv", 
                                           71);
        vlSelf->tb_riscv_cpu__DOT__clk = 0U;
    }
}

VL_INLINE_OPT VlCoroutine Vtb_riscv_cpu___024root___eval_initial__TOP__Vtiming__1(Vtb_riscv_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    vlSelf->tb_riscv_cpu__DOT__rst_n = 0U;
    co_await vlSelf->__VtrigSched_h48dc5477__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_riscv_cpu.clk)", 
                                                       "../src/../tb_riscv_cpu.sv", 
                                                       81);
    co_await vlSelf->__VtrigSched_h48dc5477__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_riscv_cpu.clk)", 
                                                       "../src/../tb_riscv_cpu.sv", 
                                                       81);
    co_await vlSelf->__VtrigSched_h48dc5477__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_riscv_cpu.clk)", 
                                                       "../src/../tb_riscv_cpu.sv", 
                                                       81);
    co_await vlSelf->__VtrigSched_h48dc5477__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_riscv_cpu.clk)", 
                                                       "../src/../tb_riscv_cpu.sv", 
                                                       81);
    co_await vlSelf->__VtrigSched_h48dc5477__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_riscv_cpu.clk)", 
                                                       "../src/../tb_riscv_cpu.sv", 
                                                       81);
    co_await vlSelf->__VtrigSched_h48dc5477__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_riscv_cpu.clk)", 
                                                       "../src/../tb_riscv_cpu.sv", 
                                                       81);
    co_await vlSelf->__VtrigSched_h48dc5477__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_riscv_cpu.clk)", 
                                                       "../src/../tb_riscv_cpu.sv", 
                                                       81);
    co_await vlSelf->__VtrigSched_h48dc5477__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_riscv_cpu.clk)", 
                                                       "../src/../tb_riscv_cpu.sv", 
                                                       81);
    co_await vlSelf->__VtrigSched_h48dc5477__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_riscv_cpu.clk)", 
                                                       "../src/../tb_riscv_cpu.sv", 
                                                       81);
    co_await vlSelf->__VtrigSched_h48dc5477__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_riscv_cpu.clk)", 
                                                       "../src/../tb_riscv_cpu.sv", 
                                                       81);
    co_await vlSelf->__VtrigSched_h48dc5477__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_riscv_cpu.clk)", 
                                                       "../src/../tb_riscv_cpu.sv", 
                                                       81);
    co_await vlSelf->__VtrigSched_h48dc5477__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_riscv_cpu.clk)", 
                                                       "../src/../tb_riscv_cpu.sv", 
                                                       81);
    co_await vlSelf->__VtrigSched_h48dc5477__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_riscv_cpu.clk)", 
                                                       "../src/../tb_riscv_cpu.sv", 
                                                       81);
    co_await vlSelf->__VtrigSched_h48dc5477__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_riscv_cpu.clk)", 
                                                       "../src/../tb_riscv_cpu.sv", 
                                                       81);
    co_await vlSelf->__VtrigSched_h48dc5477__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_riscv_cpu.clk)", 
                                                       "../src/../tb_riscv_cpu.sv", 
                                                       81);
    co_await vlSelf->__VtrigSched_h48dc5477__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_riscv_cpu.clk)", 
                                                       "../src/../tb_riscv_cpu.sv", 
                                                       81);
    co_await vlSelf->__VtrigSched_h48dc5477__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_riscv_cpu.clk)", 
                                                       "../src/../tb_riscv_cpu.sv", 
                                                       81);
    co_await vlSelf->__VtrigSched_h48dc5477__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_riscv_cpu.clk)", 
                                                       "../src/../tb_riscv_cpu.sv", 
                                                       81);
    co_await vlSelf->__VtrigSched_h48dc5477__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_riscv_cpu.clk)", 
                                                       "../src/../tb_riscv_cpu.sv", 
                                                       81);
    co_await vlSelf->__VtrigSched_h48dc5477__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_riscv_cpu.clk)", 
                                                       "../src/../tb_riscv_cpu.sv", 
                                                       81);
    vlSelf->tb_riscv_cpu__DOT__rst_n = 1U;
    VL_WRITEF("Reset released at time %0t\n",64,VL_TIME_UNITED_Q(1000),
              -9);
}

VL_INLINE_OPT VlCoroutine Vtb_riscv_cpu___024root___eval_initial__TOP__Vtiming__2(Vtb_riscv_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    VL_WRITEF("========================================\nRISC-V CPU Testbench - Fixed Version\nMax cycles: %0d\n========================================\n",
              32,vlSelf->tb_riscv_cpu__DOT__max_cycles);
    while ((1U & (~ (IData)(vlSelf->tb_riscv_cpu__DOT__rst_n)))) {
        co_await vlSelf->__VtrigSched_h8b56b137__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb_riscv_cpu.rst_n)", 
                                                           "../src/../tb_riscv_cpu.sv", 
                                                           274);
    }
    VL_WRITEF("Starting simulation at time %0t\n",64,
              VL_TIME_UNITED_Q(1000),-9);
}

VL_INLINE_OPT void Vtb_riscv_cpu___024root___act_sequent__TOP__0(Vtb_riscv_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_id_tmp[0U] 
        = ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_tmp
            [1U] < vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_tmp
            [2U]) ? vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_id_tmp
           [1U] : vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_id_tmp
           [2U]);
}

VL_INLINE_OPT void Vtb_riscv_cpu___024root___act_sequent__TOP__1(Vtb_riscv_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___act_sequent__TOP__1\n"); );
    // Body
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_tmp[0U] 
        = ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_tmp
            [1U] >= vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_tmp
            [2U]) ? vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_tmp
           [1U] : vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_tmp
           [2U]);
}

VL_INLINE_OPT void Vtb_riscv_cpu___024root___act_sequent__TOP__2(Vtb_riscv_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___act_sequent__TOP__2\n"); );
    // Body
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_tmp[0U] 
        = ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_tmp
            [1U] < vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_tmp
            [2U]) ? vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_tmp
           [1U] : vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_tmp
           [2U]);
}

VL_INLINE_OPT void Vtb_riscv_cpu___024root___act_sequent__TOP__3(Vtb_riscv_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___act_sequent__TOP__3\n"); );
    // Body
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp[0U] 
        = ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp
            [1U] < vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp
            [2U]) ? vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp
           [1U] : vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp
           [2U]);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp[1U] 
        = ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp
            [3U] < vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp
            [4U]) ? vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp
           [3U] : vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp
           [4U]);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp[2U] 
        = ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp
            [5U] < vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp
            [6U]) ? vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp
           [5U] : vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp
           [6U]);
}

VL_INLINE_OPT void Vtb_riscv_cpu___024root___act_sequent__TOP__4(Vtb_riscv_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___act_sequent__TOP__4\n"); );
    // Body
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp[0U] 
        = ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp
            [1U] >= vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp
            [2U]) ? vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp
           [1U] : vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp
           [2U]);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp[1U] 
        = ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp
            [3U] >= vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp
            [4U]) ? vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp
           [3U] : vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp
           [4U]);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp[2U] 
        = ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp
            [5U] >= vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp
            [6U]) ? vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp
           [5U] : vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp
           [6U]);
}

VL_INLINE_OPT void Vtb_riscv_cpu___024root___act_sequent__TOP__5(Vtb_riscv_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___act_sequent__TOP__5\n"); );
    // Body
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp[0U] 
        = ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp
            [1U] < vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp
            [2U]) ? vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp
           [1U] : vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp
           [2U]);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp[1U] 
        = ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp
            [3U] < vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp
            [4U]) ? vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp
           [3U] : vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp
           [4U]);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp[2U] 
        = ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp
            [5U] < vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp
            [6U]) ? vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp
           [5U] : vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp
           [6U]);
}

VL_INLINE_OPT void Vtb_riscv_cpu___024root___act_sequent__TOP__6(Vtb_riscv_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___act_sequent__TOP__6\n"); );
    // Body
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_id_tmp[0U] 
        = ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_tmp
            [1U] >= vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_tmp
            [2U]) ? vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_id_tmp
           [1U] : vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_id_tmp
           [2U]);
}

VL_INLINE_OPT void Vtb_riscv_cpu___024root___act_sequent__TOP__7(Vtb_riscv_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___act_sequent__TOP__7\n"); );
    // Body
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp[0U] 
        = ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp
            [1U] >= vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp
            [2U]) ? vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp
           [1U] : vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp
           [2U]);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp[1U] 
        = ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp
            [3U] >= vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp
            [4U]) ? vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp
           [3U] : vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp
           [4U]);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp[2U] 
        = ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp
            [5U] >= vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp
            [6U]) ? vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp
           [5U] : vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp
           [6U]);
}

VL_INLINE_OPT void Vtb_riscv_cpu___024root___act_sequent__TOP__8(Vtb_riscv_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___act_sequent__TOP__8\n"); );
    // Body
    vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst 
        = (1U & (~ (IData)(vlSelf->tb_riscv_cpu__DOT__rst_n)));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_mem_addr = 0U;
    if ((4U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_alusel))) {
        if ((2U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_alusel))) {
            if ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_alusel))) {
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_mem_addr 
                    = (((IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) 
                        | (7U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_alusel)))
                        ? 0U : (vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_mem_offset 
                                + vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1));
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_reg_wdata = 0U;
            } else {
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_reg_wdata 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_link_addr;
            }
        } else {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_reg_wdata 
                = ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_alusel))
                    ? 0U : (((IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) 
                             | (4U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_alusel)))
                             ? 0U : ((8U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop))
                                      ? (vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1 
                                         + vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2)
                                      : ((0xbU == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop))
                                          ? (vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1 
                                             - vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2)
                                          : ((9U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop))
                                              ? VL_LTS_III(32, vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1, vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2)
                                              : ((0xaU 
                                                  == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop))
                                                  ? 
                                                 (vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1 
                                                  < vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2)
                                                  : 0U))))));
        }
    } else {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_reg_wdata 
            = ((2U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_alusel))
                ? ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_alusel))
                    ? 0U : (((IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) 
                             | (2U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_alusel)))
                             ? 0U : ((5U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop))
                                      ? (vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1 
                                         << (0x1fU 
                                             & vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2))
                                      : ((6U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop))
                                          ? (vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1 
                                             >> (0x1fU 
                                                 & vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2))
                                          : ((7U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop))
                                              ? (VL_SHIFTL_III(32,32,6, 
                                                               (- (IData)(
                                                                          (vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1 
                                                                           >> 0x1fU))), 
                                                               (0x3fU 
                                                                & ((IData)(0x20U) 
                                                                   - 
                                                                   (0x1fU 
                                                                    & vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2)))) 
                                                 | (vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2)))
                                              : 0U)))))
                : ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_alusel))
                    ? (((IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) 
                        | (1U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_alusel)))
                        ? 0U : ((3U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop))
                                 ? (vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1 
                                    ^ vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2)
                                 : ((2U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop))
                                     ? (vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1 
                                        | vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2)
                                     : ((1U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop))
                                         ? (vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1 
                                            & vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2)
                                         : 0U)))) : 0U));
    }
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__stallreq_for_reg2_load = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__stallreq_for_reg1_load = 0U;
    if (vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
            = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                        >> 7U));
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_link_addr = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 
            = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                        >> 0x14U));
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 0U;
    } else {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_link_addr = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 0U;
        if ((0x40U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
            if ((0x20U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                              >> 4U)))) {
                    if ((8U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((4U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 7U));
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 6U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 0xcU;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 1U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_link_addr 
                                        = ((IData)(4U) 
                                           + vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_pc);
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 = 0U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 0U;
                                }
                            }
                        }
                    } else if ((4U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 7U));
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 6U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 0xdU;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_link_addr 
                                    = ((IData)(4U) 
                                       + vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_pc);
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 0U;
                            }
                        }
                    } else if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((0x4000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 6U;
                                if ((0x2000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                    if ((0x1000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 0x13U;
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 
                                            = (0x1fU 
                                               & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                  >> 0x14U));
                                    } else {
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 0x12U;
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 
                                            = (0x1fU 
                                               & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                  >> 0x14U));
                                    }
                                } else if ((0x1000U 
                                            & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 0x11U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 0x14U));
                                } else {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 0x10U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 0x14U));
                                }
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_link_addr = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 1U;
                            } else if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                 >> 0xdU)))) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 6U;
                                if ((0x1000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 0xfU;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 0x14U));
                                } else {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 0xeU;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 0x14U));
                                }
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_link_addr = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((0x20U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
            if ((0x10U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                              >> 3U)))) {
                    if ((4U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 7U));
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 4U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 8U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 
                                    = (0xfffff000U 
                                       & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst);
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 0U;
                            }
                        }
                    } else if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((0x4000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                if ((0x2000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                    if ((0x1000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                            = (0x1fU 
                                               & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                  >> 7U));
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 1U;
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 
                                            = (0x1fU 
                                               & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                  >> 0x14U));
                                    } else {
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                            = (0x1fU 
                                               & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                  >> 7U));
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 2U;
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 
                                            = (0x1fU 
                                               & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                  >> 0x14U));
                                    }
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 1U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 1U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 1U;
                                } else if ((0x1000U 
                                            & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                    if ((0U == (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0x19U))) {
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                            = (0x1fU 
                                               & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                  >> 7U));
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 2U;
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 6U;
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 1U;
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 
                                            = (0x1fU 
                                               & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                  >> 0x14U));
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 1U;
                                    } else if ((0x20U 
                                                == 
                                                (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                 >> 0x19U))) {
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                            = (0x1fU 
                                               & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                  >> 7U));
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 2U;
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 7U;
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 1U;
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 
                                            = (0x1fU 
                                               & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                  >> 0x14U));
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 1U;
                                    }
                                } else {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 7U));
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 1U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 3U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 1U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 0x14U));
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 1U;
                                }
                            } else if ((0x2000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                if ((0x1000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 7U));
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 0xaU;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 0x14U));
                                } else {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 7U));
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 9U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 0x14U));
                                }
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 4U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 1U;
                            } else if ((0x1000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 7U));
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 2U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 5U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0x14U));
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 1U;
                            } else if ((0U == (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                               >> 0x19U))) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 7U));
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 4U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 8U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0x14U));
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 1U;
                            } else if ((0x20U == (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                  >> 0x19U))) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 7U));
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 4U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 0xbU;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0x14U));
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 1U;
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                              >> 2U)))) {
                    if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((0U == (7U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                              >> 0xcU)))) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 7U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 0x19U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset 
                                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT____VdfgExtracted_h3acc3dea__0;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0x14U));
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 1U;
                            } else if ((1U == (7U & 
                                               (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0xcU)))) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 7U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 0x1aU;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset 
                                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT____VdfgExtracted_h3acc3dea__0;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0x14U));
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 1U;
                            } else if ((2U == (7U & 
                                               (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0xcU)))) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 7U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 0x1bU;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset 
                                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT____VdfgExtracted_h3acc3dea__0;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0x14U));
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((0x10U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
            if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                          >> 3U)))) {
                if ((4U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                    if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 7U));
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 4U;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 8U;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 1U;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 
                                = (0xfffff000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst);
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 
                                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_pc;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 = 0U;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 0U;
                        }
                    }
                } else if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                    if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((0x4000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((0x2000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                if ((0x1000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 7U));
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 1U;
                                } else {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 7U));
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 2U;
                                }
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 
                                    = VL_SHIFTR_III(32,32,32, vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst, 0x14U);
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 0U;
                            } else if ((0x1000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                if ((0U == (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 0x19U))) {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 7U));
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 2U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 6U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 1U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 0x14U));
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 = 0U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 0U;
                                } else if ((0x20U == 
                                            (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                             >> 0x19U))) {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 7U));
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 2U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 7U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 1U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 0x14U));
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 = 0U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 0U;
                                }
                            } else {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 7U));
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 3U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 
                                    = VL_SHIFTR_III(32,32,32, vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst, 0x14U);
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 0U;
                            }
                        } else {
                            if ((0x2000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                if ((0x1000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 7U));
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 0xaU;
                                } else {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 7U));
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 9U;
                                }
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 4U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 
                                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT____VdfgExtracted_hb047d7aa__0;
                            } else if ((0x1000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 7U));
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 2U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 5U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0x14U));
                            } else {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 7U));
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 4U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 8U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 
                                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT____VdfgExtracted_hb047d7aa__0;
                            }
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 1U;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 = 0U;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 0U;
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                          >> 2U)))) {
                if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                    if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((0x4000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                          >> 0xdU)))) {
                                if ((0x1000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 7U));
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 0x18U;
                                } else {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 7U));
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 0x17U;
                                }
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 7U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset 
                                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT____VdfgExtracted_hb047d7aa__0;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 0U;
                            }
                        } else if ((0x2000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                          >> 0xcU)))) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 7U));
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 7U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 0x16U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset 
                                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT____VdfgExtracted_hb047d7aa__0;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 0U;
                            }
                        } else {
                            if ((0x1000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 7U));
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 0x15U;
                            } else {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 7U));
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 0x14U;
                            }
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 7U;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 1U;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset 
                                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT____VdfgExtracted_hb047d7aa__0;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 = 0U;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 0U;
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst)))) {
        if ((((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2) 
              & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__prev_is_load)) 
             & ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_reg_waddr_i) 
                == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2)))) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__stallreq_for_reg2_load = 1U;
        }
    }
    if (vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
            = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                        >> 0xfU));
    } else {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 = 0U;
        if ((0x40U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
            if ((0x20U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                              >> 4U)))) {
                    if ((8U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((4U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 0U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 = 0U;
                                }
                            }
                        }
                    } else if ((4U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0xfU));
                            }
                        }
                    } else if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((0x4000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                    = (0x1fU & ((0x2000U 
                                                 & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)
                                                 ? 
                                                ((0x1000U 
                                                  & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)
                                                  ? 
                                                 (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                  >> 0xfU)
                                                  : 
                                                 (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                  >> 0xfU))
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)
                                                  ? 
                                                 (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                  >> 0xfU)
                                                  : 
                                                 (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                  >> 0xfU))));
                            } else if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                 >> 0xdU)))) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                    = (0x1fU & ((0x1000U 
                                                 & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)
                                                 ? 
                                                (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                 >> 0xfU)
                                                 : 
                                                (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                 >> 0xfU)));
                            }
                        }
                    }
                }
            }
        } else if ((0x20U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
            if ((0x10U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                              >> 3U)))) {
                    if ((4U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 = 0U;
                            }
                        }
                    } else if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((0x4000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                if ((0x2000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                        = (0x1fU & 
                                           ((0x1000U 
                                             & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)
                                             ? (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0xfU)
                                             : (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0xfU)));
                                } else if ((0x1000U 
                                            & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                    if ((0U == (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0x19U))) {
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                            = (0x1fU 
                                               & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                  >> 0xfU));
                                    } else if ((0x20U 
                                                == 
                                                (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                 >> 0x19U))) {
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                            = (0x1fU 
                                               & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                  >> 0xfU));
                                    }
                                } else {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 0xfU));
                                }
                            } else if ((0x2000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                    = (0x1fU & ((0x1000U 
                                                 & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)
                                                 ? 
                                                (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                 >> 0xfU)
                                                 : 
                                                (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                 >> 0xfU)));
                            } else if ((0x1000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0xfU));
                            } else if ((0U == (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                               >> 0x19U))) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0xfU));
                            } else if ((0x20U == (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                  >> 0x19U))) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0xfU));
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                              >> 2U)))) {
                    if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((0U == (7U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                              >> 0xcU)))) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0xfU));
                            } else if ((1U == (7U & 
                                               (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0xcU)))) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0xfU));
                            } else if ((2U == (7U & 
                                               (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0xcU)))) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0xfU));
                            }
                        }
                    }
                }
            }
        } else if ((0x10U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
            if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                          >> 3U)))) {
                if ((4U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                    if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 0U;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 = 0U;
                        }
                    }
                } else if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                    if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((0x4000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((0x2000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                    = (0x1fU & ((0x1000U 
                                                 & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)
                                                 ? 
                                                (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                 >> 0xfU)
                                                 : 
                                                (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                 >> 0xfU)));
                            } else if ((0x1000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                if ((0U == (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 0x19U))) {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 0xfU));
                                } else if ((0x20U == 
                                            (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                             >> 0x19U))) {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 0xfU));
                                }
                            } else {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0xfU));
                            }
                        } else {
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                = (0x1fU & ((0x2000U 
                                             & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)
                                             ? ((0x1000U 
                                                 & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)
                                                 ? 
                                                (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                 >> 0xfU)
                                                 : 
                                                (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                 >> 0xfU))
                                             : ((0x1000U 
                                                 & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)
                                                 ? 
                                                (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                 >> 0xfU)
                                                 : 
                                                (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                 >> 0xfU))));
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                          >> 2U)))) {
                if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                    if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((0x4000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                          >> 0xdU)))) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                    = (0x1fU & ((0x1000U 
                                                 & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)
                                                 ? 
                                                (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                 >> 0xfU)
                                                 : 
                                                (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                 >> 0xfU)));
                            }
                        } else if ((0x2000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                          >> 0xcU)))) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0xfU));
                            }
                        } else {
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                = (0x1fU & ((0x1000U 
                                             & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)
                                             ? (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0xfU)
                                             : (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0xfU)));
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst)))) {
        if ((((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1) 
              & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__prev_is_load)) 
             & ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_reg_waddr_i) 
                == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1)))) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__stallreq_for_reg1_load = 1U;
        }
    }
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_data1 
        = ((1U & (((IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) 
                   | (~ (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1))) 
                  | (0U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1))))
            ? 0U : (((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__wb_we) 
                     & ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1) 
                        == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__wb_reg_waddr)))
                     ? vlSelf->tb_riscv_cpu__DOT__dut__DOT__wb_reg_wdata
                     : vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs
                    [vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1]));
    if (vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_mem = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_mem0__mem_re = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_mem0__mem_we = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_addr = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_w_data = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_waddr_o = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_we_o = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_wdata_o = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_sel = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_mem0__DOT__mem_taking = 0U;
    } else if ((1U & ((~ (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_busy)) 
                      & (~ (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_mem0__DOT__mem_taking))))) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_waddr_o 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_waddr_i;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_we_o 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_we_i;
        if ((((((0x14U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_aluop)) 
                || (0x15U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_aluop))) 
               || (0x16U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_aluop))) 
              || (0x17U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_aluop))) 
             || (0x18U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_aluop)))) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_mem = 1U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_mem0__DOT__mem_taking = 1U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_mem0__mem_re = 1U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_mem0__mem_we = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_addr 
                = (0xfffffffcU & vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr);
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_w_data = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_sel = 0U;
        } else if ((0x19U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_aluop))) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_mem = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_mem0__DOT__mem_taking = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_mem0__mem_re = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_mem0__mem_we = 1U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_addr 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_w_data 
                = ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_rt_data 
                    << 0x18U) | ((0xff0000U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_rt_data 
                                               << 0x10U)) 
                                 | ((0xff00U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_rt_data 
                                                << 8U)) 
                                    | (0xffU & vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_rt_data))));
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_wdata_o = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_sel 
                = ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr)
                    ? ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr)
                        ? 8U : 4U) : ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr)
                                       ? 2U : 1U));
        } else if ((0x1aU == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_aluop))) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_mem = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_mem0__DOT__mem_taking = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_mem0__mem_re = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_mem0__mem_we = 1U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_addr 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_w_data 
                = ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_rt_data 
                    << 0x10U) | (0xffffU & vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_rt_data));
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_wdata_o = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_sel 
                = ((0U == (3U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr))
                    ? 3U : ((2U == (3U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr))
                             ? 0xcU : 0U));
        } else if ((0x1bU == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_aluop))) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_mem = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_mem0__DOT__mem_taking = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_mem0__mem_re = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_mem0__mem_we = 1U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_addr 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_w_data 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_rt_data;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_wdata_o = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_sel 
                = ((0U == (3U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr))
                    ? 0xfU : 0U);
        } else {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_mem = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_mem0__DOT__mem_taking = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_mem0__mem_re = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_mem0__mem_we = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_addr = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_w_data = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_sel = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_wdata_o 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_wdata_i;
        }
    } else if (((~ (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_busy)) 
                & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_mem0__DOT__mem_taking))) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_mem = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_mem0__DOT__mem_taking = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_wdata_o 
            = ((0x14U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_aluop))
                ? ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr)
                    ? ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr)
                        ? (((- (IData)((vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data 
                                        >> 0x1fU))) 
                            << 8U) | (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data 
                                      >> 0x18U)) : 
                       (((- (IData)((1U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data 
                                           >> 0x17U)))) 
                         << 8U) | (0xffU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data 
                                            >> 0x10U))))
                    : ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr)
                        ? (((- (IData)((1U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data 
                                              >> 0xfU)))) 
                            << 8U) | (0xffU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data 
                                               >> 8U)))
                        : (((- (IData)((1U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data 
                                              >> 7U)))) 
                            << 8U) | (0xffU & vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data))))
                : ((0x15U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_aluop))
                    ? ((0U == (3U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr))
                        ? (((- (IData)((1U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data 
                                              >> 0xfU)))) 
                            << 0x10U) | (0xffffU & vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data))
                        : ((2U == (3U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr))
                            ? (((- (IData)((1U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data 
                                                  >> 0xfU)))) 
                                << 0x10U) | (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data 
                                             >> 0x10U))
                            : 0U)) : ((0x16U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_aluop))
                                       ? ((0U == (3U 
                                                  & vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr))
                                           ? vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data
                                           : 0U) : 
                                      ((0x17U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_aluop))
                                        ? ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr)
                                            ? ((1U 
                                                & vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr)
                                                ? (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data 
                                                   >> 0x18U)
                                                : (0xffU 
                                                   & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data 
                                                      >> 0x10U)))
                                            : ((1U 
                                                & vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr)
                                                ? (0xffU 
                                                   & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data 
                                                      >> 8U))
                                                : (0xffU 
                                                   & vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data)))
                                        : ((0x18U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_aluop))
                                            ? ((0U 
                                                == 
                                                (3U 
                                                 & vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr))
                                                ? (0xffffU 
                                                   & vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data)
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr))
                                                    ? 
                                                   (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data 
                                                    >> 0x10U)
                                                    : 0U))
                                            : vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_wdata_i)))));
    } else if (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_busy) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_mem = 1U;
    } else {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_mem = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_mem0__mem_re = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_mem0__mem_we = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_addr = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_w_data = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_waddr_o = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_we_o = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_wdata_o = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_sel = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_mem0__DOT__mem_taking = 0U;
    }
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_rwe 
        = (((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_mem0__mem_we) 
            << 1U) | (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_mem0__mem_re));
    if (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_busy) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_data_in 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__pending_write_data;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_mask_in 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__pending_write_mask;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__pending_addr;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__rw_flag 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__pending_rw_flag;
    } else {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_data_in 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_w_data;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_mask_in 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_sel;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_addr;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__rw_flag 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_rwe;
    }
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv2 = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv1 = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp[3U] 
        = (3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter
                 [(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                         >> 5U))] - vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                 [0U][(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                             >> 5U))]));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp[3U] 
        = (3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter
                 [(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                         >> 5U))] - vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                 [0U][(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                             >> 5U))]));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp[4U] 
        = (3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter
                 [(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                         >> 5U))] - vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                 [1U][(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                             >> 5U))]));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp[4U] 
        = (3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter
                 [(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                         >> 5U))] - vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                 [1U][(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                             >> 5U))]));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp[5U] 
        = (3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter
                 [(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                         >> 5U))] - vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                 [2U][(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                             >> 5U))]));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp[5U] 
        = (3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter
                 [(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                         >> 5U))] - vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                 [2U][(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                             >> 5U))]));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp[6U] 
        = (3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter
                 [(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                         >> 5U))] - vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                 [3U][(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                             >> 5U))]));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp[6U] 
        = (3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter
                 [(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                         >> 5U))] - vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                 [3U][(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                             >> 5U))]));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache 
        = ((0xeU & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache)) 
           | (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
              [0U][(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                          >> 5U))] & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                                      [0U][(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                                                  >> 5U))] 
                                      == (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                                          >> 7U))));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache 
        = ((0xdU & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache)) 
           | ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
               [1U][(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                           >> 5U))] & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                                       [1U][(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                                                   >> 5U))] 
                                       == (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                                           >> 7U))) 
              << 1U));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache 
        = ((0xbU & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache)) 
           | ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
               [2U][(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                           >> 5U))] & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                                       [2U][(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                                                   >> 5U))] 
                                       == (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                                           >> 7U))) 
              << 2U));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache 
        = ((7U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache)) 
           | ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
               [3U][(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                           >> 5U))] & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                                       [3U][(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                                                   >> 5U))] 
                                       == (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                                           >> 7U))) 
              << 3U));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_write_data = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_write_mask = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid_flag = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid_tag = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid_block = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_tag 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_tag;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_mask = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_block 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_block;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_critical_word 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__critical_word;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_data = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_block = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_word = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_done = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_block = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_word = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_cache = 7U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_state 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__state;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_word 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_word;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_rw_flag = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_addr = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_cache = 7U;
    if ((0U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__state))) {
        if ((1U & (~ (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__rw_flag)))) {
            if ((2U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__rw_flag))) {
                vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_write_data 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_data_in;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_write_mask 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_mask_in;
                if ((0U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache))) {
                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_mask 
                        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_mask_in;
                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_data 
                        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_data_in;
                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_block 
                        = (3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                                 >> 5U));
                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_word 
                        = (7U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                                 >> 2U));
                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_cache 
                        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup
                        [vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache];
                }
            }
        }
        if ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__rw_flag))) {
            if ((0U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache))) {
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid_flag = 1U;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid_tag 
                    = (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                       >> 7U);
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid_block 
                    = (3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                             >> 5U));
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_tag 
                    = (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                       >> 7U);
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_block 
                    = (3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                             >> 5U));
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_critical_word 
                    = (7U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                             >> 2U));
                vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_rw_flag = 1U;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_addr 
                    = (0xfffffffcU & vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr);
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_word 
                    = (7U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                             >> 2U));
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_state = 1U;
            }
            if ((0U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache))) {
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_done = 1U;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_block 
                    = (3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                             >> 5U));
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_word 
                    = (7U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                             >> 2U));
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_cache 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup
                    [vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache];
            }
        } else if ((2U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__rw_flag))) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_done = 1U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_rw_flag = 2U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_addr 
                = (0xfffffffcU & vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr);
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_state = 4U;
        }
    } else {
        if ((1U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__state))) {
            if ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__mem_done))) {
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_mask = 0xfU;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_data 
                    = (IData)(vlSelf->tb_riscv_cpu__DOT__mem_data_i);
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_block 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_block;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_word 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_word;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_cache 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_cache;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_word 
                    = ((0U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__critical_word))
                        ? 1U : 0U);
                vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_rw_flag = 1U;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_addr 
                    = ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_tag 
                        << 7U) | (((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_block) 
                                   << 5U) | ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_word) 
                                             << 2U)));
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_state = 2U;
            }
        } else if ((2U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__state))) {
            if ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__mem_done))) {
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_mask = 0xfU;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_data 
                    = (IData)(vlSelf->tb_riscv_cpu__DOT__mem_data_i);
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_block 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_block;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_word 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_word;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_cache 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_cache;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_word 
                    = (7U & (((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__critical_word) 
                              == ((IData)(1U) + (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_word)))
                              ? ((IData)(2U) + (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_word))
                              : ((IData)(1U) + (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_word))));
                if ((0U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_word))) {
                    vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_rw_flag = 1U;
                    vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_addr 
                        = ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_tag 
                            << 7U) | (((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_block) 
                                       << 5U) | ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_word) 
                                                 << 2U)));
                } else {
                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_state = 0U;
                }
            }
        } else if ((4U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__state))) {
            if ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__mem_done))) {
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_state = 0U;
            }
        }
        if ((1U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__state))) {
            if ((2U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__state))) {
                if ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__rw_flag))) {
                    if ((0U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache))) {
                        if (((vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup
                              [vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache] 
                              == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_cache)) 
                             & ((3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                                       >> 5U)) == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_block)))) {
                            if (((7U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                                        >> 2U)) < (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_word))) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_done = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_block 
                                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_block;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_word 
                                    = (7U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                                             >> 2U));
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_cache 
                                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_cache;
                            }
                        } else {
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_done = 1U;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_block 
                                = (3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                                         >> 5U));
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_word 
                                = (7U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                                         >> 2U));
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_cache 
                                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup
                                [vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache];
                        }
                    }
                }
            }
        }
    }
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_if = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__mem_taking = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__if_pc = vlSelf->tb_riscv_cpu__DOT__dut__DOT__pc;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__if_inst = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_r_data;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_if0__mem_re = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_addr = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__waiting_one = 0U;
    if (vlSelf->tb_riscv_cpu__DOT__dut__DOT__right_one) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__waiting_one = 0U;
    }
    if (vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv2 = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__br_addr = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv1 = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__br = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_if = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__mem_taking = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__if_pc = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__if_inst = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_if0__mem_re = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_addr = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__waiting_one = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stall = 0U;
    } else {
        if ((1U & (~ (((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2) 
                       & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__prev_is_load)) 
                      & ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_reg_waddr_i) 
                         == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2)))))) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv2 
                = ((((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2) 
                     & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_we_i)) 
                    & ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_reg_waddr_i) 
                       == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2)))
                    ? vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_reg_wdata
                    : ((((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2) 
                         & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_we_o)) 
                        & ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_waddr_o) 
                           == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2)))
                        ? vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_wdata_o
                        : ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2)
                            ? ((1U & (((IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) 
                                       | (~ (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2))) 
                                      | (0U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2))))
                                ? 0U : (((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__wb_we) 
                                         & ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2) 
                                            == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__wb_reg_waddr)))
                                         ? vlSelf->tb_riscv_cpu__DOT__dut__DOT__wb_reg_wdata
                                         : vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs
                                        [vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2]))
                            : ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2)
                                ? 0U : vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2))));
        }
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__br_addr = 0U;
        if ((1U & (~ (((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1) 
                       & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__prev_is_load)) 
                      & ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_reg_waddr_i) 
                         == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1)))))) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv1 
                = ((((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1) 
                     & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_we_i)) 
                    & ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_reg_waddr_i) 
                       == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1)))
                    ? vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_reg_wdata
                    : ((((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1) 
                         & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_we_o)) 
                        & ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_waddr_o) 
                           == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1)))
                        ? vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_wdata_o
                        : ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1)
                            ? vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_data1
                            : ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1)
                                ? 0U : vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1))));
        }
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__br = 0U;
        if ((0x40U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
            if ((0x20U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                              >> 4U)))) {
                    if ((8U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((4U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__br_addr 
                                        = (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_pc 
                                           + (((- (IData)(
                                                          (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                           >> 0x1fU))) 
                                               << 0x14U) 
                                              | ((0xff000U 
                                                  & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst) 
                                                 | ((0x800U 
                                                     & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                          >> 0x14U))))));
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__br = 1U;
                                }
                            }
                        }
                    } else if ((4U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__br_addr 
                                    = (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_data1 
                                       + vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT____VdfgExtracted_hb047d7aa__0);
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__br = 1U;
                            }
                        }
                    } else if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((0x4000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__br_addr 
                                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__pc_plus_B_imm;
                                if ((0x2000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                    if ((0x1000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                        if ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv1 
                                             >= vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv2)) {
                                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__br = 1U;
                                        }
                                    } else if ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv1 
                                                < vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv2)) {
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__br = 1U;
                                    }
                                } else if ((0x1000U 
                                            & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                    if (VL_GTES_III(32, vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv1, vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv2)) {
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__br = 1U;
                                    }
                                } else if (VL_LTS_III(32, vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv1, vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv2)) {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__br = 1U;
                                }
                            } else if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                 >> 0xdU)))) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__br_addr 
                                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__pc_plus_B_imm;
                                if ((0x1000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                    if ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv1 
                                         != vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv2)) {
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__br = 1U;
                                    }
                                } else if ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv1 
                                            == vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv2)) {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__br = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
        if (vlSelf->tb_riscv_cpu__DOT__dut__DOT__br) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__if_pc = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__if_inst = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__mem_taking = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_if = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__waiting_one = 1U;
        } else if ((1U & (((~ (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__waiting_one)) 
                           & (~ (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_busy))) 
                          & (~ (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__mem_taking))))) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_if = 1U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__mem_taking = 1U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_if0__mem_re = 1U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_addr 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__pc;
        } else if ((((~ (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__waiting_one)) 
                     & (~ (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_busy))) 
                    & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__mem_taking))) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_if = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__mem_taking = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__if_pc 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__pc;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__if_inst 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_r_data;
        } else if (((~ (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__waiting_one)) 
                    & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_busy))) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_if = 1U;
        } else if ((1U & (~ (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__waiting_one)))) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_if = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__mem_taking = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__if_pc = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__if_inst = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_if0__mem_re = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_addr = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__waiting_one = 0U;
        }
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stall 
            = ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_mem)
                ? 0x1fU : (((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__stallreq_for_reg1_load) 
                            | (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__stallreq_for_reg2_load))
                            ? 7U : ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_if)
                                     ? 3U : 0U)));
    }
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4 
        = (((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_block) 
            << 3U) | (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_word));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__rw_flag 
        = (((0U == VL_EXTENDS_II(32,3, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_cache))) 
            << 1U) | (0U == VL_EXTENDS_II(32,3, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_cache))));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__rw_flag 
        = (((1U == VL_EXTENDS_II(32,3, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_cache))) 
            << 1U) | (1U == VL_EXTENDS_II(32,3, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_cache))));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__rw_flag 
        = (((2U == VL_EXTENDS_II(32,3, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_cache))) 
            << 1U) | (2U == VL_EXTENDS_II(32,3, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_cache))));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__rw_flag 
        = (((3U == VL_EXTENDS_II(32,3, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_cache))) 
            << 1U) | (3U == VL_EXTENDS_II(32,3, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_cache))));
    if (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_busy) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__rw_flag 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__pending_rw_flag;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__pending_addr;
    } else {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__rw_flag 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_if0__mem_re;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_addr;
    }
    vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_write_data = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_write_mask = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_tmp[1U] 
        = (1U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter
                 [(0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                           >> 5U))] - vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                 [0U][(0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                               >> 5U))]));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_tmp[1U] 
        = (1U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter
                 [(0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                           >> 5U))] - vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                 [0U][(0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                               >> 5U))]));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_tmp[2U] 
        = (1U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter
                 [(0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                           >> 5U))] - vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                 [1U][(0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                               >> 5U))]));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_tmp[2U] 
        = (1U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter
                 [(0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                           >> 5U))] - vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                 [1U][(0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                               >> 5U))]));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__found_in_cache 
        = ((2U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__found_in_cache)) 
           | (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
              [0U][(0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                            >> 5U))] & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                                        [0U][(0xfU 
                                              & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                                                 >> 5U))] 
                                        == (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                                            >> 9U))));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__found_in_cache 
        = ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__found_in_cache)) 
           | ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
               [1U][(0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                             >> 5U))] & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                                         [1U][(0xfU 
                                               & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                                                  >> 5U))] 
                                         == (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                                             >> 9U))) 
              << 1U));
    if ((0U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__state))) {
        if ((1U & (~ (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__rw_flag)))) {
            if ((2U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__rw_flag))) {
                vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_write_data 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_data_in;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_write_mask 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_mask_in;
            }
        }
    }
    vlSelf->tb_riscv_cpu__DOT__mem_sel = (((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_write_mask) 
                                           << 4U) | (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_write_mask));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid_flag = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid_tag = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid_block = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_tag 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_tag;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_mask = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_block 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_block;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_critical_word 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__critical_word;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_data = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_block = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_word = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_done = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_block = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_word = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_cache = 3U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_cache = 3U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_state 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__state;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_word 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_word;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_rw_flag = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_addr = 0U;
    if ((0U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__state))) {
        if ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__rw_flag))) {
            if ((0U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__found_in_cache))) {
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid_flag = 1U;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid_tag 
                    = (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                       >> 9U);
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid_block 
                    = (0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                               >> 5U));
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_tag 
                    = (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                       >> 9U);
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_block 
                    = (0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                               >> 5U));
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_critical_word 
                    = (7U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                             >> 2U));
                vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_rw_flag = 1U;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_addr 
                    = (0xfffffffcU & vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr);
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_word 
                    = (7U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                             >> 2U));
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_state = 1U;
            }
            if ((0U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__found_in_cache))) {
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_done = 1U;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_block 
                    = (0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                               >> 5U));
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_word 
                    = (7U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                             >> 2U));
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_cache 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__one_hot_lookup
                    [vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__found_in_cache];
            }
        } else if ((2U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__rw_flag))) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_done = 1U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_rw_flag = 2U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_addr 
                = (0xfffffffcU & vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr);
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_state = 4U;
        }
        if ((1U & (~ (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__rw_flag)))) {
            if ((2U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__rw_flag))) {
                if ((0U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__found_in_cache))) {
                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_mask 
                        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_mask_in;
                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_data 
                        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_data_in;
                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_block 
                        = (0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                                   >> 5U));
                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_word 
                        = (7U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                                 >> 2U));
                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_cache 
                        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__one_hot_lookup
                        [vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__found_in_cache];
                }
            }
        }
    } else {
        if ((1U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__state))) {
            if ((2U & (IData)(vlSelf->tb_riscv_cpu__DOT__mem_done))) {
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_mask = 0xfU;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_data 
                    = (IData)((vlSelf->tb_riscv_cpu__DOT__mem_data_i 
                               >> 0x20U));
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_block 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_block;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_word 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_word;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_cache 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_cache;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_word 
                    = ((0U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__critical_word))
                        ? 1U : 0U);
                vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_rw_flag = 1U;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_addr 
                    = ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_tag 
                        << 9U) | (((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_block) 
                                   << 5U) | ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_word) 
                                             << 2U)));
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_state = 2U;
            }
        } else if ((2U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__state))) {
            if ((2U & (IData)(vlSelf->tb_riscv_cpu__DOT__mem_done))) {
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_mask = 0xfU;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_data 
                    = (IData)((vlSelf->tb_riscv_cpu__DOT__mem_data_i 
                               >> 0x20U));
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_block 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_block;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_word 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_word;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_cache 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_cache;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_word 
                    = (7U & (((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__critical_word) 
                              == ((IData)(1U) + (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_word)))
                              ? ((IData)(2U) + (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_word))
                              : ((IData)(1U) + (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_word))));
                if ((0U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_word))) {
                    vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_rw_flag = 1U;
                    vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_addr 
                        = ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_tag 
                            << 9U) | (((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_block) 
                                       << 5U) | ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_word) 
                                                 << 2U)));
                } else {
                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_state = 0U;
                }
            }
        } else if ((4U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__state))) {
            if ((2U & (IData)(vlSelf->tb_riscv_cpu__DOT__mem_done))) {
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_state = 0U;
            }
        }
        if ((1U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__state))) {
            if ((2U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__state))) {
                if ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__rw_flag))) {
                    if ((0U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__found_in_cache))) {
                        if (((vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__one_hot_lookup
                              [vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__found_in_cache] 
                              == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_cache)) 
                             & ((0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                                         >> 5U)) == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_block)))) {
                            if (((7U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                                        >> 2U)) < (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_word))) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_done = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_block 
                                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_block;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_word 
                                    = (7U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                                             >> 2U));
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_cache 
                                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_cache;
                            }
                        } else {
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_done = 1U;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_block 
                                = (0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                                           >> 5U));
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_word 
                                = (7U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                                         >> 2U));
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_cache 
                                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__one_hot_lookup
                                [vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__found_in_cache];
                        }
                    }
                }
            }
        }
    }
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4 
        = (((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_block) 
            << 3U) | (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_word));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__rw_flag 
        = (((0U == VL_EXTENDS_II(32,2, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_cache))) 
            << 1U) | (0U == VL_EXTENDS_II(32,2, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_cache))));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__rw_flag 
        = (((1U == VL_EXTENDS_II(32,2, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_cache))) 
            << 1U) | (1U == VL_EXTENDS_II(32,2, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_cache))));
    vlSelf->tb_riscv_cpu__DOT__mem_rwe = (((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_rw_flag) 
                                           << 2U) | (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_rw_flag));
    vlSelf->tb_riscv_cpu__DOT__mem_addr = (((QData)((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_addr)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_addr)));
}

VL_INLINE_OPT void Vtb_riscv_cpu___024root___act_comb__TOP__0(Vtb_riscv_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid_cache = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_cache 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_cache;
    if ((0U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__state))) {
        if ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__rw_flag))) {
            if ((0U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache))) {
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid_cache 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp
                    [0U];
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_cache 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp
                    [0U];
            }
        }
    }
}

VL_INLINE_OPT void Vtb_riscv_cpu___024root___act_comb__TOP__1(Vtb_riscv_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___act_comb__TOP__1\n"); );
    // Body
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid_cache = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_cache 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_cache;
    if ((0U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__state))) {
        if ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__rw_flag))) {
            if ((0U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__found_in_cache))) {
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid_cache 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_id_tmp
                    [0U];
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_cache 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_id_tmp
                    [0U];
            }
        }
    }
}

void Vtb_riscv_cpu___024root___eval_act(Vtb_riscv_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___eval_act\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_riscv_cpu___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_riscv_cpu___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_riscv_cpu___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_riscv_cpu___024root___act_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_riscv_cpu___024root___act_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_riscv_cpu___024root___act_sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_riscv_cpu___024root___act_sequent__TOP__6(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_riscv_cpu___024root___act_sequent__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_riscv_cpu___024root___act_sequent__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((0x110ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_riscv_cpu___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0x101ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_riscv_cpu___024root___act_comb__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_riscv_cpu___024root___nba_sequent__TOP__0(Vtb_riscv_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vtask_tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__use_cache__0__cache_id;
    __Vtask_tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__use_cache__0__cache_id = 0;
    CData/*1:0*/ __Vtask_tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__use_cache__1__cache_id;
    __Vtask_tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__use_cache__1__cache_id = 0;
    CData/*1:0*/ __Vdly__tb_riscv_cpu__DOT__mem_state;
    __Vdly__tb_riscv_cpu__DOT__mem_state = 0;
    SData/*9:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__inst_mem__v0;
    __Vdlyvdim0__tb_riscv_cpu__DOT__inst_mem__v0 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_riscv_cpu__DOT__inst_mem__v0;
    __Vdlyvlsb__tb_riscv_cpu__DOT__inst_mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb_riscv_cpu__DOT__inst_mem__v0;
    __Vdlyvval__tb_riscv_cpu__DOT__inst_mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__inst_mem__v0;
    __Vdlyvset__tb_riscv_cpu__DOT__inst_mem__v0 = 0;
    SData/*9:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__inst_mem__v1;
    __Vdlyvdim0__tb_riscv_cpu__DOT__inst_mem__v1 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_riscv_cpu__DOT__inst_mem__v1;
    __Vdlyvlsb__tb_riscv_cpu__DOT__inst_mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__tb_riscv_cpu__DOT__inst_mem__v1;
    __Vdlyvval__tb_riscv_cpu__DOT__inst_mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__inst_mem__v1;
    __Vdlyvset__tb_riscv_cpu__DOT__inst_mem__v1 = 0;
    SData/*9:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__inst_mem__v2;
    __Vdlyvdim0__tb_riscv_cpu__DOT__inst_mem__v2 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_riscv_cpu__DOT__inst_mem__v2;
    __Vdlyvlsb__tb_riscv_cpu__DOT__inst_mem__v2 = 0;
    CData/*7:0*/ __Vdlyvval__tb_riscv_cpu__DOT__inst_mem__v2;
    __Vdlyvval__tb_riscv_cpu__DOT__inst_mem__v2 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__inst_mem__v2;
    __Vdlyvset__tb_riscv_cpu__DOT__inst_mem__v2 = 0;
    SData/*9:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__inst_mem__v3;
    __Vdlyvdim0__tb_riscv_cpu__DOT__inst_mem__v3 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_riscv_cpu__DOT__inst_mem__v3;
    __Vdlyvlsb__tb_riscv_cpu__DOT__inst_mem__v3 = 0;
    CData/*7:0*/ __Vdlyvval__tb_riscv_cpu__DOT__inst_mem__v3;
    __Vdlyvval__tb_riscv_cpu__DOT__inst_mem__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__inst_mem__v3;
    __Vdlyvset__tb_riscv_cpu__DOT__inst_mem__v3 = 0;
    SData/*9:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__data_mem__v0;
    __Vdlyvdim0__tb_riscv_cpu__DOT__data_mem__v0 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_riscv_cpu__DOT__data_mem__v0;
    __Vdlyvlsb__tb_riscv_cpu__DOT__data_mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb_riscv_cpu__DOT__data_mem__v0;
    __Vdlyvval__tb_riscv_cpu__DOT__data_mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__data_mem__v0;
    __Vdlyvset__tb_riscv_cpu__DOT__data_mem__v0 = 0;
    SData/*9:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__data_mem__v1;
    __Vdlyvdim0__tb_riscv_cpu__DOT__data_mem__v1 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_riscv_cpu__DOT__data_mem__v1;
    __Vdlyvlsb__tb_riscv_cpu__DOT__data_mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__tb_riscv_cpu__DOT__data_mem__v1;
    __Vdlyvval__tb_riscv_cpu__DOT__data_mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__data_mem__v1;
    __Vdlyvset__tb_riscv_cpu__DOT__data_mem__v1 = 0;
    SData/*9:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__data_mem__v2;
    __Vdlyvdim0__tb_riscv_cpu__DOT__data_mem__v2 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_riscv_cpu__DOT__data_mem__v2;
    __Vdlyvlsb__tb_riscv_cpu__DOT__data_mem__v2 = 0;
    CData/*7:0*/ __Vdlyvval__tb_riscv_cpu__DOT__data_mem__v2;
    __Vdlyvval__tb_riscv_cpu__DOT__data_mem__v2 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__data_mem__v2;
    __Vdlyvset__tb_riscv_cpu__DOT__data_mem__v2 = 0;
    SData/*9:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__data_mem__v3;
    __Vdlyvdim0__tb_riscv_cpu__DOT__data_mem__v3 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_riscv_cpu__DOT__data_mem__v3;
    __Vdlyvlsb__tb_riscv_cpu__DOT__data_mem__v3 = 0;
    CData/*7:0*/ __Vdlyvval__tb_riscv_cpu__DOT__data_mem__v3;
    __Vdlyvval__tb_riscv_cpu__DOT__data_mem__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__data_mem__v3;
    __Vdlyvset__tb_riscv_cpu__DOT__data_mem__v3 = 0;
    IData/*31:0*/ __Vdly__tb_riscv_cpu__DOT__cycle_count;
    __Vdly__tb_riscv_cpu__DOT__cycle_count = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse__v0;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse__v1;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse__v2;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse__v2 = 0;
    CData/*3:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter__v16;
    __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter__v16 = 0;
    CData/*0:0*/ __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter__v16;
    __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter__v16 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter__v16;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter__v16 = 0;
    CData/*0:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse__v32;
    __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse__v32 = 0;
    CData/*3:0*/ __Vdlyvdim1__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse__v32;
    __Vdlyvdim1__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse__v32 = 0;
    CData/*0:0*/ __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse__v32;
    __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse__v32 = 0;
    CData/*0:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid__v32;
    __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid__v32 = 0;
    CData/*3:0*/ __Vdlyvdim1__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid__v32;
    __Vdlyvdim1__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid__v32 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid__v32;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid__v32 = 0;
    CData/*0:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag__v0;
    __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag__v0 = 0;
    CData/*3:0*/ __Vdlyvdim1__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag__v0;
    __Vdlyvdim1__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag__v0 = 0;
    IData/*22:0*/ __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag__v0;
    __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v0;
    __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v0 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v0;
    __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v0;
    __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v0;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v1;
    __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v1 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v1;
    __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v1 = 0;
    CData/*7:0*/ __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v1;
    __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v1;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v1 = 0;
    CData/*6:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v2;
    __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v2 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v2;
    __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v2 = 0;
    CData/*7:0*/ __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v2;
    __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v2 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v2;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v2 = 0;
    CData/*6:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v3;
    __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v3 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v3;
    __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v3 = 0;
    CData/*7:0*/ __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v3;
    __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v3;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v3 = 0;
    CData/*6:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v0;
    __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v0 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v0;
    __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v0;
    __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v0;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v1;
    __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v1 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v1;
    __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v1 = 0;
    CData/*7:0*/ __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v1;
    __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v1;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v1 = 0;
    CData/*6:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v2;
    __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v2 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v2;
    __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v2 = 0;
    CData/*7:0*/ __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v2;
    __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v2 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v2;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v2 = 0;
    CData/*6:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v3;
    __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v3 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v3;
    __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v3 = 0;
    CData/*7:0*/ __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v3;
    __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v3;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse__v0;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse__v1;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse__v2;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse__v2 = 0;
    CData/*1:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter__v4;
    __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter__v4 = 0;
    CData/*1:0*/ __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter__v4;
    __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter__v4 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter__v4;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter__v4 = 0;
    CData/*1:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse__v16;
    __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse__v16 = 0;
    CData/*1:0*/ __Vdlyvdim1__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse__v16;
    __Vdlyvdim1__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse__v16 = 0;
    CData/*1:0*/ __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse__v16;
    __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse__v16 = 0;
    CData/*1:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid__v16;
    __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid__v16 = 0;
    CData/*1:0*/ __Vdlyvdim1__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid__v16;
    __Vdlyvdim1__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid__v16 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid__v16;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid__v16 = 0;
    CData/*1:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag__v0;
    __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag__v0 = 0;
    CData/*1:0*/ __Vdlyvdim1__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag__v0;
    __Vdlyvdim1__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag__v0 = 0;
    IData/*24:0*/ __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag__v0;
    __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v0;
    __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v0 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v0;
    __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v0;
    __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v0;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v1;
    __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v1 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v1;
    __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v1 = 0;
    CData/*7:0*/ __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v1;
    __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v1;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v1 = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v2;
    __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v2 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v2;
    __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v2 = 0;
    CData/*7:0*/ __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v2;
    __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v2 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v2;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v2 = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v3;
    __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v3 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v3;
    __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v3 = 0;
    CData/*7:0*/ __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v3;
    __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v3;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v3 = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v0;
    __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v0 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v0;
    __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v0;
    __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v0;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v1;
    __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v1 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v1;
    __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v1 = 0;
    CData/*7:0*/ __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v1;
    __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v1;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v1 = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v2;
    __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v2 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v2;
    __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v2 = 0;
    CData/*7:0*/ __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v2;
    __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v2 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v2;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v2 = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v3;
    __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v3 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v3;
    __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v3 = 0;
    CData/*7:0*/ __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v3;
    __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v3;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v3 = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v0;
    __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v0 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v0;
    __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v0;
    __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v0;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v1;
    __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v1 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v1;
    __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v1 = 0;
    CData/*7:0*/ __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v1;
    __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v1;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v1 = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v2;
    __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v2 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v2;
    __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v2 = 0;
    CData/*7:0*/ __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v2;
    __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v2 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v2;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v2 = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v3;
    __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v3 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v3;
    __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v3 = 0;
    CData/*7:0*/ __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v3;
    __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v3;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v3 = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v0;
    __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v0 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v0;
    __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v0;
    __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v0;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v1;
    __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v1 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v1;
    __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v1 = 0;
    CData/*7:0*/ __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v1;
    __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v1;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v1 = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v2;
    __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v2 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v2;
    __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v2 = 0;
    CData/*7:0*/ __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v2;
    __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v2 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v2;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v2 = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v3;
    __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v3 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v3;
    __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v3 = 0;
    CData/*7:0*/ __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v3;
    __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v3;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v3 = 0;
    IData/*31:0*/ __Vdly__tb_riscv_cpu__DOT__dut__DOT__reg_pc0__DOT__pc;
    __Vdly__tb_riscv_cpu__DOT__dut__DOT__reg_pc0__DOT__pc = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs__v0;
    __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs__v0;
    __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs__v0;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs__v0 = 0;
    // Body
    __Vdly__tb_riscv_cpu__DOT__cycle_count = vlSelf->tb_riscv_cpu__DOT__cycle_count;
    if (VL_UNLIKELY(((IData)(vlSelf->tb_riscv_cpu__DOT__rst_n) 
                     & VL_LTS_III(32, 0U, vlSelf->tb_riscv_cpu__DOT__cycle_count)))) {
        VL_WRITEF("CYCLE %0d [%0t]: mem_addr=0x%08x mem_rwe=%02x mem_sel=%02x\n",
                  32,vlSelf->tb_riscv_cpu__DOT__cycle_count,
                  64,VL_TIME_UNITED_Q(1000),-9,32,(IData)(vlSelf->tb_riscv_cpu__DOT__mem_addr),
                  4,vlSelf->tb_riscv_cpu__DOT__mem_rwe,
                  8,(IData)(vlSelf->tb_riscv_cpu__DOT__mem_sel));
    }
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v0 = 0U;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v1 = 0U;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v2 = 0U;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v3 = 0U;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v0 = 0U;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v1 = 0U;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v2 = 0U;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v3 = 0U;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v0 = 0U;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v1 = 0U;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v2 = 0U;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v3 = 0U;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v0 = 0U;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v1 = 0U;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v2 = 0U;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v3 = 0U;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v0 = 0U;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v1 = 0U;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v2 = 0U;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v3 = 0U;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v0 = 0U;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v1 = 0U;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v2 = 0U;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v3 = 0U;
    __Vdly__tb_riscv_cpu__DOT__mem_state = vlSelf->tb_riscv_cpu__DOT__mem_state;
    __Vdlyvset__tb_riscv_cpu__DOT__data_mem__v0 = 0U;
    __Vdlyvset__tb_riscv_cpu__DOT__data_mem__v1 = 0U;
    __Vdlyvset__tb_riscv_cpu__DOT__data_mem__v2 = 0U;
    __Vdlyvset__tb_riscv_cpu__DOT__data_mem__v3 = 0U;
    __Vdlyvset__tb_riscv_cpu__DOT__inst_mem__v0 = 0U;
    __Vdlyvset__tb_riscv_cpu__DOT__inst_mem__v1 = 0U;
    __Vdlyvset__tb_riscv_cpu__DOT__inst_mem__v2 = 0U;
    __Vdlyvset__tb_riscv_cpu__DOT__inst_mem__v3 = 0U;
    __Vdly__tb_riscv_cpu__DOT__dut__DOT__reg_pc0__DOT__pc 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__reg_pc0__DOT__pc;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter__v16 = 0U;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse__v0 = 0U;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse__v1 = 0U;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse__v2 = 0U;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid__v32 = 0U;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter__v4 = 0U;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse__v0 = 0U;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse__v1 = 0U;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse__v2 = 0U;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid__v16 = 0U;
    __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs__v0 = 0U;
    if (VL_UNLIKELY(vlSelf->tb_riscv_cpu__DOT__simulation_done)) {
        VL_WRITEF("========================================\nSimulation completed\n");
        vlSelf->tb_riscv_cpu__DOT__unnamedblk2__DOT__i = 8U;
        VL_WRITEF("Total cycles: %0d\nFinal memory contents:\n  data_mem[0] = 0x%08x\n  data_mem[1] = 0x%08x\n  data_mem[2] = 0x%08x\n  data_mem[3] = 0x%08x\n  data_mem[4] = 0x%08x\n  data_mem[5] = 0x%08x\n  data_mem[6] = 0x%08x\n  data_mem[7] = 0x%08x\n========================================\n",
                  32,vlSelf->tb_riscv_cpu__DOT__cycle_count,
                  32,vlSelf->tb_riscv_cpu__DOT__data_mem
                  [0U],32,vlSelf->tb_riscv_cpu__DOT__data_mem
                  [1U],32,vlSelf->tb_riscv_cpu__DOT__data_mem
                  [2U],32,vlSelf->tb_riscv_cpu__DOT__data_mem
                  [3U],32,vlSelf->tb_riscv_cpu__DOT__data_mem
                  [4U],32,vlSelf->tb_riscv_cpu__DOT__data_mem
                  [5U],32,vlSelf->tb_riscv_cpu__DOT__data_mem
                  [6U],32,vlSelf->tb_riscv_cpu__DOT__data_mem
                  [7U]);
        VL_FINISH_MT("../src/../tb_riscv_cpu.sv", 259, "");
    }
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__ram_done 
        = ((1U & (~ (IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst))) 
           && (0U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__rw_flag)));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__ram_busy 
        = ((1U & (~ (IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst))) 
           && (0U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__rw_flag)));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__ram_done 
        = ((1U & (~ (IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst))) 
           && (0U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__rw_flag)));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__ram_busy 
        = ((1U & (~ (IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst))) 
           && (0U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__rw_flag)));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__ram_done 
        = ((1U & (~ (IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst))) 
           && (0U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__rw_flag)));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__ram_busy 
        = ((1U & (~ (IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst))) 
           && (0U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__rw_flag)));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__ram_done 
        = ((1U & (~ (IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst))) 
           && (0U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__rw_flag)));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__ram_busy 
        = ((1U & (~ (IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst))) 
           && (0U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__rw_flag)));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__ram_done 
        = ((1U & (~ (IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst))) 
           && (0U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__rw_flag)));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__ram_busy 
        = ((1U & (~ (IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst))) 
           && (0U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__rw_flag)));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__ram_done 
        = ((1U & (~ (IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst))) 
           && (0U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__rw_flag)));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__ram_busy 
        = ((1U & (~ (IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst))) 
           && (0U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__rw_flag)));
    if (((IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) 
         | (4U == (0xcU & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stall))))) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_mem_offset = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stall) 
                         >> 2U)))) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_mem_offset 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset;
    }
    if ((1U & (~ (IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst)))) {
        if ((2U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__rw_flag))) {
            if ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_mask))) {
                __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v0 
                    = (0xffU & vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_data);
                __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v0 = 1U;
                __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v0 = 0U;
                __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v0 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4;
            }
            if ((2U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_mask))) {
                __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v1 
                    = (0xffU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_data 
                                >> 8U));
                __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v1 = 1U;
                __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v1 = 8U;
                __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v1 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4;
            }
            if ((4U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_mask))) {
                __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v2 
                    = (0xffU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_data 
                                >> 0x10U));
                __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v2 = 1U;
                __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v2 = 0x10U;
                __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v2 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4;
            }
            if ((8U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_mask))) {
                __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v3 
                    = (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_data 
                       >> 0x18U);
                __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v3 = 1U;
                __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v3 = 0x18U;
                __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v3 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4;
            }
        }
        if ((2U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__rw_flag))) {
            if ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_mask))) {
                __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v0 
                    = (0xffU & vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_data);
                __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v0 = 1U;
                __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v0 = 0U;
                __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v0 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4;
            }
            if ((2U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_mask))) {
                __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v1 
                    = (0xffU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_data 
                                >> 8U));
                __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v1 = 1U;
                __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v1 = 8U;
                __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v1 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4;
            }
            if ((4U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_mask))) {
                __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v2 
                    = (0xffU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_data 
                                >> 0x10U));
                __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v2 = 1U;
                __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v2 = 0x10U;
                __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v2 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4;
            }
            if ((8U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_mask))) {
                __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v3 
                    = (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_data 
                       >> 0x18U);
                __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v3 = 1U;
                __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v3 = 0x18U;
                __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v3 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4;
            }
        }
        if ((2U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__rw_flag))) {
            if ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_mask))) {
                __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v0 
                    = (0xffU & vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_data);
                __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v0 = 1U;
                __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v0 = 0U;
                __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v0 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4;
            }
            if ((2U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_mask))) {
                __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v1 
                    = (0xffU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_data 
                                >> 8U));
                __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v1 = 1U;
                __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v1 = 8U;
                __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v1 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4;
            }
            if ((4U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_mask))) {
                __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v2 
                    = (0xffU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_data 
                                >> 0x10U));
                __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v2 = 1U;
                __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v2 = 0x10U;
                __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v2 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4;
            }
            if ((8U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_mask))) {
                __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v3 
                    = (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_data 
                       >> 0x18U);
                __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v3 = 1U;
                __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v3 = 0x18U;
                __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v3 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4;
            }
        }
        if ((2U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__rw_flag))) {
            if ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_mask))) {
                __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v0 
                    = (0xffU & vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_data);
                __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v0 = 1U;
                __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v0 = 0U;
                __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v0 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4;
            }
            if ((2U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_mask))) {
                __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v1 
                    = (0xffU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_data 
                                >> 8U));
                __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v1 = 1U;
                __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v1 = 8U;
                __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v1 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4;
            }
            if ((4U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_mask))) {
                __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v2 
                    = (0xffU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_data 
                                >> 0x10U));
                __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v2 = 1U;
                __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v2 = 0x10U;
                __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v2 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4;
            }
            if ((8U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_mask))) {
                __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v3 
                    = (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_data 
                       >> 0x18U);
                __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v3 = 1U;
                __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v3 = 0x18U;
                __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v3 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4;
            }
        }
        if ((2U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__rw_flag))) {
            if ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_mask))) {
                __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v0 
                    = (0xffU & vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_data);
                __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v0 = 1U;
                __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v0 = 0U;
                __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v0 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4;
            }
            if ((2U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_mask))) {
                __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v1 
                    = (0xffU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_data 
                                >> 8U));
                __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v1 = 1U;
                __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v1 = 8U;
                __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v1 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4;
            }
            if ((4U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_mask))) {
                __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v2 
                    = (0xffU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_data 
                                >> 0x10U));
                __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v2 = 1U;
                __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v2 = 0x10U;
                __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v2 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4;
            }
            if ((8U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_mask))) {
                __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v3 
                    = (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_data 
                       >> 0x18U);
                __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v3 = 1U;
                __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v3 = 0x18U;
                __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v3 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4;
            }
        }
        if ((2U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__rw_flag))) {
            if ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_mask))) {
                __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v0 
                    = (0xffU & vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_data);
                __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v0 = 1U;
                __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v0 = 0U;
                __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v0 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4;
            }
            if ((2U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_mask))) {
                __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v1 
                    = (0xffU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_data 
                                >> 8U));
                __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v1 = 1U;
                __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v1 = 8U;
                __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v1 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4;
            }
            if ((4U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_mask))) {
                __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v2 
                    = (0xffU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_data 
                                >> 0x10U));
                __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v2 = 1U;
                __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v2 = 0x10U;
                __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v2 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4;
            }
            if ((8U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_mask))) {
                __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v3 
                    = (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_data 
                       >> 0x18U);
                __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v3 = 1U;
                __Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v3 = 0x18U;
                __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v3 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4;
            }
        }
        if (((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__wb_we) 
             & (0U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__wb_reg_waddr)))) {
            __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs__v0 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__wb_reg_wdata;
            __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs__v0 = 1U;
            __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs__v0 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__wb_reg_waddr;
        }
    }
    if (vlSelf->tb_riscv_cpu__DOT__rst_n) {
        if ((2U & (IData)(vlSelf->tb_riscv_cpu__DOT__mem_state))) {
            if ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__mem_state))) {
                vlSelf->tb_riscv_cpu__DOT__mem_busy = 0U;
                vlSelf->tb_riscv_cpu__DOT__mem_done = 0U;
                __Vdly__tb_riscv_cpu__DOT__mem_state = 0U;
            } else {
                vlSelf->tb_riscv_cpu__DOT__mem_done = 0U;
                __Vdly__tb_riscv_cpu__DOT__mem_state = 0U;
            }
        } else if ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__mem_state))) {
            if (vlSelf->tb_riscv_cpu__DOT__mem_operation_pending) {
                if (VL_UNLIKELY((0U != (IData)(vlSelf->tb_riscv_cpu__DOT__pending_we)))) {
                    VL_WRITEF("MEM WRITE [%0t]: addr=0x%08x data=0x%016x we=%02x sel=%02x\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,32,vlSelf->tb_riscv_cpu__DOT__pending_addr,
                              64,vlSelf->tb_riscv_cpu__DOT__pending_data,
                              4,(IData)(vlSelf->tb_riscv_cpu__DOT__pending_we),
                              8,vlSelf->tb_riscv_cpu__DOT__pending_sel);
                    if ((0x1000U > vlSelf->tb_riscv_cpu__DOT__pending_addr)) {
                        if ((1U & ((IData)(vlSelf->tb_riscv_cpu__DOT__pending_we) 
                                   & (IData)(vlSelf->tb_riscv_cpu__DOT__pending_sel)))) {
                            __Vdlyvval__tb_riscv_cpu__DOT__inst_mem__v0 
                                = (0xffU & (IData)(vlSelf->tb_riscv_cpu__DOT__pending_data));
                            __Vdlyvset__tb_riscv_cpu__DOT__inst_mem__v0 = 1U;
                            __Vdlyvlsb__tb_riscv_cpu__DOT__inst_mem__v0 = 0U;
                            __Vdlyvdim0__tb_riscv_cpu__DOT__inst_mem__v0 
                                = (0x3ffU & (vlSelf->tb_riscv_cpu__DOT__pending_addr 
                                             >> 2U));
                        }
                        if ((1U & (((IData)(vlSelf->tb_riscv_cpu__DOT__pending_we) 
                                    >> 1U) & ((IData)(vlSelf->tb_riscv_cpu__DOT__pending_sel) 
                                              >> 1U)))) {
                            __Vdlyvval__tb_riscv_cpu__DOT__inst_mem__v1 
                                = (0xffU & (IData)(
                                                   (vlSelf->tb_riscv_cpu__DOT__pending_data 
                                                    >> 8U)));
                            __Vdlyvset__tb_riscv_cpu__DOT__inst_mem__v1 = 1U;
                            __Vdlyvlsb__tb_riscv_cpu__DOT__inst_mem__v1 = 8U;
                            __Vdlyvdim0__tb_riscv_cpu__DOT__inst_mem__v1 
                                = (0x3ffU & (vlSelf->tb_riscv_cpu__DOT__pending_addr 
                                             >> 2U));
                        }
                        if ((1U & (((IData)(vlSelf->tb_riscv_cpu__DOT__pending_we) 
                                    >> 2U) & ((IData)(vlSelf->tb_riscv_cpu__DOT__pending_sel) 
                                              >> 2U)))) {
                            __Vdlyvval__tb_riscv_cpu__DOT__inst_mem__v2 
                                = (0xffU & (IData)(
                                                   (vlSelf->tb_riscv_cpu__DOT__pending_data 
                                                    >> 0x10U)));
                            __Vdlyvset__tb_riscv_cpu__DOT__inst_mem__v2 = 1U;
                            __Vdlyvlsb__tb_riscv_cpu__DOT__inst_mem__v2 = 0x10U;
                            __Vdlyvdim0__tb_riscv_cpu__DOT__inst_mem__v2 
                                = (0x3ffU & (vlSelf->tb_riscv_cpu__DOT__pending_addr 
                                             >> 2U));
                        }
                        if ((IData)((((IData)(vlSelf->tb_riscv_cpu__DOT__pending_we) 
                                      >> 3U) & ((IData)(vlSelf->tb_riscv_cpu__DOT__pending_sel) 
                                                >> 3U)))) {
                            __Vdlyvval__tb_riscv_cpu__DOT__inst_mem__v3 
                                = (0xffU & (IData)(
                                                   (vlSelf->tb_riscv_cpu__DOT__pending_data 
                                                    >> 0x18U)));
                            __Vdlyvset__tb_riscv_cpu__DOT__inst_mem__v3 = 1U;
                            __Vdlyvlsb__tb_riscv_cpu__DOT__inst_mem__v3 = 0x18U;
                            __Vdlyvdim0__tb_riscv_cpu__DOT__inst_mem__v3 
                                = (0x3ffU & (vlSelf->tb_riscv_cpu__DOT__pending_addr 
                                             >> 2U));
                        }
                    } else {
                        if ((1U & ((IData)(vlSelf->tb_riscv_cpu__DOT__pending_we) 
                                   & (IData)(vlSelf->tb_riscv_cpu__DOT__pending_sel)))) {
                            __Vdlyvval__tb_riscv_cpu__DOT__data_mem__v0 
                                = (0xffU & (IData)(vlSelf->tb_riscv_cpu__DOT__pending_data));
                            __Vdlyvset__tb_riscv_cpu__DOT__data_mem__v0 = 1U;
                            __Vdlyvlsb__tb_riscv_cpu__DOT__data_mem__v0 = 0U;
                            __Vdlyvdim0__tb_riscv_cpu__DOT__data_mem__v0 
                                = (0x3ffU & (vlSelf->tb_riscv_cpu__DOT__pending_addr 
                                             >> 2U));
                        }
                        if ((1U & (((IData)(vlSelf->tb_riscv_cpu__DOT__pending_we) 
                                    >> 1U) & ((IData)(vlSelf->tb_riscv_cpu__DOT__pending_sel) 
                                              >> 1U)))) {
                            __Vdlyvval__tb_riscv_cpu__DOT__data_mem__v1 
                                = (0xffU & (IData)(
                                                   (vlSelf->tb_riscv_cpu__DOT__pending_data 
                                                    >> 8U)));
                            __Vdlyvset__tb_riscv_cpu__DOT__data_mem__v1 = 1U;
                            __Vdlyvlsb__tb_riscv_cpu__DOT__data_mem__v1 = 8U;
                            __Vdlyvdim0__tb_riscv_cpu__DOT__data_mem__v1 
                                = (0x3ffU & (vlSelf->tb_riscv_cpu__DOT__pending_addr 
                                             >> 2U));
                        }
                        if ((1U & (((IData)(vlSelf->tb_riscv_cpu__DOT__pending_we) 
                                    >> 2U) & ((IData)(vlSelf->tb_riscv_cpu__DOT__pending_sel) 
                                              >> 2U)))) {
                            __Vdlyvval__tb_riscv_cpu__DOT__data_mem__v2 
                                = (0xffU & (IData)(
                                                   (vlSelf->tb_riscv_cpu__DOT__pending_data 
                                                    >> 0x10U)));
                            __Vdlyvset__tb_riscv_cpu__DOT__data_mem__v2 = 1U;
                            __Vdlyvlsb__tb_riscv_cpu__DOT__data_mem__v2 = 0x10U;
                            __Vdlyvdim0__tb_riscv_cpu__DOT__data_mem__v2 
                                = (0x3ffU & (vlSelf->tb_riscv_cpu__DOT__pending_addr 
                                             >> 2U));
                        }
                        if ((IData)((((IData)(vlSelf->tb_riscv_cpu__DOT__pending_we) 
                                      >> 3U) & ((IData)(vlSelf->tb_riscv_cpu__DOT__pending_sel) 
                                                >> 3U)))) {
                            __Vdlyvval__tb_riscv_cpu__DOT__data_mem__v3 
                                = (0xffU & (IData)(
                                                   (vlSelf->tb_riscv_cpu__DOT__pending_data 
                                                    >> 0x18U)));
                            __Vdlyvset__tb_riscv_cpu__DOT__data_mem__v3 = 1U;
                            __Vdlyvlsb__tb_riscv_cpu__DOT__data_mem__v3 = 0x18U;
                            __Vdlyvdim0__tb_riscv_cpu__DOT__data_mem__v3 
                                = (0x3ffU & (vlSelf->tb_riscv_cpu__DOT__pending_addr 
                                             >> 2U));
                        }
                    }
                } else if ((0x1000U > vlSelf->tb_riscv_cpu__DOT__pending_addr)) {
                    vlSelf->tb_riscv_cpu__DOT__mem_data_i 
                        = (QData)((IData)(vlSelf->tb_riscv_cpu__DOT__inst_mem
                                          [(0x3ffU 
                                            & (vlSelf->tb_riscv_cpu__DOT__pending_addr 
                                               >> 2U))]));
                    VL_WRITEF("MEM READ INST [%0t]: addr=0x%08x data=0x%08x\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,32,vlSelf->tb_riscv_cpu__DOT__pending_addr,
                              32,vlSelf->tb_riscv_cpu__DOT__inst_mem
                              [(0x3ffU & (vlSelf->tb_riscv_cpu__DOT__pending_addr 
                                          >> 2U))]);
                } else {
                    vlSelf->tb_riscv_cpu__DOT__mem_data_i 
                        = (QData)((IData)(vlSelf->tb_riscv_cpu__DOT__data_mem
                                          [(0x3ffU 
                                            & (vlSelf->tb_riscv_cpu__DOT__pending_addr 
                                               >> 2U))]));
                    VL_WRITEF("MEM READ DATA [%0t]: addr=0x%08x data=0x%08x\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,32,vlSelf->tb_riscv_cpu__DOT__pending_addr,
                              32,vlSelf->tb_riscv_cpu__DOT__data_mem
                              [(0x3ffU & (vlSelf->tb_riscv_cpu__DOT__pending_addr 
                                          >> 2U))]);
                }
                vlSelf->tb_riscv_cpu__DOT__mem_operation_pending = 0U;
            }
            vlSelf->tb_riscv_cpu__DOT__mem_busy = 0U;
            vlSelf->tb_riscv_cpu__DOT__mem_done = 1U;
            __Vdly__tb_riscv_cpu__DOT__mem_state = 2U;
        } else {
            vlSelf->tb_riscv_cpu__DOT__mem_busy = 0U;
            vlSelf->tb_riscv_cpu__DOT__mem_done = 0U;
            if (VL_UNLIKELY(((0U != (IData)(vlSelf->tb_riscv_cpu__DOT__mem_rwe)) 
                             | (0U != (IData)(vlSelf->tb_riscv_cpu__DOT__mem_sel))))) {
                VL_WRITEF("MEM START [%0t]: addr=0x%08x we=%02x sel=%02x\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,32,(IData)(vlSelf->tb_riscv_cpu__DOT__mem_addr),
                          4,vlSelf->tb_riscv_cpu__DOT__mem_rwe,
                          8,(IData)(vlSelf->tb_riscv_cpu__DOT__mem_sel));
                vlSelf->tb_riscv_cpu__DOT__mem_busy = 1U;
                __Vdly__tb_riscv_cpu__DOT__mem_state = 1U;
                vlSelf->tb_riscv_cpu__DOT__pending_addr 
                    = (IData)(vlSelf->tb_riscv_cpu__DOT__mem_addr);
                vlSelf->tb_riscv_cpu__DOT__pending_we 
                    = vlSelf->tb_riscv_cpu__DOT__mem_rwe;
                vlSelf->tb_riscv_cpu__DOT__pending_sel 
                    = vlSelf->tb_riscv_cpu__DOT__mem_sel;
                vlSelf->tb_riscv_cpu__DOT__pending_data 
                    = (((QData)((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_write_data)) 
                        << 0x20U) | (QData)((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_write_data)));
                vlSelf->tb_riscv_cpu__DOT__mem_operation_pending = 1U;
            }
        }
    } else {
        vlSelf->tb_riscv_cpu__DOT__mem_data_i = 0ULL;
        vlSelf->tb_riscv_cpu__DOT__mem_busy = 0U;
        vlSelf->tb_riscv_cpu__DOT__mem_done = 0U;
        __Vdly__tb_riscv_cpu__DOT__mem_state = 0U;
        vlSelf->tb_riscv_cpu__DOT__mem_operation_pending = 0U;
        vlSelf->tb_riscv_cpu__DOT__pending_addr = 0U;
        vlSelf->tb_riscv_cpu__DOT__pending_we = 0U;
        vlSelf->tb_riscv_cpu__DOT__pending_sel = 0U;
        vlSelf->tb_riscv_cpu__DOT__pending_data = 0ULL;
    }
    if ((((IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) 
          | (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__br)) 
         | (2U == (6U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stall))))) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_pc = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stall) 
                         >> 1U)))) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_pc 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__if_pc;
    }
    if (((~ (IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst)) 
         & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__br))) {
        __Vdly__tb_riscv_cpu__DOT__dut__DOT__reg_pc0__DOT__pc 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__br_addr;
    } else if ((1U & ((~ (IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst)) 
                      & (~ (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stall))))) {
        __Vdly__tb_riscv_cpu__DOT__dut__DOT__reg_pc0__DOT__pc 
            = ((IData)(4U) + vlSelf->tb_riscv_cpu__DOT__dut__DOT__reg_pc0__DOT__pc);
    }
    if (((IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) 
         | (4U == (0xcU & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stall))))) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_link_addr = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_alusel = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1 = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stall) 
                         >> 2U)))) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_link_addr 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_link_addr;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_alusel 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv1;
    }
    if (vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT____Vcellout__genblk6__BRA__1__KET____DOT__RAM____pinNumber7 = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT____Vcellout__genblk6__BRA__0__KET____DOT__RAM____pinNumber7 = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__pc = 0U;
        __Vdly__tb_riscv_cpu__DOT__dut__DOT__reg_pc0__DOT__pc = 4U;
    } else {
        if ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__rw_flag))) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT____Vcellout__genblk6__BRA__1__KET____DOT__RAM____pinNumber7 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory
                [vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4];
        }
        if ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__rw_flag))) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT____Vcellout__genblk6__BRA__0__KET____DOT__RAM____pinNumber7 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory
                [vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4];
        }
        if ((1U & (~ (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stall)))) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__pc 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__reg_pc0__DOT__pc;
        }
    }
    if ((1U & (~ (IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst)))) {
        if ((1U & (~ (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stall)))) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__right_one 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__reg_pc0__DOT__right_one;
        }
    }
    if (vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__k = 0x10U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__j = 0x10U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_done = 0U;
        __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse__v0 = 1U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__state = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_cache = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_block = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_word = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__critical_word = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__RAM_read_select = 0U;
        __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse__v1 = 1U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_block = 0U;
        __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse__v2 = 1U;
    } else {
        if ((1U & (~ ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_cache) 
                      >> 1U)))) {
            if (VL_UNLIKELY(((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_block) 
                             != (0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                                         >> 5U))))) {
                VL_WRITEF("Assertion Failed: read_block == addr_index\n");
            }
            __Vtask_tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__use_cache__0__cache_id 
                = (1U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_cache));
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__RAM_read_select 
                = (1U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_cache));
            if (((IData)(__Vtask_tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__use_cache__0__cache_id) 
                 != vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_id_tmp
                 [0U])) {
                __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter__v16 
                    = (1U & ((IData)(1U) + vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter
                             [(0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                                       >> 5U))]));
                __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter__v16 = 1U;
                __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter__v16 
                    = (0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                               >> 5U));
                __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse__v32 
                    = (1U & ((IData)(1U) + vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter
                             [(0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                                       >> 5U))]));
                __Vdlyvdim1__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse__v32 
                    = (0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                               >> 5U));
                __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse__v32 
                    = __Vtask_tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__use_cache__0__cache_id;
            } else if (VL_UNLIKELY((vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                                    [__Vtask_tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__use_cache__0__cache_id]
                                    [(0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                                              >> 5U))] 
                                    != vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter
                                    [(0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                                              >> 5U))]))) {
                VL_WRITEF("Assertion Failed: recuse[cache_id][addr_index] == recent_use_counter\n");
            }
        }
        if (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid_flag) {
            __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid__v32 = 1U;
            __Vdlyvdim1__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid__v32 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid_block;
            __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid__v32 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid_cache;
            __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag__v0 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid_tag;
            __Vdlyvdim1__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag__v0 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid_block;
            __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag__v0 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid_cache;
        }
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__state 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_state;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_done 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_done;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_cache 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_cache;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_tag 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_tag;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_block 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_block;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_word 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_word;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__critical_word 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_critical_word;
    }
    if ((((IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) 
          | (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__br)) 
         | (2U == (6U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stall))))) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stall) 
                         >> 1U)))) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__if_inst;
    }
    if (((IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) 
         | (8U == (0x18U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stall))))) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_wdata_i = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_we_i = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_waddr_i = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_rt_data = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_aluop = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stall) 
                         >> 3U)))) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_mem_addr;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_wdata_i 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_reg_wdata;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_we_i 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_we_i;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_waddr_i 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_reg_waddr_i;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_rt_data 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_aluop 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop;
    }
    if (vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellout__genblk6__BRA__3__KET____DOT__RAM____pinNumber7 = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellout__genblk6__BRA__2__KET____DOT__RAM____pinNumber7 = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellout__genblk6__BRA__1__KET____DOT__RAM____pinNumber7 = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellout__genblk6__BRA__0__KET____DOT__RAM____pinNumber7 = 0U;
    } else {
        if ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__rw_flag))) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellout__genblk6__BRA__3__KET____DOT__RAM____pinNumber7 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory
                [vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4];
        }
        if ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__rw_flag))) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellout__genblk6__BRA__2__KET____DOT__RAM____pinNumber7 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory
                [vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4];
        }
        if ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__rw_flag))) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellout__genblk6__BRA__1__KET____DOT__RAM____pinNumber7 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory
                [vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4];
        }
        if ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__rw_flag))) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellout__genblk6__BRA__0__KET____DOT__RAM____pinNumber7 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory
                [vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4];
        }
    }
    if (vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__k = 4U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__j = 4U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_done = 0U;
        __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse__v0 = 1U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__state = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_cache = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_block = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_word = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__critical_word = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__RAM_read_select = 0U;
        __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse__v1 = 1U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_block = 0U;
        __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse__v2 = 1U;
    } else {
        if ((1U & (~ ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_cache) 
                      >> 2U)))) {
            if (VL_UNLIKELY(((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_block) 
                             != (3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                                       >> 5U))))) {
                VL_WRITEF("Assertion Failed: read_block == addr_index\n");
            }
            __Vtask_tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__use_cache__1__cache_id 
                = (3U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_cache));
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__RAM_read_select 
                = (3U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_cache));
            if (((IData)(__Vtask_tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__use_cache__1__cache_id) 
                 != vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp
                 [0U])) {
                __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter__v4 
                    = (3U & ((IData)(1U) + vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter
                             [(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                                     >> 5U))]));
                __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter__v4 = 1U;
                __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter__v4 
                    = (3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                             >> 5U));
                __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse__v16 
                    = (3U & ((IData)(1U) + vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter
                             [(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                                     >> 5U))]));
                __Vdlyvdim1__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse__v16 
                    = (3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                             >> 5U));
                __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse__v16 
                    = __Vtask_tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__use_cache__1__cache_id;
            } else if (VL_UNLIKELY((vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                                    [__Vtask_tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__use_cache__1__cache_id]
                                    [(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                                            >> 5U))] 
                                    != vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter
                                    [(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                                            >> 5U))]))) {
                VL_WRITEF("Assertion Failed: recuse[cache_id][addr_index] == recent_use_counter\n");
            }
        }
        if (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid_flag) {
            __Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid__v16 = 1U;
            __Vdlyvdim1__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid__v16 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid_block;
            __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid__v16 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid_cache;
            __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag__v0 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid_tag;
            __Vdlyvdim1__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag__v0 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid_block;
            __Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag__v0 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid_cache;
        }
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__state 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_state;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_done 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_done;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_cache 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_cache;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_tag 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_tag;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_block 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_block;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_word 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_word;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__critical_word 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_critical_word;
    }
    if (((IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) 
         | (4U == (0xcU & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stall))))) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_we_i = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_reg_waddr_i = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2 = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stall) 
                         >> 2U)))) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_we_i 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_reg_waddr_i 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv2;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop;
    }
    if (((~ (IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst)) 
         & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__br))) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__reg_pc0__DOT__right_one = 1U;
    } else if ((1U & ((~ (IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst)) 
                      & (~ (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stall))))) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__reg_pc0__DOT__right_one = 0U;
    }
    if (vlSelf->tb_riscv_cpu__DOT__rst_n) {
        __Vdly__tb_riscv_cpu__DOT__cycle_count = ((IData)(1U) 
                                                  + vlSelf->tb_riscv_cpu__DOT__cycle_count);
        if (VL_GTES_III(32, vlSelf->tb_riscv_cpu__DOT__cycle_count, vlSelf->tb_riscv_cpu__DOT__max_cycles)) {
            vlSelf->tb_riscv_cpu__DOT__simulation_done = 1U;
        }
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs__v0) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs__v0] 
            = __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs__v0;
    }
    vlSelf->tb_riscv_cpu__DOT__mem_state = __Vdly__tb_riscv_cpu__DOT__mem_state;
    if (__Vdlyvset__tb_riscv_cpu__DOT__inst_mem__v0) {
        vlSelf->tb_riscv_cpu__DOT__inst_mem[__Vdlyvdim0__tb_riscv_cpu__DOT__inst_mem__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__inst_mem__v0))) 
                & vlSelf->tb_riscv_cpu__DOT__inst_mem
                [__Vdlyvdim0__tb_riscv_cpu__DOT__inst_mem__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_riscv_cpu__DOT__inst_mem__v0) 
                                   << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__inst_mem__v0))));
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__inst_mem__v1) {
        vlSelf->tb_riscv_cpu__DOT__inst_mem[__Vdlyvdim0__tb_riscv_cpu__DOT__inst_mem__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__inst_mem__v1))) 
                & vlSelf->tb_riscv_cpu__DOT__inst_mem
                [__Vdlyvdim0__tb_riscv_cpu__DOT__inst_mem__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_riscv_cpu__DOT__inst_mem__v1) 
                                   << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__inst_mem__v1))));
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__inst_mem__v2) {
        vlSelf->tb_riscv_cpu__DOT__inst_mem[__Vdlyvdim0__tb_riscv_cpu__DOT__inst_mem__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__inst_mem__v2))) 
                & vlSelf->tb_riscv_cpu__DOT__inst_mem
                [__Vdlyvdim0__tb_riscv_cpu__DOT__inst_mem__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_riscv_cpu__DOT__inst_mem__v2) 
                                   << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__inst_mem__v2))));
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__inst_mem__v3) {
        vlSelf->tb_riscv_cpu__DOT__inst_mem[__Vdlyvdim0__tb_riscv_cpu__DOT__inst_mem__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__inst_mem__v3))) 
                & vlSelf->tb_riscv_cpu__DOT__inst_mem
                [__Vdlyvdim0__tb_riscv_cpu__DOT__inst_mem__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_riscv_cpu__DOT__inst_mem__v3) 
                                   << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__inst_mem__v3))));
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__data_mem__v0) {
        vlSelf->tb_riscv_cpu__DOT__data_mem[__Vdlyvdim0__tb_riscv_cpu__DOT__data_mem__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__data_mem__v0))) 
                & vlSelf->tb_riscv_cpu__DOT__data_mem
                [__Vdlyvdim0__tb_riscv_cpu__DOT__data_mem__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_riscv_cpu__DOT__data_mem__v0) 
                                   << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__data_mem__v0))));
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__data_mem__v1) {
        vlSelf->tb_riscv_cpu__DOT__data_mem[__Vdlyvdim0__tb_riscv_cpu__DOT__data_mem__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__data_mem__v1))) 
                & vlSelf->tb_riscv_cpu__DOT__data_mem
                [__Vdlyvdim0__tb_riscv_cpu__DOT__data_mem__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_riscv_cpu__DOT__data_mem__v1) 
                                   << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__data_mem__v1))));
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__data_mem__v2) {
        vlSelf->tb_riscv_cpu__DOT__data_mem[__Vdlyvdim0__tb_riscv_cpu__DOT__data_mem__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__data_mem__v2))) 
                & vlSelf->tb_riscv_cpu__DOT__data_mem
                [__Vdlyvdim0__tb_riscv_cpu__DOT__data_mem__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_riscv_cpu__DOT__data_mem__v2) 
                                   << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__data_mem__v2))));
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__data_mem__v3) {
        vlSelf->tb_riscv_cpu__DOT__data_mem[__Vdlyvdim0__tb_riscv_cpu__DOT__data_mem__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__data_mem__v3))) 
                & vlSelf->tb_riscv_cpu__DOT__data_mem
                [__Vdlyvdim0__tb_riscv_cpu__DOT__data_mem__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_riscv_cpu__DOT__data_mem__v3) 
                                   << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__data_mem__v3))));
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v0) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v0))) 
                & vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory
                [__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v0) 
                                   << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v0))));
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v1) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v1))) 
                & vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory
                [__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v1) 
                                   << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v1))));
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v2) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v2))) 
                & vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory
                [__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v2) 
                                   << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v2))));
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v3) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v3))) 
                & vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory
                [__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v3) 
                                   << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v3))));
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v0) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v0))) 
                & vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory
                [__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v0) 
                                   << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v0))));
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v1) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v1))) 
                & vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory
                [__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v1) 
                                   << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v1))));
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v2) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v2))) 
                & vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory
                [__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v2) 
                                   << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v2))));
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v3) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v3))) 
                & vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory
                [__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v3) 
                                   << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v3))));
    }
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__reg_pc0__DOT__pc 
        = __Vdly__tb_riscv_cpu__DOT__dut__DOT__reg_pc0__DOT__pc;
    if (__Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse__v0) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[0U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse[0U][0U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid[0U][0U] = 0U;
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse__v1) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[1U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse[0U][1U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid[0U][1U] = 0U;
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse__v2) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[2U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[3U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[4U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[5U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[6U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[7U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[8U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[9U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[0xaU] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[0xbU] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[0xcU] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[0xdU] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[0xeU] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[0xfU] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse[0U][2U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse[0U][3U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse[0U][4U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse[0U][5U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse[0U][6U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse[0U][7U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse[0U][8U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse[0U][9U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse[0U][0xaU] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse[0U][0xbU] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse[0U][0xcU] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse[0U][0xdU] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse[0U][0xeU] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse[0U][0xfU] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse[1U][0U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse[1U][1U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse[1U][2U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse[1U][3U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse[1U][4U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse[1U][5U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse[1U][6U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse[1U][7U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse[1U][8U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse[1U][9U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse[1U][0xaU] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse[1U][0xbU] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse[1U][0xcU] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse[1U][0xdU] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse[1U][0xeU] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse[1U][0xfU] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid[0U][2U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid[0U][3U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid[0U][4U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid[0U][5U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid[0U][6U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid[0U][7U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid[0U][8U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid[0U][9U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid[0U][0xaU] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid[0U][0xbU] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid[0U][0xcU] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid[0U][0xdU] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid[0U][0xeU] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid[0U][0xfU] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid[1U][0U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid[1U][1U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid[1U][2U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid[1U][3U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid[1U][4U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid[1U][5U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid[1U][6U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid[1U][7U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid[1U][8U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid[1U][9U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid[1U][0xaU] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid[1U][0xbU] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid[1U][0xcU] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid[1U][0xdU] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid[1U][0xeU] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid[1U][0xfU] = 0U;
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter__v16) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter__v16] 
            = __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter__v16;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse[__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse__v32][__Vdlyvdim1__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse__v32] 
            = __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse__v32;
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid__v32) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag[__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag__v0][__Vdlyvdim1__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag__v0] 
            = __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag__v0;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid[__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid__v32][__Vdlyvdim1__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid__v32] = 1U;
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v0) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v0))) 
                & vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory
                [__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v0) 
                                   << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v0))));
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v1) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v1))) 
                & vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory
                [__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v1) 
                                   << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v1))));
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v2) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v2))) 
                & vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory
                [__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v2) 
                                   << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v2))));
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v3) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v3))) 
                & vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory
                [__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v3) 
                                   << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory__v3))));
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v0) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v0))) 
                & vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory
                [__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v0) 
                                   << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v0))));
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v1) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v1))) 
                & vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory
                [__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v1) 
                                   << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v1))));
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v2) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v2))) 
                & vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory
                [__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v2) 
                                   << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v2))));
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v3) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v3))) 
                & vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory
                [__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v3) 
                                   << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory__v3))));
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v0) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v0))) 
                & vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory
                [__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v0) 
                                   << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v0))));
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v1) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v1))) 
                & vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory
                [__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v1) 
                                   << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v1))));
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v2) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v2))) 
                & vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory
                [__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v2) 
                                   << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v2))));
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v3) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v3))) 
                & vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory
                [__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v3) 
                                   << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory__v3))));
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v0) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v0))) 
                & vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory
                [__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v0) 
                                   << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v0))));
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v1) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v1))) 
                & vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory
                [__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v1) 
                                   << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v1))));
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v2) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v2))) 
                & vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory
                [__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v2) 
                                   << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v2))));
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v3) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v3))) 
                & vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory
                [__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v3) 
                                   << (IData)(__Vdlyvlsb__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory__v3))));
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse__v0) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter[0U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse[0U][0U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid[0U][0U] = 0U;
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse__v1) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter[1U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse[0U][1U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid[0U][1U] = 0U;
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse__v2) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter[2U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter[3U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse[0U][2U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse[0U][3U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse[1U][0U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse[1U][1U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse[1U][2U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse[1U][3U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse[2U][0U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse[2U][1U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse[2U][2U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse[2U][3U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse[3U][0U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse[3U][1U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse[3U][2U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse[3U][3U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid[0U][2U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid[0U][3U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid[1U][0U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid[1U][1U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid[1U][2U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid[1U][3U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid[2U][0U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid[2U][1U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid[2U][2U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid[2U][3U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid[3U][0U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid[3U][1U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid[3U][2U] = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid[3U][3U] = 0U;
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter__v4) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter[__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter__v4] 
            = __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter__v4;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse[__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse__v16][__Vdlyvdim1__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse__v16] 
            = __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse__v16;
    }
    if (__Vdlyvset__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid__v16) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag[__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag__v0][__Vdlyvdim1__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag__v0] 
            = __Vdlyvval__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag__v0;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid[__Vdlyvdim0__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid__v16][__Vdlyvdim1__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid__v16] = 1U;
    }
    if (((IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) 
         | (0x10U == (0x30U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stall))))) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__wb_we = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__wb_reg_waddr = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__wb_reg_wdata = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stall) 
                         >> 4U)))) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__wb_we 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_we_o;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__wb_reg_waddr 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_waddr_o;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__wb_reg_wdata 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_wdata_o;
    }
    vlSelf->tb_riscv_cpu__DOT__cycle_count = __Vdly__tb_riscv_cpu__DOT__cycle_count;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__RAM_read_data[1U] 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT____Vcellout__genblk6__BRA__1__KET____DOT__RAM____pinNumber7;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__RAM_read_data[0U] 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT____Vcellout__genblk6__BRA__0__KET____DOT__RAM____pinNumber7;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_mem_addr = 0U;
    if ((4U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_alusel))) {
        if ((2U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_alusel))) {
            if ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_alusel))) {
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_mem_addr 
                    = (((IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) 
                        | (7U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_alusel)))
                        ? 0U : (vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_mem_offset 
                                + vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1));
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_reg_wdata = 0U;
            } else {
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_reg_wdata 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_link_addr;
            }
        } else {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_reg_wdata 
                = ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_alusel))
                    ? 0U : (((IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) 
                             | (4U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_alusel)))
                             ? 0U : ((8U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop))
                                      ? (vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1 
                                         + vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2)
                                      : ((0xbU == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop))
                                          ? (vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1 
                                             - vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2)
                                          : ((9U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop))
                                              ? VL_LTS_III(32, vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1, vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2)
                                              : ((0xaU 
                                                  == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop))
                                                  ? 
                                                 (vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1 
                                                  < vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2)
                                                  : 0U))))));
        }
    } else {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_reg_wdata 
            = ((2U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_alusel))
                ? ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_alusel))
                    ? 0U : (((IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) 
                             | (2U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_alusel)))
                             ? 0U : ((5U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop))
                                      ? (vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1 
                                         << (0x1fU 
                                             & vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2))
                                      : ((6U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop))
                                          ? (vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1 
                                             >> (0x1fU 
                                                 & vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2))
                                          : ((7U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop))
                                              ? (VL_SHIFTL_III(32,32,6, 
                                                               (- (IData)(
                                                                          (vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1 
                                                                           >> 0x1fU))), 
                                                               (0x3fU 
                                                                & ((IData)(0x20U) 
                                                                   - 
                                                                   (0x1fU 
                                                                    & vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2)))) 
                                                 | (vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2)))
                                              : 0U)))))
                : ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_alusel))
                    ? (((IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) 
                        | (1U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_alusel)))
                        ? 0U : ((3U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop))
                                 ? (vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1 
                                    ^ vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2)
                                 : ((2U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop))
                                     ? (vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1 
                                        | vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2)
                                     : ((1U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop))
                                         ? (vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1 
                                            & vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2)
                                         : 0U)))) : 0U));
    }
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__found_in_cache_flush 
        = ((2U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__found_in_cache_flush)) 
           | (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
              [0U][0U] & (0U == vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                          [0U][0U])));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__found_in_cache_flush 
        = ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__found_in_cache_flush)) 
           | ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
               [1U][0U] & (0U == vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                           [1U][0U])) << 1U));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__RAM_read_data[3U] 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellout__genblk6__BRA__3__KET____DOT__RAM____pinNumber7;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__RAM_read_data[2U] 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellout__genblk6__BRA__2__KET____DOT__RAM____pinNumber7;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__RAM_read_data[1U] 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellout__genblk6__BRA__1__KET____DOT__RAM____pinNumber7;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__RAM_read_data[0U] 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellout__genblk6__BRA__0__KET____DOT__RAM____pinNumber7;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT____VdfgExtracted_h3acc3dea__0 
        = (((- (IData)((vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                        >> 0x1fU))) << 0xcU) | ((0xfe0U 
                                                 & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                      >> 7U))));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__pc_plus_B_imm 
        = (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_pc 
           + (((- (IData)((vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                           >> 0x1fU))) << 0xcU) | (
                                                   (0x800U 
                                                    & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                            >> 7U))))));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT____VdfgExtracted_hb047d7aa__0 
        = (((- (IData)((vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                        >> 0x1fU))) << 0xcU) | (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0x14U));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache_flush 
        = ((0xeU & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache_flush)) 
           | (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
              [0U][0U] & (0U == vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                          [0U][0U])));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache_flush 
        = ((0xdU & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache_flush)) 
           | ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
               [1U][0U] & (0U == vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                           [1U][0U])) << 1U));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache_flush 
        = ((0xbU & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache_flush)) 
           | ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
               [2U][0U] & (0U == vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                           [2U][0U])) << 2U));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache_flush 
        = ((7U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache_flush)) 
           | ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
               [3U][0U] & (0U == vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                           [3U][0U])) << 3U));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_r_data 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__RAM_read_data
        [vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__RAM_read_select];
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__RAM_read_data
        [vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__RAM_read_select];
    if (vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__reg_pc0__DOT__right_one = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_link_addr = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 
            = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                        >> 0x14U));
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
            = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                        >> 0xfU));
    } else {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_link_addr = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 = 0U;
        if ((0x40U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
            if ((0x20U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                              >> 4U)))) {
                    if ((8U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((4U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 6U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_link_addr 
                                        = ((IData)(4U) 
                                           + vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_pc);
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 = 0U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 0U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 0U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 = 0U;
                                }
                            }
                        }
                    } else if ((4U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 6U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_link_addr 
                                    = ((IData)(4U) 
                                       + vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_pc);
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0xfU));
                            }
                        }
                    } else if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((0x4000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 6U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_link_addr = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                if ((0x2000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                    if ((0x1000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 
                                            = (0x1fU 
                                               & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                  >> 0x14U));
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                            = (0x1fU 
                                               & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                  >> 0xfU));
                                    } else {
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 
                                            = (0x1fU 
                                               & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                  >> 0x14U));
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                            = (0x1fU 
                                               & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                  >> 0xfU));
                                    }
                                } else if ((0x1000U 
                                            & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 0x14U));
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 0xfU));
                                } else {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 0x14U));
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 0xfU));
                                }
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                            } else if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                 >> 0xdU)))) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 6U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_link_addr = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                if ((0x1000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 0x14U));
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 0xfU));
                                } else {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 0x14U));
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 0xfU));
                                }
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((0x20U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
            if ((0x10U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                              >> 3U)))) {
                    if ((4U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 4U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 
                                    = (0xfffff000U 
                                       & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst);
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 = 0U;
                            }
                        }
                    } else if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((0x4000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                if ((0x2000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 1U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                    if ((0x1000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 
                                            = (0x1fU 
                                               & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                  >> 0x14U));
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                            = (0x1fU 
                                               & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                  >> 0xfU));
                                    } else {
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 
                                            = (0x1fU 
                                               & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                  >> 0x14U));
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                            = (0x1fU 
                                               & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                  >> 0xfU));
                                    }
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 1U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                                } else if ((0x1000U 
                                            & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                    if ((0U == (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0x19U))) {
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 2U;
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 
                                            = (0x1fU 
                                               & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                  >> 0x14U));
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 1U;
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                            = (0x1fU 
                                               & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                  >> 0xfU));
                                    } else if ((0x20U 
                                                == 
                                                (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                 >> 0x19U))) {
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 2U;
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 
                                            = (0x1fU 
                                               & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                  >> 0x14U));
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 1U;
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                            = (0x1fU 
                                               & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                  >> 0xfU));
                                    }
                                } else {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 1U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 0x14U));
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 1U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 0xfU));
                                }
                            } else if ((0x2000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 4U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                if ((0x1000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 0x14U));
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 0xfU));
                                } else {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 0x14U));
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 0xfU));
                                }
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                            } else if ((0x1000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 2U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0x14U));
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0xfU));
                            } else if ((0U == (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                               >> 0x19U))) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 4U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0x14U));
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0xfU));
                            } else if ((0x20U == (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                  >> 0x19U))) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 4U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0x14U));
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0xfU));
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                              >> 2U)))) {
                    if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((0U == (7U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                              >> 0xcU)))) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 7U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0x14U));
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0xfU));
                            } else if ((1U == (7U & 
                                               (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0xcU)))) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 7U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0x14U));
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0xfU));
                            } else if ((2U == (7U & 
                                               (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0xcU)))) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 7U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0x14U));
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0xfU));
                            }
                        }
                    }
                }
            }
        } else if ((0x10U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
            if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                          >> 3U)))) {
                if ((4U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                    if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 4U;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 
                                = (0xfffff000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst);
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 = 0U;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 0U;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 0U;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 = 0U;
                        }
                    }
                } else if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                    if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((0x4000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((0x2000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                    = (0x1fU & ((0x1000U 
                                                 & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)
                                                 ? 
                                                (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                 >> 0xfU)
                                                 : 
                                                (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                 >> 0xfU)));
                            } else if ((0x1000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                if ((0U == (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 0x19U))) {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 2U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 = 0U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 0U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 0xfU));
                                } else if ((0x20U == 
                                            (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                             >> 0x19U))) {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 2U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 = 0U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 0U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 0xfU));
                                }
                            } else {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0xfU));
                            }
                        } else {
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                            if ((0x2000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 4U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                    = (0x1fU & ((0x1000U 
                                                 & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)
                                                 ? 
                                                (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                 >> 0xfU)
                                                 : 
                                                (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                 >> 0xfU)));
                            } else if ((0x1000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 2U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0xfU));
                            } else {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 4U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0xfU));
                            }
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 = 0U;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 0U;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                          >> 2U)))) {
                if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                    if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((0x4000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                          >> 0xdU)))) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 7U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                    = (0x1fU & ((0x1000U 
                                                 & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)
                                                 ? 
                                                (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                 >> 0xfU)
                                                 : 
                                                (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                 >> 0xfU)));
                            }
                        } else if ((0x2000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                          >> 0xcU)))) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 7U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0xfU));
                            }
                        } else {
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = 1U;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = 7U;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = 0U;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 = 0U;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = 0U;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = 1U;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 
                                = (0x1fU & ((0x1000U 
                                             & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)
                                             ? (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0xfU)
                                             : (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0xfU)));
                        }
                    }
                }
            }
        }
    }
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_data1 
        = ((1U & (((IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) 
                   | (~ (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1))) 
                  | (0U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1))))
            ? 0U : (((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__wb_we) 
                     & ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1) 
                        == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__wb_reg_waddr)))
                     ? vlSelf->tb_riscv_cpu__DOT__dut__DOT__wb_reg_wdata
                     : vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs
                    [vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1]));
    if (vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
            = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                        >> 7U));
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__br_addr = 0U;
    } else {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__br_addr = 0U;
        if ((0x40U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
            if ((0x20U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                              >> 4U)))) {
                    if ((8U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((4U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 1U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 7U));
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 0xcU;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__br_addr 
                                        = (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_pc 
                                           + (((- (IData)(
                                                          (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                           >> 0x1fU))) 
                                               << 0x14U) 
                                              | ((0xff000U 
                                                  & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst) 
                                                 | ((0x800U 
                                                     & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                          >> 0x14U))))));
                                }
                            }
                        }
                    } else if ((4U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 7U));
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 0xdU;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__br_addr 
                                    = (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_data1 
                                       + vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT____VdfgExtracted_hb047d7aa__0);
                            }
                        }
                    } else if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((0x4000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop 
                                    = ((0x2000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)
                                        ? ((0x1000U 
                                            & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)
                                            ? 0x13U
                                            : 0x12U)
                                        : ((0x1000U 
                                            & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)
                                            ? 0x11U
                                            : 0x10U));
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__br_addr 
                                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__pc_plus_B_imm;
                            } else if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                 >> 0xdU)))) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop 
                                    = ((0x1000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)
                                        ? 0xfU : 0xeU);
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__br_addr 
                                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__pc_plus_B_imm;
                            }
                        }
                    }
                }
            }
        } else if ((0x20U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
            if ((0x10U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                              >> 3U)))) {
                    if ((4U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 7U));
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 8U;
                            }
                        }
                    } else if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((0x4000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                if ((0x2000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 1U;
                                    if ((0x1000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                            = (0x1fU 
                                               & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                  >> 7U));
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 1U;
                                    } else {
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                            = (0x1fU 
                                               & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                  >> 7U));
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 2U;
                                    }
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
                                } else if ((0x1000U 
                                            & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                    if ((0U == (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0x19U))) {
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 1U;
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                            = (0x1fU 
                                               & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                  >> 7U));
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 6U;
                                    } else if ((0x20U 
                                                == 
                                                (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                 >> 0x19U))) {
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 1U;
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                            = (0x1fU 
                                               & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                  >> 7U));
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 7U;
                                    }
                                } else {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 1U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 7U));
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 3U;
                                }
                            } else if ((0x2000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 1U;
                                if ((0x1000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 7U));
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 0xaU;
                                } else {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 7U));
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 9U;
                                }
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
                            } else if ((0x1000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 7U));
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 5U;
                            } else if ((0U == (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                               >> 0x19U))) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 7U));
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 8U;
                            } else if ((0x20U == (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                  >> 0x19U))) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 7U));
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 0xbU;
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                              >> 2U)))) {
                    if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((0U == (7U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                              >> 0xcU)))) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset 
                                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT____VdfgExtracted_h3acc3dea__0;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 0x19U;
                            } else if ((1U == (7U & 
                                               (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0xcU)))) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset 
                                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT____VdfgExtracted_h3acc3dea__0;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 0x1aU;
                            } else if ((2U == (7U & 
                                               (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0xcU)))) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset 
                                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT____VdfgExtracted_h3acc3dea__0;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 0x1bU;
                            }
                        }
                    }
                }
            }
        } else if ((0x10U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
            if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                          >> 3U)))) {
                if ((4U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                    if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 1U;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 7U));
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 
                                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_pc;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 8U;
                        }
                    }
                } else if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                    if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((0x4000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((0x2000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 1U;
                                if ((0x1000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 7U));
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 1U;
                                } else {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 7U));
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 2U;
                                }
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 
                                    = VL_SHIFTR_III(32,32,32, vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst, 0x14U);
                            } else if ((0x1000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                if ((0U == (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 0x19U))) {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 1U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 7U));
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 0x14U));
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 6U;
                                } else if ((0x20U == 
                                            (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                             >> 0x19U))) {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 1U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 7U));
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 0x14U));
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 7U;
                                }
                            } else {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 7U));
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 
                                    = VL_SHIFTR_III(32,32,32, vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst, 0x14U);
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 3U;
                            }
                        } else {
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 1U;
                            if ((0x2000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                if ((0x1000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 7U));
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 0xaU;
                                } else {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 7U));
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 9U;
                                }
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 
                                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT____VdfgExtracted_hb047d7aa__0;
                            } else if ((0x1000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 7U));
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0x14U));
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 5U;
                            } else {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 7U));
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 
                                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT____VdfgExtracted_hb047d7aa__0;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 8U;
                            }
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = 0U;
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                          >> 2U)))) {
                if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                    if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((0x4000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                          >> 0xdU)))) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 1U;
                                if ((0x1000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 7U));
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 0x18U;
                                } else {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                        = (0x1fU & 
                                           (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                            >> 7U));
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 0x17U;
                                }
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset 
                                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT____VdfgExtracted_hb047d7aa__0;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
                            }
                        } else if ((0x2000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                          >> 0xcU)))) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 7U));
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset 
                                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT____VdfgExtracted_hb047d7aa__0;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 0x16U;
                            }
                        } else {
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = 1U;
                            if ((0x1000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 7U));
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 0x15U;
                            } else {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr 
                                    = (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 7U));
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = 0x14U;
                            }
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset 
                                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT____VdfgExtracted_hb047d7aa__0;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = 0U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__prev_is_load 
        = ((0x14U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop)) 
           | ((0x15U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop)) 
              | ((0x16U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop)) 
                 | ((0x17U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop)) 
                    | (0x18U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop))))));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__stallreq_for_reg1_load = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__stallreq_for_reg2_load = 0U;
    if ((1U & (~ (IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst)))) {
        if ((((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1) 
              & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__prev_is_load)) 
             & ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_reg_waddr_i) 
                == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1)))) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__stallreq_for_reg1_load = 1U;
        }
        if ((((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2) 
              & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__prev_is_load)) 
             & ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_reg_waddr_i) 
                == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2)))) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__stallreq_for_reg2_load = 1U;
        }
    }
}

VL_INLINE_OPT void Vtb_riscv_cpu___024root___nba_sequent__TOP__1(Vtb_riscv_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ __Vdly__tb_riscv_cpu__DOT__dut__DOT__icache_busy;
    __Vdly__tb_riscv_cpu__DOT__dut__DOT__icache_busy = 0;
    CData/*0:0*/ __Vdly__tb_riscv_cpu__DOT__dut__DOT__dcache_busy;
    __Vdly__tb_riscv_cpu__DOT__dut__DOT__dcache_busy = 0;
    // Body
    __Vdly__tb_riscv_cpu__DOT__dut__DOT__icache_busy 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_busy;
    __Vdly__tb_riscv_cpu__DOT__dut__DOT__dcache_busy 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_busy;
    if (vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) {
        __Vdly__tb_riscv_cpu__DOT__dut__DOT__icache_busy = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__pending_rw_flag = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__pending_addr = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__pending_write_data = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__pending_write_mask = 0U;
        __Vdly__tb_riscv_cpu__DOT__dut__DOT__dcache_busy = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__pending_rw_flag = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__pending_addr = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__pending_write_data = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__pending_write_mask = 0U;
    } else {
        if (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_busy) {
            if (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_done) {
                __Vdly__tb_riscv_cpu__DOT__dut__DOT__icache_busy = 0U;
            }
        } else if (((~ (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_done)) 
                    & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_if0__mem_re))) {
            __Vdly__tb_riscv_cpu__DOT__dut__DOT__icache_busy = 1U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__pending_rw_flag 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_if0__mem_re;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__pending_addr 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_addr;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__pending_write_data = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__pending_write_mask = 0U;
        }
        if (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_busy) {
            if (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_done) {
                __Vdly__tb_riscv_cpu__DOT__dut__DOT__dcache_busy = 0U;
            }
        } else if (((~ (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_done)) 
                    & (0U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_rwe)))) {
            __Vdly__tb_riscv_cpu__DOT__dut__DOT__dcache_busy = 1U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__pending_rw_flag 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_rwe;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__pending_addr 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_addr;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__pending_write_data 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_w_data;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__pending_write_mask 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_sel;
        }
    }
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_busy 
        = __Vdly__tb_riscv_cpu__DOT__dut__DOT__icache_busy;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_busy 
        = __Vdly__tb_riscv_cpu__DOT__dut__DOT__dcache_busy;
    if (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_busy) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_data_in 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__pending_write_data;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_mask_in 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__pending_write_mask;
    } else {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_data_in = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_mask_in = 0U;
    }
}

VL_INLINE_OPT void Vtb_riscv_cpu___024root___nba_comb__TOP__0(Vtb_riscv_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___nba_comb__TOP__0\n"); );
    // Body
    if (vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_mem = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_mem0__mem_re = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_mem0__mem_we = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_addr = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_w_data = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_waddr_o = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_we_o = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_wdata_o = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_sel = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_mem0__DOT__mem_taking = 0U;
    } else if ((1U & ((~ (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_busy)) 
                      & (~ (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_mem0__DOT__mem_taking))))) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_waddr_o 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_waddr_i;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_we_o 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_we_i;
        if ((((((0x14U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_aluop)) 
                || (0x15U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_aluop))) 
               || (0x16U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_aluop))) 
              || (0x17U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_aluop))) 
             || (0x18U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_aluop)))) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_mem = 1U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_mem0__DOT__mem_taking = 1U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_mem0__mem_re = 1U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_mem0__mem_we = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_addr 
                = (0xfffffffcU & vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr);
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_w_data = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_sel = 0U;
        } else if ((0x19U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_aluop))) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_mem = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_mem0__DOT__mem_taking = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_mem0__mem_re = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_mem0__mem_we = 1U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_addr 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_w_data 
                = ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_rt_data 
                    << 0x18U) | ((0xff0000U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_rt_data 
                                               << 0x10U)) 
                                 | ((0xff00U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_rt_data 
                                                << 8U)) 
                                    | (0xffU & vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_rt_data))));
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_wdata_o = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_sel 
                = ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr)
                    ? ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr)
                        ? 8U : 4U) : ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr)
                                       ? 2U : 1U));
        } else if ((0x1aU == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_aluop))) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_mem = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_mem0__DOT__mem_taking = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_mem0__mem_re = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_mem0__mem_we = 1U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_addr 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_w_data 
                = ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_rt_data 
                    << 0x10U) | (0xffffU & vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_rt_data));
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_wdata_o = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_sel 
                = ((0U == (3U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr))
                    ? 3U : ((2U == (3U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr))
                             ? 0xcU : 0U));
        } else if ((0x1bU == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_aluop))) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_mem = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_mem0__DOT__mem_taking = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_mem0__mem_re = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_mem0__mem_we = 1U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_addr 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_w_data 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_rt_data;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_wdata_o = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_sel 
                = ((0U == (3U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr))
                    ? 0xfU : 0U);
        } else {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_mem = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_mem0__DOT__mem_taking = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_mem0__mem_re = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_mem0__mem_we = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_addr = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_w_data = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_sel = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_wdata_o 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_wdata_i;
        }
    } else if (((~ (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_busy)) 
                & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_mem0__DOT__mem_taking))) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_mem = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_mem0__DOT__mem_taking = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_wdata_o 
            = ((0x14U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_aluop))
                ? ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr)
                    ? ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr)
                        ? (((- (IData)((vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data 
                                        >> 0x1fU))) 
                            << 8U) | (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data 
                                      >> 0x18U)) : 
                       (((- (IData)((1U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data 
                                           >> 0x17U)))) 
                         << 8U) | (0xffU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data 
                                            >> 0x10U))))
                    : ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr)
                        ? (((- (IData)((1U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data 
                                              >> 0xfU)))) 
                            << 8U) | (0xffU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data 
                                               >> 8U)))
                        : (((- (IData)((1U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data 
                                              >> 7U)))) 
                            << 8U) | (0xffU & vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data))))
                : ((0x15U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_aluop))
                    ? ((0U == (3U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr))
                        ? (((- (IData)((1U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data 
                                              >> 0xfU)))) 
                            << 0x10U) | (0xffffU & vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data))
                        : ((2U == (3U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr))
                            ? (((- (IData)((1U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data 
                                                  >> 0xfU)))) 
                                << 0x10U) | (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data 
                                             >> 0x10U))
                            : 0U)) : ((0x16U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_aluop))
                                       ? ((0U == (3U 
                                                  & vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr))
                                           ? vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data
                                           : 0U) : 
                                      ((0x17U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_aluop))
                                        ? ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr)
                                            ? ((1U 
                                                & vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr)
                                                ? (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data 
                                                   >> 0x18U)
                                                : (0xffU 
                                                   & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data 
                                                      >> 0x10U)))
                                            : ((1U 
                                                & vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr)
                                                ? (0xffU 
                                                   & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data 
                                                      >> 8U))
                                                : (0xffU 
                                                   & vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data)))
                                        : ((0x18U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_aluop))
                                            ? ((0U 
                                                == 
                                                (3U 
                                                 & vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr))
                                                ? (0xffffU 
                                                   & vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data)
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr))
                                                    ? 
                                                   (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data 
                                                    >> 0x10U)
                                                    : 0U))
                                            : vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_wdata_i)))));
    } else if (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_busy) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_mem = 1U;
    } else {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_mem = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_mem0__mem_re = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_mem0__mem_we = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_addr = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_w_data = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_waddr_o = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_we_o = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_wdata_o = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_sel = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_mem0__DOT__mem_taking = 0U;
    }
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_rwe 
        = (((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_mem0__mem_we) 
            << 1U) | (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_mem0__mem_re));
    if (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_busy) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_data_in 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__pending_write_data;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_mask_in 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__pending_write_mask;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__pending_addr;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__rw_flag 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__pending_rw_flag;
    } else {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_data_in 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_w_data;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_mask_in 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_sel;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_addr;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__rw_flag 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_rwe;
    }
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv1 = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv2 = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp[3U] 
        = (3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter
                 [(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                         >> 5U))] - vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                 [0U][(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                             >> 5U))]));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp[3U] 
        = (3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter
                 [(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                         >> 5U))] - vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                 [0U][(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                             >> 5U))]));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp[4U] 
        = (3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter
                 [(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                         >> 5U))] - vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                 [1U][(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                             >> 5U))]));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp[4U] 
        = (3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter
                 [(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                         >> 5U))] - vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                 [1U][(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                             >> 5U))]));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp[5U] 
        = (3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter
                 [(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                         >> 5U))] - vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                 [2U][(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                             >> 5U))]));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp[5U] 
        = (3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter
                 [(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                         >> 5U))] - vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                 [2U][(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                             >> 5U))]));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp[6U] 
        = (3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter
                 [(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                         >> 5U))] - vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                 [3U][(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                             >> 5U))]));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp[6U] 
        = (3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter
                 [(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                         >> 5U))] - vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                 [3U][(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                             >> 5U))]));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache 
        = ((0xeU & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache)) 
           | (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
              [0U][(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                          >> 5U))] & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                                      [0U][(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                                                  >> 5U))] 
                                      == (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                                          >> 7U))));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache 
        = ((0xdU & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache)) 
           | ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
               [1U][(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                           >> 5U))] & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                                       [1U][(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                                                   >> 5U))] 
                                       == (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                                           >> 7U))) 
              << 1U));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache 
        = ((0xbU & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache)) 
           | ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
               [2U][(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                           >> 5U))] & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                                       [2U][(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                                                   >> 5U))] 
                                       == (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                                           >> 7U))) 
              << 2U));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache 
        = ((7U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache)) 
           | ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
               [3U][(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                           >> 5U))] & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                                       [3U][(3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                                                   >> 5U))] 
                                       == (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                                           >> 7U))) 
              << 3U));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_write_data = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_write_mask = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid_flag = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid_cache = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid_tag = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid_block = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_tag 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_tag;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_cache 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_cache;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_mask = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_block 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_block;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_critical_word 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__critical_word;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_data = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_block = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_word = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_done = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_block = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_word = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_cache = 7U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_state 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__state;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_word 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_word;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_rw_flag = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_addr = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_cache = 7U;
    if ((0U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__state))) {
        if ((1U & (~ (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__rw_flag)))) {
            if ((2U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__rw_flag))) {
                vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_write_data 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_data_in;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_write_mask 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_mask_in;
                if ((0U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache))) {
                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_mask 
                        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_mask_in;
                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_data 
                        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_data_in;
                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_block 
                        = (3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                                 >> 5U));
                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_word 
                        = (7U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                                 >> 2U));
                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_cache 
                        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup
                        [vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache];
                }
            }
        }
        if ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__rw_flag))) {
            if ((0U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache))) {
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid_flag = 1U;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid_cache 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp
                    [0U];
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid_tag 
                    = (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                       >> 7U);
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid_block 
                    = (3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                             >> 5U));
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_tag 
                    = (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                       >> 7U);
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_cache 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp
                    [0U];
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_block 
                    = (3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                             >> 5U));
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_critical_word 
                    = (7U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                             >> 2U));
                vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_rw_flag = 1U;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_addr 
                    = (0xfffffffcU & vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr);
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_word 
                    = (7U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                             >> 2U));
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_state = 1U;
            }
            if ((0U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache))) {
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_done = 1U;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_block 
                    = (3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                             >> 5U));
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_word 
                    = (7U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                             >> 2U));
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_cache 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup
                    [vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache];
            }
        } else if ((2U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__rw_flag))) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_done = 1U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_rw_flag = 2U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_addr 
                = (0xfffffffcU & vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr);
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_state = 4U;
        }
    } else {
        if ((1U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__state))) {
            if ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__mem_done))) {
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_mask = 0xfU;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_data 
                    = (IData)(vlSelf->tb_riscv_cpu__DOT__mem_data_i);
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_block 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_block;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_word 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_word;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_cache 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_cache;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_word 
                    = ((0U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__critical_word))
                        ? 1U : 0U);
                vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_rw_flag = 1U;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_addr 
                    = ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_tag 
                        << 7U) | (((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_block) 
                                   << 5U) | ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_word) 
                                             << 2U)));
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_state = 2U;
            }
        } else if ((2U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__state))) {
            if ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__mem_done))) {
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_mask = 0xfU;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_data 
                    = (IData)(vlSelf->tb_riscv_cpu__DOT__mem_data_i);
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_block 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_block;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_word 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_word;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_cache 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_cache;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_word 
                    = (7U & (((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__critical_word) 
                              == ((IData)(1U) + (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_word)))
                              ? ((IData)(2U) + (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_word))
                              : ((IData)(1U) + (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_word))));
                if ((0U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_word))) {
                    vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_rw_flag = 1U;
                    vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_addr 
                        = ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_tag 
                            << 7U) | (((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_block) 
                                       << 5U) | ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_word) 
                                                 << 2U)));
                } else {
                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_state = 0U;
                }
            }
        } else if ((4U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__state))) {
            if ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__mem_done))) {
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_state = 0U;
            }
        }
        if ((1U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__state))) {
            if ((2U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__state))) {
                if ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__rw_flag))) {
                    if ((0U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache))) {
                        if (((vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup
                              [vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache] 
                              == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_cache)) 
                             & ((3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                                       >> 5U)) == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_block)))) {
                            if (((7U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                                        >> 2U)) < (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_word))) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_done = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_block 
                                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_block;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_word 
                                    = (7U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                                             >> 2U));
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_cache 
                                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_cache;
                            }
                        } else {
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_done = 1U;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_block 
                                = (3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                                         >> 5U));
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_word 
                                = (7U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                                         >> 2U));
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_cache 
                                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup
                                [vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache];
                        }
                    }
                }
            }
        }
    }
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_if = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__mem_taking = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__if_pc = vlSelf->tb_riscv_cpu__DOT__dut__DOT__pc;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__if_inst = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_r_data;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_if0__mem_re = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_addr = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__waiting_one = 0U;
    if (vlSelf->tb_riscv_cpu__DOT__dut__DOT__right_one) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__waiting_one = 0U;
    }
    if (vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv1 = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv2 = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__br = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_if = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__mem_taking = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__if_pc = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__if_inst = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_if0__mem_re = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_addr = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__waiting_one = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stall = 0U;
    } else {
        if ((1U & (~ (((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1) 
                       & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__prev_is_load)) 
                      & ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_reg_waddr_i) 
                         == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1)))))) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv1 
                = ((((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1) 
                     & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_we_i)) 
                    & ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_reg_waddr_i) 
                       == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1)))
                    ? vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_reg_wdata
                    : ((((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1) 
                         & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_we_o)) 
                        & ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_waddr_o) 
                           == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1)))
                        ? vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_wdata_o
                        : ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1)
                            ? vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_data1
                            : ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1)
                                ? 0U : vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1))));
        }
        if ((1U & (~ (((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2) 
                       & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__prev_is_load)) 
                      & ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_reg_waddr_i) 
                         == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2)))))) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv2 
                = ((((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2) 
                     & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_we_i)) 
                    & ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_reg_waddr_i) 
                       == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2)))
                    ? vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_reg_wdata
                    : ((((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2) 
                         & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_we_o)) 
                        & ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_waddr_o) 
                           == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2)))
                        ? vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_wdata_o
                        : ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2)
                            ? ((1U & (((IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) 
                                       | (~ (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2))) 
                                      | (0U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2))))
                                ? 0U : (((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__wb_we) 
                                         & ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2) 
                                            == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__wb_reg_waddr)))
                                         ? vlSelf->tb_riscv_cpu__DOT__dut__DOT__wb_reg_wdata
                                         : vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs
                                        [vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2]))
                            : ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2)
                                ? 0U : vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2))));
        }
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__br = 0U;
        if ((0x40U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
            if ((0x20U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                              >> 4U)))) {
                    if ((8U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((4U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__br = 1U;
                                }
                            }
                        }
                    } else if ((4U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__br = 1U;
                            }
                        }
                    } else if ((2U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                        if ((1U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                            if ((0x4000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                if ((0x2000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                    if ((0x1000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                        if ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv1 
                                             >= vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv2)) {
                                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__br = 1U;
                                        }
                                    } else if ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv1 
                                                < vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv2)) {
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__br = 1U;
                                    }
                                } else if ((0x1000U 
                                            & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                    if (VL_GTES_III(32, vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv1, vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv2)) {
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__br = 1U;
                                    }
                                } else if (VL_LTS_III(32, vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv1, vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv2)) {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__br = 1U;
                                }
                            } else if ((1U & (~ (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                 >> 0xdU)))) {
                                if ((0x1000U & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)) {
                                    if ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv1 
                                         != vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv2)) {
                                        vlSelf->tb_riscv_cpu__DOT__dut__DOT__br = 1U;
                                    }
                                } else if ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv1 
                                            == vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv2)) {
                                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__br = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
        if (vlSelf->tb_riscv_cpu__DOT__dut__DOT__br) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__if_pc = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__if_inst = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__mem_taking = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_if = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__waiting_one = 1U;
        } else if ((1U & (((~ (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__waiting_one)) 
                           & (~ (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_busy))) 
                          & (~ (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__mem_taking))))) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_if = 1U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__mem_taking = 1U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_if0__mem_re = 1U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_addr 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__pc;
        } else if ((((~ (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__waiting_one)) 
                     & (~ (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_busy))) 
                    & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__mem_taking))) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_if = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__mem_taking = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__if_pc 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__pc;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__if_inst 
                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_r_data;
        } else if (((~ (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__waiting_one)) 
                    & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_busy))) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_if = 1U;
        } else if ((1U & (~ (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__waiting_one)))) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_if = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__mem_taking = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__if_pc = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__if_inst = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_if0__mem_re = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_addr = 0U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__waiting_one = 0U;
        }
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__stall 
            = ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_mem)
                ? 0x1fU : (((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__stallreq_for_reg1_load) 
                            | (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__stallreq_for_reg2_load))
                            ? 7U : ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_if)
                                     ? 3U : 0U)));
    }
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4 
        = (((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_block) 
            << 3U) | (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_word));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__rw_flag 
        = (((0U == VL_EXTENDS_II(32,3, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_cache))) 
            << 1U) | (0U == VL_EXTENDS_II(32,3, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_cache))));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__rw_flag 
        = (((1U == VL_EXTENDS_II(32,3, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_cache))) 
            << 1U) | (1U == VL_EXTENDS_II(32,3, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_cache))));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__rw_flag 
        = (((2U == VL_EXTENDS_II(32,3, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_cache))) 
            << 1U) | (2U == VL_EXTENDS_II(32,3, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_cache))));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__rw_flag 
        = (((3U == VL_EXTENDS_II(32,3, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_cache))) 
            << 1U) | (3U == VL_EXTENDS_II(32,3, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_cache))));
    if (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_busy) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__rw_flag 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__pending_rw_flag;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__pending_addr;
    } else {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__rw_flag 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_if0__mem_re;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_addr;
    }
    vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_write_data = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_write_mask = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_tmp[1U] 
        = (1U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter
                 [(0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                           >> 5U))] - vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                 [0U][(0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                               >> 5U))]));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_tmp[1U] 
        = (1U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter
                 [(0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                           >> 5U))] - vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                 [0U][(0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                               >> 5U))]));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_tmp[2U] 
        = (1U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter
                 [(0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                           >> 5U))] - vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                 [1U][(0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                               >> 5U))]));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_tmp[2U] 
        = (1U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter
                 [(0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                           >> 5U))] - vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                 [1U][(0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                               >> 5U))]));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__found_in_cache 
        = ((2U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__found_in_cache)) 
           | (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
              [0U][(0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                            >> 5U))] & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                                        [0U][(0xfU 
                                              & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                                                 >> 5U))] 
                                        == (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                                            >> 9U))));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__found_in_cache 
        = ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__found_in_cache)) 
           | ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
               [1U][(0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                             >> 5U))] & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                                         [1U][(0xfU 
                                               & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                                                  >> 5U))] 
                                         == (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                                             >> 9U))) 
              << 1U));
    if ((0U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__state))) {
        if ((1U & (~ (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__rw_flag)))) {
            if ((2U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__rw_flag))) {
                vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_write_data 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_data_in;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_write_mask 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_mask_in;
            }
        }
    }
    vlSelf->tb_riscv_cpu__DOT__mem_sel = (((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_write_mask) 
                                           << 4U) | (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_write_mask));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid_flag = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid_cache = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid_tag = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid_block = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_tag 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_tag;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_cache 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_cache;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_mask = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_block 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_block;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_critical_word 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__critical_word;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_data = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_block = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_word = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_done = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_block = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_word = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_cache = 3U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_cache = 3U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_state 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__state;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_word 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_word;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_rw_flag = 0U;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_addr = 0U;
    if ((0U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__state))) {
        if ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__rw_flag))) {
            if ((0U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__found_in_cache))) {
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid_flag = 1U;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid_cache 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_id_tmp
                    [0U];
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid_tag 
                    = (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                       >> 9U);
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid_block 
                    = (0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                               >> 5U));
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_tag 
                    = (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                       >> 9U);
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_cache 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_id_tmp
                    [0U];
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_block 
                    = (0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                               >> 5U));
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_critical_word 
                    = (7U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                             >> 2U));
                vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_rw_flag = 1U;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_addr 
                    = (0xfffffffcU & vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr);
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_word 
                    = (7U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                             >> 2U));
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_state = 1U;
            }
            if ((0U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__found_in_cache))) {
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_done = 1U;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_block 
                    = (0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                               >> 5U));
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_word 
                    = (7U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                             >> 2U));
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_cache 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__one_hot_lookup
                    [vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__found_in_cache];
            }
        } else if ((2U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__rw_flag))) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_done = 1U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_rw_flag = 2U;
            vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_addr 
                = (0xfffffffcU & vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr);
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_state = 4U;
        }
        if ((1U & (~ (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__rw_flag)))) {
            if ((2U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__rw_flag))) {
                if ((0U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__found_in_cache))) {
                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_mask 
                        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_mask_in;
                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_data 
                        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_data_in;
                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_block 
                        = (0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                                   >> 5U));
                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_word 
                        = (7U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                                 >> 2U));
                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_cache 
                        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__one_hot_lookup
                        [vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__found_in_cache];
                }
            }
        }
    } else {
        if ((1U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__state))) {
            if ((2U & (IData)(vlSelf->tb_riscv_cpu__DOT__mem_done))) {
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_mask = 0xfU;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_data 
                    = (IData)((vlSelf->tb_riscv_cpu__DOT__mem_data_i 
                               >> 0x20U));
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_block 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_block;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_word 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_word;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_cache 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_cache;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_word 
                    = ((0U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__critical_word))
                        ? 1U : 0U);
                vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_rw_flag = 1U;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_addr 
                    = ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_tag 
                        << 9U) | (((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_block) 
                                   << 5U) | ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_word) 
                                             << 2U)));
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_state = 2U;
            }
        } else if ((2U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__state))) {
            if ((2U & (IData)(vlSelf->tb_riscv_cpu__DOT__mem_done))) {
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_mask = 0xfU;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_data 
                    = (IData)((vlSelf->tb_riscv_cpu__DOT__mem_data_i 
                               >> 0x20U));
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_block 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_block;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_word 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_word;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_cache 
                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_cache;
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_word 
                    = (7U & (((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__critical_word) 
                              == ((IData)(1U) + (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_word)))
                              ? ((IData)(2U) + (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_word))
                              : ((IData)(1U) + (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_word))));
                if ((0U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_word))) {
                    vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_rw_flag = 1U;
                    vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_addr 
                        = ((vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_tag 
                            << 9U) | (((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_block) 
                                       << 5U) | ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_word) 
                                                 << 2U)));
                } else {
                    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_state = 0U;
                }
            }
        } else if ((4U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__state))) {
            if ((2U & (IData)(vlSelf->tb_riscv_cpu__DOT__mem_done))) {
                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_state = 0U;
            }
        }
        if ((1U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__state))) {
            if ((2U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__state))) {
                if ((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__rw_flag))) {
                    if ((0U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__found_in_cache))) {
                        if (((vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__one_hot_lookup
                              [vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__found_in_cache] 
                              == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_cache)) 
                             & ((0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                                         >> 5U)) == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_block)))) {
                            if (((7U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                                        >> 2U)) < (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_word))) {
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_done = 1U;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_block 
                                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_block;
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_word 
                                    = (7U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                                             >> 2U));
                                vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_cache 
                                    = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_cache;
                            }
                        } else {
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_done = 1U;
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_block 
                                = (0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                                           >> 5U));
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_word 
                                = (7U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                                         >> 2U));
                            vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_cache 
                                = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__one_hot_lookup
                                [vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__found_in_cache];
                        }
                    }
                }
            }
        }
    }
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4 
        = (((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_block) 
            << 3U) | (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_word));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__rw_flag 
        = (((0U == VL_EXTENDS_II(32,2, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_cache))) 
            << 1U) | (0U == VL_EXTENDS_II(32,2, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_cache))));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__rw_flag 
        = (((1U == VL_EXTENDS_II(32,2, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_cache))) 
            << 1U) | (1U == VL_EXTENDS_II(32,2, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_cache))));
    vlSelf->tb_riscv_cpu__DOT__mem_rwe = (((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_rw_flag) 
                                           << 2U) | (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_rw_flag));
    vlSelf->tb_riscv_cpu__DOT__mem_addr = (((QData)((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_addr)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_addr)));
}

void Vtb_riscv_cpu___024root___eval_nba(Vtb_riscv_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___eval_nba\n"); );
    // Body
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_riscv_cpu___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_riscv_cpu___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((0x300ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_riscv_cpu___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
}

void Vtb_riscv_cpu___024root___timing_resume(Vtb_riscv_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___timing_resume\n"); );
    // Body
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h48dc5477__0.resume("@(posedge tb_riscv_cpu.clk)");
    }
    if ((0x800ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h8b56b137__0.resume("@([changed] tb_riscv_cpu.rst_n)");
    }
    if ((0x400ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_riscv_cpu___024root___timing_commit(Vtb_riscv_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___timing_commit\n"); );
    // Body
    if ((! (0x100ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h48dc5477__0.commit("@(posedge tb_riscv_cpu.clk)");
    }
    if ((! (0x800ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h8b56b137__0.commit("@([changed] tb_riscv_cpu.rst_n)");
    }
}

void Vtb_riscv_cpu___024root___eval_triggers__act(Vtb_riscv_cpu___024root* vlSelf);

bool Vtb_riscv_cpu___024root___eval_phase__act(Vtb_riscv_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<12> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_riscv_cpu___024root___eval_triggers__act(vlSelf);
    Vtb_riscv_cpu___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_riscv_cpu___024root___timing_resume(vlSelf);
        Vtb_riscv_cpu___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_riscv_cpu___024root___eval_phase__nba(Vtb_riscv_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_riscv_cpu___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_riscv_cpu___024root___dump_triggers__nba(Vtb_riscv_cpu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_riscv_cpu___024root___dump_triggers__act(Vtb_riscv_cpu___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_riscv_cpu___024root___eval(Vtb_riscv_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_riscv_cpu___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../src/../tb_riscv_cpu.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_riscv_cpu___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../src/../tb_riscv_cpu.sv", 4, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_riscv_cpu___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_riscv_cpu___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_riscv_cpu___024root___eval_debug_assertions(Vtb_riscv_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
