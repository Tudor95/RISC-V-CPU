// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_riscv_cpu.h for the primary calling header

#include "Vtb_riscv_cpu__pch.h"
#include "Vtb_riscv_cpu___024root.h"

VL_ATTR_COLD void Vtb_riscv_cpu___024root___eval_static(Vtb_riscv_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_riscv_cpu___024root___eval_final(Vtb_riscv_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_riscv_cpu___024root___dump_triggers__stl(Vtb_riscv_cpu___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_riscv_cpu___024root___eval_phase__stl(Vtb_riscv_cpu___024root* vlSelf);

VL_ATTR_COLD void Vtb_riscv_cpu___024root___eval_settle(Vtb_riscv_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_riscv_cpu___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../src/../tb_riscv_cpu.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_riscv_cpu___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_riscv_cpu___024root___dump_triggers__stl(Vtb_riscv_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] tb_riscv_cpu.dut.icache0.lru_tmp or [hybrid] tb_riscv_cpu.dut.icache0.lru_id_tmp)\n");
    }
    if ((4ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] tb_riscv_cpu.dut.icache0.lru_tmp)\n");
    }
    if ((8ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] tb_riscv_cpu.dut.icache0.mru_tmp or [hybrid] tb_riscv_cpu.dut.icache0.mru_id_tmp)\n");
    }
    if ((0x10ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 4 is active: @([hybrid] tb_riscv_cpu.dut.icache0.mru_tmp)\n");
    }
    if ((0x20ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 5 is active: @([hybrid] tb_riscv_cpu.dut.dcache0.lru_tmp or [hybrid] tb_riscv_cpu.dut.dcache0.lru_id_tmp)\n");
    }
    if ((0x40ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 6 is active: @([hybrid] tb_riscv_cpu.dut.dcache0.lru_tmp)\n");
    }
    if ((0x80ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 7 is active: @([hybrid] tb_riscv_cpu.dut.dcache0.mru_tmp or [hybrid] tb_riscv_cpu.dut.dcache0.mru_id_tmp)\n");
    }
    if ((0x100ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 8 is active: @([hybrid] tb_riscv_cpu.dut.dcache0.mru_tmp)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_riscv_cpu___024root___stl_sequent__TOP__4(Vtb_riscv_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___stl_sequent__TOP__4\n"); );
    // Body
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
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__RAM_read_data[0U] 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT____Vcellout__genblk6__BRA__0__KET____DOT__RAM____pinNumber7;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__RAM_read_data[1U] 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT____Vcellout__genblk6__BRA__1__KET____DOT__RAM____pinNumber7;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT____VdfgExtracted_hb047d7aa__0 
        = (((- (IData)((vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                        >> 0x1fU))) << 0xcU) | (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                >> 0x14U));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__prev_is_load 
        = ((0x14U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop)) 
           | ((0x15U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop)) 
              | ((0x16U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop)) 
                 | ((0x17U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop)) 
                    | (0x18U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop))))));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__RAM_read_data[0U] 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellout__genblk6__BRA__0__KET____DOT__RAM____pinNumber7;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__RAM_read_data[1U] 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellout__genblk6__BRA__1__KET____DOT__RAM____pinNumber7;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__RAM_read_data[2U] 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellout__genblk6__BRA__2__KET____DOT__RAM____pinNumber7;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__RAM_read_data[3U] 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellout__genblk6__BRA__3__KET____DOT__RAM____pinNumber7;
    vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst 
        = (1U & (~ (IData)(vlSelf->tb_riscv_cpu__DOT__rst_n)));
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_r_data 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__RAM_read_data
        [vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__RAM_read_select];
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data 
        = vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__RAM_read_data
        [vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__RAM_read_select];
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
    }
    if (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_busy) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_data_in 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__pending_write_data;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_mask_in 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__pending_write_mask;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__rw_flag 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__pending_rw_flag;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__pending_addr;
    } else {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_data_in = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_mask_in = 0U;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__rw_flag 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_if0__mem_re;
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
            = vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_addr;
    }
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stall = ((IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst)
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_mem)
                                                    ? 0x1fU
                                                    : 
                                                   (((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__stallreq_for_reg1_load) 
                                                     | (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__stallreq_for_reg2_load))
                                                     ? 7U
                                                     : 
                                                    ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_if)
                                                      ? 3U
                                                      : 0U))));
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

