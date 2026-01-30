// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtinyml_accelerator.h for the primary calling header

#ifndef VERILATED_VTINYML_ACCELERATOR___024ROOT_H_
#define VERILATED_VTINYML_ACCELERATOR___024ROOT_H_  // guard

#include "verilated.h"


class Vtinyml_accelerator__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtinyml_accelerator___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(resetn,0,0);
    VL_IN8(pcpi_valid,0,0);
    VL_OUT8(pcpi_wr,0,0);
    VL_OUT8(pcpi_wait,0,0);
    VL_OUT8(pcpi_ready,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__resetn__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(pcpi_insn,31,0);
    VL_IN(pcpi_rs1,31,0);
    VL_IN(pcpi_rs2,31,0);
    VL_OUT(pcpi_rd,31,0);
    IData/*31:0*/ tinyml_accelerator__DOT__accumulator;
    IData/*31:0*/ tinyml_accelerator__DOT__sum;
    IData/*31:0*/ tinyml_accelerator__DOT__next_result;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtinyml_accelerator__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtinyml_accelerator___024root(Vtinyml_accelerator__Syms* symsp, const char* v__name);
    ~Vtinyml_accelerator___024root();
    VL_UNCOPYABLE(Vtinyml_accelerator___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
