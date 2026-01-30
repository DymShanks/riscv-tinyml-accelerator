// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsystem_top.h for the primary calling header

#ifndef VERILATED_VSYSTEM_TOP___024ROOT_H_
#define VERILATED_VSYSTEM_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vsystem_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsystem_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(resetn,0,0);
        VL_OUT8(trap,0,0);
        CData/*0:0*/ system_top__DOT__pcpi_valid;
        CData/*0:0*/ system_top__DOT__pcpi_wr;
        CData/*0:0*/ system_top__DOT__pcpi_wait;
        CData/*0:0*/ system_top__DOT__pcpi_ready;
        CData/*0:0*/ system_top__DOT__mem_valid;
        CData/*0:0*/ system_top__DOT__cpu__DOT__mem_instr;
        CData/*3:0*/ system_top__DOT__cpu__DOT__mem_wstrb;
        CData/*0:0*/ system_top__DOT__cpu__DOT__mem_la_read;
        CData/*0:0*/ system_top__DOT__cpu__DOT__mem_la_write;
        CData/*3:0*/ system_top__DOT__cpu__DOT__mem_la_wstrb;
        CData/*0:0*/ system_top__DOT__cpu__DOT__trace_valid;
        CData/*4:0*/ system_top__DOT__cpu__DOT__reg_sh;
        CData/*0:0*/ system_top__DOT__cpu__DOT__dbg_mem_valid;
        CData/*0:0*/ system_top__DOT__cpu__DOT__irq_delay;
        CData/*0:0*/ system_top__DOT__cpu__DOT__irq_active;
        CData/*0:0*/ system_top__DOT__cpu__DOT__pcpi_int_wr;
        CData/*1:0*/ system_top__DOT__cpu__DOT__mem_state;
        CData/*1:0*/ system_top__DOT__cpu__DOT__mem_wordsize;
        CData/*0:0*/ system_top__DOT__cpu__DOT__mem_do_prefetch;
        CData/*0:0*/ system_top__DOT__cpu__DOT__mem_do_rinst;
        CData/*0:0*/ system_top__DOT__cpu__DOT__mem_do_rdata;
        CData/*0:0*/ system_top__DOT__cpu__DOT__mem_do_wdata;
        CData/*0:0*/ system_top__DOT__cpu__DOT__mem_la_secondword;
        CData/*0:0*/ system_top__DOT__cpu__DOT__mem_la_firstword_reg;
        CData/*0:0*/ system_top__DOT__cpu__DOT__last_mem_valid;
        CData/*0:0*/ system_top__DOT__cpu__DOT__prefetched_high_word;
        CData/*0:0*/ system_top__DOT__cpu__DOT__clear_prefetched_high_word;
        CData/*0:0*/ system_top__DOT__cpu__DOT__mem_done;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_lui;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_auipc;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_jal;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_jalr;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_beq;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_bne;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_blt;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_bge;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_bltu;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_bgeu;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_lb;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_lh;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_lw;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_lbu;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_lhu;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_sb;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_sh;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_sw;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_addi;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_slti;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_sltiu;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_xori;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_ori;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_andi;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_slli;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_srli;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_srai;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_add;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_sub;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_sll;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_slt;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_sltu;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_xor;
    };
    struct {
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_srl;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_sra;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_or;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_and;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_rdcycle;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_rdcycleh;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_rdinstr;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_rdinstrh;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_ecall_ebreak;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_fence;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_getq;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_setq;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_maskirq;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_waitirq;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_timer;
        CData/*0:0*/ system_top__DOT__cpu__DOT__instr_trap;
        CData/*4:0*/ system_top__DOT__cpu__DOT__decoded_rd;
        CData/*4:0*/ system_top__DOT__cpu__DOT__decoded_rs1;
        CData/*4:0*/ system_top__DOT__cpu__DOT__decoded_rs2;
        CData/*0:0*/ system_top__DOT__cpu__DOT__decoder_trigger;
        CData/*0:0*/ system_top__DOT__cpu__DOT__decoder_trigger_q;
        CData/*0:0*/ system_top__DOT__cpu__DOT__decoder_pseudo_trigger;
        CData/*0:0*/ system_top__DOT__cpu__DOT__decoder_pseudo_trigger_q;
        CData/*0:0*/ system_top__DOT__cpu__DOT__compressed_instr;
        CData/*0:0*/ system_top__DOT__cpu__DOT__is_lui_auipc_jal;
        CData/*0:0*/ system_top__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu;
        CData/*0:0*/ system_top__DOT__cpu__DOT__is_slli_srli_srai;
        CData/*0:0*/ system_top__DOT__cpu__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi;
        CData/*0:0*/ system_top__DOT__cpu__DOT__is_sb_sh_sw;
        CData/*0:0*/ system_top__DOT__cpu__DOT__is_sll_srl_sra;
        CData/*0:0*/ system_top__DOT__cpu__DOT__is_lui_auipc_jal_jalr_addi_add_sub;
        CData/*0:0*/ system_top__DOT__cpu__DOT__is_slti_blt_slt;
        CData/*0:0*/ system_top__DOT__cpu__DOT__is_sltiu_bltu_sltu;
        CData/*0:0*/ system_top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu;
        CData/*0:0*/ system_top__DOT__cpu__DOT__is_lbu_lhu_lw;
        CData/*0:0*/ system_top__DOT__cpu__DOT__is_alu_reg_imm;
        CData/*0:0*/ system_top__DOT__cpu__DOT__is_alu_reg_reg;
        CData/*0:0*/ system_top__DOT__cpu__DOT__is_compare;
        CData/*0:0*/ system_top__DOT__cpu__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh;
        CData/*4:0*/ system_top__DOT__cpu__DOT__dbg_insn_rs1;
        CData/*4:0*/ system_top__DOT__cpu__DOT__dbg_insn_rs2;
        CData/*4:0*/ system_top__DOT__cpu__DOT__dbg_insn_rd;
        CData/*0:0*/ system_top__DOT__cpu__DOT__dbg_rs1val_valid;
        CData/*0:0*/ system_top__DOT__cpu__DOT__dbg_rs2val_valid;
        CData/*4:0*/ system_top__DOT__cpu__DOT__q_insn_rs1;
        CData/*4:0*/ system_top__DOT__cpu__DOT__q_insn_rs2;
        CData/*4:0*/ system_top__DOT__cpu__DOT__q_insn_rd;
        CData/*0:0*/ system_top__DOT__cpu__DOT__dbg_next;
        CData/*0:0*/ system_top__DOT__cpu__DOT__launch_next_insn;
        CData/*0:0*/ system_top__DOT__cpu__DOT__dbg_valid_insn;
        CData/*4:0*/ system_top__DOT__cpu__DOT__cached_insn_rs1;
        CData/*4:0*/ system_top__DOT__cpu__DOT__cached_insn_rs2;
        CData/*4:0*/ system_top__DOT__cpu__DOT__cached_insn_rd;
        CData/*7:0*/ system_top__DOT__cpu__DOT__cpu_state;
        CData/*1:0*/ system_top__DOT__cpu__DOT__irq_state;
        CData/*0:0*/ system_top__DOT__cpu__DOT__set_mem_do_rinst;
        CData/*0:0*/ system_top__DOT__cpu__DOT__set_mem_do_rdata;
        CData/*0:0*/ system_top__DOT__cpu__DOT__set_mem_do_wdata;
        CData/*0:0*/ system_top__DOT__cpu__DOT__latched_store;
        CData/*0:0*/ system_top__DOT__cpu__DOT__latched_stalu;
        CData/*0:0*/ system_top__DOT__cpu__DOT__latched_branch;
        CData/*0:0*/ system_top__DOT__cpu__DOT__latched_compr;
        CData/*0:0*/ system_top__DOT__cpu__DOT__latched_trace;
        CData/*0:0*/ system_top__DOT__cpu__DOT__latched_is_lu;
    };
    struct {
        CData/*0:0*/ system_top__DOT__cpu__DOT__latched_is_lh;
        CData/*0:0*/ system_top__DOT__cpu__DOT__latched_is_lb;
        CData/*4:0*/ system_top__DOT__cpu__DOT__latched_rd;
        CData/*3:0*/ system_top__DOT__cpu__DOT__pcpi_timeout_counter;
        CData/*0:0*/ system_top__DOT__cpu__DOT__pcpi_timeout;
        CData/*0:0*/ system_top__DOT__cpu__DOT__do_waitirq;
        CData/*0:0*/ system_top__DOT__cpu__DOT__alu_out_0;
        CData/*0:0*/ system_top__DOT__cpu__DOT__alu_out_0_q;
        CData/*0:0*/ system_top__DOT__cpu__DOT__alu_wait;
        CData/*0:0*/ system_top__DOT__cpu__DOT__alu_wait_2;
        CData/*0:0*/ system_top__DOT__cpu__DOT__alu_eq;
        CData/*0:0*/ system_top__DOT__cpu__DOT__alu_ltu;
        CData/*0:0*/ system_top__DOT__cpu__DOT__alu_lts;
        CData/*0:0*/ system_top__DOT__cpu__DOT__clear_prefetched_high_word_q;
        CData/*0:0*/ system_top__DOT__cpu__DOT__cpuregs_write;
        CData/*0:0*/ system_top__DOT__cpu__DOT____VdfgTmp_hb06275b1__0;
        CData/*1:0*/ __Vdly__system_top__DOT__cpu__DOT__mem_state;
        CData/*0:0*/ __Vdly__trap;
        CData/*0:0*/ __Vdly__system_top__DOT__cpu__DOT__decoder_trigger;
        CData/*0:0*/ __Vdly__system_top__DOT__cpu__DOT__decoder_pseudo_trigger;
        CData/*0:0*/ __Vdly__system_top__DOT__cpu__DOT__mem_do_rinst;
        CData/*0:0*/ __Vdly__system_top__DOT__cpu__DOT__mem_do_prefetch;
        CData/*0:0*/ __Vdly__system_top__DOT__pcpi_valid;
        CData/*0:0*/ __Vdly__system_top__DOT__cpu__DOT__mem_do_rdata;
        CData/*0:0*/ __Vdly__system_top__DOT__cpu__DOT__mem_do_wdata;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__resetn__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ system_top__DOT__cpu__DOT__mem_16bit_buffer;
        IData/*31:0*/ system_top__DOT__pcpi_insn;
        IData/*31:0*/ system_top__DOT__pcpi_rd;
        IData/*31:0*/ system_top__DOT__cpu__DOT__mem_addr;
        IData/*31:0*/ system_top__DOT__cpu__DOT__mem_wdata;
        IData/*31:0*/ system_top__DOT__cpu__DOT__mem_rdata;
        IData/*31:0*/ system_top__DOT__cpu__DOT__mem_la_wdata;
        IData/*31:0*/ system_top__DOT__cpu__DOT__irq;
        IData/*31:0*/ system_top__DOT__cpu__DOT__eoi;
        IData/*31:0*/ system_top__DOT__cpu__DOT__reg_pc;
        IData/*31:0*/ system_top__DOT__cpu__DOT__reg_next_pc;
        IData/*31:0*/ system_top__DOT__cpu__DOT__reg_op1;
        IData/*31:0*/ system_top__DOT__cpu__DOT__reg_op2;
        IData/*31:0*/ system_top__DOT__cpu__DOT__reg_out;
        IData/*31:0*/ system_top__DOT__cpu__DOT__next_insn_opcode;
        IData/*31:0*/ system_top__DOT__cpu__DOT__dbg_insn_opcode;
        IData/*31:0*/ system_top__DOT__cpu__DOT__dbg_insn_addr;
        IData/*31:0*/ system_top__DOT__cpu__DOT__next_pc;
        IData/*31:0*/ system_top__DOT__cpu__DOT__irq_mask;
        IData/*31:0*/ system_top__DOT__cpu__DOT__irq_pending;
        IData/*31:0*/ system_top__DOT__cpu__DOT__timer;
        IData/*31:0*/ system_top__DOT__cpu__DOT__i;
        IData/*31:0*/ system_top__DOT__cpu__DOT__pcpi_int_rd;
        IData/*31:0*/ system_top__DOT__cpu__DOT__mem_rdata_word;
        IData/*31:0*/ system_top__DOT__cpu__DOT__mem_rdata_q;
        IData/*31:0*/ system_top__DOT__cpu__DOT__mem_rdata_latched_noshuffle;
        IData/*31:0*/ system_top__DOT__cpu__DOT__decoded_imm;
        IData/*31:0*/ system_top__DOT__cpu__DOT__decoded_imm_j;
        IData/*31:0*/ system_top__DOT__cpu__DOT__dbg_insn_imm;
        IData/*31:0*/ system_top__DOT__cpu__DOT__dbg_rs1val;
        IData/*31:0*/ system_top__DOT__cpu__DOT__dbg_rs2val;
        IData/*31:0*/ system_top__DOT__cpu__DOT__q_insn_imm;
        IData/*31:0*/ system_top__DOT__cpu__DOT__q_insn_opcode;
        IData/*31:0*/ system_top__DOT__cpu__DOT__cached_insn_imm;
    };
    struct {
        IData/*31:0*/ system_top__DOT__cpu__DOT__cached_insn_opcode;
        VlWide<4>/*127:0*/ system_top__DOT__cpu__DOT__dbg_ascii_state;
        IData/*31:0*/ system_top__DOT__cpu__DOT__current_pc;
        IData/*31:0*/ system_top__DOT__cpu__DOT__next_irq_pending;
        IData/*31:0*/ system_top__DOT__cpu__DOT__alu_out;
        IData/*31:0*/ system_top__DOT__cpu__DOT__alu_out_q;
        IData/*31:0*/ system_top__DOT__cpu__DOT__cpuregs_wrdata;
        IData/*31:0*/ system_top__DOT__cpu__DOT__cpuregs_rs1;
        IData/*31:0*/ system_top__DOT__cpu__DOT__cpuregs_rs2;
        IData/*31:0*/ system_top__DOT__accelerator__DOT__accumulator;
        IData/*31:0*/ system_top__DOT__accelerator__DOT__sum;
        IData/*31:0*/ system_top__DOT__accelerator__DOT__next_result;
        IData/*31:0*/ __VactIterCount;
        QData/*35:0*/ system_top__DOT__cpu__DOT__trace_data;
        QData/*63:0*/ system_top__DOT__cpu__DOT__count_cycle;
        QData/*63:0*/ system_top__DOT__cpu__DOT__count_instr;
        QData/*63:0*/ system_top__DOT__cpu__DOT__new_ascii_instr;
        QData/*63:0*/ system_top__DOT__cpu__DOT__dbg_ascii_instr;
        QData/*63:0*/ system_top__DOT__cpu__DOT__q_ascii_instr;
        QData/*63:0*/ system_top__DOT__cpu__DOT__cached_ascii_instr;
        VlUnpacked<IData/*31:0*/, 32> system_top__DOT__cpu__DOT__cpuregs;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsystem_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsystem_top___024root(Vsystem_top__Syms* symsp, const char* v__name);
    ~Vsystem_top___024root();
    VL_UNCOPYABLE(Vsystem_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
