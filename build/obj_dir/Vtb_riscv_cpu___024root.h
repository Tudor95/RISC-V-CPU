// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_riscv_cpu.h for the primary calling header

#ifndef VERILATED_VTB_RISCV_CPU___024ROOT_H_
#define VERILATED_VTB_RISCV_CPU___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_riscv_cpu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_riscv_cpu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_riscv_cpu__DOT__clk;
        CData/*0:0*/ tb_riscv_cpu__DOT____Vcellinp__dut__rst;
        CData/*0:0*/ tb_riscv_cpu__DOT__rst_n;
        CData/*3:0*/ tb_riscv_cpu__DOT__mem_rwe;
        CData/*7:0*/ tb_riscv_cpu__DOT__mem_sel;
        CData/*1:0*/ tb_riscv_cpu__DOT__mem_busy;
        CData/*1:0*/ tb_riscv_cpu__DOT__mem_done;
        CData/*1:0*/ tb_riscv_cpu__DOT__mem_state;
        CData/*0:0*/ tb_riscv_cpu__DOT__mem_operation_pending;
        CData/*3:0*/ tb_riscv_cpu__DOT__pending_we;
        CData/*7:0*/ tb_riscv_cpu__DOT__pending_sel;
        CData/*0:0*/ tb_riscv_cpu__DOT__simulation_done;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__icache_busy;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__icache_done;
        CData/*3:0*/ tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_write_mask;
        CData/*1:0*/ tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_rw_flag;
        CData/*1:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache_rwe;
        CData/*3:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache_sel;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache_busy;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache_done;
        CData/*3:0*/ tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_write_mask;
        CData/*1:0*/ tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_rw_flag;
        CData/*5:0*/ tb_riscv_cpu__DOT__dut__DOT__stall;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__stallreq_if;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__stallreq_mem;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__right_one;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__id_re1;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__id_re2;
        CData/*4:0*/ tb_riscv_cpu__DOT__dut__DOT__id_reg_addr1;
        CData/*4:0*/ tb_riscv_cpu__DOT__dut__DOT__id_reg_addr2;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__br;
        CData/*7:0*/ tb_riscv_cpu__DOT__dut__DOT__id_aluop;
        CData/*2:0*/ tb_riscv_cpu__DOT__dut__DOT__id_alusel;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__id_we;
        CData/*4:0*/ tb_riscv_cpu__DOT__dut__DOT__id_reg_waddr;
        CData/*7:0*/ tb_riscv_cpu__DOT__dut__DOT__ex_aluop;
        CData/*2:0*/ tb_riscv_cpu__DOT__dut__DOT__ex_alusel;
        CData/*4:0*/ tb_riscv_cpu__DOT__dut__DOT__ex_reg_waddr_i;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__ex_we_i;
        CData/*4:0*/ tb_riscv_cpu__DOT__dut__DOT__mem_reg_waddr_i;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__mem_we_i;
        CData/*7:0*/ tb_riscv_cpu__DOT__dut__DOT__mem_aluop;
        CData/*4:0*/ tb_riscv_cpu__DOT__dut__DOT__mem_reg_waddr_o;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__mem_we_o;
        CData/*4:0*/ tb_riscv_cpu__DOT__dut__DOT__wb_reg_waddr;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__wb_we;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_if0__mem_re;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_mem0__mem_we;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT____Vcellout__stage_mem0__mem_re;
        CData/*1:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__pending_rw_flag;
        CData/*3:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__pending_write_mask;
        CData/*1:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__rw_flag;
        CData/*3:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_mask_in;
        CData/*1:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__found_in_cache;
        CData/*1:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__found_in_cache_flush;
        CData/*2:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__state;
        CData/*2:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_state;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_cache;
        CData/*3:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_block;
        CData/*2:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_word;
        CData/*2:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__critical_word;
        CData/*1:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_cache;
        CData/*3:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_block;
        CData/*2:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_word;
    };
    struct {
        CData/*3:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_mask;
        CData/*1:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_cache;
        CData/*3:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_block;
        CData/*2:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__read_word;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid_cache;
        CData/*3:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid_block;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid_flag;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_done;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_cache;
        CData/*3:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_block;
        CData/*2:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_word;
        CData/*2:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_critical_word;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__RAM_read_select;
        CData/*1:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__rw_flag;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__ram_busy;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__ram_done;
        CData/*6:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4;
        CData/*1:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__rw_flag;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__ram_busy;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__ram_done;
        CData/*1:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__pending_rw_flag;
        CData/*3:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__pending_write_mask;
        CData/*1:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__rw_flag;
        CData/*3:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_mask_in;
        CData/*3:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache;
        CData/*3:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__found_in_cache_flush;
        CData/*2:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__state;
        CData/*2:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_state;
        CData/*1:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_cache;
        CData/*1:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_block;
        CData/*2:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_word;
        CData/*2:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__critical_word;
        CData/*2:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_cache;
        CData/*1:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_block;
        CData/*2:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_word;
        CData/*3:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_mask;
        CData/*2:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_cache;
        CData/*1:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_block;
        CData/*2:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__read_word;
        CData/*1:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid_cache;
        CData/*1:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid_block;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid_flag;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_done;
        CData/*1:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_cache;
        CData/*1:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_block;
        CData/*2:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_word;
        CData/*2:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_critical_word;
        CData/*1:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__RAM_read_select;
        CData/*1:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__rw_flag;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__ram_busy;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__ram_done;
        CData/*4:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellinp__genblk6__BRA__0__KET____DOT__RAM____pinNumber4;
        CData/*1:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__rw_flag;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__ram_busy;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__ram_done;
        CData/*1:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__rw_flag;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__ram_busy;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__ram_done;
        CData/*1:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__rw_flag;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__ram_busy;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__ram_done;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__reg_pc0__DOT__right_one;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__mem_taking;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__stage_if0__DOT__waiting_one;
    };
    struct {
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__inst_valid;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__stallreq_for_reg1_load;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__stallreq_for_reg2_load;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__prev_is_load;
        CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__stage_mem0__DOT__mem_taking;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_riscv_cpu__DOT____Vcellinp__dut__rst__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__rst_n__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ tb_riscv_cpu__DOT__pending_addr;
        IData/*31:0*/ tb_riscv_cpu__DOT__cycle_count;
        IData/*31:0*/ tb_riscv_cpu__DOT__max_cycles;
        IData/*31:0*/ tb_riscv_cpu__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ tb_riscv_cpu__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__icache_addr;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__icache_r_data;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_write_data;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT____Vcellout__icache0__mem_addr;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache_addr;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache_r_data;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache_w_data;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_write_data;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT____Vcellout__dcache0__mem_addr;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__pc;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__if_pc;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__if_inst;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__id_pc;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__id_inst;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__id_reg_data1;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__br_addr;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__id_opv1;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__id_opv2;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__id_link_addr;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__id_mem_offset;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__ex_opv1;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__ex_opv2;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__ex_link_addr;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__ex_mem_offset;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__ex_reg_wdata;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__ex_mem_addr;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__mem_reg_wdata_i;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__mem_mem_addr;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__mem_rt_data;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__mem_reg_wdata_o;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__wb_reg_wdata;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__pending_addr;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__pending_write_data;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__addr;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_data_in;
        IData/*22:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__current_tag;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__write_data;
        IData/*22:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid_tag;
        IData/*22:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__next_current_tag;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__j;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__k;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT____Vcellout__genblk6__BRA__0__KET____DOT__RAM____pinNumber7;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT____Vcellout__genblk6__BRA__1__KET____DOT__RAM____pinNumber7;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__pending_addr;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__pending_write_data;
    };
    struct {
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__addr;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_data_in;
        IData/*24:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__current_tag;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__write_data;
        IData/*24:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid_tag;
        IData/*24:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__next_current_tag;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__j;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__k;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellout__genblk6__BRA__0__KET____DOT__RAM____pinNumber7;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellout__genblk6__BRA__1__KET____DOT__RAM____pinNumber7;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellout__genblk6__BRA__2__KET____DOT__RAM____pinNumber7;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT____Vcellout__genblk6__BRA__3__KET____DOT__RAM____pinNumber7;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__reg_pc0__DOT__pc;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm1;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__imm2;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT__pc_plus_B_imm;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT____VdfgExtracted_hb047d7aa__0;
        IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__stage_id0__DOT____VdfgExtracted_h3acc3dea__0;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ tb_riscv_cpu__DOT__mem_addr;
        QData/*63:0*/ tb_riscv_cpu__DOT__mem_data_i;
        QData/*63:0*/ tb_riscv_cpu__DOT__pending_data;
        VlUnpacked<IData/*31:0*/, 1024> tb_riscv_cpu__DOT__inst_mem;
        VlUnpacked<IData/*31:0*/, 1024> tb_riscv_cpu__DOT__data_mem;
        VlUnpacked<VlUnpacked<IData/*22:0*/, 16>, 2> tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__tag;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 16>, 2> tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__valid;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 16>, 2> tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recuse;
        VlUnpacked<CData/*0:0*/, 16> tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__recent_use_counter;
        VlUnpacked<CData/*0:0*/, 4> tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__one_hot_lookup;
        VlUnpacked<CData/*0:0*/, 3> tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_tmp;
        VlUnpacked<CData/*0:0*/, 3> tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_tmp;
        VlUnpacked<CData/*0:0*/, 3> tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_id_tmp;
        VlUnpacked<CData/*0:0*/, 3> tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_id_tmp;
        VlUnpacked<IData/*31:0*/, 2> tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__RAM_read_data;
        VlUnpacked<IData/*31:0*/, 128> tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory;
        VlUnpacked<IData/*31:0*/, 128> tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory;
        VlUnpacked<VlUnpacked<IData/*24:0*/, 4>, 4> tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__tag;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 4>, 4> tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__valid;
        VlUnpacked<VlUnpacked<CData/*1:0*/, 4>, 4> tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recuse;
        VlUnpacked<CData/*1:0*/, 4> tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__recent_use_counter;
        VlUnpacked<CData/*1:0*/, 16> tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__one_hot_lookup;
        VlUnpacked<CData/*1:0*/, 7> tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp;
        VlUnpacked<CData/*1:0*/, 7> tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp;
        VlUnpacked<CData/*1:0*/, 7> tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp;
        VlUnpacked<CData/*1:0*/, 7> tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp;
        VlUnpacked<IData/*31:0*/, 4> tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__RAM_read_data;
        VlUnpacked<IData/*31:0*/, 32> tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__0__KET____DOT__RAM__DOT__memory;
        VlUnpacked<IData/*31:0*/, 32> tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__1__KET____DOT__RAM__DOT__memory;
        VlUnpacked<IData/*31:0*/, 32> tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__2__KET____DOT__RAM__DOT__memory;
        VlUnpacked<IData/*31:0*/, 32> tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__genblk6__BRA__3__KET____DOT__RAM__DOT__memory;
        VlUnpacked<IData/*31:0*/, 32> tb_riscv_cpu__DOT__dut__DOT__regfile0__DOT__regs;
        VlUnpacked<CData/*0:0*/, 3> __Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_tmp__0;
        VlUnpacked<CData/*0:0*/, 3> __Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_id_tmp__0;
        VlUnpacked<CData/*0:0*/, 3> __Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_tmp__0;
        VlUnpacked<CData/*0:0*/, 3> __Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_id_tmp__0;
        VlUnpacked<CData/*1:0*/, 7> __Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp__0;
        VlUnpacked<CData/*1:0*/, 7> __Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp__0;
        VlUnpacked<CData/*1:0*/, 7> __Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp__0;
        VlUnpacked<CData/*1:0*/, 7> __Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp__0;
        VlUnpacked<CData/*0:0*/, 3> __Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_tmp__1;
    };
    struct {
        VlUnpacked<CData/*0:0*/, 3> __Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__lru_id_tmp__1;
        VlUnpacked<CData/*0:0*/, 3> __Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_tmp__1;
        VlUnpacked<CData/*0:0*/, 3> __Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__icache0__DOT__mru_id_tmp__1;
        VlUnpacked<CData/*1:0*/, 7> __Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_tmp__1;
        VlUnpacked<CData/*1:0*/, 7> __Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__lru_id_tmp__1;
        VlUnpacked<CData/*1:0*/, 7> __Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_tmp__1;
        VlUnpacked<CData/*1:0*/, 7> __Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__dut__DOT__dcache0__DOT__mru_id_tmp__1;
        VlUnpacked<CData/*0:0*/, 10> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h48dc5477__0;
    VlTriggerScheduler __VtrigSched_h8b56b137__0;
    VlTriggerVec<9> __VstlTriggered;
    VlTriggerVec<12> __VactTriggered;
    VlTriggerVec<12> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_riscv_cpu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_riscv_cpu___024root(Vtb_riscv_cpu__Syms* symsp, const char* v__name);
    ~Vtb_riscv_cpu___024root();
    VL_UNCOPYABLE(Vtb_riscv_cpu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
