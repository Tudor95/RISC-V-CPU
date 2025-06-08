// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_riscv_cpu.h for the primary calling header

#include "Vtb_riscv_cpu__pch.h"
#include "Vtb_riscv_cpu__Syms.h"
#include "Vtb_riscv_cpu___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_riscv_cpu___024root___dump_triggers__act(Vtb_riscv_cpu___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_riscv_cpu___024root___eval_triggers__act(Vtb_riscv_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_tmp.neq(vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_tmp__1) 
                                     | vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_id_tmp.neq(vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_id_tmp__1)));
    vlSelf->__VactTriggered.set(1U, vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_tmp.neq(vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_tmp__1));
    vlSelf->__VactTriggered.set(2U, (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_tmp.neq(vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_tmp__1) 
                                     | vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_id_tmp.neq(vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_id_tmp__1)));
    vlSelf->__VactTriggered.set(3U, vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_tmp.neq(vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_tmp__1));
    vlSelf->__VactTriggered.set(4U, (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp.neq(vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp__1) 
                                     | vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp.neq(vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp__1)));
    vlSelf->__VactTriggered.set(5U, vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp.neq(vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp__1));
    vlSelf->__VactTriggered.set(6U, (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp.neq(vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp__1) 
                                     | vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp.neq(vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp__1)));
    vlSelf->__VactTriggered.set(7U, vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp.neq(vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp__1));
    vlSelf->__VactTriggered.set(8U, ((IData)(vlSelf->tb_riscv_cpu__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__clk__0))));
    vlSelf->__VactTriggered.set(9U, (((IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT____Vcellinp__dut__rst__0))) 
                                     | ((IData)(vlSelf->tb_riscv_cpu__DOT__clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__clk__0)))));
    vlSelf->__VactTriggered.set(0xaU, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(0xbU, ((IData)(vlSelf->tb_riscv_cpu__DOT__rst_n) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__rst_n__0)));
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_tmp__1.assign(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_tmp);
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_id_tmp__1.assign(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_id_tmp);
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_tmp__1.assign(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_tmp);
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_id_tmp__1.assign(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_id_tmp);
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp__1.assign(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp);
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp__1.assign(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp);
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp__1.assign(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp);
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp__1.assign(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp);
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__clk__0 
        = vlSelf->tb_riscv_cpu__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT____Vcellinp__dut__rst__0 
        = vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst;
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__rst_n__0 
        = vlSelf->tb_riscv_cpu__DOT__rst_n;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
        vlSelf->__VactTriggered.set(1U, 1U);
        vlSelf->__VactTriggered.set(2U, 1U);
        vlSelf->__VactTriggered.set(3U, 1U);
        vlSelf->__VactTriggered.set(4U, 1U);
        vlSelf->__VactTriggered.set(5U, 1U);
        vlSelf->__VactTriggered.set(6U, 1U);
        vlSelf->__VactTriggered.set(7U, 1U);
        vlSelf->__VactTriggered.set(0xbU, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_riscv_cpu___024root___dump_triggers__act(vlSelf);
    }
#endif
}