void Vtb_riscv_cpu___024root___act_sequent__TOP__0(Vtb_riscv_cpu___024root* vlSelf);
void Vtb_riscv_cpu___024root___act_sequent__TOP__1(Vtb_riscv_cpu___024root* vlSelf);
void Vtb_riscv_cpu___024root___act_sequent__TOP__2(Vtb_riscv_cpu___024root* vlSelf);
void Vtb_riscv_cpu___024root___act_sequent__TOP__3(Vtb_riscv_cpu___024root* vlSelf);
void Vtb_riscv_cpu___024root___act_sequent__TOP__4(Vtb_riscv_cpu___024root* vlSelf);
void Vtb_riscv_cpu___024root___act_sequent__TOP__5(Vtb_riscv_cpu___024root* vlSelf);
void Vtb_riscv_cpu___024root___act_sequent__TOP__6(Vtb_riscv_cpu___024root* vlSelf);
void Vtb_riscv_cpu___024root___act_sequent__TOP__7(Vtb_riscv_cpu___024root* vlSelf);
void Vtb_riscv_cpu___024root___act_comb__TOP__1(Vtb_riscv_cpu___024root* vlSelf);
void Vtb_riscv_cpu___024root___act_comb__TOP__0(Vtb_riscv_cpu___024root* vlSelf);

