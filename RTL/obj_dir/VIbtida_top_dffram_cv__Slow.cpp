// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIbtida_top_dffram_cv.h for the primary calling header

#include "VIbtida_top_dffram_cv.h"
#include "VIbtida_top_dffram_cv__Syms.h"

//==========

VL_CTOR_IMP(VIbtida_top_dffram_cv) {
    VIbtida_top_dffram_cv__Syms* __restrict vlSymsp = __VlSymsp = new VIbtida_top_dffram_cv__Syms(this, name());
    VIbtida_top_dffram_cv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VIbtida_top_dffram_cv::__Vconfigure(VIbtida_top_dffram_cv__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VIbtida_top_dffram_cv::~VIbtida_top_dffram_cv() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VIbtida_top_dffram_cv::_settle__TOP__2(VIbtida_top_dffram_cv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIbtida_top_dffram_cv::_settle__TOP__2\n"); );
    VIbtida_top_dffram_cv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp51[4];
    WData/*95:0*/ __Vtemp52[3];
    WData/*95:0*/ __Vtemp53[3];
    WData/*95:0*/ __Vtemp54[3];
    WData/*95:0*/ __Vtemp55[3];
    WData/*95:0*/ __Vtemp56[3];
    WData/*95:0*/ __Vtemp57[3];
    WData/*95:0*/ __Vtemp58[3];
    WData/*95:0*/ __Vtemp59[3];
    WData/*95:0*/ __Vtemp60[3];
    WData/*95:0*/ __Vtemp61[3];
    WData/*95:0*/ __Vtemp64[3];
    WData/*95:0*/ __Vtemp65[3];
    WData/*95:0*/ __Vtemp67[3];
    WData/*95:0*/ __Vtemp68[3];
    WData/*95:0*/ __Vtemp69[3];
    WData/*95:0*/ __Vtemp71[3];
    WData/*95:0*/ __Vtemp72[3];
    WData/*95:0*/ __Vtemp73[3];
    WData/*95:0*/ __Vtemp74[3];
    WData/*95:0*/ __Vtemp75[3];
    WData/*95:0*/ __Vtemp76[3];
    WData/*95:0*/ __Vtemp77[3];
    WData/*95:0*/ __Vtemp78[3];
    WData/*95:0*/ __Vtemp79[3];
    WData/*95:0*/ __Vtemp80[3];
    WData/*95:0*/ __Vtemp81[3];
    WData/*95:0*/ __Vtemp82[3];
    WData/*95:0*/ __Vtemp83[3];
    WData/*95:0*/ __Vtemp84[3];
    WData/*95:0*/ __Vtemp85[3];
    WData/*95:0*/ __Vtemp86[3];
    WData/*95:0*/ __Vtemp87[3];
    WData/*95:0*/ __Vtemp88[3];
    WData/*95:0*/ __Vtemp89[3];
    WData/*95:0*/ __Vtemp90[3];
    // Body
    vlTOPp->io_oeb = ((0xffULL & vlTOPp->io_oeb) | 
                      ((QData)((IData)((0x3fffffffU 
                                        & (~ vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_en_q)))) 
                       << 8U));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_10 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__clockCount)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__writeback_io_write_data 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_memToReg)
            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_dataMem_data
            : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_alu_output);
    vlTOPp->io_out = ((0xffULL & vlTOPp->io_out) | 
                      ((QData)((IData)((0x3fffffffU 
                                        & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_q))) 
                       << 8U));
    VL_EXTEND_WI(128,30, __Vtemp51, (0x3fffffffU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_q));
    vlTOPp->la_data_out[0U] = __Vtemp51[0U];
    vlTOPp->la_data_out[1U] = __Vtemp51[1U];
    vlTOPp->la_data_out[2U] = __Vtemp51[2U];
    vlTOPp->la_data_out[3U] = __Vtemp51[3U];
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_current_pc 
        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_pc_reg;
    VL_EXTEND_WQ(80,40, __Vtemp52, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter 
        = (((QData)((IData)(__Vtemp52[1U])) << 0x20U) 
           | (QData)((IData)(__Vtemp52[0U])));
    VL_EXTEND_WQ(80,40, __Vtemp53, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter 
        = (((QData)((IData)(__Vtemp53[1U])) << 0x20U) 
           | (QData)((IData)(__Vtemp53[0U])));
    VL_EXTEND_WQ(80,40, __Vtemp54, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter 
        = (((QData)((IData)(__Vtemp54[1U])) << 0x20U) 
           | (QData)((IData)(__Vtemp54[0U])));
    VL_EXTEND_WQ(80,40, __Vtemp55, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter 
        = (((QData)((IData)(__Vtemp55[1U])) << 0x20U) 
           | (QData)((IData)(__Vtemp55[0U])));
    VL_EXTEND_WQ(80,40, __Vtemp56, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter 
        = (((QData)((IData)(__Vtemp56[1U])) << 0x20U) 
           | (QData)((IData)(__Vtemp56[0U])));
    VL_EXTEND_WQ(80,40, __Vtemp57, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter 
        = (((QData)((IData)(__Vtemp57[1U])) << 0x20U) 
           | (QData)((IData)(__Vtemp57[0U])));
    VL_EXTEND_WQ(80,40, __Vtemp58, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter 
        = (((QData)((IData)(__Vtemp58[1U])) << 0x20U) 
           | (QData)((IData)(__Vtemp58[0U])));
    VL_EXTEND_WQ(80,40, __Vtemp59, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter 
        = (((QData)((IData)(__Vtemp59[1U])) << 0x20U) 
           | (QData)((IData)(__Vtemp59[0U])));
    VL_EXTEND_WQ(80,40, __Vtemp60, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter 
        = (((QData)((IData)(__Vtemp60[1U])) << 0x20U) 
           | (QData)((IData)(__Vtemp60[0U])));
    VL_EXTEND_WQ(80,40, __Vtemp61, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter 
        = (((QData)((IData)(__Vtemp61[1U])) << 0x20U) 
           | (QData)((IData)(__Vtemp61[0U])));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__handle_irq 
        = (((0U != vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__intr_hw__DOT___T_6) 
            & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MIE__DOT__rdata_q) 
               >> 2U)) & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_141 
        = ((0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel)) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_memRd));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_90 
        = ((0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel)) 
           & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_memRd)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___T_7 
        = ((2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_func3)) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_memWr));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___T_14 
        = ((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_func3)) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_memWr));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_35 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel) 
           == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rs1_sel_reg));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_37 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel) 
           == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rs2_sel_reg));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_224 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr) 
           & (0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT___T_1 
        = (0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT___T_6 
        = (1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT___T_9 
        = (2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT___T_10 
        = (3U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT___GEN_13 
        = ((1U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg)) 
           & (2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT___T_14 
        = (0x3fffU & ((IData)(1U) + (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regAddr)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT___GEN_16 
        = ((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg)) 
           | (2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_18 
        = (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__rxReg) 
            << 7U) | (0x7fU & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__shiftReg) 
                               >> 1U)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT___GEN_8 
        = ((0x14U == (0x3cU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
            ? (0xffffU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_q)
            : ((0x18U == (0x3cU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                ? (0xffffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_q 
                              >> 0x10U)) : ((0x1cU 
                                             == (0x3cU 
                                                 & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                             ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_en_q
                                             : ((0x20U 
                                                 == 
                                                 (0x3cU 
                                                  & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                 ? 
                                                (0xffffU 
                                                 & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_en_q)
                                                 : 
                                                ((0x24U 
                                                  == 
                                                  (0x3cU 
                                                   & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                  ? 
                                                 (0xffffU 
                                                  & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_en_q 
                                                     >> 0x10U))
                                                  : 
                                                 ((0x28U 
                                                   == 
                                                   (0x3cU 
                                                    & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                   ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_rising_reg__DOT__q_reg
                                                   : 
                                                  ((0x2cU 
                                                    == 
                                                    (0x3cU 
                                                     & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_falling_reg__DOT__q_reg
                                                    : 
                                                   ((0x30U 
                                                     == 
                                                     (0x3cU 
                                                      & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                     ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvlhigh_reg__DOT__q_reg
                                                     : 
                                                    ((0x34U 
                                                      == 
                                                      (0x3cU 
                                                       & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                      ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvllow_reg__DOT__q_reg
                                                      : 0xffffffffU)))))))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT___T_11 
        = (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__dataReg) 
            << 0x18U) | (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regMSB1) 
                          << 0x10U) | (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regLSB2) 
                                        << 8U) | (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regLSB1))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i 
        = (((0xff000000U & (((0U == (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                              ? (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                 >> 0x18U) : ((1U == 
                                               (3U 
                                                & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                               ? (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                                  >> 0x10U)
                                               : ((2U 
                                                   == 
                                                   (3U 
                                                    & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                   ? 
                                                  (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                                   >> 8U)
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2
                                                    : 
                                                   (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                                    >> 0x18U))))) 
                            << 0x18U)) | (0xff0000U 
                                          & (((0U == 
                                               (3U 
                                                & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                               ? (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                                  >> 0x10U)
                                               : ((1U 
                                                   == 
                                                   (3U 
                                                    & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                   ? 
                                                  (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                                   >> 8U)
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (3U 
                                                      & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                     ? 
                                                    (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                                     >> 8U)
                                                     : 
                                                    (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                                     >> 0x10U))))) 
                                             << 0x10U))) 
           | ((0xff00U & (((0U == (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                            ? (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                               >> 8U) : ((1U == (3U 
                                                 & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                          ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2
                                          : ((2U == 
                                              (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                              ? (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                                 >> 0x10U)
                                              : ((3U 
                                                  == 
                                                  (3U 
                                                   & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                  ? 
                                                 (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                                  >> 0x10U)
                                                  : 
                                                 (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                                  >> 8U))))) 
                          << 8U)) | (0xffU & ((0U == 
                                               (3U 
                                                & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                               ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2
                                               : ((1U 
                                                   == 
                                                   (3U 
                                                    & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                   ? 
                                                  (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                                   >> 0x18U)
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                    ? 
                                                   (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                                    >> 0x18U)
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (3U 
                                                      & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                     ? 
                                                    (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                                     >> 0x18U)
                                                     : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2)))))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_54 
        = ((0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rd_sel)) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_memRd));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_20 
        = ((0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rd_sel)) 
           & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_memRd)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_dev_sel 
        = ((0x40010000U == (0xfffff000U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
            ? 1U : ((0x10000000U == (0xffffff00U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                     ? 0U : 2U));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___GEN_3 
        = ((2U == (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
           | (3U != (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___GEN_2 
        = ((2U != (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
           & (3U != (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control__DOT___T_93 
        = ((5U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
           & (0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control__DOT___T_98 
        = ((5U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
           & (1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control__DOT___GEN_8 
        = (((((((((3U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg)) 
                  | ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                     & (3U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg)))) 
                 | ((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                    & (8U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg)))) 
                | ((2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                   & (8U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg)))) 
               | ((3U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                  & (8U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg)))) 
              | ((5U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                 & (8U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg)))) 
             | ((6U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                & (8U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg)))) 
            | ((7U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
               & (8U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg))))
            ? 0x1fU : ((((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                         & (9U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg))) 
                        & (1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func7_reg)))
                        ? 0x1eU : ((((4U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                                     & (9U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg))) 
                                    & (1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func7_reg)))
                                    ? 0x1dU : ((((5U 
                                                  == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                                                 & (9U 
                                                    == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg))) 
                                                & (1U 
                                                   == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func7_reg)))
                                                ? 0x1bU
                                                : (
                                                   (((6U 
                                                      == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                                                     & (9U 
                                                        == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg))) 
                                                    & (1U 
                                                       == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func7_reg)))
                                                    ? 0x1aU
                                                    : 
                                                   ((((7U 
                                                       == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                                                      & (9U 
                                                         == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg))) 
                                                     & (1U 
                                                        == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func7_reg)))
                                                     ? 0x19U
                                                     : 
                                                    ((((1U 
                                                        == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                                                       & (9U 
                                                          == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg))) 
                                                      & (1U 
                                                         == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func7_reg)))
                                                      ? 0x18U
                                                      : 
                                                     ((((2U 
                                                         == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                                                        & (9U 
                                                           == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg))) 
                                                       & (1U 
                                                          == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func7_reg)))
                                                       ? 0x13U
                                                       : 0x12U))))))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control__DOT___T_2 
        = ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
           & (0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT___T_5 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_csrWen)
            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_csr_data
            : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_5 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rd_sel) 
           == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rs2_sel_reg));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_200 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_regWr) 
           & (0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rd_sel)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_3 
        = ((0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rd_sel_reg)) 
           & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_MemRd_reg)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT___T_4 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__count)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT___T_15 
        = (4U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__count));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_IF_ID_INST 
        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg;
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__imm_generation_io_sb_imm 
        = (((((0x80000000U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)
               ? 0x7ffffU : 0U) << 0xdU) | ((0x1000U 
                                             & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                >> 0x13U)) 
                                            | ((0x800U 
                                                & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                        >> 7U)))))) 
           + vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_pc_reg);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__imm_generation_io_uj_imm 
        = (((((0x80000000U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)
               ? 0x7ffU : 0U) << 0x15U) | ((0x100000U 
                                            & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                               >> 0xbU)) 
                                           | ((0xff000U 
                                               & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg) 
                                              | ((0x800U 
                                                  & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                     >> 9U)) 
                                                 | (0x7feU 
                                                    & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                       >> 0x14U)))))) 
           + vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_pc_reg);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__imm_generation_io_i_imm 
        = ((((0x80000000U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)
              ? 0xfffffU : 0U) << 0xcU) | (0xfffU & 
                                           (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                            >> 0x14U)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT___T_4 
        = ((0x73U == (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
           & (0U == (7U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                           >> 0xcU))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT___GEN_45 
        = ((0xdU == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                              >> 0x14U))) ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_13
            : ((0xcU == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                  >> 0x14U))) ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_12
                : ((0xbU == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                      >> 0x14U))) ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_11
                    : ((0xaU == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                          >> 0x14U)))
                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_10
                        : ((9U == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                            >> 0x14U)))
                            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_9
                            : ((8U == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                >> 0x14U)))
                                ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_8
                                : ((7U == (0x1fU & 
                                           (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                            >> 0x14U)))
                                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_7
                                    : ((6U == (0x1fU 
                                               & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                  >> 0x14U)))
                                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_6
                                        : ((5U == (0x1fU 
                                                   & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                      >> 0x14U)))
                                            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_5
                                            : ((4U 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                    >> 0x14U)))
                                                ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_4
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                        >> 0x14U)))
                                                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_3
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                         >> 0x14U)))
                                                     ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_2
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                          >> 0x14U)))
                                                      ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_1
                                                      : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_0)))))))))))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_105 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel) 
           == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                        >> 0xfU)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_33 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel) 
           == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                        >> 0xfU)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_107 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel) 
           == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                        >> 0x14U)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT___GEN_13 
        = ((0xdU == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                              >> 0xfU))) ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_13
            : ((0xcU == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                  >> 0xfU))) ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_12
                : ((0xbU == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                      >> 0xfU))) ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_11
                    : ((0xaU == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                          >> 0xfU)))
                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_10
                        : ((9U == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                            >> 0xfU)))
                            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_9
                            : ((8U == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                >> 0xfU)))
                                ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_8
                                : ((7U == (0x1fU & 
                                           (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                            >> 0xfU)))
                                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_7
                                    : ((6U == (0x1fU 
                                               & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                  >> 0xfU)))
                                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_6
                                        : ((5U == (0x1fU 
                                                   & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                      >> 0xfU)))
                                            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_5
                                            : ((4U 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                    >> 0xfU)))
                                                ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_4
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                        >> 0xfU)))
                                                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_3
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                         >> 0xfU)))
                                                     ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_2
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                          >> 0xfU)))
                                                      ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_1
                                                      : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_0)))))))))))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_13 
        = ((0xdU == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                              >> 0x14U))) ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_13
            : ((0xcU == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                  >> 0x14U))) ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_12
                : ((0xbU == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                      >> 0x14U))) ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_11
                    : ((0xaU == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                          >> 0x14U)))
                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_10
                        : ((9U == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                            >> 0x14U)))
                            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_9
                            : ((8U == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                >> 0x14U)))
                                ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_8
                                : ((7U == (0x1fU & 
                                           (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                            >> 0x14U)))
                                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_7
                                    : ((6U == (0x1fU 
                                               & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                  >> 0x14U)))
                                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_6
                                        : ((5U == (0x1fU 
                                                   & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                      >> 0x14U)))
                                            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_5
                                            : ((4U 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                    >> 0x14U)))
                                                ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_4
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                        >> 0x14U)))
                                                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_3
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                         >> 0x14U)))
                                                     ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_2
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                          >> 0x14U)))
                                                      ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_1
                                                      : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_0)))))))))))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_19 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rd_sel) 
           == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                        >> 0xfU)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_30 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rd_sel) 
           == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                        >> 0x14U)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_28 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rd_sel) 
           == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                        >> 0xfU)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_45 
        = ((0xdU == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                              >> 0x14U))) ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_13
            : ((0xcU == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                  >> 0x14U))) ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_12
                : ((0xbU == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                      >> 0x14U))) ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_11
                    : ((0xaU == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                          >> 0x14U)))
                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_10
                        : ((9U == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                            >> 0x14U)))
                            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_9
                            : ((8U == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                >> 0x14U)))
                                ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_8
                                : ((7U == (0x1fU & 
                                           (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                            >> 0x14U)))
                                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_7
                                    : ((6U == (0x1fU 
                                               & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                  >> 0x14U)))
                                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_6
                                        : ((5U == (0x1fU 
                                                   & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                      >> 0x14U)))
                                            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_5
                                            : ((4U 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                    >> 0x14U)))
                                                ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_4
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                        >> 0x14U)))
                                                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_3
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                         >> 0x14U)))
                                                     ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_2
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                          >> 0x14U)))
                                                      ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_1
                                                      : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_0)))))))))))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_6 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rd_sel_reg) 
           == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                        >> 0x14U)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_7 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rd_sel_reg) 
           == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                        >> 0xfU)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_129 
        = (((((((((((((((0x323U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                              >> 0x14U))) 
                        | (0x324U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                >> 0x14U)))) 
                       | (0x325U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                               >> 0x14U)))) 
                      | (0x326U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                              >> 0x14U)))) 
                     | (0x327U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                             >> 0x14U)))) 
                    | (0x328U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                            >> 0x14U)))) 
                   | (0x329U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                           >> 0x14U)))) 
                  | (0x32aU == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                          >> 0x14U)))) 
                 | (0x32bU == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                         >> 0x14U)))) 
                | (0x32cU == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                        >> 0x14U)))) 
               | (0x32dU == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                       >> 0x14U)))) 
              | (0x32eU == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                      >> 0x14U)))) 
             | (0x32fU == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                     >> 0x14U)))) | 
            (0x330U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                  >> 0x14U)))) | (0x331U 
                                                  == 
                                                  (0xfffU 
                                                   & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                      >> 0x14U))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection__DOT___T_2 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rd_sel_reg) 
           == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                        >> 0xfU)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_249 
        = (((((((((((((((0xb80U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                              >> 0x14U))) 
                        | (0xb82U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                >> 0x14U)))) 
                       | (0xb83U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                               >> 0x14U)))) 
                      | (0xb84U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                              >> 0x14U)))) 
                     | (0xb85U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                             >> 0x14U)))) 
                    | (0xb86U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                            >> 0x14U)))) 
                   | (0xb87U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                           >> 0x14U)))) 
                  | (0xb88U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                          >> 0x14U)))) 
                 | (0xb89U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                         >> 0x14U)))) 
                | (0xb8aU == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                        >> 0x14U)))) 
               | (0xb8bU == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                       >> 0x14U)))) 
              | (0xb8cU == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                      >> 0x14U)))) 
             | (0xb8dU == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                     >> 0x14U)))) | 
            (0xb8eU == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                  >> 0x14U)))) | (0xb8fU 
                                                  == 
                                                  (0xfffU 
                                                   & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                      >> 0x14U))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_186 
        = (((((((((((((((0xb00U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                              >> 0x14U))) 
                        | (0xb02U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                >> 0x14U)))) 
                       | (0xb03U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                               >> 0x14U)))) 
                      | (0xb04U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                              >> 0x14U)))) 
                     | (0xb05U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                             >> 0x14U)))) 
                    | (0xb06U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                            >> 0x14U)))) 
                   | (0xb07U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                           >> 0x14U)))) 
                  | (0xb08U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                          >> 0x14U)))) 
                 | (0xb09U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                         >> 0x14U)))) 
                | (0xb0aU == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                        >> 0x14U)))) 
               | (0xb0bU == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                       >> 0x14U)))) 
              | (0xb0cU == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                      >> 0x14U)))) 
             | (0xb0dU == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                     >> 0x14U)))) | 
            (0xb0eU == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                  >> 0x14U)))) | (0xb0fU 
                                                  == 
                                                  (0xfffU 
                                                   & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                      >> 0x14U))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_lui_type 
        = ((0x33U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
           & ((3U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
              & ((0x23U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
                 & ((0x63U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
                    & ((0x13U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
                       & ((0x67U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
                          & ((0x6fU != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
                             & (0x37U == (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)))))))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_Auipc 
        = ((0x33U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
           & ((3U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
              & ((0x23U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
                 & ((0x63U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
                    & ((0x13U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
                       & ((0x67U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
                          & ((0x6fU != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
                             & ((0x37U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
                                & (0x17U == (0x7fU 
                                             & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg))))))))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_i_type 
        = ((0x33U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
           & ((3U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
              & ((0x23U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
                 & ((0x63U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
                    & (0x13U == (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg))))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jalr_type 
        = ((0x33U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
           & ((3U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
              & ((0x23U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
                 & ((0x63U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
                    & ((0x13U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
                       & (0x67U == (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)))))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jal_type 
        = ((0x33U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
           & ((3U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
              & ((0x23U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
                 & ((0x63U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
                    & ((0x13U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
                       & ((0x67U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
                          & (0x6fU == (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg))))))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type 
        = ((0x33U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
           & ((3U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
              & (0x23U == (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_sb_type 
        = ((0x33U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
           & ((3U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
              & ((0x23U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
                 & (0x63U == (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type 
        = ((0x33U == (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
           & (1U != (0x7fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                              >> 0x19U))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type 
        = ((0x33U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
           & (3U == (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_multiply 
        = ((0x33U == (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
           & (1U == (0x7fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                              >> 0x19U))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode__DOT___T_21 
        = ((0x73U == (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
           & (5U == (7U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                           >> 0xcU))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode__DOT___T_24 
        = ((0x73U == (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
           & (6U == (7U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                           >> 0xcU))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode__DOT___T_27 
        = ((0x73U == (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
           & (7U == (7U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                           >> 0xcU))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode__DOT___T_12 
        = ((0x73U == (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
           & (1U == (7U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                           >> 0xcU))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode__DOT___T_15 
        = ((0x73U == (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
           & (2U == (7U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                           >> 0xcU))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode__DOT___T_18 
        = ((0x73U == (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
           & (3U == (7U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                           >> 0xcU))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_7 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__clockCount) 
           == (((0xffffU & vlTOPp->la_data_in[1U]) 
                - (IData)(1U)) >> 1U));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_14 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__clockCount) 
           < ((0xffffU & vlTOPp->la_data_in[1U]) - (IData)(1U)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__reset = (1U 
                                                & ((1U 
                                                    & vlTOPp->la_oen[0U])
                                                    ? (IData)(vlTOPp->wb_rst_i)
                                                    : 
                                                   vlTOPp->la_data_in[0U]));
    vlTOPp->Ibtida_top_dffram_cv__DOT__io_rx_i = (1U 
                                                  & ((1U 
                                                      & vlTOPp->la_oen[2U])
                                                      ? (IData)(vlTOPp->rx)
                                                      : 
                                                     vlTOPp->la_data_in[2U]));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_1 
        = (0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__stateReg));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_3 
        = (1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__stateReg));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_11 
        = (2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__stateReg));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_19 
        = (7U > (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__bitIndex));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_21 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__bitIndex)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_22 
        = (3U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__stateReg));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_28 
        = (4U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__stateReg));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_csrWen)
            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_csr_data
            : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__writeback_io_write_data);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_io_stall_core_i 
        = ((0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg)) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT___GEN_16));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT___T_1 
        = (((0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg)) 
            & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT___GEN_16)) 
           & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regDone)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT___GEN_6 
        = ((0xfffU == vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT___T_11) 
           | (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regDone));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT___T_6 
        = (0xffffU & ((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i 
                       & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i 
                          >> 0x10U)) | ((~ (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i 
                                            >> 0x10U)) 
                                        & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_q 
                                           >> 0x10U))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT___T_12 
        = (0xffffU & ((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i 
                       & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i 
                          >> 0x10U)) | ((~ (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i 
                                            >> 0x10U)) 
                                        & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_q)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT___T_20 
        = (0xffffU & ((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i 
                       & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i 
                          >> 0x10U)) | ((~ (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i 
                                            >> 0x10U)) 
                                        & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_en_q 
                                           >> 0x10U))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT___T_26 
        = (0xffffU & ((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i 
                       & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i 
                          >> 0x10U)) | ((~ (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i 
                                            >> 0x10U)) 
                                        & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_en_q)));
    if ((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_dev_sel))) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data 
            = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__rdata_q;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_a_ready 
            = (1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__outstanding)));
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_valid 
            = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__outstanding;
    } else {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data 
            = ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_dev_sel))
                ? ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__outstanding)
                    ? ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__error)
                        ? 0xffffffffU : vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM
                       [(0xffU & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__a_reg) 
                                  >> 2U))]) : 0U) : 0xffffffffU);
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_a_ready 
            = (1U & ((0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_dev_sel)) 
                     | (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__outstanding))));
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_valid 
            = ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_dev_sel))
                ? (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__outstanding)
                : (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2__DOT__tl_errResp__DOT__err_reqPending));
    }
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___GEN_7 
        = ((1U == (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
           | (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___GEN_3));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___GEN_6 
        = ((1U == (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
           | (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___GEN_2));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control__DOT___GEN_17 
        = ((((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control__DOT___T_93) 
               & (0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func7_reg))) 
              | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control__DOT___T_98) 
                 & (0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func7_reg)))) 
             | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control__DOT___T_93) 
                & (0x20U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func7_reg)))) 
            | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control__DOT___T_98) 
               & (0x20U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func7_reg))))
            ? 5U : (((((6U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                       & (0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg))) 
                      & (0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func7_reg))) 
                     | ((6U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                        & (1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg))))
                     ? 6U : (((((7U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                                & (0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg))) 
                               & (0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func7_reg))) 
                              | ((7U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                                 & (1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg))))
                              ? 7U : (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control__DOT___T_2) 
                                       & (0x20U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func7_reg)))
                                       ? 8U : (((0U 
                                                 == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                                                & (2U 
                                                   == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg)))
                                                ? 0x10U
                                                : (
                                                   ((1U 
                                                     == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                                                    & (2U 
                                                       == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg)))
                                                    ? 0x11U
                                                    : 
                                                   (((4U 
                                                      == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                                                     & (2U 
                                                        == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg)))
                                                     ? 0x14U
                                                     : 
                                                    (((5U 
                                                       == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                                                      & (2U 
                                                         == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg)))
                                                      ? 0x15U
                                                      : 
                                                     (((7U 
                                                        == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                                                       & (2U 
                                                          == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg)))
                                                       ? 0x17U
                                                       : (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control__DOT___GEN_8))))))))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_13 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_200) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_5));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_4 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_200) 
           & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rd_sel) 
              == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rs1_sel_reg)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_fetch_mret_inst_o 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT___T_4) 
           & (0x302U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                   >> 0x14U))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT___GEN_58 
        = ((0x1aU == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                               >> 0x14U))) ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_26
            : ((0x19U == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                   >> 0x14U))) ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_25
                : ((0x18U == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                       >> 0x14U))) ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_24
                    : ((0x17U == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                           >> 0x14U)))
                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_23
                        : ((0x16U == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                               >> 0x14U)))
                            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_22
                            : ((0x15U == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                   >> 0x14U)))
                                ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_21
                                : ((0x14U == (0x1fU 
                                              & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                 >> 0x14U)))
                                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_20
                                    : ((0x13U == (0x1fU 
                                                  & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                     >> 0x14U)))
                                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_19
                                        : ((0x12U == 
                                            (0x1fU 
                                             & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                >> 0x14U)))
                                            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_18
                                            : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                    >> 0x14U)))
                                                ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_17
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                        >> 0x14U)))
                                                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_16
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                         >> 0x14U)))
                                                     ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_15
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                          >> 0x14U)))
                                                      ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_14
                                                      : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT___GEN_45)))))))))))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT___GEN_26 
        = ((0x1aU == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                               >> 0xfU))) ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_26
            : ((0x19U == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                   >> 0xfU))) ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_25
                : ((0x18U == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                       >> 0xfU))) ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_24
                    : ((0x17U == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                           >> 0xfU)))
                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_23
                        : ((0x16U == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                               >> 0xfU)))
                            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_22
                            : ((0x15U == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                   >> 0xfU)))
                                ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_21
                                : ((0x14U == (0x1fU 
                                              & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                 >> 0xfU)))
                                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_20
                                    : ((0x13U == (0x1fU 
                                                  & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                     >> 0xfU)))
                                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_19
                                        : ((0x12U == 
                                            (0x1fU 
                                             & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                >> 0xfU)))
                                            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_18
                                            : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                    >> 0xfU)))
                                                ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_17
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                        >> 0xfU)))
                                                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_16
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                         >> 0xfU)))
                                                     ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_15
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                          >> 0xfU)))
                                                      ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_14
                                                      : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT___GEN_13)))))))))))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_26 
        = ((0x1aU == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                               >> 0x14U))) ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_26
            : ((0x19U == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                   >> 0x14U))) ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_25
                : ((0x18U == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                       >> 0x14U))) ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_24
                    : ((0x17U == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                           >> 0x14U)))
                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_23
                        : ((0x16U == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                               >> 0x14U)))
                            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_22
                            : ((0x15U == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                   >> 0x14U)))
                                ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_21
                                : ((0x14U == (0x1fU 
                                              & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                 >> 0x14U)))
                                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_20
                                    : ((0x13U == (0x1fU 
                                                  & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                     >> 0x14U)))
                                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_19
                                        : ((0x12U == 
                                            (0x1fU 
                                             & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                >> 0x14U)))
                                            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_18
                                            : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                    >> 0x14U)))
                                                ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_17
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                        >> 0x14U)))
                                                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_16
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                         >> 0x14U)))
                                                     ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_15
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                          >> 0x14U)))
                                                      ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_14
                                                      : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_13)))))))))))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_119 
        = ((0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rd_sel)) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_30));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_100 
        = ((0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rd_sel)) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_28));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_58 
        = ((0x1aU == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                               >> 0x14U))) ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_26
            : ((0x19U == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                   >> 0x14U))) ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_25
                : ((0x18U == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                       >> 0x14U))) ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_24
                    : ((0x17U == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                           >> 0x14U)))
                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_23
                        : ((0x16U == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                               >> 0x14U)))
                            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_22
                            : ((0x15U == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                   >> 0x14U)))
                                ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_21
                                : ((0x14U == (0x1fU 
                                              & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                 >> 0x14U)))
                                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_20
                                    : ((0x13U == (0x1fU 
                                                  & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                     >> 0x14U)))
                                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_19
                                        : ((0x12U == 
                                            (0x1fU 
                                             & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                >> 0x14U)))
                                            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_18
                                            : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                    >> 0x14U)))
                                                ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_17
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                        >> 0x14U)))
                                                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_16
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                         >> 0x14U)))
                                                     ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_15
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                          >> 0x14U)))
                                                      ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_14
                                                      : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_45)))))))))))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_37 
        = ((0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rd_sel_reg)) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_6));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_157 
        = (((((((((((((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_129) 
                        | (0x332U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                >> 0x14U)))) 
                       | (0x333U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                               >> 0x14U)))) 
                      | (0x334U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                              >> 0x14U)))) 
                     | (0x335U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                             >> 0x14U)))) 
                    | (0x336U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                            >> 0x14U)))) 
                   | (0x337U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                           >> 0x14U)))) 
                  | (0x338U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                          >> 0x14U)))) 
                 | (0x339U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                         >> 0x14U)))) 
                | (0x33aU == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                        >> 0x14U)))) 
               | (0x33bU == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                       >> 0x14U)))) 
              | (0x33cU == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                      >> 0x14U)))) 
             | (0x33dU == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                     >> 0x14U)))) | 
            (0x33eU == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                  >> 0x14U)))) | (0x33fU 
                                                  == 
                                                  (0xfffU 
                                                   & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                      >> 0x14U))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection__DOT___T_3 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_MemRd_reg) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection__DOT___T_2));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection__DOT___T_8 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_MemRd_reg) 
           & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection__DOT___T_2) 
              | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rd_sel_reg) 
                 == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                              >> 0x14U)))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_5 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_3) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection__DOT___T_2));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_23 
        = ((0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rd_sel_reg)) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection__DOT___T_2));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_279 
        = ((((((((((((((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_249) 
                         | (0xb90U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                 >> 0x14U)))) 
                        | (0xb91U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                >> 0x14U)))) 
                       | (0xb92U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                               >> 0x14U)))) 
                      | (0xb93U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                              >> 0x14U)))) 
                     | (0xb94U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                             >> 0x14U)))) 
                    | (0xb95U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                            >> 0x14U)))) 
                   | (0xb96U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                           >> 0x14U)))) 
                  | (0xb97U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                          >> 0x14U)))) 
                 | (0xb98U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                         >> 0x14U)))) 
                | (0xb99U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                        >> 0x14U)))) 
               | (0xb9aU == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                       >> 0x14U)))) 
              | (0xb9bU == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                      >> 0x14U)))) 
             | (0xb9cU == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                     >> 0x14U)))) | 
            (0xb9dU == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                  >> 0x14U)))) | (0xb9eU 
                                                  == 
                                                  (0xfffU 
                                                   & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                      >> 0x14U))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_216 
        = ((((((((((((((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_186) 
                         | (0xb10U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                 >> 0x14U)))) 
                        | (0xb11U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                >> 0x14U)))) 
                       | (0xb12U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                               >> 0x14U)))) 
                      | (0xb13U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                              >> 0x14U)))) 
                     | (0xb14U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                             >> 0x14U)))) 
                    | (0xb15U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                            >> 0x14U)))) 
                   | (0xb16U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                           >> 0x14U)))) 
                  | (0xb17U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                          >> 0x14U)))) 
                 | (0xb18U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                         >> 0x14U)))) 
                | (0xb19U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                        >> 0x14U)))) 
               | (0xb1aU == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                       >> 0x14U)))) 
              | (0xb1bU == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                      >> 0x14U)))) 
             | (0xb1cU == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                     >> 0x14U)))) | 
            (0xb1dU == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                  >> 0x14U)))) | (0xb1eU 
                                                  == 
                                                  (0xfffU 
                                                   & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                      >> 0x14U))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_extend_sel 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)
            ? 0U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type)
                     ? 0U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type)
                              ? 1U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_sb_type)
                                       ? 0U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_i_type)
                                                ? 0U
                                                : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jalr_type)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jal_type)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_lui_type)
                                                      ? 2U
                                                      : 
                                                     ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_Auipc)
                                                       ? 2U
                                                       : 0U)))))))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_memRead 
        = ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_branch 
        = ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)) 
           & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type)) 
              & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type)) 
                 & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_sb_type))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_op 
        = ((0x33U == (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg))
            ? 0U : ((3U == (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg))
                     ? 0U : ((0x23U == (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg))
                              ? 0U : ((0x63U == (0x7fU 
                                                 & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg))
                                       ? 0U : ((0x13U 
                                                == 
                                                (0x7fU 
                                                 & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg))
                                                ? 0U
                                                : (
                                                   (0x67U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg))
                                                    ? 0U
                                                    : 
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg))
                                                     ? 0U
                                                     : 
                                                    ((0x37U 
                                                      == 
                                                      (0x7fU 
                                                       & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg))
                                                      ? 0U
                                                      : 
                                                     ((0x17U 
                                                       == 
                                                       (0x7fU 
                                                        & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg))
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode__DOT___T_12)
                                                        ? 1U
                                                        : 
                                                       ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode__DOT___T_15)
                                                         ? 2U
                                                         : 
                                                        ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode__DOT___T_18)
                                                          ? 3U
                                                          : 
                                                         ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode__DOT___T_21)
                                                           ? 1U
                                                           : 
                                                          ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode__DOT___T_24)
                                                            ? 2U
                                                            : 
                                                           ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode__DOT___T_27)
                                                             ? 3U
                                                             : 0U)))))))))))))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_type 
        = ((0x33U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
           & ((3U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
              & ((0x23U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
                 & ((0x63U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
                    & ((0x13U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
                       & ((0x67U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
                          & ((0x6fU != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
                             & ((0x37U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
                                & ((0x17U != (0x7fU 
                                              & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
                                   & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode__DOT___T_12) 
                                      | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode__DOT___T_15) 
                                         | (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode__DOT___T_18))))))))))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_imm_type 
        = ((0x33U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
           & ((3U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
              & ((0x23U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
                 & ((0x63U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
                    & ((0x13U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
                       & ((0x67U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
                          & ((0x6fU != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
                             & ((0x37U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
                                & ((0x17U != (0x7fU 
                                              & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)) 
                                   & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode__DOT___T_12)) 
                                      & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode__DOT___T_15)) 
                                         & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode__DOT___T_18)) 
                                            & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode__DOT___T_21) 
                                               | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode__DOT___T_24) 
                                                  | (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode__DOT___T_27)))))))))))))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT___T_45 
        = ((0x37U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg))
            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData
            : 0U);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT__load_unit__DOT___GEN_13 
        = ((2U == (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
            ? (0xffffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data 
                          >> 0x10U)) : (0xffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data 
                                                 >> 0x18U)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage_io_data_req_o 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_a_ready) 
           & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_memWr) 
              | (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_memRd)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage_io_stall 
        = (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_memWr) 
            | (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_memRd)) 
           & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_valid)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___GEN_10 
        = ((0U == (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
           | (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___GEN_6));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control_io_output 
        = (((((((((((((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control__DOT___T_2) 
                        & (0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func7_reg))) 
                       | ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                          & (1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg)))) 
                      | ((2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                         & (5U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg)))) 
                     | ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                        & (5U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg)))) 
                    | ((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                       & (5U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg)))) 
                   | ((2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                      & (4U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg)))) 
                  | ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                     & (4U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg)))) 
                 | ((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                    & (4U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg)))) 
                | ((4U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                   & (4U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg)))) 
               | ((5U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                  & (4U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg)))) 
              | ((6U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                 & (4U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg)))) 
             | (6U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg))) 
            | (7U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg)))
            ? 0U : (((((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                       & (0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg))) 
                      & (0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func7_reg))) 
                     | (((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                         & (1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg))) 
                        & (0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func7_reg))))
                     ? 1U : (((((2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                                & (0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg))) 
                               & (0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func7_reg))) 
                              | ((2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                                 & (1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg))))
                              ? 2U : ((((((3U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                                          & (0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg))) 
                                         & (0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func7_reg))) 
                                        | ((3U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                                           & (1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg)))) 
                                       | ((6U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                                          & (2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg))))
                                       ? 3U : (((((4U 
                                                   == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                                                  & (0U 
                                                     == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg))) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func7_reg))) 
                                                | ((4U 
                                                    == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg)) 
                                                   & (1U 
                                                      == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg))))
                                                ? 4U
                                                : (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control__DOT___GEN_17))))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_54 
        = ((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_224) 
             & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_13))) 
            & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_37)) 
           & (0x37U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__inst_op_reg)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_15 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_13) 
           & (0x37U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__inst_op_reg)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_6 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_4) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_5));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_rs2 
        = ((0x1fU == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                               >> 0x14U))) ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_31
            : ((0x1eU == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                   >> 0x14U))) ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_30
                : ((0x1dU == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                       >> 0x14U))) ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_29
                    : ((0x1cU == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                           >> 0x14U)))
                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_28
                        : ((0x1bU == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                               >> 0x14U)))
                            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_27
                            : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT___GEN_58)))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1 
        = ((0x1fU == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                               >> 0xfU))) ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_31
            : ((0x1eU == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                   >> 0xfU))) ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_30
                : ((0x1dU == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                       >> 0xfU))) ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_29
                    : ((0x1cU == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                           >> 0xfU)))
                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_28
                        : ((0x1bU == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                               >> 0xfU)))
                            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_27
                            : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT___GEN_26)))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_102 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_100) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_30));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_63 
        = ((0x1fU == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                               >> 0x14U))) ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_31
            : ((0x1eU == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                   >> 0x14U))) ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_30
                : ((0x1dU == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                       >> 0x14U))) ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_29
                    : ((0x1cU == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                           >> 0x14U)))
                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_28
                        : ((0x1bU == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                               >> 0x14U)))
                            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_27
                            : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_58)))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_123 
        = ((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_90) 
             & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_37))) 
            & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_119))) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_107));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_174 
        = ((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_141) 
             & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_37))) 
            & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_119))) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_107));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_41 
        = (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_20) 
            & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_37))) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_30));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_75 
        = (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_54) 
            & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_37))) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_30));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_7 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_5) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_6));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_138 
        = ((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_90) 
             & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_23))) 
            & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_100))) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_105));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_51 
        = (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_20) 
            & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_23))) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_28));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_25 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_23) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_6));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_281 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_279) 
           | (0xb9fU == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                   >> 0x14U))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_218 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_216) 
           | (0xb1fU == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                   >> 0x14U))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_memRead)
            ? (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection__DOT___T_3)
            : (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection__DOT___T_8));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode__DOT___GEN_4 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_type) 
           | (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_imm_type));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT__load_unit__DOT___GEN_24 
        = ((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_func3))
            ? ((0U == (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                ? ((((0x8000U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data)
                      ? 0xffffU : 0U) << 0x10U) | (0xffffU 
                                                   & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data))
                : ((1U == (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                    ? ((((0x800000U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data)
                          ? 0xffffU : 0U) << 0x10U) 
                       | (0xffffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data 
                                     >> 8U))) : ((2U 
                                                  == 
                                                  (3U 
                                                   & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                  ? 
                                                 ((((0x80000000U 
                                                     & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data)
                                                     ? 0xffffU
                                                     : 0U) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data 
                                                        >> 0x10U)))
                                                  : 
                                                 (0xffU 
                                                  & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data 
                                                     >> 0x18U)))))
            : ((6U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_func3))
                ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data
                : ((4U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_func3))
                    ? ((0U == (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                        ? (0xffU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data)
                        : ((1U == (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                            ? (0xffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data 
                                        >> 8U)) : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                    ? 
                                                   (0xffU 
                                                    & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data 
                                                       >> 0x10U))
                                                    : 
                                                   (0xffU 
                                                    & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data 
                                                       >> 0x18U)))))
                    : ((5U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_func3))
                        ? ((0U == (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                            ? (0xffffU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data)
                            : ((1U == (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                ? (0xffffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data 
                                              >> 8U))
                                : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT__load_unit__DOT___GEN_13))
                        : ((0U == (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data
                            : ((1U == (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                ? (0xffffffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data 
                                                >> 8U))
                                : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT__load_unit__DOT___GEN_13))))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_d_o_0_a_valid 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage_io_data_req_o) 
           & (0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_dev_sel)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_d_o_1_a_valid 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage_io_data_req_o) 
           & (1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_dev_sel)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage_io_stall) 
           | (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_io_stall_core_i));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_core_stall_i 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage_io_stall) 
           | (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_io_stall_core_i));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_be_i 
        = (((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___T_7) 
              | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___T_14)
                  ? ((0U != (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                     & (1U != (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)))
                  : ((0U != (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                     & ((1U != (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                        & (2U != (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)))))) 
             << 3U) | (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___T_7)
                         ? ((0U == (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                            | (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___GEN_7))
                         : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___T_14)
                             ? ((0U != (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___GEN_7))
                             : ((0U != (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                & ((1U != (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                   & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___GEN_3))))) 
                       << 2U)) | ((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___T_7)
                                     ? (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___GEN_10)
                                     : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___T_14)
                                         ? (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___GEN_10)
                                         : ((0U != 
                                             (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                            & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___GEN_6)))) 
                                   << 1U) | ((0U == 
                                              (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                             | ((1U 
                                                 != 
                                                 (3U 
                                                  & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                                & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___GEN_2)))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_40 
        = (((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_224) 
              & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_6))) 
             & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_35)) 
            & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_37)) 
           & (0x37U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__inst_op_reg)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_8 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_6) 
           & (0x37U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__inst_op_reg)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___GEN_4 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_7) 
           | ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_5)) 
              & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_3) 
                 & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_6))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___GEN_3 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_7) 
           | (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_5));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_108 
        = (((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_90) 
              & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_25))) 
             & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_102))) 
            & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_105)) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_107));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_159 
        = (((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_141) 
              & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_25))) 
             & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_102))) 
            & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_105)) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_107));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_31 
        = ((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_20) 
             & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_25))) 
            & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_28)) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_30));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_65 
        = ((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_54) 
             & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_25))) 
            & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_28)) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_30));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_92 
        = ((0x344U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                 >> 0x14U))) ? ((0U 
                                                 != vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__intr_hw__DOT___T_6) 
                                                << 0xbU)
            : ((0x7b0U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                     >> 0x14U))) ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q
                : ((0x7b1U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                         >> 0x14U)))
                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DEPC__DOT__rdata_q
                    : ((0x7b2U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                             >> 0x14U)))
                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DSCRATCH0__DOT__rdata_q
                        : ((0x7b3U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                 >> 0x14U)))
                            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DSCRATCH1__DOT__rdata_q
                            : ((0x320U == (0xfffU & 
                                           (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                            >> 0x14U)))
                                ? (0x2000U | (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mcountinhibit_q))
                                : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_157)
                                    ? ((0x1fU == (0x1fU 
                                                  & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                     >> 0x14U)))
                                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_31
                                        : ((0x1eU == 
                                            (0x1fU 
                                             & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                >> 0x14U)))
                                            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_30
                                            : ((0x1dU 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                    >> 0x14U)))
                                                ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_29
                                                : (
                                                   (0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                        >> 0x14U)))
                                                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_28
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                         >> 0x14U)))
                                                     ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_27
                                                     : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_26)))))
                                    : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_218)
                                        ? (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_63)
                                        : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_281)
                                            ? (IData)(
                                                      (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_63 
                                                       >> 0x20U))
                                            : 0U)))))))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_99 
        = ((0x341U != (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                 >> 0x14U))) & ((0x342U 
                                                 != 
                                                 (0xfffU 
                                                  & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                     >> 0x14U))) 
                                                & ((0x343U 
                                                    != 
                                                    (0xfffU 
                                                     & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                        >> 0x14U))) 
                                                   & ((0x344U 
                                                       != 
                                                       (0xfffU 
                                                        & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                           >> 0x14U))) 
                                                      & ((0x7b0U 
                                                          == 
                                                          (0xfffU 
                                                           & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                              >> 0x14U))) 
                                                         | ((0x7b1U 
                                                             == 
                                                             (0xfffU 
                                                              & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                                 >> 0x14U))) 
                                                            | ((0x7b2U 
                                                                != 
                                                                (0xfffU 
                                                                 & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                                    >> 0x14U))) 
                                                               & ((0x7b3U 
                                                                   == 
                                                                   (0xfffU 
                                                                    & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                                       >> 0x14U))) 
                                                                  | ((0x320U 
                                                                      != 
                                                                      (0xfffU 
                                                                       & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                                          >> 0x14U))) 
                                                                     & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_157)) 
                                                                        & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_218)) 
                                                                           & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_281)) 
                                                                              & ((0x7a0U 
                                                                                == 
                                                                                (0xfffU 
                                                                                & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                                                >> 0x14U))) 
                                                                                | ((0x7a1U 
                                                                                == 
                                                                                (0xfffU 
                                                                                & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                                                >> 0x14U))) 
                                                                                | ((0x7a2U 
                                                                                == 
                                                                                (0xfffU 
                                                                                & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                                                >> 0x14U))) 
                                                                                | ((0x7a3U 
                                                                                == 
                                                                                (0xfffU 
                                                                                & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                                                >> 0x14U))) 
                                                                                | (0x7a8U 
                                                                                != 
                                                                                (0xfffU 
                                                                                & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                                                >> 0x14U)))))))))))))))))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_ctrl_next_pc_sel_out 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)
            ? 0U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)
                     ? 0U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type)
                              ? 0U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type)
                                       ? 0U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_sb_type)
                                                ? 1U
                                                : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_i_type)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jalr_type)
                                                     ? 3U
                                                     : 
                                                    ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jal_type)
                                                      ? 2U
                                                      : 0U))))))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode__DOT___GEN_9 
        = ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_multiply)) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode__DOT___GEN_4));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__a_ack 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_d_o_0_a_valid) 
           & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__outstanding)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__a_ack 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_d_o_1_a_valid) 
           & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__outstanding)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_31 
        = ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_core_stall_i)) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__handle_irq));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14 
        = (1U & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_core_stall_i)) 
                 & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__handle_irq))));
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_memWr) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask 
            = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_be_i;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode 
            = ((0xfU == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_be_i))
                ? 0U : 1U);
    } else {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask = 0xfU;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode = 4U;
    }
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit_io_forward_b 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_40)
            ? 2U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_54)
                     ? 2U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_8) 
                             | (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_15))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___GEN_3 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_8) 
           | ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_15)) 
              & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_4) 
                 & (0x37U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__inst_op_reg)))));
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_31) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___GEN_15 = 2U;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___GEN_14 = 2U;
    } else {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___GEN_15 
            = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_41)
                ? 2U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_51)
                         ? (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___GEN_4)
                         : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_65)
                             ? 4U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_75)
                                      ? 4U : (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___GEN_4)))));
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___GEN_14 
            = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_41)
                ? (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___GEN_3)
                : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_51)
                    ? 2U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_65)
                             ? 4U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_75)
                                      ? (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___GEN_3)
                                      : ((((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_branch) 
                                             & (0U 
                                                != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rd_sel))) 
                                            & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_memRd)) 
                                           & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_23))) 
                                          & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_28))
                                          ? 4U : (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___GEN_3))))));
    }
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_108 
        = ((0x300U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                 >> 0x14U))) ? ((0x200000U 
                                                 & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                                    << 0x10U)) 
                                                | ((0x20000U 
                                                    & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                                       << 0xdU)) 
                                                   | ((0x1800U 
                                                       & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                                          << 9U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                                             << 6U)) 
                                                         | (8U 
                                                            & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                                               << 3U))))))
            : ((0x301U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                     >> 0x14U))) ? 0x40001100U
                : ((0x304U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                         >> 0x14U)))
                    ? ((0x800U & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MIE__DOT__rdata_q) 
                                  << 9U)) | ((0x80U 
                                              & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MIE__DOT__rdata_q) 
                                                 << 6U)) 
                                             | (8U 
                                                & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MIE__DOT__rdata_q) 
                                                   << 3U))))
                    : ((0x340U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                             >> 0x14U)))
                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSCRATCH__DOT__rdata_q
                        : ((0x305U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                 >> 0x14U)))
                            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MTVEC__DOT__rdata_q
                            : ((0x341U == (0xfffU & 
                                           (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                            >> 0x14U)))
                                ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MEPC__DOT__rdata_q
                                : ((0x342U == (0xfffU 
                                               & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                  >> 0x14U)))
                                    ? ((0x80000000U 
                                        & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MCAUSE__DOT__rdata_q) 
                                           << 0x1aU)) 
                                       | (0x1fU & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MCAUSE__DOT__rdata_q)))
                                    : ((0x343U == (0xfffU 
                                                   & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                      >> 0x14U)))
                                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MTVAL__DOT__rdata_q
                                        : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_92))))))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_csr_wen 
        = ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)) 
           & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type)) 
              & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type)) 
                 & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_sb_type)) 
                    & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_i_type)) 
                       & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jalr_type)) 
                          & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jal_type)) 
                             & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_lui_type)) 
                                & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_Auipc)) 
                                   & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode__DOT___GEN_9))))))))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT___GEN_5 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__a_ack) 
           | ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__outstanding)) 
              & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__outstanding)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT___GEN_1 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__a_ack) 
           | ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__outstanding)) 
              & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__outstanding)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___GEN_0 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14)
            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc__DOT__reg_
            : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_pc_reg);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o 
        = ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14)) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_31));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__tlErr__DOT___T_5 
        = ((4U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode)) 
           | (1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__tlErr__DOT___T_5 
        = ((4U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode)) 
           | (1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT___GEN_7 
        = ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit_io_forward_b))
            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rs2_reg
            : ((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit_io_forward_b))
                ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT___T_5
                : ((2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit_io_forward_b))
                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData
                    : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rs2_reg)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit_io_forward_a 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_40)
            ? 2U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_54)
                     ? (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___GEN_3)
                     : (((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_224) 
                           & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_4))) 
                          & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_35)) 
                         & (0x37U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__inst_op_reg)))
                         ? 2U : (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___GEN_3))));
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_branch) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___GEN_34 
            = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_108)
                ? 3U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_123)
                         ? 3U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_138)
                                  ? (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___GEN_15)
                                  : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_159)
                                      ? 5U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_174)
                                               ? 5U
                                               : (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___GEN_15))))));
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1 
            = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_108)
                ? 3U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_123)
                         ? (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___GEN_14)
                         : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_138)
                             ? 3U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_159)
                                      ? 5U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_174)
                                               ? (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___GEN_14)
                                               : ((
                                                   (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_141) 
                                                     & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_23))) 
                                                    & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_100))) 
                                                   & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_105))
                                                   ? 5U
                                                   : (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___GEN_14)))))));
    } else {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___GEN_34 = 0U;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1 
            = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_branch)
                ? 0U : ((((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_224) 
                            & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_memRd))) 
                           & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_23))) 
                          & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_100))) 
                         & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_105))
                         ? 8U : ((((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_224) 
                                     & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_memRd)) 
                                    & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_23))) 
                                   & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_100))) 
                                  & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_105))
                                  ? 0xaU : (((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_200) 
                                               & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_memRd))) 
                                              & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_23))) 
                                             & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_28))
                                             ? 7U : 
                                            (((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_200) 
                                                & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_memRd)) 
                                               & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_23))) 
                                              & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_28))
                                              ? 9U : 
                                             (((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_RegWr_reg) 
                                                 & (0U 
                                                    != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rd_sel_reg))) 
                                                & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_MemRd_reg))) 
                                               & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection__DOT___T_2))
                                               ? 6U
                                               : 0U))))));
    }
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile_io_o_csr_rdata 
        = ((0xf14U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                 >> 0x14U))) ? 0U : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_108);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_26 
        = ((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr) 
             & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_csr_wen)) 
            & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_imm_type))) 
           & (0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wreq 
        = (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_csr_wen) 
            & (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_memRd) 
                & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_valid)) 
               | ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_MemRd_reg)) 
                  & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_memRd))))) 
           & (((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_op)) 
               | (2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_op))) 
              | (3U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_op))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_14 
        = ((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_regWr) 
             & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_csr_wen)) 
            & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_imm_type))) 
           & (0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rd_sel)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_4 
        = ((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_RegWr_reg) 
             & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_csr_wen)) 
            & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_imm_type))) 
           & (0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rd_sel_reg)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__tlErr__DOT___T 
        = (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__tlErr__DOT___T_5) 
            | (0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode))) 
           & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_d_o_0_a_valid) 
              & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__tlErr__DOT___T_5) 
                 | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_d_o_0_a_valid) 
                    & (0xfU == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask))))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__tlErr__DOT___T 
        = (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__tlErr__DOT___T_5) 
            | (0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode))) 
           & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_d_o_1_a_valid) 
              & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__tlErr__DOT___T_5) 
                 | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_d_o_1_a_valid) 
                    & (0xfU == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask))))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_b 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_OpB_sel_reg)
            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__imm_reg
            : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT___GEN_7);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_a 
        = ((2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_OpA_sel_reg))
            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__pc4_reg
            : ((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_OpA_sel_reg))
                ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__pc_reg
                : ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit_io_forward_a))
                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rs1_reg
                    : ((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit_io_forward_a))
                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT___T_5
                        : ((2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit_io_forward_a))
                            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData
                            : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rs1_reg)))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_301 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wreq) 
           & (~ ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_csr_wen) 
                 & ((((0xf14U != (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                            >> 0x14U))) 
                      & ((0x300U != (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                               >> 0x14U))) 
                         & ((0x301U != (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                  >> 0x14U))) 
                            & ((0x304U != (0xfffU & 
                                           (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                            >> 0x14U))) 
                               & ((0x340U != (0xfffU 
                                              & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                 >> 0x14U))) 
                                  & ((0x305U != (0xfffU 
                                                 & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                    >> 0x14U))) 
                                     & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_99))))))) 
                     | ((3U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                               >> 0x1cU)) > (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__priv_lvl_q))) 
                    | ((3U == (3U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                     >> 0x1eU))) & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wreq))))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__hazard_in_decode_execute 
        = (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_4) 
            & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_CsrWen_reg))) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_7));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__csr_hazard_in_decode_execute 
        = (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_4) 
            & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_CsrWen_reg)) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_7));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT___T_10 
        = (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__a_ack) 
            & ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode)) 
               | (1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode)))) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__tlErr__DOT___T));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter_io_we_o 
        = (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__a_ack) 
            & ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode)) 
               | (1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode)))) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__tlErr__DOT___T));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_3 
        = (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_a 
           + vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_b);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_6 
        = (0x7fffffffffffffffULL & ((((QData)((IData)(
                                                      (0x7fffffffU 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_a 
                                                                        >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_a))) 
                                    << (0x1fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_b)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_17 
        = (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_a 
           ^ vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_b);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_22 
        = VL_SHIFTRS_III(32,32,5, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_a, 
                         (0x1fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_b));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_25 
        = (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_a 
           | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_b);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_28 
        = (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_a 
           & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_b);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_32 
        = (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_a 
           - vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_b);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_8 
        = VL_LTS_III(1,32,32, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_a, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_b);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_34 
        = (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_a 
           == vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_b);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_49 
        = VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_a), 
                      VL_EXTENDS_QI(64,32, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_b));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_418 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_301) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_218));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_301) 
           & (0x304U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                   >> 0x14U))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_317 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_301) 
           & (0x340U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                   >> 0x14U))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_319 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_301) 
           & (0x341U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                   >> 0x14U))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_321 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_301) 
           & (0x342U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                   >> 0x14U))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_323 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_301) 
           & (0x343U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                   >> 0x14U))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_325 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_301) 
           & (0x305U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                   >> 0x14U))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_327 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_301) 
           & (0x7b0U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                   >> 0x14U))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_352 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_301) 
           & (0x7b2U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                   >> 0x14U))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_354 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_301) 
           & (0x7b3U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                   >> 0x14U))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_356 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_301) 
           & (0x320U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                   >> 0x14U))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_301) 
           & (0x300U == (0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                   >> 0x14U))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__hazard_in_decode_memory 
        = ((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_14) 
             & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__hazard_in_decode_execute))) 
            & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_csrWen))) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_19));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__csr_hazard_in_decode_memory 
        = ((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_14) 
             & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_csrWen)) 
            & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__csr_hazard_in_decode_execute))) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_19));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT___T_71 
        = ((0x14U == (0x3cU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter_io_we_o));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT___T_76 
        = ((0x18U == (0x3cU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter_io_we_o));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT___T_86 
        = ((0x20U == (0x3cU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter_io_we_o));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT___T_91 
        = ((0x24U == (0x3cU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter_io_we_o));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT___T_111 
        = ((0x34U == (0x3cU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter_io_we_o));
    VL_EXTENDS_WQ(65,33, __Vtemp64, (((QData)((IData)(
                                                      (1U 
                                                       & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_a 
                                                          >> 0x1fU)))) 
                                      << 0x20U) | (QData)((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_a))));
    __Vtemp65[0U] = __Vtemp64[0U];
    __Vtemp65[1U] = __Vtemp64[1U];
    __Vtemp65[2U] = (1U & __Vtemp64[2U]);
    VL_EXTENDS_WQ(65,33, __Vtemp67, (QData)((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_b)));
    __Vtemp68[0U] = __Vtemp67[0U];
    __Vtemp68[1U] = __Vtemp67[1U];
    __Vtemp68[2U] = (1U & __Vtemp67[2U]);
    VL_MULS_WWW(65,65,65, __Vtemp69, __Vtemp65, __Vtemp68);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___GEN_12 
        = ((0x1bU == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control_io_output))
            ? VL_DIV_III(32, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_a, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_b)
            : ((0x1aU == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control_io_output))
                ? VL_MODDIVS_III(32, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_a, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_b)
                : ((0x19U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control_io_output))
                    ? VL_MODDIV_III(32, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_a, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_b)
                    : ((0x18U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control_io_output))
                        ? (IData)((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_49 
                                   >> 0x20U)) : ((0x13U 
                                                  == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control_io_output))
                                                  ? 
                                                 __Vtemp69[1U]
                                                  : (IData)(
                                                            (((QData)((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_a)) 
                                                              * (QData)((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_b))) 
                                                             >> 0x20U)))))));
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 = 0U;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 = 0U;
    } else {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
            = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315)
                ? 0U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_317)
                         ? 0U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_319)
                                  ? 0U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_321)
                                           ? 0U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_323)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_325)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_327)
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_352)
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_354)
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_356)
                                                         ? 0U
                                                         : 
                                                        ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_418)
                                                          ? 
                                                         ((IData)(1U) 
                                                          << 
                                                          (0x1fU 
                                                           & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                              >> 0x14U)))
                                                          : 0U)))))))))));
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
            = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315)
                ? 0U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_317)
                         ? 0U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_319)
                                  ? 0U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_321)
                                           ? 0U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_323)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_325)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_327)
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_352)
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_354)
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_356)
                                                         ? 0U
                                                         : 
                                                        ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_418)
                                                          ? 0U
                                                          : 
                                                         (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_301) 
                                                           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_281))
                                                           ? 
                                                          ((IData)(1U) 
                                                           << 
                                                           (0x1fU 
                                                            & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                               >> 0x14U)))
                                                           : 0U))))))))))));
    }
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit_io_forward_rs1 
        = ((((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_26) 
               & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_csrWen)) 
              & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__csr_hazard_in_decode_execute))) 
             & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__csr_hazard_in_decode_memory))) 
            & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_33))
            ? 6U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__csr_hazard_in_decode_memory)
                     ? 5U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__csr_hazard_in_decode_execute)
                              ? 4U : ((((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_26) 
                                          & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__hazard_in_decode_execute))) 
                                         & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__hazard_in_decode_memory))) 
                                        & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_csrWen))) 
                                       & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_33))
                                       ? 3U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__hazard_in_decode_memory)
                                                ? 2U
                                                : (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__hazard_in_decode_execute))))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT___T_111) 
           & (0xfU != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___GEN_13 
        = (0x1ffffffffULL & ((0x1dU == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control_io_output))
                              ? VL_DIVS_QQQ(33, (0x1ffffffffULL 
                                                 & VL_EXTENDS_QI(33,32, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_a)), 
                                            (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,32, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_b)))
                              : (((QData)((IData)((1U 
                                                   & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___GEN_12 
                                                      >> 0x1fU)))) 
                                  << 0x20U) | (QData)((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___GEN_12)))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvllow_reg_io_we 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT___T_111) 
           & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_enable_reg_io_we 
        = (((4U == (0x3cU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
            & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter_io_we_o)) 
           & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_rising_reg_io_we 
        = (((0x28U == (0x3cU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
            & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter_io_we_o)) 
           & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_falling_reg_io_we 
        = (((0x2cU == (0x3cU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
            & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter_io_we_o)) 
           & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvlhigh_reg_io_we 
        = (((0x30U == (0x3cU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
            & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter_io_we_o)) 
           & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg_io_we 
        = (((0U == (0x3cU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
            & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter_io_we_o)) 
           & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__intr_hw__DOT__new_event 
        = ((((((8U == (0x3cU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
               & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter_io_we_o)) 
              & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)))
              ? 0xffffffffU : 0U) & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i) 
           | ((((0x3fffffffU & (((~ vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__data_in_q) 
                                 & (IData)((vlTOPp->io_in 
                                            >> 8U))) 
                                & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_rising_reg__DOT__q_reg)) 
                | ((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__data_in_q 
                    & (~ (0x3fffffffU & (IData)((vlTOPp->io_in 
                                                 >> 8U))))) 
                   & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_falling_reg__DOT__q_reg)) 
               | (0x3fffffffU & ((IData)((vlTOPp->io_in 
                                          >> 8U)) & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvlhigh_reg__DOT__q_reg))) 
              | ((~ (0x3fffffffU & (IData)((vlTOPp->io_in 
                                            >> 8U)))) 
                 & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvllow_reg__DOT__q_reg)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___GEN_20 
        = ((0x11U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control_io_output))
            ? ((0xfffffffffffffffcULL & ((- (QData)((IData)(
                                                            (1U 
                                                             & (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_34)
                                                                  ? 0U
                                                                  : 1U) 
                                                                >> 1U))))) 
                                         << 2U)) | (QData)((IData)(
                                                                   ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_34)
                                                                     ? 0U
                                                                     : 1U))))
            : ((0x14U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control_io_output))
                ? ((0xfffffffffffffffcULL & ((- (QData)((IData)(
                                                                (1U 
                                                                 & (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_8)
                                                                      ? 1U
                                                                      : 0U) 
                                                                    >> 1U))))) 
                                             << 2U)) 
                   | (QData)((IData)(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_8)
                                       ? 1U : 0U))))
                : ((0x15U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control_io_output))
                    ? ((0xfffffffffffffffcULL & ((- (QData)((IData)(
                                                                    (1U 
                                                                     & ((VL_GTES_III(1,32,32, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_a, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_b)
                                                                          ? 1U
                                                                          : 0U) 
                                                                        >> 1U))))) 
                                                 << 2U)) 
                       | (QData)((IData)((VL_GTES_III(1,32,32, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_a, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_b)
                                           ? 1U : 0U))))
                    : ((0x17U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control_io_output))
                        ? ((0xfffffffffffffffcULL & 
                            ((- (QData)((IData)((1U 
                                                 & (((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_a 
                                                      >= vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_b)
                                                      ? 1U
                                                      : 0U) 
                                                    >> 1U))))) 
                             << 2U)) | (QData)((IData)(
                                                       ((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_a 
                                                         >= vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_b)
                                                         ? 1U
                                                         : 0U))))
                        : ((0x1fU == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control_io_output))
                            ? (((QData)((IData)((- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_a 
                                                               >> 0x1fU)))))) 
                                << 0x20U) | (QData)((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_a)))
                            : ((0xbU == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control_io_output))
                                ? (((QData)((IData)(
                                                    (- (IData)(
                                                               (1U 
                                                                & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_b 
                                                                   >> 0x1fU)))))) 
                                    << 0x20U) | (QData)((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_b)))
                                : ((0x1eU == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control_io_output))
                                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_49
                                    : (((QData)((IData)(
                                                        (0x7fffffffU 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___GEN_13 
                                                                                >> 0x20U)))))))) 
                                        << 0x21U) | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___GEN_13))))))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg__DOT__wr_data 
        = (((0U != vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__intr_hw__DOT__new_event)
             ? (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__intr_hw__DOT__new_event 
                | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg__DOT__q_reg)
             : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg__DOT__q_reg) 
           & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg_io_we)
               ? (~ vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i)
               : 0xffffffffU));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___GEN_27 
        = (((3U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control_io_output)) 
            | (0x16U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control_io_output)))
            ? ((0xfffffffffffffffcULL & ((- (QData)((IData)(
                                                            (1U 
                                                             & (((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_a 
                                                                  < vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_b)
                                                                  ? 1U
                                                                  : 0U) 
                                                                >> 1U))))) 
                                         << 2U)) | (QData)((IData)(
                                                                   ((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_a 
                                                                     < vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_b)
                                                                     ? 1U
                                                                     : 0U))))
            : ((4U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control_io_output))
                ? (((QData)((IData)((- (IData)((1U 
                                                & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_17 
                                                   >> 0x1fU)))))) 
                    << 0x20U) | (QData)((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_17)))
                : (((5U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control_io_output)) 
                    | (0xdU == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control_io_output)))
                    ? (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_22 
                                                       >> 0x1fU)))))) 
                        << 0x20U) | (QData)((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_22)))
                    : ((6U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control_io_output))
                        ? (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_25 
                                                           >> 0x1fU)))))) 
                            << 0x20U) | (QData)((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_25)))
                        : ((7U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control_io_output))
                            ? (((QData)((IData)((- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_28 
                                                               >> 0x1fU)))))) 
                                << 0x20U) | (QData)((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_28)))
                            : ((8U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control_io_output))
                                ? (((QData)((IData)(
                                                    (- (IData)(
                                                               (1U 
                                                                & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_32 
                                                                   >> 0x1fU)))))) 
                                    << 0x20U) | (QData)((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_32)))
                                : ((0x10U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control_io_output))
                                    ? ((0xfffffffffffffffcULL 
                                        & ((- (QData)((IData)(
                                                              (1U 
                                                               & (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_34)
                                                                    ? 1U
                                                                    : 0U) 
                                                                  >> 1U))))) 
                                           << 2U)) 
                                       | (QData)((IData)(
                                                         ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_34)
                                                           ? 1U
                                                           : 0U))))
                                    : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___GEN_20)))))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___GEN_30 
        = ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control_io_output))
            ? (((QData)((IData)((- (IData)((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_3 
                                                  >> 0x1fU)))))) 
                << 0x20U) | (QData)((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_3)))
            : ((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control_io_output))
                ? (((QData)((IData)((1U & (IData)((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_6 
                                                   >> 0x3eU))))) 
                    << 0x3fU) | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_6)
                : ((2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control_io_output))
                    ? ((0xfffffffffffffffcULL & ((- (QData)((IData)(
                                                                    (1U 
                                                                     & (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_8)
                                                                          ? 1U
                                                                          : 0U) 
                                                                        >> 1U))))) 
                                                 << 2U)) 
                       | (QData)((IData)(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_8)
                                           ? 1U : 0U))))
                    : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___GEN_27)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__jalr__DOT__sum 
        = (((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
             ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1
             : ((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                 ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1
                 : ((2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                     ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1
                     : ((3U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                         ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1
                         : ((4U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                             ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1
                             : ((5U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                                 ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1
                                 : ((6U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                                     ? (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___GEN_30)
                                     : ((7U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                                         ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output
                                         : ((8U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                                             ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData
                                             : ((9U 
                                                 == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                                                 ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data
                                                 : 
                                                ((0xaU 
                                                  == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                                                  ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData
                                                  : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1))))))))))) 
           + vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__imm_generation_io_i_imm);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs1 
        = ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1
            : ((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                ? (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___GEN_30)
                : ((2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output
                    : ((3U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData
                        : ((4U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data
                            : ((5U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                                ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData
                                : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1))))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs2 
        = ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___GEN_34))
            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_rs2
            : ((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___GEN_34))
                ? (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___GEN_30)
                : ((2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___GEN_34))
                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output
                    : ((3U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___GEN_34))
                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData
                        : ((4U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___GEN_34))
                            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data
                            : ((5U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___GEN_34))
                                ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData
                                : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_rs2))))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile_io_i_csr_wdata 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_imm_type)
            ? (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                        >> 0xfU)) : ((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit_io_forward_rs1))
                                      ? (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___GEN_30)
                                      : ((2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit_io_forward_rs1))
                                          ? ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_memRd)
                                              ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data
                                              : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)
                                          : ((3U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit_io_forward_rs1))
                                              ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__writeback_io_write_data
                                              : ((4U 
                                                  == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit_io_forward_rs1))
                                                  ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__csr_data_reg
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit_io_forward_rs1))
                                                   ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_csr_data
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit_io_forward_rs1))
                                                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_csr_data
                                                    : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1)))))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__jalr__DOT___GEN_0 
        = (((QData)((IData)((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__jalr__DOT__sum 
                                   >> 0x1fU)))) << 0x20U) 
           | (QData)((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__jalr__DOT__sum)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_26 
        = (((0U == (7U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                          >> 0xcU))) ? (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs1 
                                        == vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs2)
             : ((1U == (7U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                              >> 0xcU))) ? (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs1 
                                            != vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs2)
                 : ((4U == (7U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                  >> 0xcU))) ? VL_LTS_III(1,32,32, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs1, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs2)
                     : ((5U == (7U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                      >> 0xcU))) ? 
                        VL_GTES_III(1,32,32, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs1, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs2)
                         : ((6U == (7U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                          >> 0xcU)))
                             ? (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs1 
                                < vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs2)
                             : ((7U == (7U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                              >> 0xcU))) 
                                & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs1 
                                   >= vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs2))))))) 
           & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)) 
              & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_branch)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_372 
        = ((2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_op))
            ? (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile_io_i_csr_wdata 
               | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile_io_o_csr_rdata)
            : ((3U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_op))
                ? ((~ vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile_io_i_csr_wdata) 
                   & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile_io_o_csr_rdata)
                : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile_io_i_csr_wdata));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc_io_in 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14)
            ? ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)
                ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_pc4_reg
                : ((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_ctrl_next_pc_sel_out))
                    ? ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_26)
                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__imm_generation_io_sb_imm
                        : ((IData)(4U) + vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc__DOT__reg_))
                    : ((2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_ctrl_next_pc_sel_out))
                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__imm_generation_io_uj_imm
                        : ((3U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_ctrl_next_pc_sel_out))
                            ? (0xfffffffeU & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__jalr__DOT___GEN_0))
                            : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_fetch_mret_inst_o)
                                ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MEPC__DOT__rdata_q
                                : ((IData)(4U) + vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc__DOT__reg_))))))
            : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_31)
                ? (0x2cU | (0xffffff00U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MTVEC__DOT__rdata_q))
                : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc__DOT__reg_));
    if ((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_op))) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE_io_i_counter_val 
            = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile_io_i_csr_wdata;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET_io_i_counter_val 
            = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile_io_i_csr_wdata;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_io_i_counter_val 
            = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile_io_i_csr_wdata;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1_io_i_counter_val 
            = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile_io_i_csr_wdata;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2_io_i_counter_val 
            = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile_io_i_csr_wdata;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3_io_i_counter_val 
            = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile_io_i_csr_wdata;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4_io_i_counter_val 
            = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile_io_i_csr_wdata;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5_io_i_counter_val 
            = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile_io_i_csr_wdata;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6_io_i_counter_val 
            = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile_io_i_csr_wdata;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7_io_i_counter_val 
            = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile_io_i_csr_wdata;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8_io_i_counter_val 
            = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile_io_i_csr_wdata;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9_io_i_counter_val 
            = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile_io_i_csr_wdata;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
            = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile_io_i_csr_wdata;
    } else {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE_io_i_counter_val 
            = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_372;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET_io_i_counter_val 
            = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_372;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_io_i_counter_val 
            = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_372;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1_io_i_counter_val 
            = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_372;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2_io_i_counter_val 
            = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_372;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3_io_i_counter_val 
            = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_372;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4_io_i_counter_val 
            = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_372;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5_io_i_counter_val 
            = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_372;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6_io_i_counter_val 
            = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_372;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7_io_i_counter_val 
            = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_372;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8_io_i_counter_val 
            = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_372;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9_io_i_counter_val 
            = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_372;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
            = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_372;
    }
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE__DOT__counter_load 
        = (((QData)((IData)(((1U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                              ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE_io_i_counter_val
                              : (IData)((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE__DOT__counter_q 
                                         >> 0x20U))))) 
            << 0x20U) | (QData)((IData)(((1U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                          ? (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE__DOT__counter_q)
                                          : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE_io_i_counter_val))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET__DOT__counter_load 
        = (((QData)((IData)(((4U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                              ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET_io_i_counter_val
                              : (IData)((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET__DOT__counter_q 
                                         >> 0x20U))))) 
            << 0x20U) | (QData)((IData)(((4U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                          ? (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET__DOT__counter_q)
                                          : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET_io_i_counter_val))));
    VL_EXTEND_WQ(80,40, __Vtemp71, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_q);
    VL_EXTEND_WQ(80,40, __Vtemp72, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_load 
        = (((QData)((IData)(((8U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                              ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_io_i_counter_val
                              : __Vtemp71[1U]))) << 0x20U) 
           | (QData)((IData)(((8U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                               ? __Vtemp72[0U] : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_io_i_counter_val))));
    VL_EXTEND_WQ(80,40, __Vtemp73, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_q);
    VL_EXTEND_WQ(80,40, __Vtemp74, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_load 
        = (((QData)((IData)(((0x10U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                              ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1_io_i_counter_val
                              : __Vtemp73[1U]))) << 0x20U) 
           | (QData)((IData)(((0x10U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                               ? __Vtemp74[0U] : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1_io_i_counter_val))));
    VL_EXTEND_WQ(80,40, __Vtemp75, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_q);
    VL_EXTEND_WQ(80,40, __Vtemp76, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_load 
        = (((QData)((IData)(((0x20U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                              ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2_io_i_counter_val
                              : __Vtemp75[1U]))) << 0x20U) 
           | (QData)((IData)(((0x20U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                               ? __Vtemp76[0U] : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2_io_i_counter_val))));
    VL_EXTEND_WQ(80,40, __Vtemp77, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_q);
    VL_EXTEND_WQ(80,40, __Vtemp78, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_load 
        = (((QData)((IData)(((0x40U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                              ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3_io_i_counter_val
                              : __Vtemp77[1U]))) << 0x20U) 
           | (QData)((IData)(((0x40U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                               ? __Vtemp78[0U] : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3_io_i_counter_val))));
    VL_EXTEND_WQ(80,40, __Vtemp79, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_q);
    VL_EXTEND_WQ(80,40, __Vtemp80, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_load 
        = (((QData)((IData)(((0x80U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                              ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4_io_i_counter_val
                              : __Vtemp79[1U]))) << 0x20U) 
           | (QData)((IData)(((0x80U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                               ? __Vtemp80[0U] : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4_io_i_counter_val))));
    VL_EXTEND_WQ(80,40, __Vtemp81, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_q);
    VL_EXTEND_WQ(80,40, __Vtemp82, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_load 
        = (((QData)((IData)(((0x100U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                              ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5_io_i_counter_val
                              : __Vtemp81[1U]))) << 0x20U) 
           | (QData)((IData)(((0x100U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                               ? __Vtemp82[0U] : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5_io_i_counter_val))));
    VL_EXTEND_WQ(80,40, __Vtemp83, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_q);
    VL_EXTEND_WQ(80,40, __Vtemp84, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_load 
        = (((QData)((IData)(((0x200U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                              ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6_io_i_counter_val
                              : __Vtemp83[1U]))) << 0x20U) 
           | (QData)((IData)(((0x200U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                               ? __Vtemp84[0U] : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6_io_i_counter_val))));
    VL_EXTEND_WQ(80,40, __Vtemp85, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_q);
    VL_EXTEND_WQ(80,40, __Vtemp86, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_load 
        = (((QData)((IData)(((0x400U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                              ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7_io_i_counter_val
                              : __Vtemp85[1U]))) << 0x20U) 
           | (QData)((IData)(((0x400U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                               ? __Vtemp86[0U] : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7_io_i_counter_val))));
    VL_EXTEND_WQ(80,40, __Vtemp87, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_q);
    VL_EXTEND_WQ(80,40, __Vtemp88, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_load 
        = (((QData)((IData)(((0x800U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                              ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8_io_i_counter_val
                              : __Vtemp87[1U]))) << 0x20U) 
           | (QData)((IData)(((0x800U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                               ? __Vtemp88[0U] : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8_io_i_counter_val))));
    VL_EXTEND_WQ(80,40, __Vtemp89, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_q);
    VL_EXTEND_WQ(80,40, __Vtemp90, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_load 
        = (((QData)((IData)(((0x1000U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                              ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9_io_i_counter_val
                              : __Vtemp89[1U]))) << 0x20U) 
           | (QData)((IData)(((0x1000U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                               ? __Vtemp90[0U] : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9_io_i_counter_val))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_374 
        = (((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
            & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315)) 
               & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_317)) 
                  & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_319)) 
                     & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_321)) 
                        & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_323)) 
                           & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_325)) 
                              & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_327)) 
                                 & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_352)) 
                                    & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_354)) 
                                       & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_356)))))))))))
            ? (2U | (0x1ffdU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int))
            : (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mcountinhibit_q));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_368 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_fetch_mret_inst_o)
            ? 3U : (3U & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                           ? (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__priv_lvl_q)
                           : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)
                               ? (((3U != (3U & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                                 >> 2U))) 
                                   & (0U != (3U & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                                   >> 2U))))
                                   ? 3U : (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                           >> 0xbU))
                               : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                  >> 2U)))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS_io_i_wrdata 
        = (((0x20U & (((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)) 
                       & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)
                           ? (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                              >> 0x15U) : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                           >> 5U))) 
                      << 5U)) | ((0x10U & (((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)) 
                                            << 4U) 
                                           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q))) 
                                 | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_368) 
                                    << 2U))) | ((2U 
                                                 & (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_fetch_mret_inst_o) 
                                                     | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                                                         ? (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q)
                                                         : 
                                                        ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)
                                                          ? 
                                                         (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                                          >> 7U)
                                                          : 
                                                         ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                                          >> 1U)))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_fetch_mret_inst_o)
                                                       ? 
                                                      ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                                       >> 1U)
                                                       : 
                                                      ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)) 
                                                       & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)
                                                           ? 
                                                          (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                                           >> 3U)
                                                           : (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q)))))));
}

