// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vf1_fsm__Syms.h"


VL_ATTR_COLD void Vf1_fsm___024root__trace_init_sub__TOP__0(Vf1_fsm___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+4,"clk", false,-1);
    tracep->declBit(c+5,"rst", false,-1);
    tracep->declBit(c+6,"en", false,-1);
    tracep->declBus(c+7,"data_out", false,-1, 7,0);
    tracep->pushNamePrefix("f1_fsm ");
    tracep->declBit(c+4,"clk", false,-1);
    tracep->declBit(c+5,"rst", false,-1);
    tracep->declBit(c+6,"en", false,-1);
    tracep->declBus(c+7,"data_out", false,-1, 7,0);
    tracep->declBus(c+1,"currentState", false,-1, 31,0);
    tracep->declBus(c+2,"nextState", false,-1, 31,0);
    tracep->declBus(c+3,"out", false,-1, 7,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vf1_fsm___024root__trace_init_top(Vf1_fsm___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root__trace_init_top\n"); );
    // Body
    Vf1_fsm___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vf1_fsm___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vf1_fsm___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vf1_fsm___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vf1_fsm___024root__trace_register(Vf1_fsm___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vf1_fsm___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vf1_fsm___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vf1_fsm___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vf1_fsm___024root__trace_full_sub_0(Vf1_fsm___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vf1_fsm___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root__trace_full_top_0\n"); );
    // Init
    Vf1_fsm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1_fsm___024root*>(voidSelf);
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vf1_fsm___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vf1_fsm___024root__trace_full_sub_0(Vf1_fsm___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->f1_fsm__DOT__currentState),32);
    bufp->fullIData(oldp+2,(vlSelf->f1_fsm__DOT__nextState),32);
    bufp->fullCData(oldp+3,(vlSelf->f1_fsm__DOT__out),8);
    bufp->fullBit(oldp+4,(vlSelf->clk));
    bufp->fullBit(oldp+5,(vlSelf->rst));
    bufp->fullBit(oldp+6,(vlSelf->en));
    bufp->fullCData(oldp+7,(vlSelf->data_out),8);
}