VL_ATTR_COLD void Vtb_riscv_cpu___024root___eval_stl(Vtb_riscv_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___eval_stl\n"); );
    // Body
    if ((8ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_riscv_cpu___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_riscv_cpu___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_riscv_cpu___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((0x80ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_riscv_cpu___024root___act_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_riscv_cpu___024root___stl_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((0x40ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_riscv_cpu___024root___act_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((0x100ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_riscv_cpu___024root___act_sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_riscv_cpu___024root___act_sequent__TOP__6(vlSelf);
    }
    if ((0x20ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_riscv_cpu___024root___act_sequent__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((3ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_riscv_cpu___024root___act_comb__TOP__1(vlSelf);
    }
    if ((0x21ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_riscv_cpu___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_riscv_cpu___024root___eval_triggers__stl(Vtb_riscv_cpu___024root* vlSelf);

VL_ATTR_COLD bool Vtb_riscv_cpu___024root___eval_phase__stl(Vtb_riscv_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_riscv_cpu___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_riscv_cpu___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_riscv_cpu___024root___dump_triggers__act(Vtb_riscv_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] tb_riscv_cpu.dut.icache0.lru_tmp or [hybrid] tb_riscv_cpu.dut.icache0.lru_id_tmp)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] tb_riscv_cpu.dut.icache0.lru_tmp)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] tb_riscv_cpu.dut.icache0.mru_tmp or [hybrid] tb_riscv_cpu.dut.icache0.mru_id_tmp)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([hybrid] tb_riscv_cpu.dut.icache0.mru_tmp)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([hybrid] tb_riscv_cpu.dut.dcache0.lru_tmp or [hybrid] tb_riscv_cpu.dut.dcache0.lru_id_tmp)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([hybrid] tb_riscv_cpu.dut.dcache0.lru_tmp)\n");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([hybrid] tb_riscv_cpu.dut.dcache0.mru_tmp or [hybrid] tb_riscv_cpu.dut.dcache0.mru_id_tmp)\n");
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([hybrid] tb_riscv_cpu.dut.dcache0.mru_tmp)\n");
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @(posedge tb_riscv_cpu.clk)\n");
    }
    if ((0x200ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @(posedge tb_riscv_cpu.__Vcellinp__dut__rst or posedge tb_riscv_cpu.clk)\n");
    }
    if ((0x400ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x800ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @([changed] tb_riscv_cpu.rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_riscv_cpu___024root___dump_triggers__nba(Vtb_riscv_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] tb_riscv_cpu.dut.icache0.lru_tmp or [hybrid] tb_riscv_cpu.dut.icache0.lru_id_tmp)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] tb_riscv_cpu.dut.icache0.lru_tmp)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] tb_riscv_cpu.dut.icache0.mru_tmp or [hybrid] tb_riscv_cpu.dut.icache0.mru_id_tmp)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([hybrid] tb_riscv_cpu.dut.icache0.mru_tmp)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([hybrid] tb_riscv_cpu.dut.dcache0.lru_tmp or [hybrid] tb_riscv_cpu.dut.dcache0.lru_id_tmp)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([hybrid] tb_riscv_cpu.dut.dcache0.lru_tmp)\n");
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([hybrid] tb_riscv_cpu.dut.dcache0.mru_tmp or [hybrid] tb_riscv_cpu.dut.dcache0.mru_id_tmp)\n");
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([hybrid] tb_riscv_cpu.dut.dcache0.mru_tmp)\n");
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @(posedge tb_riscv_cpu.clk)\n");
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @(posedge tb_riscv_cpu.__Vcellinp__dut__rst or posedge tb_riscv_cpu.clk)\n");
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @([changed] tb_riscv_cpu.rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_riscv_cpu___024root___ctor_var_reset(Vtb_riscv_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_riscv_cpu__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__rst_n = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_riscv_cpu__DOT__inst_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_riscv_cpu__DOT__data_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_riscv_cpu__DOT__mem_addr = VL_RAND_RESET_Q(64);
    vlSelf->tb_riscv_cpu__DOT__mem_data_i = VL_RAND_RESET_Q(64);
    vlSelf->tb_riscv_cpu__DOT__mem_rwe = VL_RAND_RESET_I(4);
    vlSelf->tb_riscv_cpu__DOT__mem_sel = VL_RAND_RESET_I(8);
    vlSelf->tb_riscv_cpu__DOT__mem_busy = VL_RAND_RESET_I(2);
    vlSelf->tb_riscv_cpu__DOT__mem_done = VL_RAND_RESET_I(2);
    vlSelf->tb_riscv_cpu__DOT__mem_state = VL_RAND_RESET_I(2);
    vlSelf->tb_riscv_cpu__DOT__mem_operation_pending = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__pending_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__pending_we = VL_RAND_RESET_I(4);
    vlSelf->tb_riscv_cpu__DOT__pending_sel = VL_RAND_RESET_I(8);
    vlSelf->tb_riscv_cpu__DOT__pending_data = VL_RAND_RESET_Q(64);
    vlSelf->tb_riscv_cpu__DOT__cycle_count = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__max_cycles = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__simulation_done = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_r_data = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_done = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_write_mask = VL_RAND_RESET_I(4);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_write_data = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_rw_flag = VL_RAND_RESET_I(2);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_rwe = VL_RAND_RESET_I(2);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_w_data = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_sel = VL_RAND_RESET_I(4);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_done = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_write_mask = VL_RAND_RESET_I(4);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_write_data = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_rw_flag = VL_RAND_RESET_I(2);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stall = VL_RAND_RESET_I(6);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_if = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_mem = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__right_one = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__if_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__if_inst = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1 = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2 = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_data1 = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1 = VL_RAND_RESET_I(5);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2 = VL_RAND_RESET_I(5);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__br = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__br_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop = VL_RAND_RESET_I(8);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel = VL_RAND_RESET_I(3);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv1 = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv2 = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_link_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop = VL_RAND_RESET_I(8);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_alusel = VL_RAND_RESET_I(3);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1 = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2 = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_reg_waddr_i = VL_RAND_RESET_I(5);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_we_i = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_link_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_mem_offset = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_reg_wdata = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_mem_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_waddr_i = VL_RAND_RESET_I(5);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_we_i = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_aluop = VL_RAND_RESET_I(8);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_rt_data = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_waddr_o = VL_RAND_RESET_I(5);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_we_o = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__wb_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__wb_we = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__wb_reg_wdata = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_if0__mem_re = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_mem0__mem_we = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_mem0__mem_re = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__pending_rw_flag = VL_RAND_RESET_I(2);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__pending_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__pending_write_data = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__pending_write_mask = VL_RAND_RESET_I(4);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__rw_flag = VL_RAND_RESET_I(2);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_data_in = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_mask_in = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag[__Vi0][__Vi1] = VL_RAND_RESET_I(23);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__found_in_cache = VL_RAND_RESET_I(2);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__found_in_cache_flush = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__one_hot_lookup[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_tmp[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_tmp[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_id_tmp[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_id_tmp[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_cache = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_tag = VL_RAND_RESET_I(23);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_block = VL_RAND_RESET_I(4);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_word = VL_RAND_RESET_I(3);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__critical_word = VL_RAND_RESET_I(3);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_cache = VL_RAND_RESET_I(2);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_block = VL_RAND_RESET_I(4);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_word = VL_RAND_RESET_I(3);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_mask = VL_RAND_RESET_I(4);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_cache = VL_RAND_RESET_I(2);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_block = VL_RAND_RESET_I(4);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_word = VL_RAND_RESET_I(3);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid_cache = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid_block = VL_RAND_RESET_I(4);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid_flag = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid_tag = VL_RAND_RESET_I(23);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_done = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_cache = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_tag = VL_RAND_RESET_I(23);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_block = VL_RAND_RESET_I(4);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_word = VL_RAND_RESET_I(3);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_critical_word = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__RAM_read_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__RAM_read_select = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__k = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__rw_flag = VL_RAND_RESET_I(2);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__ram_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__ram_done = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT____Vcellout__genblk6__BRA__0__KET____DOT__RAM____pinNumber7 = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4 = VL_RAND_RESET_I(7);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__rw_flag = VL_RAND_RESET_I(2);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__ram_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__ram_done = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT____Vcellout__genblk6__BRA__1__KET____DOT__RAM____pinNumber7 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__pending_rw_flag = VL_RAND_RESET_I(2);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__pending_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__pending_write_data = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__pending_write_mask = VL_RAND_RESET_I(4);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__rw_flag = VL_RAND_RESET_I(2);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_data_in = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_mask_in = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag[__Vi0][__Vi1] = VL_RAND_RESET_I(25);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse[__Vi0][__Vi1] = VL_RAND_RESET_I(2);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache = VL_RAND_RESET_I(4);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache_flush = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_cache = VL_RAND_RESET_I(2);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_tag = VL_RAND_RESET_I(25);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_block = VL_RAND_RESET_I(2);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_word = VL_RAND_RESET_I(3);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__critical_word = VL_RAND_RESET_I(3);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_cache = VL_RAND_RESET_I(3);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_block = VL_RAND_RESET_I(2);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_word = VL_RAND_RESET_I(3);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_mask = VL_RAND_RESET_I(4);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_cache = VL_RAND_RESET_I(3);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_block = VL_RAND_RESET_I(2);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_word = VL_RAND_RESET_I(3);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid_cache = VL_RAND_RESET_I(2);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid_block = VL_RAND_RESET_I(2);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid_flag = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid_tag = VL_RAND_RESET_I(25);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_done = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_cache = VL_RAND_RESET_I(2);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_tag = VL_RAND_RESET_I(25);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_block = VL_RAND_RESET_I(2);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_word = VL_RAND_RESET_I(3);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_critical_word = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__RAM_read_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__RAM_read_select = VL_RAND_RESET_I(2);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__k = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__rw_flag = VL_RAND_RESET_I(2);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__ram_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__ram_done = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellout__genblk6__BRA__0__KET____DOT__RAM____pinNumber7 = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4 = VL_RAND_RESET_I(5);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__rw_flag = VL_RAND_RESET_I(2);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__ram_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__ram_done = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellout__genblk6__BRA__1__KET____DOT__RAM____pinNumber7 = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__rw_flag = VL_RAND_RESET_I(2);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__ram_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__ram_done = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellout__genblk6__BRA__2__KET____DOT__RAM____pinNumber7 = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__rw_flag = VL_RAND_RESET_I(2);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__ram_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__ram_done = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellout__genblk6__BRA__3__KET____DOT__RAM____pinNumber7 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__reg_pc0__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__reg_pc0__DOT__right_one = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__mem_taking = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__waiting_one = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1 = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2 = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__stallreq_for_reg1_load = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__stallreq_for_reg2_load = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__prev_is_load = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__pc_plus_B_imm = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT____VdfgExtracted_hb047d7aa__0 = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT____VdfgExtracted_h3acc3dea__0 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_mem0__DOT__mem_taking = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_tmp__0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_id_tmp__0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_tmp__0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_id_tmp__0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp__0[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp__0[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp__0[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp__0[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_tmp__1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_id_tmp__1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_tmp__1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_id_tmp__1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp__1[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp__1[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp__1[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp__1[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT____Vcellinp__dut__rst__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
