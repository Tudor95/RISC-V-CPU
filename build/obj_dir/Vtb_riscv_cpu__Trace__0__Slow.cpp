// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_riscv_cpu__Syms.h"


VL_ATTR_COLD void Vtb_riscv_cpu___024root__trace_init_sub__TOP__0(Vtb_riscv_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_riscv_cpu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+636,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+637,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+215,0,"mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+217,0,"mem_data_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+326,0,"mem_data_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+219,0,"mem_rwe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+220,0,"mem_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+328,0,"mem_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+329,0,"mem_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+330,0,"mem_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+331,0,"mem_operation_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+332,0,"pending_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+333,0,"pending_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+334,0,"pending_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+335,0,"pending_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+45,0,"cycle_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1,0,"max_cycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+46,0,"simulation_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+636,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+638,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+326,0,"mem_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+328,0,"mem_busy_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+329,0,"mem_done_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+219,0,"mem_rwe_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+215,0,"mem_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+220,0,"mem_sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+217,0,"mem_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+221,0,"icache_rwe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+222,0,"icache_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+337,0,"icache_r_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+657,0,"icache_w_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+658,0,"icache_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+624,0,"icache_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"icache_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+659,0,"icache_flush_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+657,0,"icache_flush_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"dcache_rwe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+224,0,"dcache_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+339,0,"dcache_r_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+225,0,"dcache_w_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+226,0,"dcache_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+625,0,"dcache_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+340,0,"dcache_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+659,0,"dcache_flush_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+657,0,"dcache_flush_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+227,0,"stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+228,0,"stallreq_if",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"stallreq_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+659,0,"stallreq_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+229,0,"stallreq_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+341,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+342,0,"right_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+230,0,"if_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+231,0,"if_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+343,0,"id_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+344,0,"id_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+190,0,"id_re1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"id_re2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+192,0,"id_reg_data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"id_reg_data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"id_reg_addr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+195,0,"id_reg_addr2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+232,0,"br",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+196,0,"br_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+197,0,"id_aluop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+198,0,"id_alusel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+233,0,"id_opv1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+234,0,"id_opv2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+199,0,"id_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+200,0,"id_reg_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+201,0,"id_link_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+202,0,"id_mem_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+345,0,"ex_aluop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+346,0,"ex_alusel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+347,0,"ex_opv1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+348,0,"ex_opv2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+349,0,"ex_reg_waddr_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+350,0,"ex_we_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+351,0,"ex_link_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+352,0,"ex_mem_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+349,0,"ex_reg_waddr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+350,0,"ex_we_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+203,0,"ex_reg_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+204,0,"ex_mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+345,0,"ex_aluop_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+348,0,"ex_rt_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+353,0,"mem_reg_waddr_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+354,0,"mem_we_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+355,0,"mem_reg_wdata_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+356,0,"mem_mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+357,0,"mem_aluop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+358,0,"mem_rt_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+235,0,"mem_reg_waddr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+236,0,"mem_we_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+237,0,"mem_reg_wdata_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+359,0,"wb_reg_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+360,0,"wb_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+361,0,"wb_reg_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ctrl0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+638,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"stallreq_if",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"stallreq_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+659,0,"stallreq_ex",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+229,0,"stallreq_mem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+227,0,"stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("dcache0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+660,0,"WORD_SELECT_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+661,0,"INDEX_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+662,0,"NASSOC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+636,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+638,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+223,0,"rw_flag_",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+224,0,"addr_",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+339,0,"read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+225,0,"write_data_",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+226,0,"write_mask_",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+625,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+340,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+659,0,"flush_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+657,0,"flush_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+238,0,"mem_rw_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+239,0,"mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+362,0,"mem_read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+240,0,"mem_write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"mem_write_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+363,0,"mem_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+364,0,"mem_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+663,0,"TAG_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+664,0,"BYTE_SELECT_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+661,0,"SET_SELECT_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+662,0,"NBLOCK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+665,0,"NWORD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+666,0,"BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+626,0,"pending_rw_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+627,0,"pending_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+628,0,"pending_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+629,0,"pending_write_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+242,0,"rw_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+243,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+244,0,"write_data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+245,0,"write_mask_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+246,0,"addr_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+247,0,"addr_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+248,0,"addr_ws",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+667,0,"addr_flush_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+668,0,"addr_flush_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("tag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+365,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+366,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+367,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+368,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+369,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+370,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+371,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+372,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+373,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+374,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+375,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+376,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+377,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+378,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+379,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+380,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+381,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+382,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+383,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+384,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+385,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+386,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+387,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+388,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+389,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+390,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+391,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+392,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+393,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+394,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+395,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+396,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("recuse", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+397,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+398,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+399,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+400,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+401,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+402,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+403,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+404,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+405,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+406,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+407,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+408,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+409,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+410,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+411,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+412,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("recent_use_counter", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+413+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+249,0,"found_in_cache",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+417,0,"found_in_cache_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("one_hot_lookup", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+2+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("lru_tmp", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+175+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+1), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("mru_tmp", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+182+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+1), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("lru_id_tmp", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+37+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+1), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("mru_id_tmp", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+29+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+1), 1,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+44,0,"lru_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+36,0,"mru_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+657,0,"STATE_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+669,0,"STATE_WAIT_FOR_READ_PHASE_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+661,0,"STATE_WAIT_FOR_READ_PHASE_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+662,0,"STATE_WAIT_FOR_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+418,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+250,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+419,0,"current_cache",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+420,0,"current_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+421,0,"current_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+422,0,"current_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+423,0,"critical_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+251,0,"write_cache",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+252,0,"write_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+253,0,"write_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+254,0,"write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+255,0,"write_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+256,0,"read_cache",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+257,0,"read_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+258,0,"read_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+639,0,"valid_cache",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+259,0,"valid_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+260,0,"valid_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+261,0,"valid_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+262,0,"next_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+640,0,"next_current_cache",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+263,0,"next_current_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+264,0,"next_current_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+265,0,"next_current_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+266,0,"next_critical_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("RAM_read_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+424+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+428,0,"RAM_read_select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+429,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+430,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("genblk6[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+267,0,"RAM_read_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+268,0,"RAM_write_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+269,0,"rw_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+431,0,"ram_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+432,0,"ram_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("RAM", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+664,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+662,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+636,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+638,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+269,0,"rw_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+270,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+254,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+255,0,"write_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+433,0,"read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+431,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+432,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+670,0,"REAL_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+670,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("memory", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+47+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+18,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk6[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+271,0,"RAM_read_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"RAM_write_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+273,0,"rw_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+434,0,"ram_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+435,0,"ram_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("RAM", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+664,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+662,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+636,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+638,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+273,0,"rw_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+270,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+254,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+255,0,"write_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+436,0,"read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+434,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+435,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+670,0,"REAL_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+670,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("memory", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+79+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+19,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk6[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+274,0,"RAM_read_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"RAM_write_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+276,0,"rw_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+437,0,"ram_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+438,0,"ram_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("RAM", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+664,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+662,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+636,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+638,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+276,0,"rw_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+270,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+254,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+255,0,"write_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+439,0,"read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+437,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+438,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+670,0,"REAL_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+670,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("memory", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+111+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+20,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk6[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+277,0,"RAM_read_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"RAM_write_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+279,0,"rw_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+440,0,"ram_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+441,0,"ram_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("RAM", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+664,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+662,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+636,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+638,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+279,0,"rw_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+270,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+254,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+255,0,"write_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+442,0,"read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+440,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+441,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+670,0,"REAL_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+670,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("memory", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+143+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+21,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("icache0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+660,0,"WORD_SELECT_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+662,0,"INDEX_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+661,0,"NASSOC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+636,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+638,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+221,0,"rw_flag_",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+222,0,"addr_",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+337,0,"read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+657,0,"write_data_",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+658,0,"write_mask_",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+624,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+659,0,"flush_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+657,0,"flush_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+280,0,"mem_rw_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+281,0,"mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+443,0,"mem_read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+282,0,"mem_write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+283,0,"mem_write_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+444,0,"mem_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+445,0,"mem_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+671,0,"TAG_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+664,0,"BYTE_SELECT_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+669,0,"SET_SELECT_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+672,0,"NBLOCK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+665,0,"NWORD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+666,0,"BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+630,0,"pending_rw_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+631,0,"pending_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+632,0,"pending_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+633,0,"pending_write_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+284,0,"rw_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+285,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+634,0,"write_data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+635,0,"write_mask_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+286,0,"addr_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+287,0,"addr_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+288,0,"addr_ws",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+673,0,"addr_flush_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+658,0,"addr_flush_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("tag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+446,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+447,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+448,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+449,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+450,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+451,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+452,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+453,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+454,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+455,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+456,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+457,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+458,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+459,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+460,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+461,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+462,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+463,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+464,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+465,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+466,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+467,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+468,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+469,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+470,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+471,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+472,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+473,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+474,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+475,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+476,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+477,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+478,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+480,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+481,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+482,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+483,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+484,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+485,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+487,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+488,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+489,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+491,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+492,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+494,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+495,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+496,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+497,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+499,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+500,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+501,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+502,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+503,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+504,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+505,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+507,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+508,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+509,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("recuse", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+510,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+511,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+512,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+513,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+514,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+515,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+516,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+517,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+518,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+519,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+520,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+521,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+522,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+523,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+524,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+525,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+526,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+527,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+528,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+529,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+530,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+531,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+532,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+533,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+534,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+535,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+536,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+537,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+538,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+539,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+540,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+541,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("recent_use_counter", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+542+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+289,0,"found_in_cache",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+558,0,"found_in_cache_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("one_hot_lookup", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+22+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("lru_tmp", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+641+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+1), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("mru_tmp", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+644+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+1), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("lru_id_tmp", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+647+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+1), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("mru_id_tmp", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+650+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+1), 0,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+653,0,"lru_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+654,0,"mru_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+657,0,"STATE_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+669,0,"STATE_WAIT_FOR_READ_PHASE_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+661,0,"STATE_WAIT_FOR_READ_PHASE_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+662,0,"STATE_WAIT_FOR_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+559,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+290,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+560,0,"current_cache",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+561,0,"current_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+562,0,"current_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+563,0,"current_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+564,0,"critical_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+291,0,"write_cache",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+292,0,"write_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+293,0,"write_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+294,0,"write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+295,0,"write_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+296,0,"read_cache",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+297,0,"read_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+298,0,"read_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+655,0,"valid_cache",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+299,0,"valid_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+300,0,"valid_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+301,0,"valid_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBit(c+302,0,"next_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"next_current_cache",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+303,0,"next_current_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+304,0,"next_current_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+305,0,"next_current_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+306,0,"next_critical_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("RAM_read_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+565+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+567,0,"RAM_read_select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+568,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+569,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("genblk6[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+307,0,"RAM_read_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+308,0,"RAM_write_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+309,0,"rw_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+570,0,"ram_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+571,0,"ram_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("RAM", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+674,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+662,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+636,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+638,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+309,0,"rw_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+310,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+294,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+295,0,"write_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+572,0,"read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+570,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+571,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+670,0,"REAL_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+675,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+26,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk6[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+311,0,"RAM_read_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+312,0,"RAM_write_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+313,0,"rw_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+573,0,"ram_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+574,0,"ram_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("RAM", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+674,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+662,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+636,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+638,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+313,0,"rw_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+310,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+294,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+295,0,"write_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+575,0,"read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+573,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+574,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+670,0,"REAL_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+675,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+27,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_ex_mem0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+636,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+638,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+349,0,"ex_reg_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+350,0,"ex_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+203,0,"ex_reg_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+227,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+204,0,"ex_mem_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+345,0,"ex_aluop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+348,0,"ex_rt_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+353,0,"mem_reg_waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+354,0,"mem_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+355,0,"mem_reg_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+356,0,"mem_mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+357,0,"mem_aluop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+358,0,"mem_rt_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("reg_id_ex0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+636,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+638,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+197,0,"id_aluop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+198,0,"id_alusel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+233,0,"id_opv1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+234,0,"id_opv2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+200,0,"id_reg_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+199,0,"id_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+227,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+201,0,"id_link_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+202,0,"id_mem_offset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+345,0,"ex_aluop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+346,0,"ex_alusel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+347,0,"ex_opv1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+348,0,"ex_opv2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+349,0,"ex_reg_waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+350,0,"ex_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+351,0,"ex_link_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+352,0,"ex_mem_offset",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("reg_if_id0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+636,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+638,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+230,0,"if_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+231,0,"if_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+227,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+232,0,"br",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+343,0,"id_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+344,0,"id_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("reg_mem_wb0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+636,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+638,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+235,0,"mem_reg_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+236,0,"mem_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+237,0,"mem_reg_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+227,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+359,0,"wb_reg_waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+360,0,"wb_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+361,0,"wb_reg_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("reg_pc0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+636,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+638,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+227,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+232,0,"br",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+196,0,"br_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+341,0,"pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+342,0,"right_one_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+576,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+577,0,"right_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("regfile0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+636,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+638,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+360,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+359,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+361,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+190,0,"re1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+194,0,"raddr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+192,0,"rdata1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+191,0,"re2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+195,0,"raddr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+193,0,"rdata2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+578+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_ex0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+638,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+345,0,"aluop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+346,0,"alusel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+347,0,"opv1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+348,0,"opv2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+349,0,"reg_waddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+350,0,"we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+351,0,"link_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+352,0,"mem_offset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+349,0,"reg_waddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+350,0,"we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+203,0,"reg_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+659,0,"stallreq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+204,0,"mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+345,0,"ex_aluop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+348,0,"rt_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+205,0,"logic_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+206,0,"shift_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+207,0,"arith_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+208,0,"mem_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("stage_id0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+638,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+343,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+344,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+192,0,"reg_data1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"reg_data2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+345,0,"ex_aluop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+350,0,"ex_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+203,0,"ex_reg_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+349,0,"ex_reg_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+236,0,"mem_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+237,0,"mem_reg_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+235,0,"mem_reg_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+190,0,"re1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"re2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+194,0,"reg_addr1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+195,0,"reg_addr2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+197,0,"aluop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+198,0,"alusel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+233,0,"opv1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+234,0,"opv2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+200,0,"reg_waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+199,0,"we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"stallreq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+232,0,"br",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+196,0,"br_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+201,0,"link_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+202,0,"mem_offset",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+610,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+611,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+612,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+613,0,"I_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+614,0,"U_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+615,0,"S_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+209,0,"imm1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+210,0,"imm2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+211,0,"inst_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+616,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+617,0,"rs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+618,0,"rt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+212,0,"stallreq_for_reg1_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"stallreq_for_reg2_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+619,0,"prev_is_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+214,0,"reg1_plus_I_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+620,0,"pc_plus_J_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+621,0,"pc_plus_B_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+622,0,"pc_plus_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+314,0,"reg1_reg2_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+315,0,"reg1_reg2_ne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+316,0,"reg1_reg2_lt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"reg1_reg2_ltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+318,0,"reg1_reg2_ge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+319,0,"reg1_reg2_geu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("stage_if0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+638,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+341,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+337,0,"mem_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+624,0,"mem_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"mem_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+232,0,"br",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+342,0,"right_one",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+320,0,"mem_re",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+222,0,"mem_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+230,0,"pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+231,0,"inst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+228,0,"stallreq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+321,0,"mem_taking",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+322,0,"waiting_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("stage_mem0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+638,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+353,0,"reg_waddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+354,0,"we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+355,0,"reg_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+356,0,"mem_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+357,0,"aluop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+358,0,"rt_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+339,0,"mem_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+625,0,"mem_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+340,0,"mem_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+235,0,"reg_waddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+236,0,"we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+237,0,"reg_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+224,0,"mem_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+323,0,"mem_re",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"mem_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+226,0,"mem_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+225,0,"mem_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+229,0,"stallreq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+325,0,"mem_taking",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+28,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+623,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_riscv_cpu___024root__trace_init_top(Vtb_riscv_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root__trace_init_top\n"); );
    // Body
    Vtb_riscv_cpu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_riscv_cpu___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_riscv_cpu___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_riscv_cpu___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_riscv_cpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_riscv_cpu___024root__trace_register(Vtb_riscv_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_riscv_cpu___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_riscv_cpu___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_riscv_cpu___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_riscv_cpu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_riscv_cpu___024root__trace_const_0_sub_0(Vtb_riscv_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_riscv_cpu___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root__trace_const_0\n"); );
    // Init
    Vtb_riscv_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_riscv_cpu___024root*>(voidSelf);
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_riscv_cpu___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_riscv_cpu___024root__trace_const_0_sub_0(Vtb_riscv_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+657,(0U),32);
    bufp->fullCData(oldp+658,(0U),4);
    bufp->fullBit(oldp+659,(0U));
    bufp->fullIData(oldp+660,(3U),32);
    bufp->fullIData(oldp+661,(2U),32);
    bufp->fullIData(oldp+662,(4U),32);
    bufp->fullIData(oldp+663,(0x19U),32);
    bufp->fullIData(oldp+664,(5U),32);
    bufp->fullIData(oldp+665,(8U),32);
    bufp->fullIData(oldp+666,(0x100U),32);
    bufp->fullIData(oldp+667,(0U),25);
    bufp->fullCData(oldp+668,(0U),2);
    bufp->fullIData(oldp+669,(1U),32);
    bufp->fullIData(oldp+670,(0x20U),32);
    bufp->fullIData(oldp+671,(0x17U),32);
    bufp->fullIData(oldp+672,(0x10U),32);
    bufp->fullIData(oldp+673,(0U),23);
    bufp->fullIData(oldp+674,(7U),32);
    bufp->fullIData(oldp+675,(0x80U),32);
}

VL_ATTR_COLD void Vtb_riscv_cpu___024root__trace_full_0_sub_0(Vtb_riscv_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_riscv_cpu___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root__trace_full_0\n"); );
    // Init
    Vtb_riscv_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_riscv_cpu___024root*>(voidSelf);
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_riscv_cpu___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_riscv_cpu___024root__trace_full_0_sub_0(Vtb_riscv_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->tb_riscv_cpu__DOT__max_cycles),32);
    bufp->fullCData(oldp+2,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[0]),2);
    bufp->fullCData(oldp+3,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[1]),2);
    bufp->fullCData(oldp+4,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[2]),2);
    bufp->fullCData(oldp+5,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[3]),2);
    bufp->fullCData(oldp+6,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[4]),2);
    bufp->fullCData(oldp+7,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[5]),2);
    bufp->fullCData(oldp+8,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[6]),2);
    bufp->fullCData(oldp+9,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[7]),2);
    bufp->fullCData(oldp+10,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[8]),2);
    bufp->fullCData(oldp+11,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[9]),2);
    bufp->fullCData(oldp+12,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[10]),2);
    bufp->fullCData(oldp+13,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[11]),2);
    bufp->fullCData(oldp+14,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[12]),2);
    bufp->fullCData(oldp+15,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[13]),2);
    bufp->fullCData(oldp+16,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[14]),2);
    bufp->fullCData(oldp+17,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup[15]),2);
    bufp->fullIData(oldp+18,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+19,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+20,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+21,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+22,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__one_hot_lookup[0]));
    bufp->fullBit(oldp+23,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__one_hot_lookup[1]));
    bufp->fullBit(oldp+24,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__one_hot_lookup[2]));
    bufp->fullBit(oldp+25,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__one_hot_lookup[3]));
    bufp->fullIData(oldp+26,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+27,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+28,(vlSelf->tb_riscv_cpu__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+29,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp[0]),2);
    bufp->fullCData(oldp+30,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp[1]),2);
    bufp->fullCData(oldp+31,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp[2]),2);
    bufp->fullCData(oldp+32,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp[3]),2);
    bufp->fullCData(oldp+33,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp[4]),2);
    bufp->fullCData(oldp+34,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp[5]),2);
    bufp->fullCData(oldp+35,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp[6]),2);
    bufp->fullCData(oldp+36,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp
                             [0U]),2);
    bufp->fullCData(oldp+37,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp[0]),2);
    bufp->fullCData(oldp+38,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp[1]),2);
    bufp->fullCData(oldp+39,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp[2]),2);
    bufp->fullCData(oldp+40,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp[3]),2);
    bufp->fullCData(oldp+41,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp[4]),2);
    bufp->fullCData(oldp+42,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp[5]),2);
    bufp->fullCData(oldp+43,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp[6]),2);
    bufp->fullCData(oldp+44,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp
                             [0U]),2);
    bufp->fullIData(oldp+45,(vlSelf->tb_riscv_cpu__DOT__cycle_count),32);
    bufp->fullBit(oldp+46,(vlSelf->tb_riscv_cpu__DOT__simulation_done));
    bufp->fullIData(oldp+47,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[0]),32);
    bufp->fullIData(oldp+48,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[1]),32);
    bufp->fullIData(oldp+49,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[2]),32);
    bufp->fullIData(oldp+50,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[3]),32);
    bufp->fullIData(oldp+51,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[4]),32);
    bufp->fullIData(oldp+52,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[5]),32);
    bufp->fullIData(oldp+53,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[6]),32);
    bufp->fullIData(oldp+54,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[7]),32);
    bufp->fullIData(oldp+55,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[8]),32);
    bufp->fullIData(oldp+56,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[9]),32);
    bufp->fullIData(oldp+57,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[10]),32);
    bufp->fullIData(oldp+58,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[11]),32);
    bufp->fullIData(oldp+59,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[12]),32);
    bufp->fullIData(oldp+60,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[13]),32);
    bufp->fullIData(oldp+61,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[14]),32);
    bufp->fullIData(oldp+62,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[15]),32);
    bufp->fullIData(oldp+63,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[16]),32);
    bufp->fullIData(oldp+64,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[17]),32);
    bufp->fullIData(oldp+65,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[18]),32);
    bufp->fullIData(oldp+66,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[19]),32);
    bufp->fullIData(oldp+67,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[20]),32);
    bufp->fullIData(oldp+68,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[21]),32);
    bufp->fullIData(oldp+69,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[22]),32);
    bufp->fullIData(oldp+70,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[23]),32);
    bufp->fullIData(oldp+71,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[24]),32);
    bufp->fullIData(oldp+72,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[25]),32);
    bufp->fullIData(oldp+73,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[26]),32);
    bufp->fullIData(oldp+74,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[27]),32);
    bufp->fullIData(oldp+75,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[28]),32);
    bufp->fullIData(oldp+76,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[29]),32);
    bufp->fullIData(oldp+77,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[30]),32);
    bufp->fullIData(oldp+78,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory[31]),32);
    bufp->fullIData(oldp+79,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[0]),32);
    bufp->fullIData(oldp+80,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[1]),32);
    bufp->fullIData(oldp+81,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[2]),32);
    bufp->fullIData(oldp+82,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[3]),32);
    bufp->fullIData(oldp+83,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[4]),32);
    bufp->fullIData(oldp+84,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[5]),32);
    bufp->fullIData(oldp+85,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[6]),32);
    bufp->fullIData(oldp+86,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[7]),32);
    bufp->fullIData(oldp+87,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[8]),32);
    bufp->fullIData(oldp+88,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[9]),32);
    bufp->fullIData(oldp+89,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[10]),32);
    bufp->fullIData(oldp+90,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[11]),32);
    bufp->fullIData(oldp+91,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[12]),32);
    bufp->fullIData(oldp+92,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[13]),32);
    bufp->fullIData(oldp+93,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[14]),32);
    bufp->fullIData(oldp+94,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[15]),32);
    bufp->fullIData(oldp+95,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[16]),32);
    bufp->fullIData(oldp+96,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[17]),32);
    bufp->fullIData(oldp+97,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[18]),32);
    bufp->fullIData(oldp+98,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[19]),32);
    bufp->fullIData(oldp+99,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[20]),32);
    bufp->fullIData(oldp+100,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[21]),32);
    bufp->fullIData(oldp+101,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[22]),32);
    bufp->fullIData(oldp+102,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[23]),32);
    bufp->fullIData(oldp+103,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[24]),32);
    bufp->fullIData(oldp+104,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[25]),32);
    bufp->fullIData(oldp+105,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[26]),32);
    bufp->fullIData(oldp+106,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[27]),32);
    bufp->fullIData(oldp+107,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[28]),32);
    bufp->fullIData(oldp+108,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[29]),32);
    bufp->fullIData(oldp+109,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[30]),32);
    bufp->fullIData(oldp+110,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory[31]),32);
    bufp->fullIData(oldp+111,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[0]),32);
    bufp->fullIData(oldp+112,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[1]),32);
    bufp->fullIData(oldp+113,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[2]),32);
    bufp->fullIData(oldp+114,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[3]),32);
    bufp->fullIData(oldp+115,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[4]),32);
    bufp->fullIData(oldp+116,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[5]),32);
    bufp->fullIData(oldp+117,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[6]),32);
    bufp->fullIData(oldp+118,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[7]),32);
    bufp->fullIData(oldp+119,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[8]),32);
    bufp->fullIData(oldp+120,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[9]),32);
    bufp->fullIData(oldp+121,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[10]),32);
    bufp->fullIData(oldp+122,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[11]),32);
    bufp->fullIData(oldp+123,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[12]),32);
    bufp->fullIData(oldp+124,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[13]),32);
    bufp->fullIData(oldp+125,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[14]),32);
    bufp->fullIData(oldp+126,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[15]),32);
    bufp->fullIData(oldp+127,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[16]),32);
    bufp->fullIData(oldp+128,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[17]),32);
    bufp->fullIData(oldp+129,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[18]),32);
    bufp->fullIData(oldp+130,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[19]),32);
    bufp->fullIData(oldp+131,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[20]),32);
    bufp->fullIData(oldp+132,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[21]),32);
    bufp->fullIData(oldp+133,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[22]),32);
    bufp->fullIData(oldp+134,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[23]),32);
    bufp->fullIData(oldp+135,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[24]),32);
    bufp->fullIData(oldp+136,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[25]),32);
    bufp->fullIData(oldp+137,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[26]),32);
    bufp->fullIData(oldp+138,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[27]),32);
    bufp->fullIData(oldp+139,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[28]),32);
    bufp->fullIData(oldp+140,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[29]),32);
    bufp->fullIData(oldp+141,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[30]),32);
    bufp->fullIData(oldp+142,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory[31]),32);
    bufp->fullIData(oldp+143,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[0]),32);
    bufp->fullIData(oldp+144,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[1]),32);
    bufp->fullIData(oldp+145,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[2]),32);
    bufp->fullIData(oldp+146,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[3]),32);
    bufp->fullIData(oldp+147,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[4]),32);
    bufp->fullIData(oldp+148,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[5]),32);
    bufp->fullIData(oldp+149,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[6]),32);
    bufp->fullIData(oldp+150,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[7]),32);
    bufp->fullIData(oldp+151,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[8]),32);
    bufp->fullIData(oldp+152,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[9]),32);
    bufp->fullIData(oldp+153,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[10]),32);
    bufp->fullIData(oldp+154,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[11]),32);
    bufp->fullIData(oldp+155,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[12]),32);
    bufp->fullIData(oldp+156,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[13]),32);
    bufp->fullIData(oldp+157,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[14]),32);
    bufp->fullIData(oldp+158,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[15]),32);
    bufp->fullIData(oldp+159,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[16]),32);
    bufp->fullIData(oldp+160,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[17]),32);
    bufp->fullIData(oldp+161,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[18]),32);
    bufp->fullIData(oldp+162,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[19]),32);
    bufp->fullIData(oldp+163,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[20]),32);
    bufp->fullIData(oldp+164,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[21]),32);
    bufp->fullIData(oldp+165,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[22]),32);
    bufp->fullIData(oldp+166,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[23]),32);
    bufp->fullIData(oldp+167,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[24]),32);
    bufp->fullIData(oldp+168,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[25]),32);
    bufp->fullIData(oldp+169,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[26]),32);
    bufp->fullIData(oldp+170,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[27]),32);
    bufp->fullIData(oldp+171,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[28]),32);
    bufp->fullIData(oldp+172,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[29]),32);
    bufp->fullIData(oldp+173,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[30]),32);
    bufp->fullIData(oldp+174,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory[31]),32);
    bufp->fullCData(oldp+175,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp[0]),2);
    bufp->fullCData(oldp+176,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp[1]),2);
    bufp->fullCData(oldp+177,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp[2]),2);
    bufp->fullCData(oldp+178,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp[3]),2);
    bufp->fullCData(oldp+179,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp[4]),2);
    bufp->fullCData(oldp+180,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp[5]),2);
    bufp->fullCData(oldp+181,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp[6]),2);
    bufp->fullCData(oldp+182,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp[0]),2);
    bufp->fullCData(oldp+183,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp[1]),2);
    bufp->fullCData(oldp+184,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp[2]),2);
    bufp->fullCData(oldp+185,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp[3]),2);
    bufp->fullCData(oldp+186,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp[4]),2);
    bufp->fullCData(oldp+187,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp[5]),2);
    bufp->fullCData(oldp+188,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp[6]),2);
    bufp->fullBit(oldp+189,(((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__stallreq_for_reg1_load) 
                             | (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__stallreq_for_reg2_load))));
    bufp->fullBit(oldp+190,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re1));
    bufp->fullBit(oldp+191,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2));
    bufp->fullIData(oldp+192,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_data1),32);
    bufp->fullIData(oldp+193,(((1U & (((IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) 
                                       | (~ (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_re2))) 
                                      | (0U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2))))
                                ? 0U : (((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__wb_we) 
                                         & ((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2) 
                                            == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__wb_reg_waddr)))
                                         ? vlSelf->tb_riscv_cpu__DOT__dut__DOT__wb_reg_wdata
                                         : vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs
                                        [vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2]))),32);
    bufp->fullCData(oldp+194,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1),5);
    bufp->fullCData(oldp+195,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2),5);
    bufp->fullIData(oldp+196,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__br_addr),32);
    bufp->fullCData(oldp+197,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_aluop),8);
    bufp->fullCData(oldp+198,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_alusel),3);
    bufp->fullBit(oldp+199,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_we));
    bufp->fullCData(oldp+200,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr),5);
    bufp->fullIData(oldp+201,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_link_addr),32);
    bufp->fullIData(oldp+202,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_mem_offset),32);
    bufp->fullIData(oldp+203,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_reg_wdata),32);
    bufp->fullIData(oldp+204,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_mem_addr),32);
    bufp->fullIData(oldp+205,((((IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) 
                                | (1U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_alusel)))
                                ? 0U : ((3U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop))
                                         ? (vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1 
                                            ^ vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2)
                                         : ((2U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop))
                                             ? (vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1 
                                                | vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2)
                                             : ((1U 
                                                 == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop))
                                                 ? 
                                                (vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1 
                                                 & vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2)
                                                 : 0U))))),32);
    bufp->fullIData(oldp+206,((((IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) 
                                | (2U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_alusel)))
                                ? 0U : ((5U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop))
                                         ? (vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1 
                                            << (0x1fU 
                                                & vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2))
                                         : ((6U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop))
                                             ? (vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2))
                                             : ((7U 
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
    bufp->fullIData(oldp+207,((((IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) 
                                | (4U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_alusel)))
                                ? 0U : ((8U == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop))
                                         ? (vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1 
                                            + vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2)
                                         : ((0xbU == (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop))
                                             ? (vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1 
                                                - vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2)
                                             : ((9U 
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
    bufp->fullIData(oldp+208,((((IData)(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst) 
                                | (7U != (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_alusel)))
                                ? 0U : (vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_mem_offset 
                                        + vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1))),32);
    bufp->fullIData(oldp+209,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1),32);
    bufp->fullIData(oldp+210,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2),32);
    bufp->fullBit(oldp+211,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid));
    bufp->fullBit(oldp+212,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__stallreq_for_reg1_load));
    bufp->fullBit(oldp+213,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__stallreq_for_reg2_load));
    bufp->fullIData(oldp+214,((vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_reg_data1 
                               + vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT____VdfgExtracted_hb047d7aa__0)),32);
    bufp->fullQData(oldp+215,(vlSelf->tb_riscv_cpu__DOT__mem_addr),64);
    bufp->fullQData(oldp+217,((((QData)((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_write_data)) 
                                << 0x20U) | (QData)((IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_write_data)))),64);
    bufp->fullCData(oldp+219,(vlSelf->tb_riscv_cpu__DOT__mem_rwe),4);
    bufp->fullCData(oldp+220,(vlSelf->tb_riscv_cpu__DOT__mem_sel),8);
    bufp->fullCData(oldp+221,(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_if0__mem_re),2);
    bufp->fullIData(oldp+222,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_addr),32);
    bufp->fullCData(oldp+223,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_rwe),2);
    bufp->fullIData(oldp+224,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_addr),32);
    bufp->fullIData(oldp+225,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_w_data),32);
    bufp->fullCData(oldp+226,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_sel),4);
    bufp->fullCData(oldp+227,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stall),6);
    bufp->fullBit(oldp+228,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_if));
    bufp->fullBit(oldp+229,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stallreq_mem));
    bufp->fullIData(oldp+230,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__if_pc),32);
    bufp->fullIData(oldp+231,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__if_inst),32);
    bufp->fullBit(oldp+232,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__br));
    bufp->fullIData(oldp+233,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv1),32);
    bufp->fullIData(oldp+234,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv2),32);
    bufp->fullCData(oldp+235,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_waddr_o),5);
    bufp->fullBit(oldp+236,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_we_o));
    bufp->fullIData(oldp+237,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_wdata_o),32);
    bufp->fullCData(oldp+238,(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_rw_flag),2);
    bufp->fullIData(oldp+239,(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_addr),32);
    bufp->fullIData(oldp+240,(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_write_data),32);
    bufp->fullCData(oldp+241,(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_write_mask),4);
    bufp->fullCData(oldp+242,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__rw_flag),2);
    bufp->fullIData(oldp+243,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr),32);
    bufp->fullIData(oldp+244,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_data_in),32);
    bufp->fullCData(oldp+245,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_mask_in),4);
    bufp->fullIData(oldp+246,((vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                               >> 7U)),25);
    bufp->fullCData(oldp+247,((3U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                                     >> 5U))),2);
    bufp->fullCData(oldp+248,((7U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr 
                                     >> 2U))),3);
    bufp->fullCData(oldp+249,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache),4);
    bufp->fullCData(oldp+250,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_state),3);
    bufp->fullCData(oldp+251,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_cache),3);
    bufp->fullCData(oldp+252,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_block),2);
    bufp->fullCData(oldp+253,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_word),3);
    bufp->fullIData(oldp+254,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_data),32);
    bufp->fullCData(oldp+255,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_mask),4);
    bufp->fullCData(oldp+256,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_cache),3);
    bufp->fullCData(oldp+257,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_block),2);
    bufp->fullCData(oldp+258,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_word),3);
    bufp->fullCData(oldp+259,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid_block),2);
    bufp->fullBit(oldp+260,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid_flag));
    bufp->fullIData(oldp+261,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid_tag),25);
    bufp->fullBit(oldp+262,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_done));
    bufp->fullIData(oldp+263,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_tag),25);
    bufp->fullCData(oldp+264,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_block),2);
    bufp->fullCData(oldp+265,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_word),3);
    bufp->fullCData(oldp+266,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_critical_word),3);
    bufp->fullBit(oldp+267,((0U == VL_EXTENDS_II(32,3, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_cache)))));
    bufp->fullBit(oldp+268,((0U == VL_EXTENDS_II(32,3, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_cache)))));
    bufp->fullCData(oldp+269,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__rw_flag),2);
    bufp->fullCData(oldp+270,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4),5);
    bufp->fullBit(oldp+271,((1U == VL_EXTENDS_II(32,3, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_cache)))));
    bufp->fullBit(oldp+272,((1U == VL_EXTENDS_II(32,3, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_cache)))));
    bufp->fullCData(oldp+273,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__rw_flag),2);
    bufp->fullBit(oldp+274,((2U == VL_EXTENDS_II(32,3, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_cache)))));
    bufp->fullBit(oldp+275,((2U == VL_EXTENDS_II(32,3, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_cache)))));
    bufp->fullCData(oldp+276,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__rw_flag),2);
    bufp->fullBit(oldp+277,((3U == VL_EXTENDS_II(32,3, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_cache)))));
    bufp->fullBit(oldp+278,((3U == VL_EXTENDS_II(32,3, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_cache)))));
    bufp->fullCData(oldp+279,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__rw_flag),2);
    bufp->fullCData(oldp+280,(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_rw_flag),2);
    bufp->fullIData(oldp+281,(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_addr),32);
    bufp->fullIData(oldp+282,(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_write_data),32);
    bufp->fullCData(oldp+283,(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_write_mask),4);
    bufp->fullCData(oldp+284,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__rw_flag),2);
    bufp->fullIData(oldp+285,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr),32);
    bufp->fullIData(oldp+286,((vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                               >> 9U)),23);
    bufp->fullCData(oldp+287,((0xfU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                                       >> 5U))),4);
    bufp->fullCData(oldp+288,((7U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr 
                                     >> 2U))),3);
    bufp->fullCData(oldp+289,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__found_in_cache),2);
    bufp->fullCData(oldp+290,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_state),3);
    bufp->fullCData(oldp+291,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_cache),2);
    bufp->fullCData(oldp+292,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_block),4);
    bufp->fullCData(oldp+293,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_word),3);
    bufp->fullIData(oldp+294,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_data),32);
    bufp->fullCData(oldp+295,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_mask),4);
    bufp->fullCData(oldp+296,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_cache),2);
    bufp->fullCData(oldp+297,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_block),4);
    bufp->fullCData(oldp+298,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_word),3);
    bufp->fullCData(oldp+299,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid_block),4);
    bufp->fullBit(oldp+300,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid_flag));
    bufp->fullIData(oldp+301,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid_tag),23);
    bufp->fullBit(oldp+302,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_done));
    bufp->fullIData(oldp+303,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_tag),23);
    bufp->fullCData(oldp+304,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_block),4);
    bufp->fullCData(oldp+305,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_word),3);
    bufp->fullCData(oldp+306,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_critical_word),3);
    bufp->fullBit(oldp+307,((0U == VL_EXTENDS_II(32,2, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_cache)))));
    bufp->fullBit(oldp+308,((0U == VL_EXTENDS_II(32,2, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_cache)))));
    bufp->fullCData(oldp+309,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__rw_flag),2);
    bufp->fullCData(oldp+310,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4),7);
    bufp->fullBit(oldp+311,((1U == VL_EXTENDS_II(32,2, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_cache)))));
    bufp->fullBit(oldp+312,((1U == VL_EXTENDS_II(32,2, (IData)(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_cache)))));
    bufp->fullCData(oldp+313,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__rw_flag),2);
    bufp->fullBit(oldp+314,((vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv1 
                             == vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv2)));
    bufp->fullBit(oldp+315,((vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv1 
                             != vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv2)));
    bufp->fullBit(oldp+316,(VL_LTS_III(32, vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv1, vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv2)));
    bufp->fullBit(oldp+317,((vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv1 
                             < vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv2)));
    bufp->fullBit(oldp+318,(VL_GTES_III(32, vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv1, vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv2)));
    bufp->fullBit(oldp+319,((vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv1 
                             >= vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_opv2)));
    bufp->fullBit(oldp+320,(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_if0__mem_re));
    bufp->fullBit(oldp+321,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__mem_taking));
    bufp->fullBit(oldp+322,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__waiting_one));
    bufp->fullBit(oldp+323,(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_mem0__mem_re));
    bufp->fullBit(oldp+324,(vlSelf->tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_mem0__mem_we));
    bufp->fullBit(oldp+325,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_mem0__DOT__mem_taking));
    bufp->fullQData(oldp+326,(vlSelf->tb_riscv_cpu__DOT__mem_data_i),64);
    bufp->fullCData(oldp+328,(vlSelf->tb_riscv_cpu__DOT__mem_busy),2);
    bufp->fullCData(oldp+329,(vlSelf->tb_riscv_cpu__DOT__mem_done),2);
    bufp->fullCData(oldp+330,(vlSelf->tb_riscv_cpu__DOT__mem_state),2);
    bufp->fullBit(oldp+331,(vlSelf->tb_riscv_cpu__DOT__mem_operation_pending));
    bufp->fullIData(oldp+332,(vlSelf->tb_riscv_cpu__DOT__pending_addr),32);
    bufp->fullCData(oldp+333,(vlSelf->tb_riscv_cpu__DOT__pending_we),4);
    bufp->fullCData(oldp+334,(vlSelf->tb_riscv_cpu__DOT__pending_sel),8);
    bufp->fullQData(oldp+335,(vlSelf->tb_riscv_cpu__DOT__pending_data),64);
    bufp->fullIData(oldp+337,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_r_data),32);
    bufp->fullBit(oldp+338,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_done));
    bufp->fullIData(oldp+339,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_r_data),32);
    bufp->fullBit(oldp+340,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_done));
    bufp->fullIData(oldp+341,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__pc),32);
    bufp->fullBit(oldp+342,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__right_one));
    bufp->fullIData(oldp+343,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_pc),32);
    bufp->fullIData(oldp+344,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst),32);
    bufp->fullCData(oldp+345,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_aluop),8);
    bufp->fullCData(oldp+346,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_alusel),3);
    bufp->fullIData(oldp+347,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv1),32);
    bufp->fullIData(oldp+348,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_opv2),32);
    bufp->fullCData(oldp+349,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_reg_waddr_i),5);
    bufp->fullBit(oldp+350,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_we_i));
    bufp->fullIData(oldp+351,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_link_addr),32);
    bufp->fullIData(oldp+352,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__ex_mem_offset),32);
    bufp->fullCData(oldp+353,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_waddr_i),5);
    bufp->fullBit(oldp+354,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_we_i));
    bufp->fullIData(oldp+355,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_reg_wdata_i),32);
    bufp->fullIData(oldp+356,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr),32);
    bufp->fullCData(oldp+357,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_aluop),8);
    bufp->fullIData(oldp+358,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__mem_rt_data),32);
    bufp->fullCData(oldp+359,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__wb_reg_waddr),5);
    bufp->fullBit(oldp+360,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__wb_we));
    bufp->fullIData(oldp+361,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__wb_reg_wdata),32);
    bufp->fullIData(oldp+362,((IData)(vlSelf->tb_riscv_cpu__DOT__mem_data_i)),32);
    bufp->fullBit(oldp+363,((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__mem_busy))));
    bufp->fullBit(oldp+364,((1U & (IData)(vlSelf->tb_riscv_cpu__DOT__mem_done))));
    bufp->fullIData(oldp+365,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                              [0U][0U]),25);
    bufp->fullIData(oldp+366,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                              [0U][1U]),25);
    bufp->fullIData(oldp+367,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                              [0U][2U]),25);
    bufp->fullIData(oldp+368,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                              [0U][3U]),25);
    bufp->fullIData(oldp+369,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                              [1U][0U]),25);
    bufp->fullIData(oldp+370,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                              [1U][1U]),25);
    bufp->fullIData(oldp+371,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                              [1U][2U]),25);
    bufp->fullIData(oldp+372,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                              [1U][3U]),25);
    bufp->fullIData(oldp+373,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                              [2U][0U]),25);
    bufp->fullIData(oldp+374,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                              [2U][1U]),25);
    bufp->fullIData(oldp+375,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                              [2U][2U]),25);
    bufp->fullIData(oldp+376,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                              [2U][3U]),25);
    bufp->fullIData(oldp+377,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                              [3U][0U]),25);
    bufp->fullIData(oldp+378,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                              [3U][1U]),25);
    bufp->fullIData(oldp+379,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                              [3U][2U]),25);
    bufp->fullIData(oldp+380,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag
                              [3U][3U]),25);
    bufp->fullBit(oldp+381,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
                            [0U][0U]));
    bufp->fullBit(oldp+382,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
                            [0U][1U]));
    bufp->fullBit(oldp+383,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
                            [0U][2U]));
    bufp->fullBit(oldp+384,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
                            [0U][3U]));
    bufp->fullBit(oldp+385,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
                            [1U][0U]));
    bufp->fullBit(oldp+386,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
                            [1U][1U]));
    bufp->fullBit(oldp+387,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
                            [1U][2U]));
    bufp->fullBit(oldp+388,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
                            [1U][3U]));
    bufp->fullBit(oldp+389,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
                            [2U][0U]));
    bufp->fullBit(oldp+390,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
                            [2U][1U]));
    bufp->fullBit(oldp+391,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
                            [2U][2U]));
    bufp->fullBit(oldp+392,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
                            [2U][3U]));
    bufp->fullBit(oldp+393,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
                            [3U][0U]));
    bufp->fullBit(oldp+394,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
                            [3U][1U]));
    bufp->fullBit(oldp+395,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
                            [3U][2U]));
    bufp->fullBit(oldp+396,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid
                            [3U][3U]));
    bufp->fullCData(oldp+397,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                              [0U][0U]),2);
    bufp->fullCData(oldp+398,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                              [0U][1U]),2);
    bufp->fullCData(oldp+399,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                              [0U][2U]),2);
    bufp->fullCData(oldp+400,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                              [0U][3U]),2);
    bufp->fullCData(oldp+401,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                              [1U][0U]),2);
    bufp->fullCData(oldp+402,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                              [1U][1U]),2);
    bufp->fullCData(oldp+403,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                              [1U][2U]),2);
    bufp->fullCData(oldp+404,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                              [1U][3U]),2);
    bufp->fullCData(oldp+405,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                              [2U][0U]),2);
    bufp->fullCData(oldp+406,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                              [2U][1U]),2);
    bufp->fullCData(oldp+407,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                              [2U][2U]),2);
    bufp->fullCData(oldp+408,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                              [2U][3U]),2);
    bufp->fullCData(oldp+409,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                              [3U][0U]),2);
    bufp->fullCData(oldp+410,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                              [3U][1U]),2);
    bufp->fullCData(oldp+411,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                              [3U][2U]),2);
    bufp->fullCData(oldp+412,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse
                              [3U][3U]),2);
    bufp->fullCData(oldp+413,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter[0]),2);
    bufp->fullCData(oldp+414,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter[1]),2);
    bufp->fullCData(oldp+415,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter[2]),2);
    bufp->fullCData(oldp+416,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter[3]),2);
    bufp->fullCData(oldp+417,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache_flush),4);
    bufp->fullCData(oldp+418,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__state),3);
    bufp->fullCData(oldp+419,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_cache),2);
    bufp->fullIData(oldp+420,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_tag),25);
    bufp->fullCData(oldp+421,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_block),2);
    bufp->fullCData(oldp+422,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_word),3);
    bufp->fullCData(oldp+423,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__critical_word),3);
    bufp->fullIData(oldp+424,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__RAM_read_data[0]),32);
    bufp->fullIData(oldp+425,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__RAM_read_data[1]),32);
    bufp->fullIData(oldp+426,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__RAM_read_data[2]),32);
    bufp->fullIData(oldp+427,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__RAM_read_data[3]),32);
    bufp->fullCData(oldp+428,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__RAM_read_select),2);
    bufp->fullIData(oldp+429,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__j),32);
    bufp->fullIData(oldp+430,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__k),32);
    bufp->fullBit(oldp+431,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__ram_busy));
    bufp->fullBit(oldp+432,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__ram_done));
    bufp->fullIData(oldp+433,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellout__genblk6__BRA__0__KET____DOT__RAM____pinNumber7),32);
    bufp->fullBit(oldp+434,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__ram_busy));
    bufp->fullBit(oldp+435,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__ram_done));
    bufp->fullIData(oldp+436,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellout__genblk6__BRA__1__KET____DOT__RAM____pinNumber7),32);
    bufp->fullBit(oldp+437,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__ram_busy));
    bufp->fullBit(oldp+438,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__ram_done));
    bufp->fullIData(oldp+439,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellout__genblk6__BRA__2__KET____DOT__RAM____pinNumber7),32);
    bufp->fullBit(oldp+440,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__ram_busy));
    bufp->fullBit(oldp+441,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__ram_done));
    bufp->fullIData(oldp+442,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellout__genblk6__BRA__3__KET____DOT__RAM____pinNumber7),32);
    bufp->fullIData(oldp+443,((IData)((vlSelf->tb_riscv_cpu__DOT__mem_data_i 
                                       >> 0x20U))),32);
    bufp->fullBit(oldp+444,((1U & ((IData)(vlSelf->tb_riscv_cpu__DOT__mem_busy) 
                                   >> 1U))));
    bufp->fullBit(oldp+445,((1U & ((IData)(vlSelf->tb_riscv_cpu__DOT__mem_done) 
                                   >> 1U))));
    bufp->fullIData(oldp+446,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                              [0U][0U]),23);
    bufp->fullIData(oldp+447,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                              [0U][1U]),23);
    bufp->fullIData(oldp+448,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                              [0U][2U]),23);
    bufp->fullIData(oldp+449,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                              [0U][3U]),23);
    bufp->fullIData(oldp+450,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                              [0U][4U]),23);
    bufp->fullIData(oldp+451,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                              [0U][5U]),23);
    bufp->fullIData(oldp+452,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                              [0U][6U]),23);
    bufp->fullIData(oldp+453,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                              [0U][7U]),23);
    bufp->fullIData(oldp+454,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                              [0U][8U]),23);
    bufp->fullIData(oldp+455,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                              [0U][9U]),23);
    bufp->fullIData(oldp+456,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                              [0U][0xaU]),23);
    bufp->fullIData(oldp+457,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                              [0U][0xbU]),23);
    bufp->fullIData(oldp+458,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                              [0U][0xcU]),23);
    bufp->fullIData(oldp+459,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                              [0U][0xdU]),23);
    bufp->fullIData(oldp+460,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                              [0U][0xeU]),23);
    bufp->fullIData(oldp+461,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                              [0U][0xfU]),23);
    bufp->fullIData(oldp+462,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                              [1U][0U]),23);
    bufp->fullIData(oldp+463,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                              [1U][1U]),23);
    bufp->fullIData(oldp+464,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                              [1U][2U]),23);
    bufp->fullIData(oldp+465,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                              [1U][3U]),23);
    bufp->fullIData(oldp+466,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                              [1U][4U]),23);
    bufp->fullIData(oldp+467,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                              [1U][5U]),23);
    bufp->fullIData(oldp+468,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                              [1U][6U]),23);
    bufp->fullIData(oldp+469,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                              [1U][7U]),23);
    bufp->fullIData(oldp+470,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                              [1U][8U]),23);
    bufp->fullIData(oldp+471,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                              [1U][9U]),23);
    bufp->fullIData(oldp+472,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                              [1U][0xaU]),23);
    bufp->fullIData(oldp+473,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                              [1U][0xbU]),23);
    bufp->fullIData(oldp+474,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                              [1U][0xcU]),23);
    bufp->fullIData(oldp+475,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                              [1U][0xdU]),23);
    bufp->fullIData(oldp+476,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                              [1U][0xeU]),23);
    bufp->fullIData(oldp+477,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag
                              [1U][0xfU]),23);
    bufp->fullBit(oldp+478,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                            [0U][0U]));
    bufp->fullBit(oldp+479,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                            [0U][1U]));
    bufp->fullBit(oldp+480,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                            [0U][2U]));
    bufp->fullBit(oldp+481,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                            [0U][3U]));
    bufp->fullBit(oldp+482,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                            [0U][4U]));
    bufp->fullBit(oldp+483,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                            [0U][5U]));
    bufp->fullBit(oldp+484,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                            [0U][6U]));
    bufp->fullBit(oldp+485,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                            [0U][7U]));
    bufp->fullBit(oldp+486,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                            [0U][8U]));
    bufp->fullBit(oldp+487,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                            [0U][9U]));
    bufp->fullBit(oldp+488,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                            [0U][0xaU]));
    bufp->fullBit(oldp+489,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                            [0U][0xbU]));
    bufp->fullBit(oldp+490,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                            [0U][0xcU]));
    bufp->fullBit(oldp+491,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                            [0U][0xdU]));
    bufp->fullBit(oldp+492,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                            [0U][0xeU]));
    bufp->fullBit(oldp+493,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                            [0U][0xfU]));
    bufp->fullBit(oldp+494,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                            [1U][0U]));
    bufp->fullBit(oldp+495,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                            [1U][1U]));
    bufp->fullBit(oldp+496,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                            [1U][2U]));
    bufp->fullBit(oldp+497,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                            [1U][3U]));
    bufp->fullBit(oldp+498,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                            [1U][4U]));
    bufp->fullBit(oldp+499,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                            [1U][5U]));
    bufp->fullBit(oldp+500,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                            [1U][6U]));
    bufp->fullBit(oldp+501,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                            [1U][7U]));
    bufp->fullBit(oldp+502,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                            [1U][8U]));
    bufp->fullBit(oldp+503,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                            [1U][9U]));
    bufp->fullBit(oldp+504,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                            [1U][0xaU]));
    bufp->fullBit(oldp+505,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                            [1U][0xbU]));
    bufp->fullBit(oldp+506,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                            [1U][0xcU]));
    bufp->fullBit(oldp+507,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                            [1U][0xdU]));
    bufp->fullBit(oldp+508,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                            [1U][0xeU]));
    bufp->fullBit(oldp+509,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid
                            [1U][0xfU]));
    bufp->fullBit(oldp+510,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                            [0U][0U]));
    bufp->fullBit(oldp+511,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                            [0U][1U]));
    bufp->fullBit(oldp+512,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                            [0U][2U]));
    bufp->fullBit(oldp+513,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                            [0U][3U]));
    bufp->fullBit(oldp+514,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                            [0U][4U]));
    bufp->fullBit(oldp+515,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                            [0U][5U]));
    bufp->fullBit(oldp+516,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                            [0U][6U]));
    bufp->fullBit(oldp+517,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                            [0U][7U]));
    bufp->fullBit(oldp+518,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                            [0U][8U]));
    bufp->fullBit(oldp+519,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                            [0U][9U]));
    bufp->fullBit(oldp+520,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                            [0U][0xaU]));
    bufp->fullBit(oldp+521,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                            [0U][0xbU]));
    bufp->fullBit(oldp+522,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                            [0U][0xcU]));
    bufp->fullBit(oldp+523,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                            [0U][0xdU]));
    bufp->fullBit(oldp+524,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                            [0U][0xeU]));
    bufp->fullBit(oldp+525,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                            [0U][0xfU]));
    bufp->fullBit(oldp+526,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                            [1U][0U]));
    bufp->fullBit(oldp+527,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                            [1U][1U]));
    bufp->fullBit(oldp+528,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                            [1U][2U]));
    bufp->fullBit(oldp+529,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                            [1U][3U]));
    bufp->fullBit(oldp+530,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                            [1U][4U]));
    bufp->fullBit(oldp+531,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                            [1U][5U]));
    bufp->fullBit(oldp+532,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                            [1U][6U]));
    bufp->fullBit(oldp+533,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                            [1U][7U]));
    bufp->fullBit(oldp+534,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                            [1U][8U]));
    bufp->fullBit(oldp+535,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                            [1U][9U]));
    bufp->fullBit(oldp+536,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                            [1U][0xaU]));
    bufp->fullBit(oldp+537,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                            [1U][0xbU]));
    bufp->fullBit(oldp+538,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                            [1U][0xcU]));
    bufp->fullBit(oldp+539,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                            [1U][0xdU]));
    bufp->fullBit(oldp+540,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                            [1U][0xeU]));
    bufp->fullBit(oldp+541,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse
                            [1U][0xfU]));
    bufp->fullBit(oldp+542,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[0]));
    bufp->fullBit(oldp+543,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[1]));
    bufp->fullBit(oldp+544,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[2]));
    bufp->fullBit(oldp+545,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[3]));
    bufp->fullBit(oldp+546,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[4]));
    bufp->fullBit(oldp+547,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[5]));
    bufp->fullBit(oldp+548,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[6]));
    bufp->fullBit(oldp+549,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[7]));
    bufp->fullBit(oldp+550,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[8]));
    bufp->fullBit(oldp+551,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[9]));
    bufp->fullBit(oldp+552,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[10]));
    bufp->fullBit(oldp+553,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[11]));
    bufp->fullBit(oldp+554,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[12]));
    bufp->fullBit(oldp+555,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[13]));
    bufp->fullBit(oldp+556,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[14]));
    bufp->fullBit(oldp+557,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter[15]));
    bufp->fullCData(oldp+558,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__found_in_cache_flush),2);
    bufp->fullCData(oldp+559,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__state),3);
    bufp->fullBit(oldp+560,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_cache));
    bufp->fullIData(oldp+561,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_tag),23);
    bufp->fullCData(oldp+562,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_block),4);
    bufp->fullCData(oldp+563,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_word),3);
    bufp->fullCData(oldp+564,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__critical_word),3);
    bufp->fullIData(oldp+565,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__RAM_read_data[0]),32);
    bufp->fullIData(oldp+566,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__RAM_read_data[1]),32);
    bufp->fullBit(oldp+567,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__RAM_read_select));
    bufp->fullIData(oldp+568,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__j),32);
    bufp->fullIData(oldp+569,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__k),32);
    bufp->fullBit(oldp+570,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__ram_busy));
    bufp->fullBit(oldp+571,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__ram_done));
    bufp->fullIData(oldp+572,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT____Vcellout__genblk6__BRA__0__KET____DOT__RAM____pinNumber7),32);
    bufp->fullBit(oldp+573,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__ram_busy));
    bufp->fullBit(oldp+574,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__ram_done));
    bufp->fullIData(oldp+575,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT____Vcellout__genblk6__BRA__1__KET____DOT__RAM____pinNumber7),32);
    bufp->fullIData(oldp+576,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__reg_pc0__DOT__pc),32);
    bufp->fullBit(oldp+577,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__reg_pc0__DOT__right_one));
    bufp->fullIData(oldp+578,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[0]),32);
    bufp->fullIData(oldp+579,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[1]),32);
    bufp->fullIData(oldp+580,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[2]),32);
    bufp->fullIData(oldp+581,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[3]),32);
    bufp->fullIData(oldp+582,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[4]),32);
    bufp->fullIData(oldp+583,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[5]),32);
    bufp->fullIData(oldp+584,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[6]),32);
    bufp->fullIData(oldp+585,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[7]),32);
    bufp->fullIData(oldp+586,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[8]),32);
    bufp->fullIData(oldp+587,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[9]),32);
    bufp->fullIData(oldp+588,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[10]),32);
    bufp->fullIData(oldp+589,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[11]),32);
    bufp->fullIData(oldp+590,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[12]),32);
    bufp->fullIData(oldp+591,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[13]),32);
    bufp->fullIData(oldp+592,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[14]),32);
    bufp->fullIData(oldp+593,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[15]),32);
    bufp->fullIData(oldp+594,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[16]),32);
    bufp->fullIData(oldp+595,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[17]),32);
    bufp->fullIData(oldp+596,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[18]),32);
    bufp->fullIData(oldp+597,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[19]),32);
    bufp->fullIData(oldp+598,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[20]),32);
    bufp->fullIData(oldp+599,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[21]),32);
    bufp->fullIData(oldp+600,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[22]),32);
    bufp->fullIData(oldp+601,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[23]),32);
    bufp->fullIData(oldp+602,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[24]),32);
    bufp->fullIData(oldp+603,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[25]),32);
    bufp->fullIData(oldp+604,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[26]),32);
    bufp->fullIData(oldp+605,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[27]),32);
    bufp->fullIData(oldp+606,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[28]),32);
    bufp->fullIData(oldp+607,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[29]),32);
    bufp->fullIData(oldp+608,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[30]),32);
    bufp->fullIData(oldp+609,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs[31]),32);
    bufp->fullCData(oldp+610,((0x7fU & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst)),7);
    bufp->fullCData(oldp+611,((7U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+612,((vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                               >> 0x19U)),7);
    bufp->fullSData(oldp+613,((vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+614,((vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                               >> 0xcU)),20);
    bufp->fullSData(oldp+615,(((0xfe0U & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                           >> 7U)))),12);
    bufp->fullCData(oldp+616,((0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+617,((0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+618,((0x1fU & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+619,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__prev_is_load));
    bufp->fullIData(oldp+620,((vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_pc 
                               + (((- (IData)((vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                               >> 0x1fU))) 
                                   << 0x14U) | ((0xff000U 
                                                 & vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst) 
                                                | ((0x800U 
                                                    & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_inst 
                                                         >> 0x14U))))))),32);
    bufp->fullIData(oldp+621,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__pc_plus_B_imm),32);
    bufp->fullIData(oldp+622,(((IData)(4U) + vlSelf->tb_riscv_cpu__DOT__dut__DOT__id_pc)),32);
    bufp->fullIData(oldp+623,(vlSelf->tb_riscv_cpu__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+624,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache_busy));
    bufp->fullBit(oldp+625,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache_busy));
    bufp->fullCData(oldp+626,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__pending_rw_flag),2);
    bufp->fullIData(oldp+627,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__pending_addr),32);
    bufp->fullIData(oldp+628,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__pending_write_data),32);
    bufp->fullCData(oldp+629,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__pending_write_mask),4);
    bufp->fullCData(oldp+630,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__pending_rw_flag),2);
    bufp->fullIData(oldp+631,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__pending_addr),32);
    bufp->fullIData(oldp+632,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__pending_write_data),32);
    bufp->fullCData(oldp+633,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__pending_write_mask),4);
    bufp->fullIData(oldp+634,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_data_in),32);
    bufp->fullCData(oldp+635,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_mask_in),4);
    bufp->fullBit(oldp+636,(vlSelf->tb_riscv_cpu__DOT__clk));
    bufp->fullBit(oldp+637,(vlSelf->tb_riscv_cpu__DOT__rst_n));
    bufp->fullBit(oldp+638,(vlSelf->tb_riscv_cpu__DOT____Vcellinp__dut__rst));
    bufp->fullCData(oldp+639,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid_cache),2);
    bufp->fullCData(oldp+640,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_cache),2);
    bufp->fullBit(oldp+641,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_tmp[0]));
    bufp->fullBit(oldp+642,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_tmp[1]));
    bufp->fullBit(oldp+643,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_tmp[2]));
    bufp->fullBit(oldp+644,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_tmp[0]));
    bufp->fullBit(oldp+645,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_tmp[1]));
    bufp->fullBit(oldp+646,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_tmp[2]));
    bufp->fullBit(oldp+647,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_id_tmp[0]));
    bufp->fullBit(oldp+648,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_id_tmp[1]));
    bufp->fullBit(oldp+649,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_id_tmp[2]));
    bufp->fullBit(oldp+650,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_id_tmp[0]));
    bufp->fullBit(oldp+651,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_id_tmp[1]));
    bufp->fullBit(oldp+652,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_id_tmp[2]));
    bufp->fullBit(oldp+653,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_id_tmp
                            [0U]));
    bufp->fullBit(oldp+654,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_id_tmp
                            [0U]));
    bufp->fullBit(oldp+655,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid_cache));
    bufp->fullBit(oldp+656,(vlSelf->tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_cache));
}
