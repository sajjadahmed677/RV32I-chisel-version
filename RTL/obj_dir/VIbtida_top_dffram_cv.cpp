// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIbtida_top_dffram_cv.h for the primary calling header

#include "VIbtida_top_dffram_cv.h"
#include "VIbtida_top_dffram_cv__Syms.h"

//==========

void VIbtida_top_dffram_cv::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VIbtida_top_dffram_cv::eval\n"); );
    VIbtida_top_dffram_cv__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VIbtida_top_dffram_cv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("Ibtida_top_dffram_cv.v", 8712, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VIbtida_top_dffram_cv::_eval_initial_loop(VIbtida_top_dffram_cv__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("Ibtida_top_dffram_cv.v", 8712, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VIbtida_top_dffram_cv::_sequent__TOP__1(VIbtida_top_dffram_cv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIbtida_top_dffram_cv::_sequent__TOP__1\n"); );
    VIbtida_top_dffram_cv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vdly__Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__bitIndex;
    CData/*7:0*/ __Vdlyvdim0__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v0;
    CData/*4:0*/ __Vdlyvlsb__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v0;
    CData/*7:0*/ __Vdlyvval__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v0;
    CData/*0:0*/ __Vdlyvset__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v0;
    CData/*7:0*/ __Vdlyvdim0__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v1;
    CData/*4:0*/ __Vdlyvlsb__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v1;
    CData/*7:0*/ __Vdlyvval__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v1;
    CData/*7:0*/ __Vdlyvdim0__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v2;
    CData/*4:0*/ __Vdlyvlsb__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v2;
    CData/*7:0*/ __Vdlyvval__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v2;
    CData/*7:0*/ __Vdlyvdim0__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v3;
    CData/*4:0*/ __Vdlyvlsb__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v3;
    CData/*7:0*/ __Vdlyvval__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v3;
    CData/*7:0*/ __Vdlyvdim0__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v0;
    CData/*4:0*/ __Vdlyvlsb__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v0;
    CData/*7:0*/ __Vdlyvval__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v0;
    CData/*0:0*/ __Vdlyvset__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v0;
    CData/*7:0*/ __Vdlyvdim0__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v1;
    CData/*4:0*/ __Vdlyvlsb__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v1;
    CData/*7:0*/ __Vdlyvval__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v1;
    CData/*7:0*/ __Vdlyvdim0__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v2;
    CData/*4:0*/ __Vdlyvlsb__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v2;
    CData/*7:0*/ __Vdlyvval__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v2;
    CData/*7:0*/ __Vdlyvdim0__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v3;
    CData/*4:0*/ __Vdlyvlsb__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v3;
    CData/*7:0*/ __Vdlyvval__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v3;
    WData/*95:0*/ __Vtemp1[3];
    WData/*95:0*/ __Vtemp2[3];
    WData/*95:0*/ __Vtemp3[3];
    WData/*95:0*/ __Vtemp4[3];
    WData/*95:0*/ __Vtemp5[3];
    WData/*95:0*/ __Vtemp6[3];
    WData/*95:0*/ __Vtemp7[3];
    WData/*95:0*/ __Vtemp8[3];
    WData/*95:0*/ __Vtemp9[3];
    WData/*95:0*/ __Vtemp10[3];
    WData/*95:0*/ __Vtemp11[3];
    WData/*95:0*/ __Vtemp12[3];
    WData/*95:0*/ __Vtemp13[3];
    WData/*95:0*/ __Vtemp14[3];
    WData/*95:0*/ __Vtemp15[3];
    WData/*95:0*/ __Vtemp16[3];
    WData/*95:0*/ __Vtemp17[3];
    WData/*95:0*/ __Vtemp18[3];
    WData/*95:0*/ __Vtemp19[3];
    WData/*95:0*/ __Vtemp20[3];
    WData/*127:0*/ __Vtemp21[4];
    WData/*95:0*/ __Vtemp24[3];
    WData/*95:0*/ __Vtemp25[3];
    WData/*95:0*/ __Vtemp27[3];
    WData/*95:0*/ __Vtemp28[3];
    WData/*95:0*/ __Vtemp29[3];
    WData/*95:0*/ __Vtemp31[3];
    WData/*95:0*/ __Vtemp32[3];
    WData/*95:0*/ __Vtemp33[3];
    WData/*95:0*/ __Vtemp34[3];
    WData/*95:0*/ __Vtemp35[3];
    WData/*95:0*/ __Vtemp36[3];
    WData/*95:0*/ __Vtemp37[3];
    WData/*95:0*/ __Vtemp38[3];
    WData/*95:0*/ __Vtemp39[3];
    WData/*95:0*/ __Vtemp40[3];
    WData/*95:0*/ __Vtemp41[3];
    WData/*95:0*/ __Vtemp42[3];
    WData/*95:0*/ __Vtemp43[3];
    WData/*95:0*/ __Vtemp44[3];
    WData/*95:0*/ __Vtemp45[3];
    WData/*95:0*/ __Vtemp46[3];
    WData/*95:0*/ __Vtemp47[3];
    WData/*95:0*/ __Vtemp48[3];
    WData/*95:0*/ __Vtemp49[3];
    WData/*95:0*/ __Vtemp50[3];
    // Body
    __Vdlyvset__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v0 = 0U;
    __Vdly__Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__bitIndex 
        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__bitIndex;
    __Vdlyvset__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v0 = 0U;
    vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__en_reg = 1U;
    vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__en_reg = 1U;
    vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__di_reg 
        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i;
    vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__we_reg 
        = ((0xfffffff8U & (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT___T_10) 
                            << 3U) & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask))) 
           | ((0xfffffffcU & (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT___T_10) 
                               << 2U) & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask))) 
              | (3U & ((- (IData)((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT___T_10))) 
                       & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask)))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__we_reg 
        = ((((0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg)) 
             & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT___GEN_13)) 
            << 3U) | ((((0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg)) 
                        & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT___GEN_13)) 
                       << 2U) | ((((0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg)) 
                                   & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT___GEN_13)) 
                                  << 1U) | ((0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg)) 
                                            & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT___GEN_13)))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__di_reg 
        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__rx_data_reg;
    vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__a_reg 
        = (0x3fU & ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg))
                     ? (0x3fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc_io_in 
                                 >> 2U)) : ((2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg))
                                             ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__rx_addr_reg
                                             : (0x3fU 
                                                & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc_io_in 
                                                   >> 2U)))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__a_reg 
        = (0x3fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output 
                    >> 2U));
    __Vdlyvval__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v0 
        = (0xffU & ((1U & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__we_reg))
                     ? vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__di_reg
                     : vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM
                    [(0xffU & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__a_reg) 
                               >> 2U))]));
    __Vdlyvset__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v0 = 1U;
    __Vdlyvlsb__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v0 = 0U;
    __Vdlyvdim0__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v0 
        = (0xffU & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__a_reg) 
                    >> 2U));
    __Vdlyvval__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v1 
        = (0xffU & ((2U & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__we_reg))
                     ? (vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__di_reg 
                        >> 8U) : (vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM
                                  [(0xffU & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__a_reg) 
                                             >> 2U))] 
                                  >> 8U)));
    __Vdlyvlsb__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v1 = 8U;
    __Vdlyvdim0__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v1 
        = (0xffU & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__a_reg) 
                    >> 2U));
    __Vdlyvval__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v2 
        = (0xffU & ((4U & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__we_reg))
                     ? (vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__di_reg 
                        >> 0x10U) : (vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM
                                     [(0xffU & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__a_reg) 
                                                >> 2U))] 
                                     >> 0x10U)));
    __Vdlyvlsb__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v2 = 0x10U;
    __Vdlyvdim0__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v2 
        = (0xffU & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__a_reg) 
                    >> 2U));
    __Vdlyvval__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v3 
        = (0xffU & ((8U & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__we_reg))
                     ? (vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__di_reg 
                        >> 0x18U) : (vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM
                                     [(0xffU & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__a_reg) 
                                                >> 2U))] 
                                     >> 0x18U)));
    __Vdlyvlsb__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v3 = 0x18U;
    __Vdlyvdim0__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v3 
        = (0xffU & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__a_reg) 
                    >> 2U));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__data_in_q 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__reset)
            ? 0U : (0x3fffffffU & (IData)((vlTOPp->io_in 
                                           >> 8U))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__rxReg 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__reset) 
           | (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T));
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvllow_reg__DOT__q_reg = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvllow_reg_io_we) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvllow_reg__DOT__q_reg 
                = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvllow_reg_io_we)
                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i
                    : 0U);
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvlhigh_reg__DOT__q_reg = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvlhigh_reg_io_we) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvlhigh_reg__DOT__q_reg 
                = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvlhigh_reg_io_we)
                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i
                    : 0U);
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_falling_reg__DOT__q_reg = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_falling_reg_io_we) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_falling_reg__DOT__q_reg 
                = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_falling_reg_io_we)
                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i
                    : 0U);
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_rising_reg__DOT__q_reg = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_rising_reg_io_we) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_rising_reg__DOT__q_reg 
                = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_rising_reg_io_we)
                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i
                    : 0U);
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        __Vdly__Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__bitIndex = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__stateReg))) {
            __Vdly__Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__bitIndex = 0U;
        } else {
            if ((1U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__stateReg))) {
                if ((2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__stateReg))) {
                    if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_14)))) {
                        __Vdly__Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__bitIndex 
                            = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_19)
                                ? (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_21)
                                : 0U);
                    }
                }
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__clockCount = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__stateReg))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__clockCount = 0U;
        } else {
            if ((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__stateReg))) {
                if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_7) {
                    if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__io_rx_i)))) {
                        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__clockCount = 0U;
                    }
                } else {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__clockCount 
                        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_10;
                }
            } else {
                if ((2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__stateReg))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__clockCount 
                        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_14)
                            ? (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_10)
                            : 0U);
                } else {
                    if ((3U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__stateReg))) {
                        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__clockCount 
                            = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_14)
                                ? (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_10)
                                : 0U);
                    }
                }
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regLSB1 = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__count))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regLSB1 
                = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__dataReg;
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regLSB2 = 0U;
    } else {
        if ((1U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__count))) {
            if ((2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__count))) {
                vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regLSB2 
                    = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__dataReg;
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regMSB1 = 0U;
    } else {
        if ((1U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__count))) {
            if ((2U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__count))) {
                if ((3U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__count))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regMSB1 
                        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__dataReg;
                }
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MTVEC__DOT__rdata_q = 1U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_io_stall_core_i)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MTVEC__DOT__rdata_q 
                = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_io_stall_core_i)
                    ? (1U | (0x7fffff80U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                            >> 1U)))
                    : 1U);
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MTVAL__DOT__rdata_q = 0U;
    } else {
        if (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o) 
             | ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
                & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315)) 
                   & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_317)) 
                      & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_319)) 
                         & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_321)) 
                            & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_323)))))))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MTVAL__DOT__rdata_q 
                = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                    ? 0U : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int);
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MCAUSE__DOT__rdata_q = 0U;
    } else {
        if (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o) 
             | ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
                & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315)) 
                   & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_317)) 
                      & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_319)) 
                         & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_321))))))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MCAUSE__DOT__rdata_q 
                = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                    ? ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14)
                        ? 0U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_31)
                                 ? 0x2bU : 0U)) : (
                                                   (0x20U 
                                                    & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                                       >> 0x1aU)) 
                                                   | (0x1fU 
                                                      & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int)));
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MEPC__DOT__rdata_q = 0U;
    } else {
        if (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o) 
             | ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
                & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315)) 
                   & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_317)) 
                      & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_319)))))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MEPC__DOT__rdata_q 
                = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                    ? ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                        ? (((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14)) 
                            & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_31))
                            ? ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14)
                                ? 0U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_31)
                                         ? ((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_ctrl_next_pc_sel_out))
                                             ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__imm_generation_io_sb_imm
                                             : ((2U 
                                                 == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_ctrl_next_pc_sel_out))
                                                 ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__imm_generation_io_uj_imm
                                                 : 
                                                ((3U 
                                                  == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_ctrl_next_pc_sel_out))
                                                  ? 
                                                 (0xfffffffeU 
                                                  & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__jalr__DOT___GEN_0))
                                                  : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc__DOT__reg_)))
                                         : 0U)) : 0U)
                        : 0U) : (0xfffffffeU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int));
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MIE__DOT__rdata_q = 4U;
    } else {
        if (((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
             & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MIE__DOT__rdata_q 
                = ((4U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                          >> 9U)) | ((2U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                            >> 6U)) 
                                     | (1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                              >> 3U))));
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__error = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__a_ack) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__error 
                = (1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__tlErr__DOT___T)));
        }
    }
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_29 = 0U;
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_28 = 0U;
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_31 = 0U;
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_27 = 0U;
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_30 = 0U;
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DEPC__DOT__rdata_q = 0U;
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q = 0U;
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mcountinhibit_q = 0U;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__intr_hw__DOT___T_6 = 0U;
    } else {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mcountinhibit_q 
            = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_374;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__intr_hw__DOT___T_6 
            = (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg__DOT__q_reg 
               & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_enable_reg__DOT__q_reg);
    }
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_25 = 0U;
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_24 = 0U;
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_16 = 0U;
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_23 = 0U;
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_21 = 0U;
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_17 = 0U;
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_20 = 0U;
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_19 = 0U;
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_26 = 0U;
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_14 = 0U;
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_15 = 0U;
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_18 = 0U;
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_22 = 0U;
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_31 = 0ULL;
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_28 = 0ULL;
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_30 = 0ULL;
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_27 = 0ULL;
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_29 = 0ULL;
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__priv_lvl_q = 3U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__priv_lvl_q = 3U;
        } else {
            if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_fetch_mret_inst_o) {
                vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__priv_lvl_q 
                    = (3U & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                             >> 2U));
            } else {
                if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__priv_lvl_q = 3U;
                }
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSCRATCH__DOT__rdata_q = 0U;
    } else {
        if (((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
             & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315)) 
                & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_317)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSCRATCH__DOT__rdata_q 
                = ((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_op))
                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile_io_i_csr_wdata
                    : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_372);
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DSCRATCH0__DOT__rdata_q = 0U;
    } else {
        if (((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
             & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315)) 
                & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_317)) 
                   & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_319)) 
                      & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_321)) 
                         & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_323)) 
                            & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_325)) 
                               & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_327)) 
                                  & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_352)))))))))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DSCRATCH0__DOT__rdata_q 
                = ((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_op))
                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile_io_i_csr_wdata
                    : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_372);
        }
    }
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_13 = 0U;
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_1 = 0U;
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DSCRATCH1__DOT__rdata_q = 0U;
    } else {
        if (((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
             & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315)) 
                & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_317)) 
                   & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_319)) 
                      & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_321)) 
                         & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_323)) 
                            & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_325)) 
                               & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_327)) 
                                  & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_352)) 
                                     & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_354))))))))))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DSCRATCH1__DOT__rdata_q 
                = ((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_op))
                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile_io_i_csr_wdata
                    : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_372);
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_19 = 0ULL;
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_14 = 0ULL;
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_15 = 0ULL;
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_16 = 0ULL;
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_17 = 0ULL;
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_18 = 0ULL;
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_20 = 0ULL;
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_21 = 0ULL;
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_22 = 0ULL;
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_23 = 0ULL;
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_24 = 0ULL;
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_25 = 0ULL;
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_26 = 0ULL;
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_12 = 0U;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_9 = 0U;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_8 = 0U;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_6 = 0U;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_5 = 0U;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_4 = 0U;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_2 = 0U;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_0 = 0U;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_3 = 0U;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_7 = 0U;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_10 = 0U;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_11 = 0U;
    } else {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_12 = 0x1000U;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_9 = 0x200U;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_8 = 0x100U;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_6 = 0x40U;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_5 = 0x20U;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_4 = 0x10U;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_2 = 4U;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_0 = 1U;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_3 = 8U;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_7 = 0x80U;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_10 = 0x400U;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_11 = 0x800U;
    }
    __Vdlyvval__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v0 
        = (0xffU & ((1U & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__we_reg))
                     ? vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__di_reg
                     : vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM
                    [(0xffU & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__a_reg) 
                               >> 2U))]));
    __Vdlyvset__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v0 = 1U;
    __Vdlyvlsb__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v0 = 0U;
    __Vdlyvdim0__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v0 
        = (0xffU & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__a_reg) 
                    >> 2U));
    __Vdlyvval__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v1 
        = (0xffU & ((2U & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__we_reg))
                     ? (vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__di_reg 
                        >> 8U) : (vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM
                                  [(0xffU & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__a_reg) 
                                             >> 2U))] 
                                  >> 8U)));
    __Vdlyvlsb__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v1 = 8U;
    __Vdlyvdim0__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v1 
        = (0xffU & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__a_reg) 
                    >> 2U));
    __Vdlyvval__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v2 
        = (0xffU & ((4U & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__we_reg))
                     ? (vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__di_reg 
                        >> 0x10U) : (vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM
                                     [(0xffU & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__a_reg) 
                                                >> 2U))] 
                                     >> 0x10U)));
    __Vdlyvlsb__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v2 = 0x10U;
    __Vdlyvdim0__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v2 
        = (0xffU & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__a_reg) 
                    >> 2U));
    __Vdlyvval__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v3 
        = (0xffU & ((8U & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__we_reg))
                     ? (vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__di_reg 
                        >> 0x18U) : (vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM
                                     [(0xffU & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__a_reg) 
                                                >> 2U))] 
                                     >> 0x18U)));
    __Vdlyvlsb__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v3 = 0x18U;
    __Vdlyvdim0__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v3 
        = (0xffU & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__a_reg) 
                    >> 2U));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_1 = 0ULL;
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_13 = 0ULL;
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_0 = 0ULL;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_2 = 0ULL;
    } else {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_0 
            = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE__DOT__counter_q;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_2 
            = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET__DOT__counter_q;
    }
    VL_EXTEND_WQ(80,40, __Vtemp1, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_12 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__reset)
            ? 0ULL : (((QData)((IData)(__Vtemp1[1U])) 
                       << 0x20U) | (QData)((IData)(
                                                   __Vtemp1[0U]))));
    VL_EXTEND_WQ(80,40, __Vtemp2, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_11 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__reset)
            ? 0ULL : (((QData)((IData)(__Vtemp2[1U])) 
                       << 0x20U) | (QData)((IData)(
                                                   __Vtemp2[0U]))));
    VL_EXTEND_WQ(80,40, __Vtemp3, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_8 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__reset)
            ? 0ULL : (((QData)((IData)(__Vtemp3[1U])) 
                       << 0x20U) | (QData)((IData)(
                                                   __Vtemp3[0U]))));
    VL_EXTEND_WQ(80,40, __Vtemp4, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_10 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__reset)
            ? 0ULL : (((QData)((IData)(__Vtemp4[1U])) 
                       << 0x20U) | (QData)((IData)(
                                                   __Vtemp4[0U]))));
    VL_EXTEND_WQ(80,40, __Vtemp5, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_7 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__reset)
            ? 0ULL : (((QData)((IData)(__Vtemp5[1U])) 
                       << 0x20U) | (QData)((IData)(
                                                   __Vtemp5[0U]))));
    VL_EXTEND_WQ(80,40, __Vtemp6, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_4 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__reset)
            ? 0ULL : (((QData)((IData)(__Vtemp6[1U])) 
                       << 0x20U) | (QData)((IData)(
                                                   __Vtemp6[0U]))));
    VL_EXTEND_WQ(80,40, __Vtemp7, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_9 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__reset)
            ? 0ULL : (((QData)((IData)(__Vtemp7[1U])) 
                       << 0x20U) | (QData)((IData)(
                                                   __Vtemp7[0U]))));
    VL_EXTEND_WQ(80,40, __Vtemp8, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_6 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__reset)
            ? 0ULL : (((QData)((IData)(__Vtemp8[1U])) 
                       << 0x20U) | (QData)((IData)(
                                                   __Vtemp8[0U]))));
    VL_EXTEND_WQ(80,40, __Vtemp9, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_3 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__reset)
            ? 0ULL : (((QData)((IData)(__Vtemp9[1U])) 
                       << 0x20U) | (QData)((IData)(
                                                   __Vtemp9[0U]))));
    VL_EXTEND_WQ(80,40, __Vtemp10, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_5 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__reset)
            ? 0ULL : (((QData)((IData)(__Vtemp10[1U])) 
                       << 0x20U) | (QData)((IData)(
                                                   __Vtemp10[0U]))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__outstanding 
        = ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__reset)) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT___GEN_1));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__outstanding 
        = ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__reset)) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT___GEN_5));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2__DOT__tl_errResp__DOT__err_reqPending 
        = ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__reset)) 
           & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage_io_data_req_o) 
              & (2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_dev_sel))));
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_memRd = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_memRd 
                = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_memRd;
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT___GEN_7;
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_memWr = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_memWr 
                = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_MemWr_reg;
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__pc4_reg = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__pc4_reg 
                = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_pc4_reg;
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__pc_reg = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__pc_reg 
                = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_pc_reg;
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_OpA_sel_reg = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_OpA_sel_reg 
                = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)
                    ? 0U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)
                             ? 0U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type)
                                      ? 0U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type)
                                               ? 0U
                                               : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_sb_type)
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_i_type)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jalr_type)
                                                     ? 2U
                                                     : 
                                                    ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jal_type)
                                                      ? 2U
                                                      : 
                                                     ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_lui_type)
                                                       ? 3U
                                                       : (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_Auipc))))))))));
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_OpB_sel_reg = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_OpB_sel_reg 
                = ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)) 
                   & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)) 
                      & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type) 
                         | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type) 
                            | ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_sb_type)) 
                               & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_i_type) 
                                  | ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jalr_type)) 
                                     & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jal_type)) 
                                        & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_lui_type) 
                                           | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_Auipc) 
                                              | (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode__DOT___GEN_9)))))))))));
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_en_q = 0U;
    } else {
        if ((((0x1cU == (0x3cU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
              & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter_io_we_o)) 
             & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_en_q 
                = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i;
        } else {
            if (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT___T_91) 
                 & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)))) {
                vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_en_q 
                    = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT___T_20) 
                       << 0x10U);
            } else {
                if (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT___T_86) 
                     & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_en_q 
                        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT___T_26;
                }
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg 
                = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)
                    ? 0U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)
                             ? 0U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type)
                                      ? 4U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type)
                                               ? 5U
                                               : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_sb_type)
                                                   ? 2U
                                                   : 
                                                  ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_i_type)
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jalr_type)
                                                     ? 3U
                                                     : 
                                                    ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jal_type)
                                                      ? 3U
                                                      : 
                                                     ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_lui_type)
                                                       ? 6U
                                                       : 
                                                      ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_Auipc)
                                                        ? 7U
                                                        : 
                                                       ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_multiply)
                                                         ? 9U
                                                         : 
                                                        ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_type)
                                                          ? 8U
                                                          : 
                                                         ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_imm_type)
                                                           ? 8U
                                                           : 0xcU)))))))))))));
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_csr_data = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_csr_data 
                = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_csr_data;
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_csrWen = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_csrWen 
                = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_csrWen;
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_memToReg = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_memToReg 
                = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_memToReg;
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__rdata_q = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__a_ack) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__rdata_q 
                = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__tlErr__DOT___T)
                    ? ((0U == (0x3cU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg__DOT__q_reg
                        : ((4U == (0x3cU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_enable_reg__DOT__q_reg
                            : ((8U == (0x3cU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                ? 0U : ((0xcU == (0x3cU 
                                                  & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                         ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__data_in_reg__DOT__q_reg
                                         : ((0x10U 
                                             == (0x3cU 
                                                 & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                             ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_q
                                             : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT___GEN_8)))))
                    : 0xffffffffU);
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_alu_output = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_alu_output 
                = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output;
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__imm_reg = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__imm_reg 
                = ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_extend_sel))
                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__imm_generation_io_i_imm
                    : ((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_extend_sel))
                        ? ((((0x80000000U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)
                              ? 0xfffffU : 0U) << 0xcU) 
                           | ((0xfe0U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                         >> 0x14U)) 
                              | (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                          >> 7U))))
                        : ((2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_extend_sel))
                            ? (IData)(((QData)((IData)(
                                                       ((((0x80000000U 
                                                           & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)
                                                           ? 0xfffU
                                                           : 0U) 
                                                         << 0x14U) 
                                                        | (0xfffffU 
                                                           & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                              >> 0xcU))))) 
                                       << 0xcU)) : 0U)));
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func7_reg = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func7_reg 
                = (0x7fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                            >> 0x19U));
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_dataMem_data = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_dataMem_data 
                = ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_func3))
                    ? ((0U == (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                        ? ((((0x80U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data)
                              ? 0xffffffU : 0U) << 8U) 
                           | (0xffU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data))
                        : ((1U == (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                            ? ((((0x8000U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data)
                                  ? 0xffffffU : 0U) 
                                << 8U) | (0xffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data 
                                                   >> 8U)))
                            : ((2U == (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                ? ((((0x800000U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data)
                                      ? 0xffffffU : 0U) 
                                    << 8U) | (0xffU 
                                              & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data 
                                                 >> 0x10U)))
                                : ((((0x80000000U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data)
                                      ? 0xffffffU : 0U) 
                                    << 8U) | (0xffU 
                                              & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data 
                                                 >> 0x18U))))))
                    : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT__load_unit__DOT___GEN_24);
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__inst_op_reg = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__inst_op_reg 
                = (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg);
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rs1_sel_reg = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rs1_sel_reg 
                = (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                            >> 0xfU));
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rs2_sel_reg = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rs2_sel_reg 
                = (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                            >> 0x14U));
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rs1_reg = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rs1_reg 
                = ((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_224) 
                     & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel) 
                        == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                     >> 0xfU)))) & 
                    (0x37U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)))
                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT___T_45
                    : ((0x37U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg))
                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1
                        : 0U));
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rs2_reg = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rs2_reg 
                = ((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_224) 
                     & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel) 
                        == (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                     >> 0x14U)))) & 
                    (0x37U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)))
                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT___T_45
                    : ((0x37U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg))
                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_rs2
                        : 0U));
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_31 = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr) {
            if ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                if ((0x1fU == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_31 = 0U;
                }
            } else {
                if ((0x1fU == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_31 
                        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData;
                }
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_30 = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr) {
            if ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                if ((0x1eU == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_30 = 0U;
                }
            } else {
                if ((0x1eU == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_30 
                        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData;
                }
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_29 = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr) {
            if ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                if ((0x1dU == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_29 = 0U;
                }
            } else {
                if ((0x1dU == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_29 
                        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData;
                }
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_28 = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr) {
            if ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                if ((0x1cU == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_28 = 0U;
                }
            } else {
                if ((0x1cU == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_28 
                        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData;
                }
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_27 = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr) {
            if ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                if ((0x1bU == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_27 = 0U;
                }
            } else {
                if ((0x1bU == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_27 
                        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData;
                }
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_26 = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr) {
            if ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                if ((0x1aU == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_26 = 0U;
                }
            } else {
                if ((0x1aU == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_26 
                        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData;
                }
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_25 = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr) {
            if ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                if ((0x19U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_25 = 0U;
                }
            } else {
                if ((0x19U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_25 
                        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData;
                }
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_24 = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr) {
            if ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                if ((0x18U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_24 = 0U;
                }
            } else {
                if ((0x18U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_24 
                        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData;
                }
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_23 = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr) {
            if ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                if ((0x17U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_23 = 0U;
                }
            } else {
                if ((0x17U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_23 
                        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData;
                }
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_22 = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr) {
            if ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                if ((0x16U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_22 = 0U;
                }
            } else {
                if ((0x16U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_22 
                        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData;
                }
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_21 = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr) {
            if ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                if ((0x15U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_21 = 0U;
                }
            } else {
                if ((0x15U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_21 
                        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData;
                }
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_19 = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr) {
            if ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                if ((0x13U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_19 = 0U;
                }
            } else {
                if ((0x13U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_19 
                        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData;
                }
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_18 = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr) {
            if ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                if ((0x12U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_18 = 0U;
                }
            } else {
                if ((0x12U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_18 
                        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData;
                }
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_17 = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr) {
            if ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                if ((0x11U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_17 = 0U;
                }
            } else {
                if ((0x11U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_17 
                        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData;
                }
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_16 = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr) {
            if ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                if ((0x10U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_16 = 0U;
                }
            } else {
                if ((0x10U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_16 
                        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData;
                }
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_15 = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr) {
            if ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                if ((0xfU == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_15 = 0U;
                }
            } else {
                if ((0xfU == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_15 
                        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData;
                }
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_14 = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr) {
            if ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                if ((0xeU == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_14 = 0U;
                }
            } else {
                if ((0xeU == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_14 
                        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData;
                }
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_20 = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr) {
            if ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                if ((0x14U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_20 = 0U;
                }
            } else {
                if ((0x14U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_20 
                        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData;
                }
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_5 = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr) {
            if ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                if ((5U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_5 = 0U;
                }
            } else {
                if ((5U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_5 
                        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData;
                }
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_4 = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr) {
            if ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                if ((4U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_4 = 0U;
                }
            } else {
                if ((4U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_4 
                        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData;
                }
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_2 = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr) {
            if ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                if ((2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_2 = 0U;
                }
            } else {
                if ((2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_2 
                        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData;
                }
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_7 = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr) {
            if ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                if ((7U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_7 = 0U;
                }
            } else {
                if ((7U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_7 
                        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData;
                }
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_12 = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr) {
            if ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                if ((0xcU == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_12 = 0U;
                }
            } else {
                if ((0xcU == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_12 
                        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData;
                }
            }
        }
    }
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_0 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__reset)
            ? 0U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr)
                     ? ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))
                         ? 0U : ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))
                                  ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData
                                  : 0U)) : 0U));
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_1 = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr) {
            if ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                if ((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_1 = 0U;
                }
            } else {
                if ((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_1 
                        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData;
                }
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_8 = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr) {
            if ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                if ((8U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_8 = 0U;
                }
            } else {
                if ((8U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_8 
                        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData;
                }
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_13 = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr) {
            if ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                if ((0xdU == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_13 = 0U;
                }
            } else {
                if ((0xdU == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_13 
                        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData;
                }
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_6 = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr) {
            if ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                if ((6U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_6 = 0U;
                }
            } else {
                if ((6U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_6 
                        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData;
                }
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_11 = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr) {
            if ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                if ((0xbU == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_11 = 0U;
                }
            } else {
                if ((0xbU == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_11 
                        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData;
                }
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_3 = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr) {
            if ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                if ((3U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_3 = 0U;
                }
            } else {
                if ((3U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_3 
                        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData;
                }
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_9 = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr) {
            if ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                if ((9U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_9 = 0U;
                }
            } else {
                if ((9U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_9 
                        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData;
                }
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_10 = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr) {
            if ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                if ((0xaU == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_10 = 0U;
                }
            } else {
                if ((0xaU == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_10 
                        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData;
                }
            }
        }
    }
    if (__Vdlyvset__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v0) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM[__Vdlyvdim0__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v0))) 
                & vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM
                [__Vdlyvdim0__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v0]) 
               | ((IData)(__Vdlyvval__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v0) 
                  << (IData)(__Vdlyvlsb__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v0)));
        vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM[__Vdlyvdim0__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v1))) 
                & vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM
                [__Vdlyvdim0__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v1]) 
               | ((IData)(__Vdlyvval__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v1) 
                  << (IData)(__Vdlyvlsb__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v1)));
        vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM[__Vdlyvdim0__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v2))) 
                & vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM
                [__Vdlyvdim0__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v2]) 
               | ((IData)(__Vdlyvval__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v2) 
                  << (IData)(__Vdlyvlsb__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v2)));
        vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM[__Vdlyvdim0__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v3))) 
                & vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM
                [__Vdlyvdim0__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v3]) 
               | ((IData)(__Vdlyvval__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v3) 
                  << (IData)(__Vdlyvlsb__Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM__v3)));
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__rx_data_reg = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg))) {
            if ((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg))) {
                vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__rx_data_reg 
                    = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regValid)
                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regFinalData
                        : 0U);
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__rx_addr_reg = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg))) {
            if ((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg))) {
                vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__rx_addr_reg 
                    = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regValid)
                        ? (0xffU & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regAddr))
                        : 0U);
            }
        }
    }
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__reset) 
           | (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__io_rx_i));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_10 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__clockCount)));
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__dataReg = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT___T_1) {
            if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__validReg) {
                vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__dataReg 
                    = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__shiftReg;
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q = 0xdU;
    } else {
        if (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_fetch_mret_inst_o) 
             | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o) 
                | (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q 
                = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS_io_i_wrdata;
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE__DOT__counter_q = 0ULL;
    } else {
        if ((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                   | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE__DOT__counter_q 
                = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE__DOT__counter_load;
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET__DOT__counter_q = 0ULL;
    } else {
        if ((4U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                   | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET__DOT__counter_q 
                = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET__DOT__counter_load;
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_q = 0ULL;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_q = 0ULL;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_q = 0ULL;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_q = 0ULL;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_q = 0ULL;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_q = 0ULL;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_q = 0ULL;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_q = 0ULL;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_q = 0ULL;
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_q = 0ULL;
    } else {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_q 
            = (0xffffffffffULL & ((0x1000U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                              | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313))
                                   ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_load
                                   : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter));
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_q 
            = (0xffffffffffULL & ((0x800U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                             | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313))
                                   ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_load
                                   : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter));
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_q 
            = (0xffffffffffULL & ((0x100U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                             | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313))
                                   ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_load
                                   : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter));
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_q 
            = (0xffffffffffULL & ((0x400U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                             | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313))
                                   ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_load
                                   : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter));
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_q 
            = (0xffffffffffULL & ((0x80U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                            | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313))
                                   ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_load
                                   : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter));
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_q 
            = (0xffffffffffULL & ((0x10U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                            | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313))
                                   ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_load
                                   : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter));
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_q 
            = (0xffffffffffULL & ((0x200U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                             | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313))
                                   ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_load
                                   : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter));
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_q 
            = (0xffffffffffULL & ((0x40U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                            | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313))
                                   ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_load
                                   : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter));
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_q 
            = (0xffffffffffULL & ((8U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                         | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313))
                                   ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_load
                                   : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter));
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_q 
            = (0xffffffffffULL & ((0x20U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                            | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313))
                                   ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_load
                                   : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter));
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_memRd = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_memRd 
                = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_MemRd_reg;
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_MemWr_reg = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_MemWr_reg 
                = ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)) 
                   & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)) 
                      & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type)) 
                         & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type))));
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14) {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward) {
            if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14) {
                vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_pc4_reg 
                    = ((IData)(4U) + vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc__DOT__reg_);
            }
        } else {
            if ((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_ctrl_next_pc_sel_out))) {
                if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_26) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_pc4_reg = 0U;
                } else {
                    if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14) {
                        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_pc4_reg 
                            = ((IData)(4U) + vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc__DOT__reg_);
                    }
                }
            } else {
                if ((2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_ctrl_next_pc_sel_out))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_pc4_reg = 0U;
                } else {
                    if ((3U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_ctrl_next_pc_sel_out))) {
                        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_pc4_reg = 0U;
                    } else {
                        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_fetch_mret_inst_o) {
                            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_pc4_reg = 0U;
                        } else {
                            if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14) {
                                vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_pc4_reg 
                                    = ((IData)(4U) 
                                       + vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc__DOT__reg_);
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_pc4_reg 
                = ((IData)(4U) + vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc__DOT__reg_);
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14) {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward) {
            if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14) {
                if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_pc_reg 
                        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_current_pc;
                } else {
                    if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14) {
                        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_pc_reg 
                            = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc__DOT__reg_;
                    }
                }
            } else {
                if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_pc_reg 
                        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc__DOT__reg_;
                }
            }
        } else {
            if ((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_ctrl_next_pc_sel_out))) {
                if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_26) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_pc_reg = 0U;
                } else {
                    if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14) {
                        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward) {
                            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_pc_reg 
                                = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_current_pc;
                        } else {
                            if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14) {
                                vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_pc_reg 
                                    = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc__DOT__reg_;
                            }
                        }
                    } else {
                        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14) {
                            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_pc_reg 
                                = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc__DOT__reg_;
                        }
                    }
                }
            } else {
                vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_pc_reg 
                    = ((2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_ctrl_next_pc_sel_out))
                        ? 0U : ((3U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_ctrl_next_pc_sel_out))
                                 ? 0U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_fetch_mret_inst_o)
                                          ? 0U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14)
                                                   ? 
                                                  ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)
                                                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_current_pc
                                                    : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___GEN_0)
                                                   : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___GEN_0))));
            }
        }
    } else {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_pc_reg 
            = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14)
                ? ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)
                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_current_pc
                    : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___GEN_0)
                : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___GEN_0);
    }
    vlTOPp->io_oeb = ((0xffULL & vlTOPp->io_oeb) | 
                      ((QData)((IData)((0x3fffffffU 
                                        & (~ vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_en_q)))) 
                       << 8U));
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_csr_data = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_csr_data 
                = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__csr_data_reg;
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_csrWen = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_csrWen 
                = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_CsrWen_reg;
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_memToReg = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_memToReg 
                = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_MemToReg_reg;
        }
    }
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__data_in_reg__DOT__q_reg 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__reset)
            ? 0U : (0x3fffffffU & (IData)((vlTOPp->io_in 
                                           >> 8U))));
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg__DOT__q_reg = 0U;
    } else {
        if (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg_io_we) 
             | (0U != vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__intr_hw__DOT__new_event))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg__DOT__q_reg 
                = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg__DOT__wr_data;
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_enable_reg__DOT__q_reg = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_enable_reg_io_we) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_enable_reg__DOT__q_reg 
                = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_enable_reg_io_we)
                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i
                    : 0U);
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_q = 0U;
    } else {
        if ((((0x10U == (0x3cU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
              & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter_io_we_o)) 
             & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_q 
                = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i;
        } else {
            if (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT___T_76) 
                 & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)))) {
                vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_q 
                    = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT___T_6) 
                       << 0x10U);
            } else {
                if (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT___T_71) 
                     & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)))) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_q 
                        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT___T_12;
                }
            }
        }
    }
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__writeback_io_write_data 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_memToReg)
            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_dataMem_data
            : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_alu_output);
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_func3 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_func3 
                = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg;
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr 
                = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_regWr;
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel 
                = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rd_sel;
        }
    }
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_csrWen)
            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_csr_data
            : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__writeback_io_write_data);
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regFinalData = 0U;
    } else {
        if ((1U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__count))) {
            if ((2U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__count))) {
                if ((3U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__count))) {
                    if ((4U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__count))) {
                        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regFinalData 
                            = ((0xfffU == vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT___T_11)
                                ? 0U : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT___T_11);
                    }
                }
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regAddr = 0x3fffU;
    } else {
        if ((1U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__count))) {
            if ((2U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__count))) {
                if ((3U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__count))) {
                    if ((4U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__count))) {
                        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regAddr 
                            = ((0xfffU == vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT___T_11)
                                ? 0U : (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT___T_14));
                    }
                }
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT___T_1) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg 
                = (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__reset_reg) 
                    & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__reset)))
                    ? 1U : 0U);
        } else {
            if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT___T_6) {
                vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg 
                    = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regValid)
                        ? 2U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regDone)
                                 ? 3U : 1U));
            } else {
                if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT___T_9) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg 
                        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regDone)
                            ? 3U : 1U);
                } else {
                    if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT___T_10) {
                        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg = 0U;
                    }
                }
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__shiftReg = 0x41U;
    } else {
        if ((0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__stateReg))) {
            if ((1U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__stateReg))) {
                if ((2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__stateReg))) {
                    if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_14)))) {
                        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__shiftReg 
                            = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_18;
                    }
                }
            }
        }
    }
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__handle_irq 
        = (((0U != vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__intr_hw__DOT___T_6) 
            & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MIE__DOT__rdata_q) 
               >> 2U)) & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q));
    VL_EXTEND_WQ(80,40, __Vtemp11, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter 
        = (((QData)((IData)(__Vtemp11[1U])) << 0x20U) 
           | (QData)((IData)(__Vtemp11[0U])));
    VL_EXTEND_WQ(80,40, __Vtemp12, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter 
        = (((QData)((IData)(__Vtemp12[1U])) << 0x20U) 
           | (QData)((IData)(__Vtemp12[0U])));
    VL_EXTEND_WQ(80,40, __Vtemp13, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter 
        = (((QData)((IData)(__Vtemp13[1U])) << 0x20U) 
           | (QData)((IData)(__Vtemp13[0U])));
    VL_EXTEND_WQ(80,40, __Vtemp14, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter 
        = (((QData)((IData)(__Vtemp14[1U])) << 0x20U) 
           | (QData)((IData)(__Vtemp14[0U])));
    VL_EXTEND_WQ(80,40, __Vtemp15, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter 
        = (((QData)((IData)(__Vtemp15[1U])) << 0x20U) 
           | (QData)((IData)(__Vtemp15[0U])));
    VL_EXTEND_WQ(80,40, __Vtemp16, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter 
        = (((QData)((IData)(__Vtemp16[1U])) << 0x20U) 
           | (QData)((IData)(__Vtemp16[0U])));
    VL_EXTEND_WQ(80,40, __Vtemp17, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter 
        = (((QData)((IData)(__Vtemp17[1U])) << 0x20U) 
           | (QData)((IData)(__Vtemp17[0U])));
    VL_EXTEND_WQ(80,40, __Vtemp18, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter 
        = (((QData)((IData)(__Vtemp18[1U])) << 0x20U) 
           | (QData)((IData)(__Vtemp18[0U])));
    VL_EXTEND_WQ(80,40, __Vtemp19, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter 
        = (((QData)((IData)(__Vtemp19[1U])) << 0x20U) 
           | (QData)((IData)(__Vtemp19[0U])));
    VL_EXTEND_WQ(80,40, __Vtemp20, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter 
        = (((QData)((IData)(__Vtemp20[1U])) << 0x20U) 
           | (QData)((IData)(__Vtemp20[0U])));
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_MemRd_reg = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_MemRd_reg 
                = ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)) 
                   & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_memRead));
        }
    }
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_current_pc 
        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_pc_reg;
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc__DOT__reg_ 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__reset)
            ? 0x2cU : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc_io_in);
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__csr_data_reg = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__csr_data_reg 
                = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile_io_o_csr_rdata;
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_CsrWen_reg = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_CsrWen_reg 
                = ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)) 
                   & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_csr_wen));
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_MemToReg_reg = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_MemToReg_reg 
                = ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)) 
                   & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)) 
                      & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type)));
        }
    }
    vlTOPp->io_out = ((0xffULL & vlTOPp->io_out) | 
                      ((QData)((IData)((0x3fffffffU 
                                        & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_q))) 
                       << 8U));
    VL_EXTEND_WI(128,30, __Vtemp21, (0x3fffffffU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_q));
    vlTOPp->la_data_out[0U] = __Vtemp21[0U];
    vlTOPp->la_data_out[1U] = __Vtemp21[1U];
    vlTOPp->la_data_out[2U] = __Vtemp21[2U];
    vlTOPp->la_data_out[3U] = __Vtemp21[3U];
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output 
                = (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___GEN_30);
        }
    }
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___T_7 
        = ((2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_func3)) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_memWr));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___T_14 
        = ((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_func3)) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_memWr));
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg 
                = (7U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                         >> 0xcU));
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_regWr = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_regWr 
                = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_RegWr_reg;
        }
    }
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_141 
        = ((0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel)) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_memRd));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_90 
        = ((0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel)) 
           & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_memRd)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_35 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel) 
           == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rs1_sel_reg));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_37 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel) 
           == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rs2_sel_reg));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_224 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr) 
           & (0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel)));
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rd_sel = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rd_sel 
                = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rd_sel_reg;
        }
    }
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT___T_14 
        = (0x3fffU & ((IData)(1U) + (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regAddr)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__reset_reg 
        = vlTOPp->Ibtida_top_dffram_cv__DOT__reset;
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regDone = 0U;
    } else {
        if ((1U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__count))) {
            if ((2U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__count))) {
                if ((3U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__count))) {
                    if ((4U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__count))) {
                        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regDone 
                            = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT___GEN_6;
                    }
                }
            }
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regValid = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__count))) {
            if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT___T_1) {
                if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__validReg) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regValid = 0U;
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__count))) {
                if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT___T_1) {
                    if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__validReg) {
                        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regValid = 0U;
                    }
                }
            } else {
                if ((3U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__count))) {
                    if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT___T_1) {
                        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__validReg) {
                            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regValid = 0U;
                        }
                    }
                } else {
                    if ((4U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__count))) {
                        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regValid 
                            = (0xfffU != vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT___T_11);
                    } else {
                        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT___T_1) {
                            if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__validReg) {
                                vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regValid = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
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
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT___T_5 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_csrWen)
            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_csr_data
            : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output);
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
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_RegWr_reg = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_RegWr_reg 
                = ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)) 
                   & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type) 
                      | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type) 
                         | ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type)) 
                            & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_sb_type)) 
                               & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_i_type) 
                                  | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jalr_type) 
                                     | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jal_type) 
                                        | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_lui_type) 
                                           | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_Auipc) 
                                              | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_multiply) 
                                                 | (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode__DOT___GEN_4))))))))))));
        }
    }
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rd_sel_reg = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall)))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rd_sel_reg 
                = (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                            >> 7U));
        }
    }
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_54 
        = ((0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rd_sel)) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_memRd));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_20 
        = ((0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rd_sel)) 
           & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_memRd)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_5 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rd_sel) 
           == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rs2_sel_reg));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_200 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_regWr) 
           & (0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rd_sel)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT___T_11 
        = (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__dataReg) 
            << 0x18U) | (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regMSB1) 
                          << 0x10U) | (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regLSB2) 
                                        << 8U) | (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regLSB1))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_io_stall_core_i 
        = ((0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg)) 
           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT___GEN_16));
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
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT___GEN_6 
        = ((0xfffU == vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT___T_11) 
           | (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regDone));
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__count = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT___T_15) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__count = 0U;
        } else {
            if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT___T_1) {
                if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__validReg) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__count 
                        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT___T_4;
                }
            }
        }
    }
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
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_3 
        = ((0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rd_sel_reg)) 
           & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_MemRd_reg)));
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg = 0x13U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14) {
            if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward) {
                if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)
                            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_IF_ID_INST
                            : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__iccm_tl_device__DOT__outstanding)
                                ? vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM
                               [(0xffU & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__a_reg) 
                                          >> 2U))] : 0x13U));
                }
            } else {
                if ((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_ctrl_next_pc_sel_out))) {
                    if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_26) {
                        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg = 0x13U;
                    } else {
                        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14) {
                            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)
                                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_IF_ID_INST
                                    : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__iccm_tl_device__DOT__outstanding)
                                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM
                                       [(0xffU & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__a_reg) 
                                                  >> 2U))]
                                        : 0x13U));
                        }
                    }
                } else {
                    if ((2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_ctrl_next_pc_sel_out))) {
                        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg = 0x13U;
                    } else {
                        if ((3U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_ctrl_next_pc_sel_out))) {
                            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg = 0x13U;
                        } else {
                            if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_fetch_mret_inst_o) {
                                vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg = 0x13U;
                            } else {
                                if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14) {
                                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)
                                            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_IF_ID_INST
                                            : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__iccm_tl_device__DOT__outstanding)
                                                ? vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM
                                               [(0xffU 
                                                 & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__a_reg) 
                                                    >> 2U))]
                                                : 0x13U));
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_31) {
                vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg = 0x13U;
            } else {
                if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)
                            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_IF_ID_INST
                            : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__iccm_tl_device__DOT__outstanding)
                                ? vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM
                               [(0xffU & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__a_reg) 
                                          >> 2U))] : 0x13U));
                }
            }
        }
    }
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
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT___T_1 
        = (((0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg)) 
            & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT___GEN_16)) 
           & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regDone)));
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
    if (__Vdlyvset__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v0) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM[__Vdlyvdim0__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v0))) 
                & vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM
                [__Vdlyvdim0__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v0]) 
               | ((IData)(__Vdlyvval__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v0) 
                  << (IData)(__Vdlyvlsb__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v0)));
        vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM[__Vdlyvdim0__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v1))) 
                & vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM
                [__Vdlyvdim0__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v1]) 
               | ((IData)(__Vdlyvval__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v1) 
                  << (IData)(__Vdlyvlsb__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v1)));
        vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM[__Vdlyvdim0__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v2))) 
                & vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM
                [__Vdlyvdim0__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v2]) 
               | ((IData)(__Vdlyvval__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v2) 
                  << (IData)(__Vdlyvlsb__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v2)));
        vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM[__Vdlyvdim0__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v3))) 
                & vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM
                [__Vdlyvdim0__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v3]) 
               | ((IData)(__Vdlyvval__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v3) 
                  << (IData)(__Vdlyvlsb__Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM__v3)));
    }
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_40 
        = (((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_224) 
              & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_6))) 
             & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_35)) 
            & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_37)) 
           & (0x37U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__inst_op_reg)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_8 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit__DOT___T_6) 
           & (0x37U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__inst_op_reg)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT___T_4 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__count)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT___T_15 
        = (4U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__count));
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__validReg = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__stateReg))) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__validReg = 0U;
        } else {
            if ((1U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__stateReg))) {
                if ((2U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__stateReg))) {
                    if ((3U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__stateReg))) {
                        if ((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_14)))) {
                            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__validReg = 1U;
                        }
                    } else {
                        if ((4U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__stateReg))) {
                            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__validReg = 0U;
                        }
                    }
                }
            }
        }
    }
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
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__iccm_tl_device__DOT__outstanding 
        = (1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__reset)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_IF_ID_INST 
        = vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg;
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT___T_45 
        = ((0x37U != (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg))
            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData
            : 0U);
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
    if (vlTOPp->Ibtida_top_dffram_cv__DOT__reset) {
        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__stateReg = 0U;
    } else {
        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_1) {
            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__stateReg 
                = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__io_rx_i)
                    ? 0U : 1U);
        } else {
            if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_3) {
                vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__stateReg 
                    = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_7)
                        ? ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__io_rx_i)
                            ? 0U : 2U) : 1U);
            } else {
                if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_11) {
                    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__stateReg 
                        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_14)
                            ? 2U : ((7U > (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__bitIndex))
                                     ? 2U : 3U));
                } else {
                    if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_22) {
                        vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__stateReg 
                            = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_14)
                                ? 3U : 4U);
                    } else {
                        if (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_28) {
                            vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__stateReg = 0U;
                        }
                    }
                }
            }
        }
    }
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
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__bitIndex 
        = __Vdly__Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__bitIndex;
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
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_19 
        = (7U > (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__bitIndex));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_21 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__bitIndex)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_1 
        = (0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__stateReg));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_3 
        = (1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__stateReg));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_11 
        = (2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__stateReg));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_22 
        = (3U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__stateReg));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_28 
        = (4U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__stateReg));
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
    VL_EXTENDS_WQ(65,33, __Vtemp24, (((QData)((IData)(
                                                      (1U 
                                                       & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_a 
                                                          >> 0x1fU)))) 
                                      << 0x20U) | (QData)((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_a))));
    __Vtemp25[0U] = __Vtemp24[0U];
    __Vtemp25[1U] = __Vtemp24[1U];
    __Vtemp25[2U] = (1U & __Vtemp24[2U]);
    VL_EXTENDS_WQ(65,33, __Vtemp27, (QData)((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_b)));
    __Vtemp28[0U] = __Vtemp27[0U];
    __Vtemp28[1U] = __Vtemp27[1U];
    __Vtemp28[2U] = (1U & __Vtemp27[2U]);
    VL_MULS_WWW(65,65,65, __Vtemp29, __Vtemp25, __Vtemp28);
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
                                                 __Vtemp29[1U]
                                                  : (IData)(
                                                            (((QData)((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_a)) 
                                                              * (QData)((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_b))) 
                                                             >> 0x20U)))))));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT___T_111) 
           & (0xfU != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask)));
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
    VL_EXTEND_WQ(80,40, __Vtemp31, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_q);
    VL_EXTEND_WQ(80,40, __Vtemp32, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_load 
        = (((QData)((IData)(((8U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                              ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_io_i_counter_val
                              : __Vtemp31[1U]))) << 0x20U) 
           | (QData)((IData)(((8U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                               ? __Vtemp32[0U] : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_io_i_counter_val))));
    VL_EXTEND_WQ(80,40, __Vtemp33, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_q);
    VL_EXTEND_WQ(80,40, __Vtemp34, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_load 
        = (((QData)((IData)(((0x10U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                              ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1_io_i_counter_val
                              : __Vtemp33[1U]))) << 0x20U) 
           | (QData)((IData)(((0x10U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                               ? __Vtemp34[0U] : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1_io_i_counter_val))));
    VL_EXTEND_WQ(80,40, __Vtemp35, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_q);
    VL_EXTEND_WQ(80,40, __Vtemp36, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_load 
        = (((QData)((IData)(((0x20U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                              ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2_io_i_counter_val
                              : __Vtemp35[1U]))) << 0x20U) 
           | (QData)((IData)(((0x20U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                               ? __Vtemp36[0U] : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2_io_i_counter_val))));
    VL_EXTEND_WQ(80,40, __Vtemp37, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_q);
    VL_EXTEND_WQ(80,40, __Vtemp38, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_load 
        = (((QData)((IData)(((0x40U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                              ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3_io_i_counter_val
                              : __Vtemp37[1U]))) << 0x20U) 
           | (QData)((IData)(((0x40U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                               ? __Vtemp38[0U] : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3_io_i_counter_val))));
    VL_EXTEND_WQ(80,40, __Vtemp39, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_q);
    VL_EXTEND_WQ(80,40, __Vtemp40, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_load 
        = (((QData)((IData)(((0x80U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                              ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4_io_i_counter_val
                              : __Vtemp39[1U]))) << 0x20U) 
           | (QData)((IData)(((0x80U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                               ? __Vtemp40[0U] : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4_io_i_counter_val))));
    VL_EXTEND_WQ(80,40, __Vtemp41, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_q);
    VL_EXTEND_WQ(80,40, __Vtemp42, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_load 
        = (((QData)((IData)(((0x100U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                              ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5_io_i_counter_val
                              : __Vtemp41[1U]))) << 0x20U) 
           | (QData)((IData)(((0x100U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                               ? __Vtemp42[0U] : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5_io_i_counter_val))));
    VL_EXTEND_WQ(80,40, __Vtemp43, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_q);
    VL_EXTEND_WQ(80,40, __Vtemp44, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_load 
        = (((QData)((IData)(((0x200U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                              ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6_io_i_counter_val
                              : __Vtemp43[1U]))) << 0x20U) 
           | (QData)((IData)(((0x200U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                               ? __Vtemp44[0U] : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6_io_i_counter_val))));
    VL_EXTEND_WQ(80,40, __Vtemp45, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_q);
    VL_EXTEND_WQ(80,40, __Vtemp46, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_load 
        = (((QData)((IData)(((0x400U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                              ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7_io_i_counter_val
                              : __Vtemp45[1U]))) << 0x20U) 
           | (QData)((IData)(((0x400U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                               ? __Vtemp46[0U] : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7_io_i_counter_val))));
    VL_EXTEND_WQ(80,40, __Vtemp47, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_q);
    VL_EXTEND_WQ(80,40, __Vtemp48, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_load 
        = (((QData)((IData)(((0x800U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                              ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8_io_i_counter_val
                              : __Vtemp47[1U]))) << 0x20U) 
           | (QData)((IData)(((0x800U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                               ? __Vtemp48[0U] : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8_io_i_counter_val))));
    VL_EXTEND_WQ(80,40, __Vtemp49, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_q);
    VL_EXTEND_WQ(80,40, __Vtemp50, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_q);
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_load 
        = (((QData)((IData)(((0x1000U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                              ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9_io_i_counter_val
                              : __Vtemp49[1U]))) << 0x20U) 
           | (QData)((IData)(((0x1000U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                               ? __Vtemp50[0U] : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9_io_i_counter_val))));
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

VL_INLINE_OPT void VIbtida_top_dffram_cv::_combo__TOP__3(VIbtida_top_dffram_cv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIbtida_top_dffram_cv::_combo__TOP__3\n"); );
    VIbtida_top_dffram_cv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_7 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__clockCount) 
           == (((0xffffU & vlTOPp->la_data_in[1U]) 
                - (IData)(1U)) >> 1U));
    vlTOPp->Ibtida_top_dffram_cv__DOT__io_rx_i = (1U 
                                                  & ((1U 
                                                      & vlTOPp->la_oen[2U])
                                                      ? (IData)(vlTOPp->rx)
                                                      : 
                                                     vlTOPp->la_data_in[2U]));
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT___T_14 
        = ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__clockCount) 
           < ((0xffffU & vlTOPp->la_data_in[1U]) - (IData)(1U)));
    vlTOPp->Ibtida_top_dffram_cv__DOT__reset = (1U 
                                                & ((1U 
                                                    & vlTOPp->la_oen[0U])
                                                    ? (IData)(vlTOPp->wb_rst_i)
                                                    : 
                                                   vlTOPp->la_data_in[0U]));
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
    vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg__DOT__wr_data 
        = (((0U != vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__intr_hw__DOT__new_event)
             ? (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__intr_hw__DOT__new_event 
                | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg__DOT__q_reg)
             : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg__DOT__q_reg) 
           & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg_io_we)
               ? (~ vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i)
               : 0xffffffffU));
}

void VIbtida_top_dffram_cv::_eval(VIbtida_top_dffram_cv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIbtida_top_dffram_cv::_eval\n"); );
    VIbtida_top_dffram_cv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->wb_clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__wb_clk_i)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    // Final
    vlTOPp->__Vclklast__TOP__wb_clk_i = vlTOPp->wb_clk_i;
}

VL_INLINE_OPT QData VIbtida_top_dffram_cv::_change_request(VIbtida_top_dffram_cv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIbtida_top_dffram_cv::_change_request\n"); );
    VIbtida_top_dffram_cv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VIbtida_top_dffram_cv::_change_request_1(VIbtida_top_dffram_cv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIbtida_top_dffram_cv::_change_request_1\n"); );
    VIbtida_top_dffram_cv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VIbtida_top_dffram_cv::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIbtida_top_dffram_cv::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((wb_clk_i & 0xfeU))) {
        Verilated::overWidthError("wb_clk_i");}
    if (VL_UNLIKELY((wb_rst_i & 0xfeU))) {
        Verilated::overWidthError("wb_rst_i");}
    if (VL_UNLIKELY((rx & 0xfeU))) {
        Verilated::overWidthError("rx");}
    if (VL_UNLIKELY((io_in & 0ULL))) {
        Verilated::overWidthError("io_in");}
}
#endif  // VL_DEBUG
