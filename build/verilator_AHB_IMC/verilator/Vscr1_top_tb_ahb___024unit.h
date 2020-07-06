// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vscr1_top_tb_ahb.h for the primary calling header

#ifndef _Vscr1_top_tb_ahb___024unit_H_
#define _Vscr1_top_tb_ahb___024unit_H_

#include "verilated_heavy.h"

class Vscr1_top_tb_ahb__Syms;

//----------

VL_MODULE(Vscr1_top_tb_ahb___024unit) {
  public:
    
    // PORTS
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    Vscr1_top_tb_ahb__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vscr1_top_tb_ahb___024unit);  ///< Copying not allowed
  public:
    Vscr1_top_tb_ahb___024unit(const char* name="TOP");
    ~Vscr1_top_tb_ahb___024unit();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vscr1_top_tb_ahb__Syms* symsp, bool first);
  private:
    void _ctor_var_reset();
} VL_ATTR_ALIGNED(128);

#endif // guard
