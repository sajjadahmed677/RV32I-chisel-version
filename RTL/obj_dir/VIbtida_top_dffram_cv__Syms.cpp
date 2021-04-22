// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VIbtida_top_dffram_cv__Syms.h"
#include "VIbtida_top_dffram_cv.h"



// FUNCTIONS
VIbtida_top_dffram_cv__Syms::VIbtida_top_dffram_cv__Syms(VIbtida_top_dffram_cv* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
}
