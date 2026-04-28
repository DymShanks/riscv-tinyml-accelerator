// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtinyml_accelerator__pch.h"

//============================================================
// Constructors

Vtinyml_accelerator::Vtinyml_accelerator(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtinyml_accelerator__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , resetn{vlSymsp->TOP.resetn}
    , pcpi_valid{vlSymsp->TOP.pcpi_valid}
    , pcpi_wr{vlSymsp->TOP.pcpi_wr}
    , pcpi_wait{vlSymsp->TOP.pcpi_wait}
    , pcpi_ready{vlSymsp->TOP.pcpi_ready}
    , pcpi_insn{vlSymsp->TOP.pcpi_insn}
    , pcpi_rs1{vlSymsp->TOP.pcpi_rs1}
    , pcpi_rs2{vlSymsp->TOP.pcpi_rs2}
    , pcpi_rd{vlSymsp->TOP.pcpi_rd}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtinyml_accelerator::Vtinyml_accelerator(const char* _vcname__)
    : Vtinyml_accelerator(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtinyml_accelerator::~Vtinyml_accelerator() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtinyml_accelerator___024root___eval_debug_assertions(Vtinyml_accelerator___024root* vlSelf);
#endif  // VL_DEBUG
void Vtinyml_accelerator___024root___eval_static(Vtinyml_accelerator___024root* vlSelf);
void Vtinyml_accelerator___024root___eval_initial(Vtinyml_accelerator___024root* vlSelf);
void Vtinyml_accelerator___024root___eval_settle(Vtinyml_accelerator___024root* vlSelf);
void Vtinyml_accelerator___024root___eval(Vtinyml_accelerator___024root* vlSelf);

void Vtinyml_accelerator::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtinyml_accelerator::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtinyml_accelerator___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtinyml_accelerator___024root___eval_static(&(vlSymsp->TOP));
        Vtinyml_accelerator___024root___eval_initial(&(vlSymsp->TOP));
        Vtinyml_accelerator___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtinyml_accelerator___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtinyml_accelerator::eventsPending() { return false; }

uint64_t Vtinyml_accelerator::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtinyml_accelerator::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtinyml_accelerator___024root___eval_final(Vtinyml_accelerator___024root* vlSelf);

VL_ATTR_COLD void Vtinyml_accelerator::final() {
    Vtinyml_accelerator___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtinyml_accelerator::hierName() const { return vlSymsp->name(); }
const char* Vtinyml_accelerator::modelName() const { return "Vtinyml_accelerator"; }
unsigned Vtinyml_accelerator::threads() const { return 1; }
void Vtinyml_accelerator::prepareClone() const { contextp()->prepareClone(); }
void Vtinyml_accelerator::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vtinyml_accelerator::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtinyml_accelerator::trace()' called on model that was Verilated without --trace option");
}
