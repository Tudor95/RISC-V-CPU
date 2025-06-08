// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_riscv_cpu__Syms.h"


void Vtb_riscv_cpu___024root__trace_chg_0_sub_0(Vtb_riscv_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_riscv_cpu___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root__trace_chg_0\n"); );
    // Init
    Vtb_riscv_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_riscv_cpu___024root*>(voidSelf);
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_riscv_cpu___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_riscv_cpu___024root__trace_chg_0_sub_0(Vtb_riscv_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->tb_riscv_cpu__DOT__max_cycles),32);
        bufp->chgCData(oldp+1,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[0]),2);
        bufp->chgCData(oldp+2,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[1]),2);
        bufp->chgCData(oldp+3,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[2]),2);
        bufp->chgCData(oldp+4,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[3]),2);
        bufp->chgCData(oldp+5,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[4]),2);
        bufp->chgCData(oldp+6,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[5]),2);
        bufp->chgCData(oldp+7,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[6]),2);
        bufp->chgCData(oldp+8,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[7]),2);
        bufp->chgCData(oldp+9,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[8]),2);
        bufp->chgCData(oldp+10,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[9]),2);
        bufp->chgCData(oldp+11,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[10]),2);
        bufp->chgCData(oldp+12,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[11]),2);
        bufp->chgCData(oldp+13,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[12]),2);
        bufp->chgCData(oldp+14,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[13]),2);
        bufp->chgCData(oldp+15,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[14]),2);
        bufp->chgCData(oldp+16,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[15]),2);
        bufp->chgIData(oldp+17,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+18,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+19,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+20,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+21,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__one_hot_lookup[0]));
        bufp->chgBit(oldp+22,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__one_hot_lookup[1]));
        bufp->chgBit(oldp+23,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__one_hot_lookup[2]));
        bufp->chgBit(oldp+24,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__one_hot_lookup[3]));
        bufp->chgIData(oldp+25,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+26,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+27,(vlSelf->tb_riscv_cpu__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+28,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp[0]),2);
        bufp->chgCData(oldp+29,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp[1]),2);
        bufp->chgCData(oldp+30,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp[2]),2);
        bufp->chgCData(oldp+31,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp[3]),2);
        bufp->chgCData(oldp+32,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp[4]),2);
        bufp->chgCData(oldp+33,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp[5]),2);
        bufp->chgCData(oldp+34,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp[6]),2);
        bufp->chgCData(oldp+35,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp
                                [0U]),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgCData(oldp+36,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp[0]),2);
        bufp->chgCData(oldp+37,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp[1]),2);
        bufp->chgCData(oldp+38,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp[2]),2);
        bufp->chgCData(oldp+39,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp[3]),2);
        bufp->chgCData(oldp+40,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp[4]),2);
        bufp->chgCData(oldp+41,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp[5]),2);
        bufp->chgCData(oldp+42,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp[6]),2);
        bufp->chgCData(oldp+43,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp
                                [0U]),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgIData(oldp+44,(vlSelf->tb_riscv_cpu__DOT__cycle_count),32);
        bufp->chgBit(oldp+45,(vlSelf->tb_riscv_cpu__DOT__simulation_done));
        bufp->chgIData(oldp+46,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[0]),32);
        bufp->chgIData(oldp+47,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[1]),32);
        bufp->chgIData(oldp+48,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[2]),32);
        bufp->chgIData(oldp+49,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[3]),32);
        bufp->chgIData(oldp+50,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[4]),32);
        bufp->chgIData(oldp+51,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[5]),32);
        bufp->chgIData(oldp+52,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[6]),32);
        bufp->chgIData(oldp+53,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[7]),32);
        bufp->chgIData(oldp+54,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[8]),32);
        bufp->chgIData(oldp+55,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[9]),32);
        bufp->chgIData(oldp+56,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[10]),32);
        bufp->chgIData(oldp+57,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[11]),32);
        bufp->chgIData(oldp+58,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[12]),32);
        bufp->chgIData(oldp+59,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[13]),32);
        bufp->chgIData(oldp+60,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[14]),32);
        bufp->chgIData(oldp+61,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[15]),32);
        bufp->chgIData(oldp+62,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[16]),32);
        bufp->chgIData(oldp+63,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[17]),32);
        bufp->chgIData(oldp+64,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[18]),32);
        bufp->chgIData(oldp+65,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[19]),32);
        bufp->chgIData(oldp+66,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[20]),32);
        bufp->chgIData(oldp+67,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[21]),32);
        bufp->chgIData(oldp+68,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[22]),32);
        bufp->chgIData(oldp+69,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[23]),32);
        bufp->chgIData(oldp+70,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[24]),32);
        bufp->chgIData(oldp+71,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[25]),32);
        bufp->chgIData(oldp+72,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[26]),32);
        bufp->chgIData(oldp+73,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[27]),32);
        bufp->chgIData(oldp+74,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[28]),32);
        bufp->chgIData(oldp+75,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[29]),32);
        bufp->chgIData(oldp+76,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[30]),32);
        bufp->chgIData(oldp+77,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[31]),32);
        bufp->chgIData(oldp+78,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[0]),32);
        bufp->chgIData(oldp+79,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[1]),32);
        bufp->chgIData(oldp+80,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[2]),32);
        bufp->chgIData(oldp+81,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[3]),32);
        bufp->chgIData(oldp+82,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[4]),32);
        bufp->chgIData(oldp+83,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[5]),32);
        bufp->chgIData(oldp+84,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[6]),32);
        bufp->chgIData(oldp+85,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[7]),32);
        bufp->chgIData(oldp+86,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[8]),32);
        bufp->chgIData(oldp+87,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[9]),32);
        bufp->chgIData(oldp+88,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[10]),32);
        bufp->chgIData(oldp+89,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[11]),32);
        bufp->chgIData(oldp+90,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[12]),32);
        bufp->chgIData(oldp+91,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[13]),32);
        bufp->chgIData(oldp+92,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[14]),32);
        bufp->chgIData(oldp+93,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[15]),32);
        bufp->chgIData(oldp+94,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[16]),32);
        bufp->chgIData(oldp+95,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[17]),32);
        bufp->chgIData(oldp+96,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[18]),32);
        bufp->chgIData(oldp+97,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[19]),32);
        bufp->chgIData(oldp+98,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[20]),32);
        bufp->chgIData(oldp+99,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[21]),32);
        bufp->chgIData(oldp+100,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[22]),32);
        bufp->chgIData(oldp+101,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[23]),32);
        bufp->chgIData(oldp+102,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[24]),32);
        bufp->chgIData(oldp+103,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[25]),32);
        bufp->chgIData(oldp+104,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[26]),32);
        bufp->chgIData(oldp+105,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[27]),32);
        bufp->chgIData(oldp+106,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[28]),32);
        bufp->chgIData(oldp+107,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[29]),32);
        bufp->chgIData(oldp+108,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[30]),32);
        bufp->chgIData(oldp+109,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[31]),32);
        bufp->chgIData(oldp+110,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[0]),32);
        bufp->chgIData(oldp+111,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[1]),32);
        bufp->chgIData(oldp+112,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[2]),32);
        bufp->chgIData(oldp+113,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[3]),32);
        bufp->chgIData(oldp+114,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[4]),32);
        bufp->chgIData(oldp+115,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[5]),32);
        bufp->chgIData(oldp+116,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[6]),32);
        bufp->chgIData(oldp+117,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[7]),32);
        bufp->chgIData(oldp+118,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[8]),32);
        bufp->chgIData(oldp+119,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[9]),32);
        bufp->chgIData(oldp+120,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[10]),32);
        bufp->chgIData(oldp+121,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[11]),32);
        bufp->chgIData(oldp+122,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[12]),32);
        bufp->chgIData(oldp+123,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[13]),32);
        bufp->chgIData(oldp+124,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[14]),32);
        bufp->chgIData(oldp+125,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[15]),32);
        bufp->chgIData(oldp+126,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[16]),32);
        bufp->chgIData(oldp+127,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[17]),32);
        bufp->chgIData(oldp+128,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[18]),32);
        bufp->chgIData(oldp+129,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[19]),32);
        bufp->chgIData(oldp+130,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[20]),32);
        bufp->chgIData(oldp+131,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[21]),32);
        bufp->chgIData(oldp+132,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[22]),32);
        bufp->chgIData(oldp+133,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[23]),32);
        bufp->chgIData(oldp+134,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[24]),32);
        bufp->chgIData(oldp+135,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[25]),32);
        bufp->chgIData(oldp+136,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[26]),32);
        bufp->chgIData(oldp+137,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[27]),32);
        bufp->chgIData(oldp+138,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[28]),32);
        bufp->chgIData(oldp+139,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[29]),32);
        bufp->chgIData(oldp+140,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[30]),32);
        bufp->chgIData(oldp+141,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[31]),32);
        bufp->chgIData(oldp+142,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[0]),32);
        bufp->chgIData(oldp+143,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[1]),32);
        bufp->chgIData(oldp+144,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[2]),32);
        bufp->chgIData(oldp+145,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[3]),32);
        bufp->chgIData(oldp+146,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[4]),32);
        bufp->chgIData(oldp+147,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[5]),32);
        bufp->chgIData(oldp+148,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[6]),32);
        bufp->chgIData(oldp+149,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[7]),32);
        bufp->chgIData(oldp+150,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[8]),32);
        bufp->chgIData(oldp+151,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[9]),32);
        bufp->chgIData(oldp+152,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[10]),32);
        bufp->chgIData(oldp+153,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[11]),32);
        bufp->chgIData(oldp+154,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[12]),32);
        bufp->chgIData(oldp+155,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[13]),32);
        bufp->chgIData(oldp+156,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[14]),32);
        bufp->chgIData(oldp+157,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[15]),32);
        bufp->chgIData(oldp+158,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[16]),32);
        bufp->chgIData(oldp+159,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[17]),32);
        bufp->chgIData(oldp+160,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[18]),32);
        bufp->chgIData(oldp+161,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[19]),32);
        bufp->chgIData(oldp+162,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[20]),32);
        bufp->chgIData(oldp+163,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[21]),32);
        bufp->chgIData(oldp+164,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[22]),32);
        bufp->chgIData(oldp+165,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[23]),32);
        bufp->chgIData(oldp+166,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[24]),32);
        bufp->chgIData(oldp+167,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[25]),32);
        bufp->chgIData(oldp+168,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[26]),32);
        bufp->chgIData(oldp+169,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[27]),32);
        bufp->chgIData(oldp+170,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[28]),32);
        bufp->chgIData(oldp+171,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[29]),32);
        bufp->chgIData(oldp+172,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[30]),32);
        bufp->chgIData(oldp+173,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[31]),32);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[3U] 
                      | vlSelf->__Vm_traceActivity[6U]) 
                     | vlSelf->__Vm_traceActivity[9U]))) {
        bufp->chgCData(oldp+174,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp[0]),2);
        bufp->chgCData(oldp+175,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp[1]),2);
        bufp->chgCData(oldp+176,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp[2]),2);
        bufp->chgCData(oldp+177,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp[3]),2);
        bufp->chgCData(oldp+178,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp[4]),2);
        bufp->chgCData(oldp+179,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp[5]),2);
        bufp->chgCData(oldp+180,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp[6]),2);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[4U] 
                      | vlSelf->__Vm_traceActivity[6U]) 
                     | vlSelf->__Vm_traceActivity[9U]))) {
        bufp->chgCData(oldp+181,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp[0]),2);
        bufp->chgCData(oldp+182,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp[1]),2);
        bufp->chgCData(oldp+183,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp[2]),2);
        bufp->chgCData(oldp+184,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp[3]),2);
        bufp->chgCData(oldp+185,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp[4]),2);
        bufp->chgCData(oldp+186,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp[5]),2);
        bufp->chgCData(oldp+187,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp[6]),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[6U] 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgBit(oldp+188,(((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__stallreq_for_reg1_load) 
                                | (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__stallreq_for_reg2_load))));
        bufp->chgBit(oldp+189,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1));
        bufp->chgBit(oldp+190,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2));
        bufp->chgIData(oldp+191,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_data1),32);
        bufp->chgIData(oldp+192,(((1U & (((IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) 
                                          | (~ (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2))) 
                                         | (0U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2))))
                                   ? 0U : (((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__wb_we) 
                                            & ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2) 
                                               == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__wb_reg_waddr)))
                                            ? vlSelf->tb_riscv_cpu__DOT__dut__DOT__wb_reg_wdata
                                            : vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs
                                           [vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2]))),32);
        bufp->chgCData(oldp+193,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1),5);
        bufp->chgCData(oldp+194,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2),5);
        bufp->chgIData(oldp+195,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__br_addr),32);
        bufp->chgCData(oldp+196,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop),8);
        bufp->chgCData(oldp+197,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel),3);
        bufp->chgBit(oldp+198,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we));
        bufp->chgCData(oldp+199,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr),5);
        bufp->chgIData(oldp+200,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_link_addr),32);
        bufp->chgIData(oldp+201,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset),32);
        bufp->chgIData(oldp+202,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_reg_wdata),32);
        bufp->chgIData(oldp+203,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_mem_addr),32);
        bufp->chgIData(oldp+204,((((IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) 
                                   | (1U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_alusel)))
                                   ? 0U : ((3U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop))
                                            ? (vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1 
                                               ^ vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2)
                                            : ((2U 
                                                == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop))
                                                ? (vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1 
                                                   | vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2)
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop))
                                                    ? 
                                                   (vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1 
                                                    & vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2)
                                                    : 0U))))),32);
        bufp->chgIData(oldp+205,((((IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) 
                                   | (2U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_alusel)))
                                   ? 0U : ((5U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop))
                                            ? (vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1 
                                               << (0x1fU 
                                                   & vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2))
                                            : ((6U 
                                                == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop))
                                                ? (vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2))
                                                : (
                                                   (7U 
                                                    == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop))
                                                    ? 
                                                   (VL_SHIFTL_III(32,32,6, 
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
                                                    : 0U))))),32);
        bufp->chgIData(oldp+206,((((IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) 
                                   | (4U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_alusel)))
                                   ? 0U : ((8U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop))
                                            ? (vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1 
                                               + vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2)
                                            : ((0xbU 
                                                == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop))
                                                ? (vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1 
                                                   - vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2)
                                                : (
                                                   (9U 
                                                    == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop))
                                                    ? 
                                                   VL_LTS_III(32, vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1, vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2)
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop))
                                                     ? 
                                                    (vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1 
                                                     < vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2)
                                                     : 0U)))))),32);
        bufp->chgIData(oldp+207,((((IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) 
                                   | (7U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_alusel)))
                                   ? 0U : (vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_mem_offset 
                                           + vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1))),32);
        bufp->chgIData(oldp+208,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1),32);
        bufp->chgIData(oldp+209,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2),32);
        bufp->chgBit(oldp+210,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid));
        bufp->chgBit(oldp+211,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__stallreq_for_reg1_load));
        bufp->chgBit(oldp+212,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__stallreq_for_reg2_load));
        bufp->chgIData(oldp+213,((vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_data1 
                                  + vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT____VdfgExtracted_hb047d7aa__0)),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[6U] 
                     | vlSelf->__Vm_traceActivity[9U]))) {
        bufp->chgQData(oldp+214,(vlSelf->tb_riscv_cpu__DOT__mem_addr),64);
        bufp->chgQData(oldp+216,((((QData)((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_write_data)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_write_data)))),64);
        bufp->chgCData(oldp+218,(vlSelf->tb_riscv_cpu__DOT__mem_rwe),4);
        bufp->chgCData(oldp+219,(vlSelf->tb_riscv_cpu__DOT__mem_sel),8);
        bufp->chgCData(oldp+220,(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_if0__mem_re),2);
        bufp->chgIData(oldp+221,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_addr),32);
        bufp->chgCData(oldp+222,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_rwe),2);
        bufp->chgIData(oldp+223,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_addr),32);
        bufp->chgIData(oldp+224,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_w_data),32);
        bufp->chgCData(oldp+225,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_sel),4);
        bufp->chgCData(oldp+226,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stall),6);
        bufp->chgBit(oldp+227,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_if));
        bufp->chgBit(oldp+228,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_mem));
        bufp->chgIData(oldp+229,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__if_pc),32);
        bufp->chgIData(oldp+230,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__if_inst),32);
        bufp->chgBit(oldp+231,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__br));
        bufp->chgIData(oldp+232,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv1),32);
        bufp->chgIData(oldp+233,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv2),32);
        bufp->chgCData(oldp+234,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_waddr_o),5);
        bufp->chgBit(oldp+235,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_we_o));
        bufp->chgIData(oldp+236,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_wdata_o),32);
        bufp->chgCData(oldp+237,(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_rw_flag),2);
        bufp->chgIData(oldp+238,(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_addr),32);
        bufp->chgIData(oldp+239,(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_write_data),32);
        bufp->chgCData(oldp+240,(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_write_mask),4);
        bufp->chgCData(oldp+241,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__rw_flag),2);
        bufp->chgIData(oldp+242,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr),32);
        bufp->chgIData(oldp+243,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_data_in),32);
        bufp->chgCData(oldp+244,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_mask_in),4);
        bufp->chgIData(oldp+245,((vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                                  >> 7U)),25);
        bufp->chgCData(oldp+246,((3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                                        >> 5U))),2);
        bufp->chgCData(oldp+247,((7U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                                        >> 2U))),3);
        bufp->chgCData(oldp+248,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache),4);
        bufp->chgCData(oldp+249,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_state),3);
        bufp->chgCData(oldp+250,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_cache),3);
        bufp->chgCData(oldp+251,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_block),2);
        bufp->chgCData(oldp+252,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_word),3);
        bufp->chgIData(oldp+253,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_data),32);
        bufp->chgCData(oldp+254,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_mask),4);
        bufp->chgCData(oldp+255,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_cache),3);
        bufp->chgCData(oldp+256,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_block),2);
        bufp->chgCData(oldp+257,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_word),3);
        bufp->chgCData(oldp+258,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid_block),2);
        bufp->chgBit(oldp+259,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid_flag));
        bufp->chgIData(oldp+260,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid_tag),25);
        bufp->chgBit(oldp+261,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_done));
        bufp->chgIData(oldp+262,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_tag),25);
        bufp->chgCData(oldp+263,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_block),2);
        bufp->chgCData(oldp+264,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_word),3);
        bufp->chgCData(oldp+265,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_critical_word),3);
        bufp->chgBit(oldp+266,((0U == VL_EXTENDS_II(32,3, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_cache)))));
        bufp->chgBit(oldp+267,((0U == VL_EXTENDS_II(32,3, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_cache)))));
        bufp->chgCData(oldp+268,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__rw_flag),2);
        bufp->chgCData(oldp+269,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4),5);
        bufp->chgBit(oldp+270,((1U == VL_EXTENDS_II(32,3, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_cache)))));
        bufp->chgBit(oldp+271,((1U == VL_EXTENDS_II(32,3, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_cache)))));
        bufp->chgCData(oldp+272,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__rw_flag),2);
        bufp->chgBit(oldp+273,((2U == VL_EXTENDS_II(32,3, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_cache)))));
        bufp->chgBit(oldp+274,((2U == VL_EXTENDS_II(32,3, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_cache)))));
        bufp->chgCData(oldp+275,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__rw_flag),2);
        bufp->chgBit(oldp+276,((3U == VL_EXTENDS_II(32,3, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_cache)))));
        bufp->chgBit(oldp+277,((3U == VL_EXTENDS_II(32,3, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_cache)))));
        bufp->chgCData(oldp+278,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__rw_flag),2);
        bufp->chgCData(oldp+279,(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_rw_flag),2);
        bufp->chgIData(oldp+280,(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_addr),32);
        bufp->chgIData(oldp+281,(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_write_data),32);
        bufp->chgCData(oldp+282,(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_write_mask),4);
        bufp->chgCData(oldp+283,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__rw_flag),2);
        bufp->chgIData(oldp+284,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr),32);
        bufp->chgIData(oldp+285,((vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                                  >> 9U)),23);
        bufp->chgCData(oldp+286,((0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                                          >> 5U))),4);
        bufp->chgCData(oldp+287,((7U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                                        >> 2U))),3);
        bufp->chgCData(oldp+288,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__found_in_cache),2);
        bufp->chgCData(oldp+289,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_state),3);
        bufp->chgCData(oldp+290,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_cache),2);
        bufp->chgCData(oldp+291,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_block),4);
        bufp->chgCData(oldp+292,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_word),3);
        bufp->chgIData(oldp+293,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_data),32);
        bufp->chgCData(oldp+294,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_mask),4);
        bufp->chgCData(oldp+295,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_cache),2);
        bufp->chgCData(oldp+296,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_block),4);
        bufp->chgCData(oldp+297,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_word),3);
        bufp->chgCData(oldp+298,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid_block),4);
        bufp->chgBit(oldp+299,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid_flag));
        bufp->chgIData(oldp+300,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid_tag),23);
        bufp->chgBit(oldp+301,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_done));
        bufp->chgIData(oldp+302,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_tag),23);
        bufp->chgCData(oldp+303,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_block),4);
        bufp->chgCData(oldp+304,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_word),3);
        bufp->chgCData(oldp+305,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_critical_word),3);
        bufp->chgBit(oldp+306,((0U == VL_EXTENDS_II(32,2, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_cache)))));
        bufp->chgBit(oldp+307,((0U == VL_EXTENDS_II(32,2, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_cache)))));
        bufp->chgCData(oldp+308,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__rw_flag),2);
        bufp->chgCData(oldp+309,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4),7);
        bufp->chgBit(oldp+310,((1U == VL_EXTENDS_II(32,2, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_cache)))));
        bufp->chgBit(oldp+311,((1U == VL_EXTENDS_II(32,2, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_cache)))));
        bufp->chgCData(oldp+312,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__rw_flag),2);
        bufp->chgBit(oldp+313,((vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv1 
                                == vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv2)));
        bufp->chgBit(oldp+314,((vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv1 
                                != vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv2)));
        bufp->chgBit(oldp+315,(VL_LTS_III(32, vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv1, vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv2)));
        bufp->chgBit(oldp+316,((vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv1 
                                < vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv2)));
        bufp->chgBit(oldp+317,(VL_GTES_III(32, vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv1, vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv2)));
        bufp->chgBit(oldp+318,((vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv1 
                                >= vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv2)));
        bufp->chgBit(oldp+319,(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_if0__mem_re));
        bufp->chgBit(oldp+320,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__mem_taking));
        bufp->chgBit(oldp+321,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__waiting_one));
        bufp->chgBit(oldp+322,(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_mem0__mem_re));
        bufp->chgBit(oldp+323,(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_mem0__mem_we));
        bufp->chgBit(oldp+324,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_mem0__DOT__mem_taking));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgQData(oldp+325,(vlSelf->tb_riscv_cpu__DOT__mem_data_i),64);
        bufp->chgCData(oldp+327,(vlSelf->tb_riscv_cpu__DOT__mem_busy),2);
        bufp->chgCData(oldp+328,(vlSelf->tb_riscv_cpu__DOT__mem_done),2);
        bufp->chgCData(oldp+329,(vlSelf->tb_riscv_cpu__DOT__mem_state),2);
        bufp->chgBit(oldp+330,(vlSelf->tb_riscv_cpu__DOT__mem_operation_pending));
        bufp->chgIData(oldp+331,(vlSelf->tb_riscv_cpu__DOT__pending_addr),32);
        bufp->chgCData(oldp+332,(vlSelf->tb_riscv_cpu__DOT__pending_we),4);
        bufp->chgCData(oldp+333,(vlSelf->tb_riscv_cpu__DOT__pending_sel),8);
        bufp->chgQData(oldp+334,(vlSelf->tb_riscv_cpu__DOT__pending_data),64);
        bufp->chgIData(oldp+336,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_r_data),32);
        bufp->chgBit(oldp+337,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_done));
        bufp->chgIData(oldp+338,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data),32);
        bufp->chgBit(oldp+339,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_done));
        bufp->chgIData(oldp+340,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__pc),32);
        bufp->chgBit(oldp+341,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__right_one));
        bufp->chgIData(oldp+342,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_pc),32);
        bufp->chgIData(oldp+343,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst),32);
        bufp->chgCData(oldp+344,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop),8);
        bufp->chgCData(oldp+345,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_alusel),3);
        bufp->chgIData(oldp+346,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1),32);
        bufp->chgIData(oldp+347,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2),32);
        bufp->chgCData(oldp+348,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_reg_waddr_i),5);
        bufp->chgBit(oldp+349,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_we_i));
        bufp->chgIData(oldp+350,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_link_addr),32);
        bufp->chgIData(oldp+351,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_mem_offset),32);
        bufp->chgCData(oldp+352,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_waddr_i),5);
        bufp->chgBit(oldp+353,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_we_i));
        bufp->chgIData(oldp+354,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_wdata_i),32);
        bufp->chgIData(oldp+355,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr),32);
        bufp->chgCData(oldp+356,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_aluop),8);
        bufp->chgIData(oldp+357,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_rt_data),32);
        bufp->chgCData(oldp+358,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__wb_reg_waddr),5);
        bufp->chgBit(oldp+359,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__wb_we));
        bufp->chgIData(oldp+360,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__wb_reg_wdata),32);
        bufp->chgIData(oldp+361,((IData)(vlSelf->tb_riscv_cpu__DOT__mem_data_i)),32);
        bufp->chgBit(oldp+362,((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__mem_busy))));
        bufp->chgBit(oldp+363,((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__mem_done))));
        bufp->chgIData(oldp+364,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                                 [0U][0U]),25);
        bufp->chgIData(oldp+365,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                                 [0U][1U]),25);
        bufp->chgIData(oldp+366,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                                 [0U][2U]),25);
        bufp->chgIData(oldp+367,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                                 [0U][3U]),25);
        bufp->chgIData(oldp+368,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                                 [1U][0U]),25);
        bufp->chgIData(oldp+369,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                                 [1U][1U]),25);
        bufp->chgIData(oldp+370,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                                 [1U][2U]),25);
        bufp->chgIData(oldp+371,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                                 [1U][3U]),25);
        bufp->chgIData(oldp+372,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                                 [2U][0U]),25);
        bufp->chgIData(oldp+373,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                                 [2U][1U]),25);
        bufp->chgIData(oldp+374,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                                 [2U][2U]),25);
        bufp->chgIData(oldp+375,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                                 [2U][3U]),25);
        bufp->chgIData(oldp+376,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                                 [3U][0U]),25);
        bufp->chgIData(oldp+377,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                                 [3U][1U]),25);
        bufp->chgIData(oldp+378,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                                 [3U][2U]),25);
        bufp->chgIData(oldp+379,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                                 [3U][3U]),25);
        bufp->chgBit(oldp+380,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
                               [0U][0U]));
        bufp->chgBit(oldp+381,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
                               [0U][1U]));
        bufp->chgBit(oldp+382,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
                               [0U][2U]));
        bufp->chgBit(oldp+383,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
                               [0U][3U]));
        bufp->chgBit(oldp+384,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
                               [1U][0U]));
        bufp->chgBit(oldp+385,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
                               [1U][1U]));
        bufp->chgBit(oldp+386,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
                               [1U][2U]));
        bufp->chgBit(oldp+387,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
                               [1U][3U]));
        bufp->chgBit(oldp+388,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
                               [2U][0U]));
        bufp->chgBit(oldp+389,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
                               [2U][1U]));
        bufp->chgBit(oldp+390,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
                               [2U][2U]));
        bufp->chgBit(oldp+391,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
                               [2U][3U]));
        bufp->chgBit(oldp+392,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
                               [3U][0U]));
        bufp->chgBit(oldp+393,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
                               [3U][1U]));
        bufp->chgBit(oldp+394,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
                               [3U][2U]));
        bufp->chgBit(oldp+395,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
                               [3U][3U]));
        bufp->chgCData(oldp+396,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                                 [0U][0U]),2);
        bufp->chgCData(oldp+397,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                                 [0U][1U]),2);
        bufp->chgCData(oldp+398,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                                 [0U][2U]),2);
        bufp->chgCData(oldp+399,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                                 [0U][3U]),2);
        bufp->chgCData(oldp+400,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                                 [1U][0U]),2);
        bufp->chgCData(oldp+401,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                                 [1U][1U]),2);
        bufp->chgCData(oldp+402,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                                 [1U][2U]),2);
        bufp->chgCData(oldp+403,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                                 [1U][3U]),2);
        bufp->chgCData(oldp+404,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                                 [2U][0U]),2);
        bufp->chgCData(oldp+405,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                                 [2U][1U]),2);
        bufp->chgCData(oldp+406,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                                 [2U][2U]),2);
        bufp->chgCData(oldp+407,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                                 [2U][3U]),2);
        bufp->chgCData(oldp+408,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                                 [3U][0U]),2);
        bufp->chgCData(oldp+409,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                                 [3U][1U]),2);
        bufp->chgCData(oldp+410,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                                 [3U][2U]),2);
        bufp->chgCData(oldp+411,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                                 [3U][3U]),2);
        bufp->chgCData(oldp+412,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter[0]),2);
        bufp->chgCData(oldp+413,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter[1]),2);
        bufp->chgCData(oldp+414,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter[2]),2);
        bufp->chgCData(oldp+415,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter[3]),2);
        bufp->chgCData(oldp+416,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache_flush),4);
        bufp->chgCData(oldp+417,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__state),3);
        bufp->chgCData(oldp+418,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_cache),2);
        bufp->chgIData(oldp+419,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_tag),25);
        bufp->chgCData(oldp+420,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_block),2);
        bufp->chgCData(oldp+421,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_word),3);
        bufp->chgCData(oldp+422,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__critical_word),3);
        bufp->chgIData(oldp+423,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__RAM_read_data[0]),32);
        bufp->chgIData(oldp+424,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__RAM_read_data[1]),32);
        bufp->chgIData(oldp+425,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__RAM_read_data[2]),32);
        bufp->chgIData(oldp+426,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__RAM_read_data[3]),32);
        bufp->chgCData(oldp+427,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__RAM_read_select),2);
        bufp->chgIData(oldp+428,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__j),32);
        bufp->chgIData(oldp+429,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__k),32);
        bufp->chgBit(oldp+430,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__ram_busy));
        bufp->chgBit(oldp+431,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__ram_done));
        bufp->chgIData(oldp+432,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellout__genblk6__BRA__0__KET____DOT__RAM____pinNumber7),32);
        bufp->chgBit(oldp+433,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__ram_busy));
        bufp->chgBit(oldp+434,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__ram_done));
        bufp->chgIData(oldp+435,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellout__genblk6__BRA__1__KET____DOT__RAM____pinNumber7),32);
        bufp->chgBit(oldp+436,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__ram_busy));
        bufp->chgBit(oldp+437,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__ram_done));
        bufp->chgIData(oldp+438,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellout__genblk6__BRA__2__KET____DOT__RAM____pinNumber7),32);
        bufp->chgBit(oldp+439,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__ram_busy));
        bufp->chgBit(oldp+440,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__ram_done));
        bufp->chgIData(oldp+441,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellout__genblk6__BRA__3__KET____DOT__RAM____pinNumber7),32);
        bufp->chgIData(oldp+442,((IData)((vlSelf->tb_riscv_cpu__DOT__mem_data_i 
                                          >> 0x20U))),32);
        bufp->chgBit(oldp+443,((1U & ((IData)(vlSelf->tb_riscv_cpu__DOT__mem_busy) 
                                      >> 1U))));
        bufp->chgBit(oldp+444,((1U & ((IData)(vlSelf->tb_riscv_cpu__DOT__mem_done) 
                                      >> 1U))));
        bufp->chgIData(oldp+445,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                                 [0U][0U]),23);
        bufp->chgIData(oldp+446,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                                 [0U][1U]),23);
        bufp->chgIData(oldp+447,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                                 [0U][2U]),23);
        bufp->chgIData(oldp+448,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                                 [0U][3U]),23);
        bufp->chgIData(oldp+449,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                                 [0U][4U]),23);
        bufp->chgIData(oldp+450,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                                 [0U][5U]),23);
        bufp->chgIData(oldp+451,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                                 [0U][6U]),23);
        bufp->chgIData(oldp+452,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                                 [0U][7U]),23);
        bufp->chgIData(oldp+453,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                                 [0U][8U]),23);
        bufp->chgIData(oldp+454,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                                 [0U][9U]),23);
        bufp->chgIData(oldp+455,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                                 [0U][0xaU]),23);
        bufp->chgIData(oldp+456,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                                 [0U][0xbU]),23);
        bufp->chgIData(oldp+457,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                                 [0U][0xcU]),23);
        bufp->chgIData(oldp+458,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                                 [0U][0xdU]),23);
        bufp->chgIData(oldp+459,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                                 [0U][0xeU]),23);
        bufp->chgIData(oldp+460,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                                 [0U][0xfU]),23);
        bufp->chgIData(oldp+461,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                                 [1U][0U]),23);
        bufp->chgIData(oldp+462,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                                 [1U][1U]),23);
        bufp->chgIData(oldp+463,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                                 [1U][2U]),23);
        bufp->chgIData(oldp+464,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                                 [1U][3U]),23);
        bufp->chgIData(oldp+465,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                                 [1U][4U]),23);
        bufp->chgIData(oldp+466,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                                 [1U][5U]),23);
        bufp->chgIData(oldp+467,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                                 [1U][6U]),23);
        bufp->chgIData(oldp+468,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                                 [1U][7U]),23);
        bufp->chgIData(oldp+469,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                                 [1U][8U]),23);
        bufp->chgIData(oldp+470,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                                 [1U][9U]),23);
        bufp->chgIData(oldp+471,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                                 [1U][0xaU]),23);
        bufp->chgIData(oldp+472,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                                 [1U][0xbU]),23);
        bufp->chgIData(oldp+473,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                                 [1U][0xcU]),23);
        bufp->chgIData(oldp+474,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                                 [1U][0xdU]),23);
        bufp->chgIData(oldp+475,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                                 [1U][0xeU]),23);
        bufp->chgIData(oldp+476,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                                 [1U][0xfU]),23);
        bufp->chgBit(oldp+477,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                               [0U][0U]));
        bufp->chgBit(oldp+478,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                               [0U][1U]));
        bufp->chgBit(oldp+479,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                               [0U][2U]));
        bufp->chgBit(oldp+480,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                               [0U][3U]));
        bufp->chgBit(oldp+481,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                               [0U][4U]));
        bufp->chgBit(oldp+482,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                               [0U][5U]));
        bufp->chgBit(oldp+483,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                               [0U][6U]));
        bufp->chgBit(oldp+484,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                               [0U][7U]));
        bufp->chgBit(oldp+485,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                               [0U][8U]));
        bufp->chgBit(oldp+486,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                               [0U][9U]));
        bufp->chgBit(oldp+487,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                               [0U][0xaU]));
        bufp->chgBit(oldp+488,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                               [0U][0xbU]));
        bufp->chgBit(oldp+489,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                               [0U][0xcU]));
        bufp->chgBit(oldp+490,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                               [0U][0xdU]));
        bufp->chgBit(oldp+491,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                               [0U][0xeU]));
        bufp->chgBit(oldp+492,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                               [0U][0xfU]));
        bufp->chgBit(oldp+493,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                               [1U][0U]));
        bufp->chgBit(oldp+494,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                               [1U][1U]));
        bufp->chgBit(oldp+495,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                               [1U][2U]));
        bufp->chgBit(oldp+496,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                               [1U][3U]));
        bufp->chgBit(oldp+497,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                               [1U][4U]));
        bufp->chgBit(oldp+498,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                               [1U][5U]));
        bufp->chgBit(oldp+499,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                               [1U][6U]));
        bufp->chgBit(oldp+500,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                               [1U][7U]));
        bufp->chgBit(oldp+501,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                               [1U][8U]));
        bufp->chgBit(oldp+502,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                               [1U][9U]));
        bufp->chgBit(oldp+503,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                               [1U][0xaU]));
        bufp->chgBit(oldp+504,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                               [1U][0xbU]));
        bufp->chgBit(oldp+505,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                               [1U][0xcU]));
        bufp->chgBit(oldp+506,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                               [1U][0xdU]));
        bufp->chgBit(oldp+507,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                               [1U][0xeU]));
        bufp->chgBit(oldp+508,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                               [1U][0xfU]));
        bufp->chgBit(oldp+509,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                               [0U][0U]));
        bufp->chgBit(oldp+510,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                               [0U][1U]));
        bufp->chgBit(oldp+511,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                               [0U][2U]));
        bufp->chgBit(oldp+512,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                               [0U][3U]));
        bufp->chgBit(oldp+513,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                               [0U][4U]));
        bufp->chgBit(oldp+514,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                               [0U][5U]));
        bufp->chgBit(oldp+515,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                               [0U][6U]));
        bufp->chgBit(oldp+516,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                               [0U][7U]));
        bufp->chgBit(oldp+517,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                               [0U][8U]));
        bufp->chgBit(oldp+518,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                               [0U][9U]));
        bufp->chgBit(oldp+519,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                               [0U][0xaU]));
        bufp->chgBit(oldp+520,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                               [0U][0xbU]));
        bufp->chgBit(oldp+521,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                               [0U][0xcU]));
        bufp->chgBit(oldp+522,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                               [0U][0xdU]));
        bufp->chgBit(oldp+523,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                               [0U][0xeU]));
        bufp->chgBit(oldp+524,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                               [0U][0xfU]));
        bufp->chgBit(oldp+525,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                               [1U][0U]));
        bufp->chgBit(oldp+526,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                               [1U][1U]));
        bufp->chgBit(oldp+527,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                               [1U][2U]));
        bufp->chgBit(oldp+528,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                               [1U][3U]));
        bufp->chgBit(oldp+529,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                               [1U][4U]));
        bufp->chgBit(oldp+530,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                               [1U][5U]));
        bufp->chgBit(oldp+531,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                               [1U][6U]));
        bufp->chgBit(oldp+532,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                               [1U][7U]));
        bufp->chgBit(oldp+533,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                               [1U][8U]));
        bufp->chgBit(oldp+534,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                               [1U][9U]));
        bufp->chgBit(oldp+535,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                               [1U][0xaU]));
        bufp->chgBit(oldp+536,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                               [1U][0xbU]));
        bufp->chgBit(oldp+537,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                               [1U][0xcU]));
        bufp->chgBit(oldp+538,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                               [1U][0xdU]));
        bufp->chgBit(oldp+539,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                               [1U][0xeU]));
        bufp->chgBit(oldp+540,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                               [1U][0xfU]));
        bufp->chgBit(oldp+541,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[0]));
        bufp->chgBit(oldp+542,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[1]));
        bufp->chgBit(oldp+543,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[2]));
        bufp->chgBit(oldp+544,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[3]));
        bufp->chgBit(oldp+545,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[4]));
        bufp->chgBit(oldp+546,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[5]));
        bufp->chgBit(oldp+547,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[6]));
        bufp->chgBit(oldp+548,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[7]));
        bufp->chgBit(oldp+549,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[8]));
        bufp->chgBit(oldp+550,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[9]));
        bufp->chgBit(oldp+551,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[10]));
        bufp->chgBit(oldp+552,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[11]));
        bufp->chgBit(oldp+553,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[12]));
        bufp->chgBit(oldp+554,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[13]));
        bufp->chgBit(oldp+555,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[14]));
        bufp->chgBit(oldp+556,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[15]));
        bufp->chgCData(oldp+557,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__found_in_cache_flush),2);
        bufp->chgCData(oldp+558,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__state),3);
        bufp->chgBit(oldp+559,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_cache));
        bufp->chgIData(oldp+560,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_tag),23);
        bufp->chgCData(oldp+561,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_block),4);
        bufp->chgCData(oldp+562,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_word),3);
        bufp->chgCData(oldp+563,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__critical_word),3);
        bufp->chgIData(oldp+564,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__RAM_read_data[0]),32);
        bufp->chgIData(oldp+565,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__RAM_read_data[1]),32);
        bufp->chgBit(oldp+566,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__RAM_read_select));
        bufp->chgIData(oldp+567,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__j),32);
        bufp->chgIData(oldp+568,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__k),32);
        bufp->chgBit(oldp+569,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__ram_busy));
        bufp->chgBit(oldp+570,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__ram_done));
        bufp->chgIData(oldp+571,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT____Vcellout__genblk6__BRA__0__KET____DOT__RAM____pinNumber7),32);
        bufp->chgBit(oldp+572,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__ram_busy));
        bufp->chgBit(oldp+573,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__ram_done));
        bufp->chgIData(oldp+574,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT____Vcellout__genblk6__BRA__1__KET____DOT__RAM____pinNumber7),32);
        bufp->chgIData(oldp+575,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__reg_pc0__DOT__pc),32);
        bufp->chgBit(oldp+576,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__reg_pc0__DOT__right_one));
        bufp->chgIData(oldp+577,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[0]),32);
        bufp->chgIData(oldp+578,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[1]),32);
        bufp->chgIData(oldp+579,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[2]),32);
        bufp->chgIData(oldp+580,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[3]),32);
        bufp->chgIData(oldp+581,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[4]),32);
        bufp->chgIData(oldp+582,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[5]),32);
        bufp->chgIData(oldp+583,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[6]),32);
        bufp->chgIData(oldp+584,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[7]),32);
        bufp->chgIData(oldp+585,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[8]),32);
        bufp->chgIData(oldp+586,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[9]),32);
        bufp->chgIData(oldp+587,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[10]),32);
        bufp->chgIData(oldp+588,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[11]),32);
        bufp->chgIData(oldp+589,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[12]),32);
        bufp->chgIData(oldp+590,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[13]),32);
        bufp->chgIData(oldp+591,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[14]),32);
        bufp->chgIData(oldp+592,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[15]),32);
        bufp->chgIData(oldp+593,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[16]),32);
        bufp->chgIData(oldp+594,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[17]),32);
        bufp->chgIData(oldp+595,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[18]),32);
        bufp->chgIData(oldp+596,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[19]),32);
        bufp->chgIData(oldp+597,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[20]),32);
        bufp->chgIData(oldp+598,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[21]),32);
        bufp->chgIData(oldp+599,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[22]),32);
        bufp->chgIData(oldp+600,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[23]),32);
        bufp->chgIData(oldp+601,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[24]),32);
        bufp->chgIData(oldp+602,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[25]),32);
        bufp->chgIData(oldp+603,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[26]),32);
        bufp->chgIData(oldp+604,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[27]),32);
        bufp->chgIData(oldp+605,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[28]),32);
        bufp->chgIData(oldp+606,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[29]),32);
        bufp->chgIData(oldp+607,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[30]),32);
        bufp->chgIData(oldp+608,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[31]),32);
        bufp->chgCData(oldp+609,((0x7fU & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)),7);
        bufp->chgCData(oldp+610,((7U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+611,((vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                  >> 0x19U)),7);
        bufp->chgSData(oldp+612,((vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                  >> 0x14U)),12);
        bufp->chgIData(oldp+613,((vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                  >> 0xcU)),20);
        bufp->chgSData(oldp+614,(((0xfe0U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                             >> 0x14U)) 
                                  | (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                              >> 7U)))),12);
        bufp->chgCData(oldp+615,((0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                           >> 7U))),5);
        bufp->chgCData(oldp+616,((0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+617,((0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                           >> 0x14U))),5);
        bufp->chgBit(oldp+618,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__prev_is_load));
        bufp->chgIData(oldp+619,((vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_pc 
                                  + (((- (IData)((vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                  >> 0x1fU))) 
                                      << 0x14U) | (
                                                   (0xff000U 
                                                    & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst) 
                                                   | ((0x800U 
                                                       & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                          >> 9U)) 
                                                      | (0x7feU 
                                                         & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                            >> 0x14U))))))),32);
        bufp->chgIData(oldp+620,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__pc_plus_B_imm),32);
        bufp->chgIData(oldp+621,(((IData)(4U) + vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_pc)),32);
        bufp->chgIData(oldp+622,(vlSelf->tb_riscv_cpu__DOT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgBit(oldp+623,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_busy));
        bufp->chgBit(oldp+624,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_busy));
        bufp->chgCData(oldp+625,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__pending_rw_flag),2);
        bufp->chgIData(oldp+626,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__pending_addr),32);
        bufp->chgIData(oldp+627,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__pending_write_data),32);
        bufp->chgCData(oldp+628,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__pending_write_mask),4);
        bufp->chgCData(oldp+629,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__pending_rw_flag),2);
        bufp->chgIData(oldp+630,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__pending_addr),32);
        bufp->chgIData(oldp+631,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__pending_write_data),32);
        bufp->chgCData(oldp+632,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__pending_write_mask),4);
        bufp->chgIData(oldp+633,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_data_in),32);
        bufp->chgCData(oldp+634,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_mask_in),4);
    }
    bufp->chgBit(oldp+635,(vlSelf->tb_riscv_cpu__DOT__clk));
    bufp->chgBit(oldp+636,(vlSelf->tb_riscv_cpu__DOT__rst_n));
    bufp->chgBit(oldp+637,(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst));
    bufp->chgCData(oldp+638,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid_cache),2);
    bufp->chgCData(oldp+639,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_cache),2);
    bufp->chgBit(oldp+640,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_tmp[0]));
    bufp->chgBit(oldp+641,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_tmp[1]));
    bufp->chgBit(oldp+642,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_tmp[2]));
    bufp->chgBit(oldp+643,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_tmp[0]));
    bufp->chgBit(oldp+644,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_tmp[1]));
    bufp->chgBit(oldp+645,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_tmp[2]));
    bufp->chgBit(oldp+646,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_id_tmp[0]));
    bufp->chgBit(oldp+647,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_id_tmp[1]));
    bufp->chgBit(oldp+648,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_id_tmp[2]));
    bufp->chgBit(oldp+649,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_id_tmp[0]));
    bufp->chgBit(oldp+650,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_id_tmp[1]));
    bufp->chgBit(oldp+651,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_id_tmp[2]));
    bufp->chgBit(oldp+652,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_id_tmp
                           [0U]));
    bufp->chgBit(oldp+653,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_id_tmp
                           [0U]));
    bufp->chgBit(oldp+654,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid_cache));
    bufp->chgBit(oldp+655,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_cache));
}

void Vtb_riscv_cpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root__trace_cleanup\n"); );
    // Init
    Vtb_riscv_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_riscv_cpu___024root*>(voidSelf);
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
}
