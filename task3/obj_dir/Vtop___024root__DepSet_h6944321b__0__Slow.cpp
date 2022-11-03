// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
    if (((((((((0U == vlSelf->top__DOT__myF1__DOT__currentState) 
               | (1U == vlSelf->top__DOT__myF1__DOT__currentState)) 
              | (2U == vlSelf->top__DOT__myF1__DOT__currentState)) 
             | (3U == vlSelf->top__DOT__myF1__DOT__currentState)) 
            | (4U == vlSelf->top__DOT__myF1__DOT__currentState)) 
           | (5U == vlSelf->top__DOT__myF1__DOT__currentState)) 
          | (6U == vlSelf->top__DOT__myF1__DOT__currentState)) 
         | (7U == vlSelf->top__DOT__myF1__DOT__currentState))) {
        if ((0U == vlSelf->top__DOT__myF1__DOT__currentState)) {
            vlSelf->top__DOT__myF1__DOT__nextState = 1U;
            vlSelf->top__DOT__myF1__DOT__out = 0U;
        } else if ((1U == vlSelf->top__DOT__myF1__DOT__currentState)) {
            vlSelf->top__DOT__myF1__DOT__nextState = 2U;
            vlSelf->top__DOT__myF1__DOT__out = 1U;
        } else if ((2U == vlSelf->top__DOT__myF1__DOT__currentState)) {
            vlSelf->top__DOT__myF1__DOT__nextState = 3U;
            vlSelf->top__DOT__myF1__DOT__out = 3U;
        } else if ((3U == vlSelf->top__DOT__myF1__DOT__currentState)) {
            vlSelf->top__DOT__myF1__DOT__nextState = 4U;
            vlSelf->top__DOT__myF1__DOT__out = 7U;
        } else if ((4U == vlSelf->top__DOT__myF1__DOT__currentState)) {
            vlSelf->top__DOT__myF1__DOT__nextState = 5U;
            vlSelf->top__DOT__myF1__DOT__out = 0xfU;
        } else if ((5U == vlSelf->top__DOT__myF1__DOT__currentState)) {
            vlSelf->top__DOT__myF1__DOT__nextState = 6U;
            vlSelf->top__DOT__myF1__DOT__out = 0x1fU;
        } else if ((6U == vlSelf->top__DOT__myF1__DOT__currentState)) {
            vlSelf->top__DOT__myF1__DOT__nextState = 7U;
            vlSelf->top__DOT__myF1__DOT__out = 0x3fU;
        } else {
            vlSelf->top__DOT__myF1__DOT__nextState = 8U;
            vlSelf->top__DOT__myF1__DOT__out = 0x7fU;
        }
    } else if ((8U == vlSelf->top__DOT__myF1__DOT__currentState)) {
        vlSelf->top__DOT__myF1__DOT__nextState = 0U;
        vlSelf->top__DOT__myF1__DOT__out = 0xffU;
    }
    vlSelf->data_out = vlSelf->top__DOT__myF1__DOT__out;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->N = VL_RAND_RESET_I(16);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->data_out = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__tickToEn = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__myClock__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__myF1__DOT__currentState = 0;
    vlSelf->top__DOT__myF1__DOT__nextState = 0;
    vlSelf->top__DOT__myF1__DOT__out = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__top__DOT__myClock__DOT__count = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
