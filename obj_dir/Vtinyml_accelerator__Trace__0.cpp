// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtinyml_accelerator__Syms.h"


void Vtinyml_accelerator___024root__trace_chg_0_sub_0(Vtinyml_accelerator___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtinyml_accelerator___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyml_accelerator___024root__trace_chg_0\n"); );
    // Init
    Vtinyml_accelerator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtinyml_accelerator___024root*>(voidSelf);
    Vtinyml_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtinyml_accelerator___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtinyml_accelerator___024root__trace_chg_0_sub_0(Vtinyml_accelerator___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinyml_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyml_accelerator___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->resetn));
    bufp->chgBit(oldp+2,(vlSelf->pcpi_valid));
    bufp->chgIData(oldp+3,(vlSelf->pcpi_insn),32);
    bufp->chgIData(oldp+4,(vlSelf->pcpi_rs1),32);
    bufp->chgIData(oldp+5,(vlSelf->pcpi_rs2),32);
    bufp->chgBit(oldp+6,(vlSelf->pcpi_wr));
    bufp->chgIData(oldp+7,(vlSelf->pcpi_rd),32);
    bufp->chgBit(oldp+8,(vlSelf->pcpi_wait));
    bufp->chgBit(oldp+9,(vlSelf->pcpi_ready));
    bufp->chgCData(oldp+10,((0x7fU & vlSelf->pcpi_insn)),7);
    bufp->chgCData(oldp+11,((7U & (vlSelf->pcpi_insn 
                                   >> 0xcU))),3);
    bufp->chgBit(oldp+12,((0xbU == (0x7fU & vlSelf->pcpi_insn))));
    bufp->chgBit(oldp+13,((1U == (7U & (vlSelf->pcpi_insn 
                                        >> 0xcU)))));
    bufp->chgIData(oldp+14,(vlSelf->tinyml_accelerator__DOT__accumulator),32);
    bufp->chgIData(oldp+15,((vlSelf->pcpi_rs1 * vlSelf->pcpi_rs2)),32);
    bufp->chgIData(oldp+16,(vlSelf->tinyml_accelerator__DOT__sum),32);
    bufp->chgIData(oldp+17,(vlSelf->tinyml_accelerator__DOT__next_result),32);
}

void Vtinyml_accelerator___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyml_accelerator___024root__trace_cleanup\n"); );
    // Init
    Vtinyml_accelerator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtinyml_accelerator___024root*>(voidSelf);
    Vtinyml_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