void VIbtida_top_dffram_cv::_eval_initial(VIbtida_top_dffram_cv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIbtida_top_dffram_cv::_eval_initial\n"); );
    VIbtida_top_dffram_cv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__wb_clk_i = vlTOPp->wb_clk_i;
}

void VIbtida_top_dffram_cv::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIbtida_top_dffram_cv::final\n"); );
    // Variables
    VIbtida_top_dffram_cv__Syms* __restrict vlSymsp = this->__VlSymsp;
    VIbtida_top_dffram_cv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VIbtida_top_dffram_cv::_eval_settle(VIbtida_top_dffram_cv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIbtida_top_dffram_cv::_eval_settle\n"); );
    VIbtida_top_dffram_cv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void VIbtida_top_dffram_cv::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIbtida_top_dffram_cv::_ctor_var_reset\n"); );
    // Body
    wb_clk_i = VL_RAND_RESET_I(1);
    wb_rst_i = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, la_data_in);
    VL_RAND_RESET_W(128, la_data_out);
    VL_RAND_RESET_W(128, la_oen);
    rx = VL_RAND_RESET_I(1);
    la_din = VL_RAND_RESET_I(16);
    io_in = VL_RAND_RESET_Q(38);
    io_out = VL_RAND_RESET_Q(38);
    io_oeb = VL_RAND_RESET_Q(38);
    Ibtida_top_dffram_cv__DOT__io_rx_i = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__reset = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_io_stall_core_i = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_be_i = VL_RAND_RESET_I(4);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode = VL_RAND_RESET_I(3);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask = VL_RAND_RESET_I(4);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_valid = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_a_ready = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_d_o_0_a_valid = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_d_o_1_a_valid = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_dev_sel = VL_RAND_RESET_I(2);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__rx_data_reg = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__rx_addr_reg = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__reset_reg = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg = VL_RAND_RESET_I(2);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT___T_1 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT___T_6 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT___T_9 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT___T_10 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT___GEN_13 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT___GEN_16 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regDone = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__count = VL_RAND_RESET_I(3);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regFinalData = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regAddr = VL_RAND_RESET_I(14);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regValid = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__dataReg = VL_RAND_RESET_I(8);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regLSB1 = VL_RAND_RESET_I(8);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regLSB2 = VL_RAND_RESET_I(8);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regMSB1 = VL_RAND_RESET_I(8);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT___T_1 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT___T_4 = VL_RAND_RESET_I(3);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT___T_11 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT___T_14 = VL_RAND_RESET_I(14);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT___GEN_6 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT___T_15 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__stateReg = VL_RAND_RESET_I(3);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__clockCount = VL_RAND_RESET_I(8);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__bitIndex = VL_RAND_RESET_I(4);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__validReg = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__rxReg = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__shiftReg = VL_RAND_RESET_I(8);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_1 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_3 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_7 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_10 = VL_RAND_RESET_I(8);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_11 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_14 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_18 = VL_RAND_RESET_I(8);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_19 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_21 = VL_RAND_RESET_I(4);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_22 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_28 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_core_stall_i = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_ctrl_next_pc_sel_out = VL_RAND_RESET_I(2);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_fetch_mret_inst_o = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage_io_data_req_o = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage_io_stall = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__writeback_io_write_data = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__pc_reg = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__pc4_reg = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rs1_reg = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rs2_reg = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__imm_reg = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rd_sel_reg = VL_RAND_RESET_I(5);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rs1_sel_reg = VL_RAND_RESET_I(5);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rs2_sel_reg = VL_RAND_RESET_I(5);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg = VL_RAND_RESET_I(3);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func7_reg = VL_RAND_RESET_I(7);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__inst_op_reg = VL_RAND_RESET_I(7);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__csr_data_reg = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_MemWr_reg = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_MemRd_reg = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_RegWr_reg = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_CsrWen_reg = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_MemToReg_reg = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg = VL_RAND_RESET_I(4);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_OpA_sel_reg = VL_RAND_RESET_I(2);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_OpB_sel_reg = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_memWr = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_memRd = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_regWr = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_csrWen = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_memToReg = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rd_sel = VL_RAND_RESET_I(5);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_func3 = VL_RAND_RESET_I(3);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_csr_data = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_csrWen = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_memToReg = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_memRd = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel = VL_RAND_RESET_I(5);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_dataMem_data = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_alu_output = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_csr_data = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc_io_in = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_pc_reg = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_pc4_reg = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__handle_irq = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___GEN_0 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_26 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_31 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc__DOT__reg_ = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_IF_ID_INST = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_current_pc = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1 = VL_RAND_RESET_I(4);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs1 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs2 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_rs2 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__imm_generation_io_sb_imm = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__imm_generation_io_uj_imm = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__imm_generation_io_i_imm = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile_io_i_csr_wdata = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile_io_o_csr_rdata = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit_io_forward_rs1 = VL_RAND_RESET_I(3);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT___T_4 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT___T_45 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection__DOT___T_2 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection__DOT___T_3 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection__DOT___T_8 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_sb_type = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_i_type = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jalr_type = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jal_type = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_lui_type = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_Auipc = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_multiply = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_imm_type = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_type = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_op = VL_RAND_RESET_I(2);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_memRead = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_branch = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_csr_wen = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_extend_sel = VL_RAND_RESET_I(2);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode__DOT___T_12 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode__DOT___T_15 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode__DOT___T_18 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode__DOT___T_21 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode__DOT___T_24 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode__DOT___T_27 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode__DOT___GEN_4 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode__DOT___GEN_9 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_3 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_5 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_6 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_7 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___GEN_3 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___GEN_4 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_20 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_23 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_25 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_28 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_30 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_31 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_37 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_41 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_51 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_54 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_65 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_75 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___GEN_14 = VL_RAND_RESET_I(3);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___GEN_15 = VL_RAND_RESET_I(3);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_90 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_100 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_102 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_105 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_107 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_108 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_119 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_123 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_138 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_141 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_159 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_174 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_200 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_224 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___GEN_34 = VL_RAND_RESET_I(3);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_0 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_1 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_2 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_3 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_4 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_5 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_6 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_7 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_8 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_9 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_10 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_11 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_12 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_13 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_14 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_15 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_16 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_17 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_18 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_19 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_20 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_21 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_22 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_23 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_24 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_25 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_26 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_27 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_28 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_29 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_30 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_31 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT___GEN_13 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT___GEN_26 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT___GEN_45 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT___GEN_58 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__jalr__DOT__sum = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__jalr__DOT___GEN_0 = VL_RAND_RESET_Q(33);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS_io_i_wrdata = VL_RAND_RESET_I(6);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE_io_i_counter_val = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET_io_i_counter_val = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_io_i_counter_val = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1_io_i_counter_val = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2_io_i_counter_val = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3_io_i_counter_val = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4_io_i_counter_val = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5_io_i_counter_val = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6_io_i_counter_val = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7_io_i_counter_val = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8_io_i_counter_val = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9_io_i_counter_val = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__priv_lvl_q = VL_RAND_RESET_I(2);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mcountinhibit_q = VL_RAND_RESET_I(13);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_0 = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_1 = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_2 = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_3 = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_4 = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_5 = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_6 = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_7 = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_8 = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_9 = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_10 = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_11 = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_12 = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_13 = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_14 = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_15 = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_16 = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_17 = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_18 = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_19 = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_20 = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_21 = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_22 = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_23 = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_24 = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_25 = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_26 = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_27 = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_28 = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_29 = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_30 = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_31 = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_0 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_1 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_2 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_3 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_4 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_5 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_6 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_7 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_8 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_9 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_10 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_11 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_12 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_13 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_14 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_15 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_16 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_17 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_18 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_19 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_20 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_21 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_22 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_23 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_24 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_25 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_26 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_27 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_28 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_29 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_30 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_31 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wreq = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_129 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_157 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_186 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_216 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_218 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_249 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_279 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_281 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_99 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_13 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_26 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_45 = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_58 = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_63 = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_92 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_108 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_301 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_372 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_368 = VL_RAND_RESET_I(2);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_317 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_319 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_321 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_323 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_325 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_327 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_352 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_354 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_356 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_418 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_374 = VL_RAND_RESET_I(13);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q = VL_RAND_RESET_I(6);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MEPC__DOT__rdata_q = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MIE__DOT__rdata_q = VL_RAND_RESET_I(3);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSCRATCH__DOT__rdata_q = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MCAUSE__DOT__rdata_q = VL_RAND_RESET_I(6);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MTVAL__DOT__rdata_q = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MTVEC__DOT__rdata_q = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q = VL_RAND_RESET_I(28);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DEPC__DOT__rdata_q = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DSCRATCH0__DOT__rdata_q = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DSCRATCH1__DOT__rdata_q = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE__DOT__counter_q = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE__DOT__counter_load = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET__DOT__counter_q = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET__DOT__counter_load = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_q = VL_RAND_RESET_Q(40);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_load = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_q = VL_RAND_RESET_Q(40);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_load = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_q = VL_RAND_RESET_Q(40);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_load = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_q = VL_RAND_RESET_Q(40);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_load = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_q = VL_RAND_RESET_Q(40);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_load = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_q = VL_RAND_RESET_Q(40);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_load = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_q = VL_RAND_RESET_Q(40);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_load = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_q = VL_RAND_RESET_Q(40);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_load = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_q = VL_RAND_RESET_Q(40);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_load = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_q = VL_RAND_RESET_Q(40);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_load = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_4 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_7 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__hazard_in_decode_execute = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_14 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_19 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__hazard_in_decode_memory = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_26 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_33 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__csr_hazard_in_decode_execute = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__csr_hazard_in_decode_memory = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit_io_forward_a = VL_RAND_RESET_I(2);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit_io_forward_b = VL_RAND_RESET_I(2);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_a = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_b = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control_io_output = VL_RAND_RESET_I(5);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT___T_5 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT___GEN_7 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_4 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_5 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_6 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_8 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_13 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_15 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___GEN_3 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_35 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_37 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_40 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_54 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_3 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_6 = VL_RAND_RESET_Q(63);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_8 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_17 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_22 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_25 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_28 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_32 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_34 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___T_49 = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___GEN_12 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___GEN_13 = VL_RAND_RESET_Q(33);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___GEN_20 = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___GEN_27 = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___GEN_30 = VL_RAND_RESET_Q(64);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control__DOT___T_2 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control__DOT___T_93 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control__DOT___T_98 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control__DOT___GEN_8 = VL_RAND_RESET_I(5);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control__DOT___GEN_17 = VL_RAND_RESET_I(5);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___T_7 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___GEN_2 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___GEN_3 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___GEN_6 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___GEN_7 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___GEN_10 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___T_14 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT__load_unit__DOT___GEN_13 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT__load_unit__DOT___GEN_24 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_q = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_en_q = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__data_in_q = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT___T_6 = VL_RAND_RESET_I(16);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT___T_12 = VL_RAND_RESET_I(16);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT___T_20 = VL_RAND_RESET_I(16);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT___T_26 = VL_RAND_RESET_I(16);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter_io_we_o = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg_io_we = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_enable_reg_io_we = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_rising_reg_io_we = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_falling_reg_io_we = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvlhigh_reg_io_we = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvllow_reg_io_we = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT___T_111 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT___T_71 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT___T_76 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT___T_86 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT___T_91 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT___GEN_8 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__rdata_q = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__outstanding = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__a_ack = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT___GEN_1 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__tlErr__DOT___T_5 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__tlErr__DOT___T = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg__DOT__q_reg = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg__DOT__wr_data = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_enable_reg__DOT__q_reg = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__data_in_reg__DOT__q_reg = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_rising_reg__DOT__q_reg = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_falling_reg__DOT__q_reg = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvlhigh_reg__DOT__q_reg = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvllow_reg__DOT__q_reg = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__intr_hw__DOT__new_event = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__intr_hw__DOT___T_6 = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__iccm_tl_device__DOT__outstanding = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__error = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__outstanding = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__a_ack = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT___T_10 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT___GEN_5 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__tlErr__DOT___T_5 = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__tlErr__DOT___T = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2__DOT__tl_errResp__DOT__err_reqPending = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__DCCM__DOT__we_reg = VL_RAND_RESET_I(4);
    Ibtida_top_dffram_cv__DOT__DCCM__DOT__en_reg = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__DCCM__DOT__di_reg = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__DCCM__DOT__a_reg = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM[__Vi0] = VL_RAND_RESET_I(32);
    }
    Ibtida_top_dffram_cv__DOT__ICCM__DOT__we_reg = VL_RAND_RESET_I(4);
    Ibtida_top_dffram_cv__DOT__ICCM__DOT__en_reg = VL_RAND_RESET_I(1);
    Ibtida_top_dffram_cv__DOT__ICCM__DOT__di_reg = VL_RAND_RESET_I(32);
    Ibtida_top_dffram_cv__DOT__ICCM__DOT__a_reg = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
