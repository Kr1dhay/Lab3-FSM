// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VlfsrSeven.h for the primary calling header

#include "verilated.h"

#include "VlfsrSeven___024root.h"

VL_ATTR_COLD void VlfsrSeven___024root___settle__TOP__0(VlfsrSeven___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VlfsrSeven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VlfsrSeven___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->data_out = vlSelf->lfsrSeven__DOT__sreg;
}

VL_ATTR_COLD void VlfsrSeven___024root___eval_initial(VlfsrSeven___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VlfsrSeven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VlfsrSeven___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void VlfsrSeven___024root___eval_settle(VlfsrSeven___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VlfsrSeven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VlfsrSeven___024root___eval_settle\n"); );
    // Body
    VlfsrSeven___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VlfsrSeven___024root___final(VlfsrSeven___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VlfsrSeven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VlfsrSeven___024root___final\n"); );
}

VL_ATTR_COLD void VlfsrSeven___024root___ctor_var_reset(VlfsrSeven___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VlfsrSeven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VlfsrSeven___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->data_out = VL_RAND_RESET_I(7);
    vlSelf->lfsrSeven__DOT__sreg = VL_RAND_RESET_I(7);
}
