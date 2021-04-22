// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VIbtida_top_dffram_cv__Syms.h"


void VIbtida_top_dffram_cv::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VIbtida_top_dffram_cv__Syms* __restrict vlSymsp = static_cast<VIbtida_top_dffram_cv__Syms*>(userp);
    VIbtida_top_dffram_cv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VIbtida_top_dffram_cv::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VIbtida_top_dffram_cv__Syms* __restrict vlSymsp = static_cast<VIbtida_top_dffram_cv__Syms*>(userp);
    VIbtida_top_dffram_cv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp141[3];
    WData/*95:0*/ __Vtemp142[3];
    WData/*95:0*/ __Vtemp143[3];
    WData/*95:0*/ __Vtemp144[3];
    WData/*95:0*/ __Vtemp145[3];
    WData/*95:0*/ __Vtemp146[3];
    WData/*95:0*/ __Vtemp147[3];
    WData/*95:0*/ __Vtemp148[3];
    WData/*95:0*/ __Vtemp149[3];
    WData/*95:0*/ __Vtemp150[3];
    WData/*95:0*/ __Vtemp151[3];
    WData/*95:0*/ __Vtemp152[3];
    WData/*95:0*/ __Vtemp153[3];
    WData/*95:0*/ __Vtemp154[3];
    WData/*95:0*/ __Vtemp155[3];
    WData/*95:0*/ __Vtemp156[3];
    WData/*95:0*/ __Vtemp157[3];
    WData/*95:0*/ __Vtemp158[3];
    WData/*95:0*/ __Vtemp159[3];
    WData/*95:0*/ __Vtemp160[3];
    WData/*95:0*/ __Vtemp161[3];
    WData/*95:0*/ __Vtemp162[3];
    WData/*95:0*/ __Vtemp163[3];
    WData/*95:0*/ __Vtemp164[3];
    WData/*95:0*/ __Vtemp165[3];
    WData/*95:0*/ __Vtemp166[3];
    WData/*95:0*/ __Vtemp167[3];
    WData/*95:0*/ __Vtemp168[3];
    WData/*95:0*/ __Vtemp169[3];
    WData/*95:0*/ __Vtemp170[3];
    WData/*95:0*/ __Vtemp171[3];
    WData/*95:0*/ __Vtemp172[3];
    WData/*95:0*/ __Vtemp173[3];
    WData/*95:0*/ __Vtemp174[3];
    WData/*95:0*/ __Vtemp175[3];
    WData/*95:0*/ __Vtemp176[3];
    WData/*95:0*/ __Vtemp177[3];
    WData/*95:0*/ __Vtemp178[3];
    WData/*95:0*/ __Vtemp179[3];
    WData/*95:0*/ __Vtemp180[3];
    WData/*95:0*/ __Vtemp181[3];
    WData/*95:0*/ __Vtemp182[3];
    WData/*95:0*/ __Vtemp183[3];
    WData/*95:0*/ __Vtemp184[3];
    WData/*95:0*/ __Vtemp185[3];
    WData/*95:0*/ __Vtemp186[3];
    WData/*95:0*/ __Vtemp187[3];
    WData/*95:0*/ __Vtemp188[3];
    WData/*95:0*/ __Vtemp189[3];
    WData/*95:0*/ __Vtemp190[3];
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,((0x3fffffffU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_q)),30);
            tracep->chgIData(oldp+1,((0x3fffffffU & 
                                      (~ vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_en_q))),30);
            tracep->chgIData(oldp+2,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_q),32);
            tracep->chgIData(oldp+3,((~ vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_en_q)),32);
            tracep->chgBit(oldp+4,(((0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg)) 
                                    & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT___GEN_13))));
            tracep->chgIData(oldp+5,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__rx_data_reg),32);
            tracep->chgCData(oldp+6,((0xffU & ((0U 
                                                == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg))
                                                ? (0x3fU 
                                                   & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc_io_in 
                                                      >> 2U))
                                                : (
                                                   (2U 
                                                    == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg))
                                                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__rx_addr_reg
                                                    : 
                                                   (0x3fU 
                                                    & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc_io_in 
                                                       >> 2U)))))),8);
            tracep->chgIData(oldp+7,(vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM
                                     [(0xffU & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__a_reg) 
                                                >> 2U))]),32);
            tracep->chgBit(oldp+8,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT___T_10) 
                                    & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask))));
            tracep->chgBit(oldp+9,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT___T_10) 
                                    & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask) 
                                       >> 1U))));
            tracep->chgBit(oldp+10,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT___T_10) 
                                     & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask) 
                                        >> 2U))));
            tracep->chgBit(oldp+11,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT___T_10) 
                                     & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask) 
                                        >> 3U))));
            tracep->chgIData(oldp+12,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i),32);
            tracep->chgCData(oldp+13,((0x3fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output 
                                                >> 2U))),8);
            tracep->chgIData(oldp+14,(vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM
                                      [(0xffU & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__a_reg) 
                                                 >> 2U))]),32);
            tracep->chgCData(oldp+15,((0x3fU & ((0U 
                                                 == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg))
                                                 ? 
                                                (0x3fU 
                                                 & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc_io_in 
                                                    >> 2U))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg))
                                                  ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__rx_addr_reg
                                                  : 
                                                 (0x3fU 
                                                  & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc_io_in 
                                                     >> 2U)))))),6);
            tracep->chgCData(oldp+16,((0x3fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output 
                                                >> 2U))),6);
            tracep->chgCData(oldp+17,((0xffU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i)),8);
            tracep->chgCData(oldp+18,((0xffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i 
                                                >> 8U))),8);
            tracep->chgCData(oldp+19,((0xffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i 
                                                >> 0x10U))),8);
            tracep->chgCData(oldp+20,((0xffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i 
                                                >> 0x18U))),8);
            tracep->chgCData(oldp+21,((0xffU & vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM
                                       [(0xffU & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__a_reg) 
                                                  >> 2U))])),8);
            tracep->chgCData(oldp+22,((0xffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM
                                                [(0xffU 
                                                  & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__a_reg) 
                                                     >> 2U))] 
                                                >> 8U))),8);
            tracep->chgCData(oldp+23,((0xffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM
                                                [(0xffU 
                                                  & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__a_reg) 
                                                     >> 2U))] 
                                                >> 0x10U))),8);
            tracep->chgCData(oldp+24,((0xffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM
                                                [(0xffU 
                                                  & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__a_reg) 
                                                     >> 2U))] 
                                                >> 0x18U))),8);
            tracep->chgCData(oldp+25,(((0xfffffff8U 
                                        & (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT___T_10) 
                                            << 3U) 
                                           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask))) 
                                       | ((0xfffffffcU 
                                           & (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT___T_10) 
                                               << 2U) 
                                              & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask))) 
                                          | (3U & (
                                                   (- (IData)((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT___T_10))) 
                                                   & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask)))))),4);
            tracep->chgCData(oldp+26,(((((0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg)) 
                                         & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT___GEN_13)) 
                                        << 3U) | ((
                                                   ((0U 
                                                     != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg)) 
                                                    & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT___GEN_13)) 
                                                   << 2U) 
                                                  | ((((0U 
                                                        != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg)) 
                                                       & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT___GEN_13)) 
                                                      << 1U) 
                                                     | ((0U 
                                                         != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg)) 
                                                        & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT___GEN_13)))))),4);
            tracep->chgBit(oldp+27,(((0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg)) 
                                     & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT___GEN_16))));
            tracep->chgIData(oldp+28,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regFinalData),32);
            tracep->chgCData(oldp+29,((0xffU & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regAddr))),8);
            tracep->chgBit(oldp+30,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regValid));
            tracep->chgBit(oldp+31,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regDone));
            tracep->chgBit(oldp+32,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_a_ready));
            tracep->chgBit(oldp+33,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_valid));
            tracep->chgIData(oldp+34,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data),32);
            tracep->chgBit(oldp+35,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage_io_data_req_o));
            tracep->chgBit(oldp+36,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_memWr));
            tracep->chgBit(oldp+37,(((0U == (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                     | ((1U != (3U 
                                                & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                        & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___GEN_2)))));
            tracep->chgBit(oldp+38,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___T_7)
                                      ? (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___GEN_10)
                                      : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___T_14)
                                          ? (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___GEN_10)
                                          : ((0U != 
                                              (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                             & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___GEN_6))))));
            tracep->chgBit(oldp+39,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___T_7)
                                      ? ((0U == (3U 
                                                 & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                         | (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___GEN_7))
                                      : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___T_14)
                                          ? ((0U != 
                                              (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                             & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___GEN_7))
                                          : ((0U != 
                                              (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                             & ((1U 
                                                 != 
                                                 (3U 
                                                  & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                                & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___GEN_3)))))));
            tracep->chgBit(oldp+40,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___T_7) 
                                     | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___T_14)
                                         ? ((0U != 
                                             (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                            & (1U != 
                                               (3U 
                                                & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)))
                                         : ((0U != 
                                             (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                            & ((1U 
                                                != 
                                                (3U 
                                                 & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                               & (2U 
                                                  != 
                                                  (3U 
                                                   & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))))))));
            tracep->chgIData(oldp+41,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output),32);
            tracep->chgCData(oldp+42,((0xffU & ((0U 
                                                 == 
                                                 (3U 
                                                  & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                 ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2
                                                 : 
                                                ((1U 
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
                                                    : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2)))))),8);
            tracep->chgCData(oldp+43,((0xffU & ((0U 
                                                 == 
                                                 (3U 
                                                  & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                 ? 
                                                (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                                 >> 8U)
                                                 : 
                                                ((1U 
                                                  == 
                                                  (3U 
                                                   & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                  ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                   ? 
                                                  (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                                   >> 0x10U)
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                    ? 
                                                   (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                                    >> 0x10U)
                                                    : 
                                                   (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                                    >> 8U))))))),8);
            tracep->chgCData(oldp+44,((0xffU & ((0U 
                                                 == 
                                                 (3U 
                                                  & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                 ? 
                                                (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                                 >> 0x10U)
                                                 : 
                                                ((1U 
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
                                                    >> 0x10U))))))),8);
            tracep->chgCData(oldp+45,((0xffU & ((0U 
                                                 == 
                                                 (3U 
                                                  & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                 ? 
                                                (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                                 >> 0x18U)
                                                 : 
                                                ((1U 
                                                  == 
                                                  (3U 
                                                   & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                  ? 
                                                 (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                                  >> 0x10U)
                                                  : 
                                                 ((2U 
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
                                                    >> 0x18U))))))),8);
            tracep->chgBit(oldp+46,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__iccm_tl_device__DOT__outstanding));
            tracep->chgIData(oldp+47,((0x3fffU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc_io_in)),32);
            tracep->chgBit(oldp+48,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_io_stall_core_i));
            tracep->chgBit(oldp+49,((0U != vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__intr_hw__DOT___T_6)));
            tracep->chgBit(oldp+50,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_d_o_1_a_valid));
            tracep->chgCData(oldp+51,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode),3);
            tracep->chgIData(oldp+52,((0xfffffffcU 
                                       & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)),32);
            tracep->chgCData(oldp+53,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask),4);
            tracep->chgBit(oldp+54,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__outstanding));
            tracep->chgIData(oldp+55,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__rdata_q),32);
            tracep->chgBit(oldp+56,((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__outstanding)))));
            tracep->chgIData(oldp+57,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_en_q),32);
            tracep->chgIData(oldp+58,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__intr_hw__DOT___T_6),32);
            tracep->chgIData(oldp+59,((0x3ffcU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc_io_in)),32);
            tracep->chgCData(oldp+60,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_be_i),4);
            tracep->chgCData(oldp+61,((0x3fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc_io_in 
                                                >> 2U))),6);
            tracep->chgBit(oldp+62,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_d_o_0_a_valid));
            tracep->chgBit(oldp+63,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__outstanding));
            tracep->chgIData(oldp+64,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__outstanding)
                                        ? ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__error)
                                            ? 0xffffffffU
                                            : vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM
                                           [(0xffU 
                                             & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__a_reg) 
                                                >> 2U))])
                                        : 0U)),32);
            tracep->chgBit(oldp+65,((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__outstanding)))));
            tracep->chgCData(oldp+66,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_dev_sel),2);
            tracep->chgIData(oldp+67,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__rx_addr_reg),32);
            tracep->chgBit(oldp+68,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__reset_reg));
            tracep->chgCData(oldp+69,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg),2);
            tracep->chgIData(oldp+70,(((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg))
                                        ? (0x3fU & 
                                           (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc_io_in 
                                            >> 2U))
                                        : ((2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg))
                                            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__rx_addr_reg
                                            : (0x3fU 
                                               & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc_io_in 
                                                  >> 2U))))),32);
            tracep->chgBit(oldp+71,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__validReg));
            tracep->chgCData(oldp+72,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__shiftReg),8);
            tracep->chgCData(oldp+73,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__count),3);
            tracep->chgSData(oldp+74,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regAddr),14);
            tracep->chgCData(oldp+75,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__dataReg),8);
            tracep->chgCData(oldp+76,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regLSB1),8);
            tracep->chgCData(oldp+77,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regLSB2),8);
            tracep->chgCData(oldp+78,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regMSB1),8);
            tracep->chgCData(oldp+79,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__stateReg),3);
            tracep->chgCData(oldp+80,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__clockCount),8);
            tracep->chgCData(oldp+81,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__bitIndex),4);
            tracep->chgBit(oldp+82,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__rxReg));
            tracep->chgIData(oldp+83,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_pc_reg),32);
            tracep->chgIData(oldp+84,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_pc4_reg),32);
            tracep->chgCData(oldp+85,((0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+86,((0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                >> 0x14U))),5);
            tracep->chgIData(oldp+87,(((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_224) 
                                         & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel) 
                                            == (0x1fU 
                                                & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                   >> 0xfU)))) 
                                        & (0x37U != 
                                           (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)))
                                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT___T_45
                                        : ((0x37U != 
                                            (0x7fU 
                                             & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg))
                                            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1
                                            : 0U))),32);
            tracep->chgIData(oldp+88,(((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_224) 
                                         & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel) 
                                            == (0x1fU 
                                                & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                   >> 0x14U)))) 
                                        & (0x37U != 
                                           (0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)))
                                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT___T_45
                                        : ((0x37U != 
                                            (0x7fU 
                                             & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg))
                                            ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_rs2
                                            : 0U))),32);
            tracep->chgIData(oldp+89,(((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_extend_sel))
                                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__imm_generation_io_i_imm
                                        : ((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_extend_sel))
                                            ? ((((0x80000000U 
                                                  & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)
                                                  ? 0xfffffU
                                                  : 0U) 
                                                << 0xcU) 
                                               | ((0xfe0U 
                                                   & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                        >> 7U))))
                                            : ((2U 
                                                == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_extend_sel))
                                                ? (IData)(
                                                          ((QData)((IData)(
                                                                           ((((0x80000000U 
                                                                               & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)
                                                                               ? 0xfffU
                                                                               : 0U) 
                                                                             << 0x14U) 
                                                                            | (0xfffffU 
                                                                               & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                                                >> 0xcU))))) 
                                                           << 0xcU))
                                                : 0U)))),32);
            tracep->chgCData(oldp+90,((0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                >> 7U))),5);
            tracep->chgCData(oldp+91,((7U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+92,((0x7fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                >> 0x19U))),7);
            tracep->chgBit(oldp+93,(((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)) 
                                     & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)) 
                                        & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type)) 
                                           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type))))));
            tracep->chgBit(oldp+94,(((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)) 
                                     & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_memRead))));
            tracep->chgBit(oldp+95,(((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)) 
                                     & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_csr_wen))));
            tracep->chgBit(oldp+96,(((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)) 
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
                                                                   | (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode__DOT___GEN_4))))))))))))));
            tracep->chgBit(oldp+97,(((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)) 
                                     & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)) 
                                        & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type)))));
            tracep->chgCData(oldp+98,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)
                                        ? 0U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)
                                                 ? 0U
                                                 : 
                                                ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type)
                                                  ? 4U
                                                  : 
                                                 ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type)
                                                   ? 5U
                                                   : 
                                                  ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_sb_type)
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
                                                            : 0xcU)))))))))))))),4);
            tracep->chgCData(oldp+99,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)
                                        ? 0U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)
                                                 ? 0U
                                                 : 
                                                ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type)
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_sb_type)
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
                                                        : (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_Auipc))))))))))),2);
            tracep->chgBit(oldp+100,(((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)) 
                                      & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)) 
                                         & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type) 
                                            | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type) 
                                               | ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_sb_type)) 
                                                  & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_i_type) 
                                                     | ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jalr_type)) 
                                                        & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jal_type)) 
                                                           & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_lui_type) 
                                                              | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_Auipc) 
                                                                 | (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode__DOT___GEN_9)))))))))))));
            tracep->chgCData(oldp+101,((0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)),7);
            tracep->chgIData(oldp+102,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile_io_o_csr_rdata),32);
            tracep->chgBit(oldp+103,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall));
            tracep->chgIData(oldp+104,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__pc_reg),32);
            tracep->chgIData(oldp+105,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__pc4_reg),32);
            tracep->chgIData(oldp+106,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rs1_reg),32);
            tracep->chgIData(oldp+107,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rs2_reg),32);
            tracep->chgIData(oldp+108,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__imm_reg),32);
            tracep->chgCData(oldp+109,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg),3);
            tracep->chgCData(oldp+110,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func7_reg),7);
            tracep->chgCData(oldp+111,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__inst_op_reg),7);
            tracep->chgCData(oldp+112,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rd_sel_reg),5);
            tracep->chgCData(oldp+113,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rs1_sel_reg),5);
            tracep->chgCData(oldp+114,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rs2_sel_reg),5);
            tracep->chgBit(oldp+115,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_MemWr_reg));
            tracep->chgBit(oldp+116,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_MemRd_reg));
            tracep->chgBit(oldp+117,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_RegWr_reg));
            tracep->chgBit(oldp+118,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_CsrWen_reg));
            tracep->chgBit(oldp+119,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_MemToReg_reg));
            tracep->chgCData(oldp+120,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg),4);
            tracep->chgCData(oldp+121,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_OpA_sel_reg),2);
            tracep->chgBit(oldp+122,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_OpB_sel_reg));
            tracep->chgIData(oldp+123,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__csr_data_reg),32);
            tracep->chgIData(oldp+124,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT___GEN_7),32);
            tracep->chgIData(oldp+125,((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___GEN_30)),32);
            tracep->chgBit(oldp+126,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_memRd));
            tracep->chgBit(oldp+127,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_regWr));
            tracep->chgBit(oldp+128,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_csrWen));
            tracep->chgBit(oldp+129,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_memToReg));
            tracep->chgIData(oldp+130,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2),32);
            tracep->chgCData(oldp+131,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rd_sel),5);
            tracep->chgCData(oldp+132,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_func3),3);
            tracep->chgIData(oldp+133,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_csr_data),32);
            tracep->chgIData(oldp+134,(((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_func3))
                                         ? ((0U == 
                                             (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                             ? ((((0x80U 
                                                   & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data)
                                                   ? 0xffffffU
                                                   : 0U) 
                                                 << 8U) 
                                                | (0xffU 
                                                   & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data))
                                             : ((1U 
                                                 == 
                                                 (3U 
                                                  & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                 ? 
                                                ((((0x8000U 
                                                    & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data)
                                                    ? 0xffffffU
                                                    : 0U) 
                                                  << 8U) 
                                                 | (0xffU 
                                                    & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data 
                                                       >> 8U)))
                                                 : 
                                                ((2U 
                                                  == 
                                                  (3U 
                                                   & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                  ? 
                                                 ((((0x800000U 
                                                     & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data)
                                                     ? 0xffffffU
                                                     : 0U) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data 
                                                        >> 0x10U)))
                                                  : 
                                                 ((((0x80000000U 
                                                     & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data)
                                                     ? 0xffffffU
                                                     : 0U) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data 
                                                        >> 0x18U))))))
                                         : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT__load_unit__DOT___GEN_24)),32);
            tracep->chgBit(oldp+135,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr));
            tracep->chgBit(oldp+136,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_csrWen));
            tracep->chgBit(oldp+137,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_memToReg));
            tracep->chgBit(oldp+138,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_memRd));
            tracep->chgCData(oldp+139,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel),5);
            tracep->chgIData(oldp+140,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_dataMem_data),32);
            tracep->chgIData(oldp+141,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_alu_output),32);
            tracep->chgIData(oldp+142,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_csr_data),32);
            tracep->chgBit(oldp+143,(((0U != vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__intr_hw__DOT___T_6) 
                                      & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MIE__DOT__rdata_q) 
                                         >> 2U))));
            tracep->chgBit(oldp+144,((1U & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q))));
            tracep->chgIData(oldp+145,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MTVEC__DOT__rdata_q),32);
            tracep->chgBit(oldp+146,((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_io_stall_core_i)))));
            tracep->chgBit(oldp+147,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o));
            tracep->chgBit(oldp+148,(((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14)) 
                                      & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_31))));
            tracep->chgIData(oldp+149,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14)
                                         ? 0U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_31)
                                                  ? 
                                                 ((1U 
                                                   == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_ctrl_next_pc_sel_out))
                                                   ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__imm_generation_io_sb_imm
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_ctrl_next_pc_sel_out))
                                                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__imm_generation_io_uj_imm
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_ctrl_next_pc_sel_out))
                                                     ? 
                                                    (0xfffffffeU 
                                                     & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__jalr__DOT___GEN_0))
                                                     : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc__DOT__reg_)))
                                                  : 0U))),32);
            tracep->chgCData(oldp+150,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14)
                                         ? 0U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_31)
                                                  ? 0x2bU
                                                  : 0U))),6);
            tracep->chgIData(oldp+151,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MEPC__DOT__rdata_q),32);
            tracep->chgIData(oldp+152,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__imm_generation_io_sb_imm),32);
            tracep->chgIData(oldp+153,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__imm_generation_io_uj_imm),32);
            tracep->chgIData(oldp+154,((0xfffffffeU 
                                        & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__jalr__DOT___GEN_0))),32);
            tracep->chgCData(oldp+155,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_ctrl_next_pc_sel_out),2);
            tracep->chgBit(oldp+156,(((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)) 
                                      & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_branch))));
            tracep->chgBit(oldp+157,(((0U == (7U & 
                                              (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                               >> 0xcU)))
                                       ? (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs1 
                                          == vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs2)
                                       : ((1U == (7U 
                                                  & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                     >> 0xcU)))
                                           ? (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs1 
                                              != vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs2)
                                           : ((4U == 
                                               (7U 
                                                & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                   >> 0xcU)))
                                               ? VL_LTS_III(1,32,32, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs1, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs2)
                                               : ((5U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                       >> 0xcU)))
                                                   ? 
                                                  VL_GTES_III(1,32,32, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs1, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs2)
                                                   : 
                                                  ((6U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                        >> 0xcU)))
                                                    ? 
                                                   (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs1 
                                                    < vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs2)
                                                    : 
                                                   ((7U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                         >> 0xcU))) 
                                                    & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs1 
                                                       >= vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs2)))))))));
            tracep->chgIData(oldp+158,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg),32);
            tracep->chgBit(oldp+159,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward));
            tracep->chgBit(oldp+160,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_fetch_mret_inst_o));
            tracep->chgBit(oldp+161,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_core_stall_i));
            tracep->chgIData(oldp+162,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__writeback_io_write_data),32);
            tracep->chgIData(oldp+163,((0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)),32);
            tracep->chgBit(oldp+164,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage_io_stall));
            tracep->chgIData(oldp+165,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc_io_in),32);
            tracep->chgIData(oldp+166,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc__DOT__reg_),32);
            tracep->chgIData(oldp+167,(((IData)(4U) 
                                        + vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc__DOT__reg_)),32);
            tracep->chgBit(oldp+168,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__handle_irq));
            tracep->chgBit(oldp+169,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_memRead));
            tracep->chgBit(oldp+170,(((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)) 
                                      & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type)) 
                                         & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type)))));
            tracep->chgBit(oldp+171,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_branch));
            tracep->chgBit(oldp+172,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type) 
                                      | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type) 
                                         | ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type)) 
                                            & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_sb_type)) 
                                               & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_i_type) 
                                                  | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jalr_type) 
                                                     | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jal_type) 
                                                        | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_lui_type) 
                                                           | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_Auipc) 
                                                              | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_multiply) 
                                                                 | (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode__DOT___GEN_4)))))))))))));
            tracep->chgBit(oldp+173,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_csr_wen));
            tracep->chgBit(oldp+174,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_imm_type));
            tracep->chgCData(oldp+175,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_op),2);
            tracep->chgBit(oldp+176,(((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)) 
                                      & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type))));
            tracep->chgCData(oldp+177,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)
                                         ? 0U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type)
                                                  ? 4U
                                                  : 
                                                 ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type)
                                                   ? 5U
                                                   : 
                                                  ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_sb_type)
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
                                                            : 0xcU))))))))))))),4);
            tracep->chgCData(oldp+178,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)
                                         ? 0U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type)
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_sb_type)
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
                                                        : (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_Auipc)))))))))),2);
            tracep->chgBit(oldp+179,(((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)) 
                                      & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type) 
                                         | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type) 
                                            | ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_sb_type)) 
                                               & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_i_type) 
                                                  | ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jalr_type)) 
                                                     & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jal_type)) 
                                                        & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_lui_type) 
                                                           | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_Auipc) 
                                                              | (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode__DOT___GEN_9))))))))))));
            tracep->chgCData(oldp+180,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_extend_sel),2);
            tracep->chgCData(oldp+181,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)
                                         ? 0U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type)
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_sb_type)
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_i_type)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jalr_type)
                                                      ? 3U
                                                      : 
                                                     ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jal_type)
                                                       ? 2U
                                                       : 0U)))))))),2);
            tracep->chgCData(oldp+182,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1),4);
            tracep->chgCData(oldp+183,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___GEN_34),4);
            tracep->chgIData(oldp+184,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs1),32);
            tracep->chgIData(oldp+185,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs2),32);
            tracep->chgIData(oldp+186,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData),32);
            tracep->chgIData(oldp+187,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1),32);
            tracep->chgIData(oldp+188,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_rs2),32);
            tracep->chgIData(oldp+189,(((((0x80000000U 
                                           & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)
                                           ? 0xfffffU
                                           : 0U) << 0xcU) 
                                        | ((0xfe0U 
                                            & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                 >> 7U))))),32);
            tracep->chgIData(oldp+190,((IData)(((QData)((IData)(
                                                                ((((0x80000000U 
                                                                    & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)
                                                                    ? 0xfffU
                                                                    : 0U) 
                                                                  << 0x14U) 
                                                                 | (0xfffffU 
                                                                    & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                                       >> 0xcU))))) 
                                                << 0xcU))),32);
            tracep->chgIData(oldp+191,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__imm_generation_io_i_imm),32);
            tracep->chgBit(oldp+192,((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_224) 
                                       & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel) 
                                          == (0x1fU 
                                              & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                 >> 0xfU)))) 
                                      & (0x37U != (0x7fU 
                                                   & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)))));
            tracep->chgBit(oldp+193,((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_224) 
                                       & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel) 
                                          == (0x1fU 
                                              & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                 >> 0x14U)))) 
                                      & (0x37U != (0x7fU 
                                                   & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)))));
            tracep->chgIData(oldp+194,(((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                                         ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1
                                         : ((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                                             ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1
                                             : ((2U 
                                                 == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                                                 ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1
                                                 : 
                                                ((3U 
                                                  == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                                                  ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                                                   ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                                                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                                                     ? (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___GEN_30)
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                                                      ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                                                       ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData
                                                       : 
                                                      ((9U 
                                                        == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                                                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data
                                                        : 
                                                       ((0xaU 
                                                         == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                                                         ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData
                                                         : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1)))))))))))),32);
            tracep->chgSData(oldp+195,((0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                  >> 0x14U))),12);
            tracep->chgIData(oldp+196,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile_io_i_csr_wdata),32);
            tracep->chgBit(oldp+197,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_csr_wen) 
                                      & (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_memRd) 
                                          & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_valid)) 
                                         | ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_MemRd_reg)) 
                                            & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_memRd)))))));
            tracep->chgCData(oldp+198,((((0U != vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__intr_hw__DOT___T_6) 
                                         & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MIE__DOT__rdata_q) 
                                            >> 2U)) 
                                        << 2U)),3);
            tracep->chgBit(oldp+199,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_csr_wen) 
                                      & ((((0xf14U 
                                            != (0xfffU 
                                                & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                   >> 0x14U))) 
                                           & ((0x300U 
                                               != (0xfffU 
                                                   & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                      >> 0x14U))) 
                                              & ((0x301U 
                                                  != 
                                                  (0xfffU 
                                                   & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                      >> 0x14U))) 
                                                 & ((0x304U 
                                                     != 
                                                     (0xfffU 
                                                      & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                         >> 0x14U))) 
                                                    & ((0x340U 
                                                        != 
                                                        (0xfffU 
                                                         & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                            >> 0x14U))) 
                                                       & ((0x305U 
                                                           != 
                                                           (0xfffU 
                                                            & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                               >> 0x14U))) 
                                                          & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_99))))))) 
                                          | ((3U & 
                                              (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                               >> 0x1cU)) 
                                             > (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__priv_lvl_q))) 
                                         | ((3U == 
                                             (3U & 
                                              (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                               >> 0x1eU))) 
                                            & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wreq))))));
            tracep->chgCData(oldp+200,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit_io_forward_rs1),3);
            tracep->chgBit(oldp+201,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type));
            tracep->chgBit(oldp+202,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type));
            tracep->chgBit(oldp+203,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type));
            tracep->chgBit(oldp+204,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_sb_type));
            tracep->chgBit(oldp+205,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_i_type));
            tracep->chgBit(oldp+206,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jalr_type));
            tracep->chgBit(oldp+207,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jal_type));
            tracep->chgBit(oldp+208,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_lui_type));
            tracep->chgBit(oldp+209,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_Auipc));
            tracep->chgBit(oldp+210,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_multiply));
            tracep->chgBit(oldp+211,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_type));
            tracep->chgIData(oldp+212,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_0),32);
            tracep->chgIData(oldp+213,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_1),32);
            tracep->chgIData(oldp+214,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_2),32);
            tracep->chgIData(oldp+215,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_3),32);
            tracep->chgIData(oldp+216,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_4),32);
            tracep->chgIData(oldp+217,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_5),32);
            tracep->chgIData(oldp+218,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_6),32);
            tracep->chgIData(oldp+219,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_7),32);
            tracep->chgIData(oldp+220,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_8),32);
            tracep->chgIData(oldp+221,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_9),32);
            tracep->chgIData(oldp+222,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_10),32);
            tracep->chgIData(oldp+223,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_11),32);
            tracep->chgIData(oldp+224,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_12),32);
            tracep->chgIData(oldp+225,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_13),32);
            tracep->chgIData(oldp+226,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_14),32);
            tracep->chgIData(oldp+227,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_15),32);
            tracep->chgIData(oldp+228,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_16),32);
            tracep->chgIData(oldp+229,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_17),32);
            tracep->chgIData(oldp+230,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_18),32);
            tracep->chgIData(oldp+231,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_19),32);
            tracep->chgIData(oldp+232,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_20),32);
            tracep->chgIData(oldp+233,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_21),32);
            tracep->chgIData(oldp+234,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_22),32);
            tracep->chgIData(oldp+235,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_23),32);
            tracep->chgIData(oldp+236,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_24),32);
            tracep->chgIData(oldp+237,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_25),32);
            tracep->chgIData(oldp+238,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_26),32);
            tracep->chgIData(oldp+239,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_27),32);
            tracep->chgIData(oldp+240,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_28),32);
            tracep->chgIData(oldp+241,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_29),32);
            tracep->chgIData(oldp+242,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_30),32);
            tracep->chgIData(oldp+243,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_31),32);
            tracep->chgSData(oldp+244,(((0xfe0U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                            >> 7U)))),12);
            tracep->chgCData(oldp+245,((0xfU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                >> 8U))),4);
            tracep->chgCData(oldp+246,((0x3fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                 >> 0x19U))),6);
            tracep->chgBit(oldp+247,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                            >> 7U))));
            tracep->chgBit(oldp+248,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                            >> 0x1fU))));
            tracep->chgSData(oldp+249,(((0x1000U & 
                                         (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                          >> 0x13U)) 
                                        | ((0x800U 
                                            & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                    >> 7U)))))),13);
            tracep->chgIData(oldp+250,(((((0x80000000U 
                                           & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)
                                           ? 0x7ffffU
                                           : 0U) << 0xdU) 
                                        | ((0x1000U 
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
                                                       >> 7U))))))),32);
            tracep->chgIData(oldp+251,((0xfffffU & 
                                        (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                         >> 0xcU))),20);
            tracep->chgIData(oldp+252,(((((0x80000000U 
                                           & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)
                                           ? 0xfffU
                                           : 0U) << 0x14U) 
                                        | (0xfffffU 
                                           & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                              >> 0xcU)))),32);
            tracep->chgSData(oldp+253,((0x3ffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                  >> 0x15U))),10);
            tracep->chgBit(oldp+254,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                            >> 0x14U))));
            tracep->chgCData(oldp+255,((0xffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                 >> 0xcU))),8);
            tracep->chgIData(oldp+256,(((0x100000U 
                                         & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                            >> 0xbU)) 
                                        | ((0xff000U 
                                            & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg) 
                                           | ((0x800U 
                                               & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                  >> 9U)) 
                                              | (0x7feU 
                                                 & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                    >> 0x14U)))))),21);
            tracep->chgIData(oldp+257,(((((0x80000000U 
                                           & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)
                                           ? 0x7ffU
                                           : 0U) << 0x15U) 
                                        | ((0x100000U 
                                            & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                               >> 0xbU)) 
                                           | ((0xff000U 
                                               & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg) 
                                              | ((0x800U 
                                                  & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                     >> 9U)) 
                                                 | (0x7feU 
                                                    & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                       >> 0x14U))))))),32);
            tracep->chgIData(oldp+258,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__jalr__DOT__sum),32);
            tracep->chgCData(oldp+259,((((0x20U & (
                                                   ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)) 
                                                    & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)
                                                        ? 
                                                       (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                                        >> 0x15U)
                                                        : 
                                                       ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                                        >> 5U))) 
                                                   << 5U)) 
                                         | ((0x10U 
                                             & (((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)) 
                                                 << 4U) 
                                                & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q))) 
                                            | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_368) 
                                               << 2U))) 
                                        | ((2U & (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_fetch_mret_inst_o) 
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
                                           | (1U & 
                                              ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_fetch_mret_inst_o)
                                                ? ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                                   >> 1U)
                                                : (
                                                   (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)) 
                                                   & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)
                                                       ? 
                                                      (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                                       >> 3U)
                                                       : (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q)))))))),6);
            tracep->chgBit(oldp+260,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_fetch_mret_inst_o) 
                                      | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o) 
                                         | (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)))));
            tracep->chgCData(oldp+261,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q),6);
            tracep->chgIData(oldp+262,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                                         ? ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                                             ? (((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14)) 
                                                 & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_31))
                                                 ? 
                                                ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_31)
                                                   ? 
                                                  ((1U 
                                                    == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_ctrl_next_pc_sel_out))
                                                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__imm_generation_io_sb_imm
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_ctrl_next_pc_sel_out))
                                                     ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__imm_generation_io_uj_imm
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_ctrl_next_pc_sel_out))
                                                      ? 
                                                     (0xfffffffeU 
                                                      & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__jalr__DOT___GEN_0))
                                                      : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc__DOT__reg_)))
                                                   : 0U))
                                                 : 0U)
                                             : 0U) : 
                                        (0xfffffffeU 
                                         & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int))),32);
            tracep->chgBit(oldp+263,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o) 
                                      | ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
                                         & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315)) 
                                            & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_317)) 
                                               & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_319)))))));
            tracep->chgCData(oldp+264,(((4U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                               >> 9U)) 
                                        | ((2U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                                  >> 6U)) 
                                           | (1U & 
                                              (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                               >> 3U))))),3);
            tracep->chgBit(oldp+265,(((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
                                      & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315))));
            tracep->chgCData(oldp+266,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MIE__DOT__rdata_q),3);
            tracep->chgIData(oldp+267,(((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_op))
                                         ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile_io_i_csr_wdata
                                         : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_372)),32);
            tracep->chgBit(oldp+268,(((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
                                      & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315)) 
                                         & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_317)))));
            tracep->chgIData(oldp+269,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSCRATCH__DOT__rdata_q),32);
            tracep->chgCData(oldp+270,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                                         ? ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14)
                                             ? 0U : 
                                            ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_31)
                                              ? 0x2bU
                                              : 0U))
                                         : ((0x20U 
                                             & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                                >> 0x1aU)) 
                                            | (0x1fU 
                                               & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int)))),6);
            tracep->chgBit(oldp+271,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o) 
                                      | ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
                                         & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315)) 
                                            & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_317)) 
                                               & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_319)) 
                                                  & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_321))))))));
            tracep->chgCData(oldp+272,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MCAUSE__DOT__rdata_q),6);
            tracep->chgIData(oldp+273,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                                         ? 0U : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int)),32);
            tracep->chgBit(oldp+274,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o) 
                                      | ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
                                         & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315)) 
                                            & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_317)) 
                                               & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_319)) 
                                                  & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_321)) 
                                                     & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_323)))))))));
            tracep->chgIData(oldp+275,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MTVAL__DOT__rdata_q),32);
            tracep->chgIData(oldp+276,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_io_stall_core_i)
                                         ? (1U | (0x7fffff80U 
                                                  & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                                     >> 1U)))
                                         : 1U)),32);
            tracep->chgIData(oldp+277,(((0xfffff80U 
                                         & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q) 
                                        | ((0x40U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q) 
                                           | ((0x20U 
                                               & (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                                                    ? 
                                                   (1U 
                                                    & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                                       >> 5U))
                                                    : 
                                                   (1U 
                                                    & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                                       >> 5U))) 
                                                  << 5U)) 
                                              | ((0x10U 
                                                  & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q) 
                                                 | ((8U 
                                                     & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q) 
                                                    | ((4U 
                                                        & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q) 
                                                       | ((2U 
                                                           & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q) 
                                                          | (1U 
                                                             & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                                                                 ? 
                                                                (1U 
                                                                 & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q)
                                                                 : 
                                                                (1U 
                                                                 & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q))))))))))),28);
            tracep->chgIData(oldp+278,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q),28);
            tracep->chgIData(oldp+279,((0xfffffffeU 
                                        & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int)),32);
            tracep->chgIData(oldp+280,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DEPC__DOT__rdata_q),32);
            tracep->chgBit(oldp+281,(((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
                                      & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315)) 
                                         & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_317)) 
                                            & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_319)) 
                                               & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_321)) 
                                                  & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_323)) 
                                                     & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_325)) 
                                                        & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_327)) 
                                                           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_352)))))))))));
            tracep->chgIData(oldp+282,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DSCRATCH0__DOT__rdata_q),32);
            tracep->chgBit(oldp+283,(((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
                                      & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315)) 
                                         & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_317)) 
                                            & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_319)) 
                                               & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_321)) 
                                                  & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_323)) 
                                                     & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_325)) 
                                                        & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_327)) 
                                                           & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_352)) 
                                                              & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_354))))))))))));
            tracep->chgIData(oldp+284,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DSCRATCH1__DOT__rdata_q),32);
            tracep->chgBit(oldp+285,((1U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)));
            tracep->chgBit(oldp+286,((1U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312)));
            tracep->chgIData(oldp+287,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE_io_i_counter_val),32);
            tracep->chgQData(oldp+288,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE__DOT__counter_q),64);
            tracep->chgBit(oldp+290,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                            >> 2U))));
            tracep->chgBit(oldp+291,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                            >> 2U))));
            tracep->chgIData(oldp+292,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET_io_i_counter_val),32);
            tracep->chgQData(oldp+293,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET__DOT__counter_q),64);
            tracep->chgBit(oldp+295,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                            >> 3U))));
            tracep->chgBit(oldp+296,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                            >> 3U))));
            tracep->chgIData(oldp+297,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_io_i_counter_val),32);
            VL_EXTEND_WQ(80,40, __Vtemp141, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_q);
            tracep->chgQData(oldp+298,((((QData)((IData)(
                                                         __Vtemp141[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp141[0U])))),64);
            tracep->chgBit(oldp+300,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                            >> 4U))));
            tracep->chgBit(oldp+301,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                            >> 4U))));
            tracep->chgIData(oldp+302,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1_io_i_counter_val),32);
            VL_EXTEND_WQ(80,40, __Vtemp142, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_q);
            tracep->chgQData(oldp+303,((((QData)((IData)(
                                                         __Vtemp142[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp142[0U])))),64);
            tracep->chgBit(oldp+305,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                            >> 5U))));
            tracep->chgBit(oldp+306,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                            >> 5U))));
            tracep->chgIData(oldp+307,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2_io_i_counter_val),32);
            VL_EXTEND_WQ(80,40, __Vtemp143, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_q);
            tracep->chgQData(oldp+308,((((QData)((IData)(
                                                         __Vtemp143[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp143[0U])))),64);
            tracep->chgBit(oldp+310,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                            >> 6U))));
            tracep->chgBit(oldp+311,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                            >> 6U))));
            tracep->chgIData(oldp+312,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3_io_i_counter_val),32);
            VL_EXTEND_WQ(80,40, __Vtemp144, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_q);
            tracep->chgQData(oldp+313,((((QData)((IData)(
                                                         __Vtemp144[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp144[0U])))),64);
            tracep->chgBit(oldp+315,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                            >> 7U))));
            tracep->chgBit(oldp+316,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                            >> 7U))));
            tracep->chgIData(oldp+317,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4_io_i_counter_val),32);
            VL_EXTEND_WQ(80,40, __Vtemp145, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_q);
            tracep->chgQData(oldp+318,((((QData)((IData)(
                                                         __Vtemp145[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp145[0U])))),64);
            tracep->chgBit(oldp+320,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                            >> 8U))));
            tracep->chgBit(oldp+321,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                            >> 8U))));
            tracep->chgIData(oldp+322,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5_io_i_counter_val),32);
            VL_EXTEND_WQ(80,40, __Vtemp146, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_q);
            tracep->chgQData(oldp+323,((((QData)((IData)(
                                                         __Vtemp146[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp146[0U])))),64);
            tracep->chgBit(oldp+325,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                            >> 9U))));
            tracep->chgBit(oldp+326,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                            >> 9U))));
            tracep->chgIData(oldp+327,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6_io_i_counter_val),32);
            VL_EXTEND_WQ(80,40, __Vtemp147, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_q);
            tracep->chgQData(oldp+328,((((QData)((IData)(
                                                         __Vtemp147[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp147[0U])))),64);
            tracep->chgBit(oldp+330,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                            >> 0xaU))));
            tracep->chgBit(oldp+331,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                            >> 0xaU))));
            tracep->chgIData(oldp+332,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7_io_i_counter_val),32);
            VL_EXTEND_WQ(80,40, __Vtemp148, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_q);
            tracep->chgQData(oldp+333,((((QData)((IData)(
                                                         __Vtemp148[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp148[0U])))),64);
            tracep->chgBit(oldp+335,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                            >> 0xbU))));
            tracep->chgBit(oldp+336,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                            >> 0xbU))));
            tracep->chgIData(oldp+337,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8_io_i_counter_val),32);
            VL_EXTEND_WQ(80,40, __Vtemp149, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_q);
            tracep->chgQData(oldp+338,((((QData)((IData)(
                                                         __Vtemp149[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp149[0U])))),64);
            tracep->chgBit(oldp+340,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                            >> 0xcU))));
            tracep->chgBit(oldp+341,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                            >> 0xcU))));
            tracep->chgIData(oldp+342,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9_io_i_counter_val),32);
            VL_EXTEND_WQ(80,40, __Vtemp150, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_q);
            tracep->chgQData(oldp+343,((((QData)((IData)(
                                                         __Vtemp150[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp150[0U])))),64);
            tracep->chgCData(oldp+345,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__priv_lvl_q),2);
            tracep->chgSData(oldp+346,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mcountinhibit_q),13);
            tracep->chgQData(oldp+347,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_0),64);
            tracep->chgQData(oldp+349,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_1),64);
            tracep->chgQData(oldp+351,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_2),64);
            tracep->chgQData(oldp+353,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_3),64);
            tracep->chgQData(oldp+355,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_4),64);
            tracep->chgQData(oldp+357,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_5),64);
            tracep->chgQData(oldp+359,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_6),64);
            tracep->chgQData(oldp+361,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_7),64);
            tracep->chgQData(oldp+363,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_8),64);
            tracep->chgQData(oldp+365,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_9),64);
            tracep->chgQData(oldp+367,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_10),64);
            tracep->chgQData(oldp+369,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_11),64);
            tracep->chgQData(oldp+371,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_12),64);
            tracep->chgQData(oldp+373,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_13),64);
            tracep->chgQData(oldp+375,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_14),64);
            tracep->chgQData(oldp+377,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_15),64);
            tracep->chgQData(oldp+379,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_16),64);
            tracep->chgQData(oldp+381,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_17),64);
            tracep->chgQData(oldp+383,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_18),64);
            tracep->chgQData(oldp+385,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_19),64);
            tracep->chgQData(oldp+387,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_20),64);
            tracep->chgQData(oldp+389,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_21),64);
            tracep->chgQData(oldp+391,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_22),64);
            tracep->chgQData(oldp+393,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_23),64);
            tracep->chgQData(oldp+395,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_24),64);
            tracep->chgQData(oldp+397,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_25),64);
            tracep->chgQData(oldp+399,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_26),64);
            tracep->chgQData(oldp+401,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_27),64);
            tracep->chgQData(oldp+403,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_28),64);
            tracep->chgQData(oldp+405,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_29),64);
            tracep->chgQData(oldp+407,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_30),64);
            tracep->chgQData(oldp+409,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_31),64);
            tracep->chgIData(oldp+411,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_0),32);
            tracep->chgIData(oldp+412,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_1),32);
            tracep->chgIData(oldp+413,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_2),32);
            tracep->chgIData(oldp+414,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_3),32);
            tracep->chgIData(oldp+415,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_4),32);
            tracep->chgIData(oldp+416,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_5),32);
            tracep->chgIData(oldp+417,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_6),32);
            tracep->chgIData(oldp+418,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_7),32);
            tracep->chgIData(oldp+419,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_8),32);
            tracep->chgIData(oldp+420,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_9),32);
            tracep->chgIData(oldp+421,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_10),32);
            tracep->chgIData(oldp+422,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_11),32);
            tracep->chgIData(oldp+423,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_12),32);
            tracep->chgIData(oldp+424,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_13),32);
            tracep->chgIData(oldp+425,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_14),32);
            tracep->chgIData(oldp+426,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_15),32);
            tracep->chgIData(oldp+427,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_16),32);
            tracep->chgIData(oldp+428,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_17),32);
            tracep->chgIData(oldp+429,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_18),32);
            tracep->chgIData(oldp+430,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_19),32);
            tracep->chgIData(oldp+431,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_20),32);
            tracep->chgIData(oldp+432,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_21),32);
            tracep->chgIData(oldp+433,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_22),32);
            tracep->chgIData(oldp+434,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_23),32);
            tracep->chgIData(oldp+435,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_24),32);
            tracep->chgIData(oldp+436,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_25),32);
            tracep->chgIData(oldp+437,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_26),32);
            tracep->chgIData(oldp+438,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_27),32);
            tracep->chgIData(oldp+439,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_28),32);
            tracep->chgIData(oldp+440,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_29),32);
            tracep->chgIData(oldp+441,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_30),32);
            tracep->chgIData(oldp+442,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_31),32);
            tracep->chgBit(oldp+443,(((3U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                             >> 0x1cU)) 
                                      > (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__priv_lvl_q))));
            tracep->chgBit(oldp+444,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wreq));
            tracep->chgBit(oldp+445,(((3U == (3U & 
                                              (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                               >> 0x1eU))) 
                                      & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wreq))));
            tracep->chgBit(oldp+446,(((0xf14U != (0xfffU 
                                                  & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                     >> 0x14U))) 
                                      & ((0x300U != 
                                          (0xfffU & 
                                           (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                            >> 0x14U))) 
                                         & ((0x301U 
                                             != (0xfffU 
                                                 & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                    >> 0x14U))) 
                                            & ((0x304U 
                                                != 
                                                (0xfffU 
                                                 & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                    >> 0x14U))) 
                                               & ((0x340U 
                                                   != 
                                                   (0xfffU 
                                                    & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                       >> 0x14U))) 
                                                  & ((0x305U 
                                                      != 
                                                      (0xfffU 
                                                       & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                          >> 0x14U))) 
                                                     & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_99)))))))));
            tracep->chgBit(oldp+447,((1U & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                            >> 1U))));
            tracep->chgBit(oldp+448,((1U & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                            >> 4U))));
            tracep->chgCData(oldp+449,((3U & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                              >> 2U))),2);
            tracep->chgBit(oldp+450,((1U & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                            >> 5U))));
            tracep->chgBit(oldp+451,((1U & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MIE__DOT__rdata_q))));
            tracep->chgBit(oldp+452,((1U & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MIE__DOT__rdata_q) 
                                            >> 1U))));
            tracep->chgBit(oldp+453,((1U & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MIE__DOT__rdata_q) 
                                            >> 2U))));
            tracep->chgBit(oldp+454,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                            >> 2U))));
            tracep->chgBit(oldp+455,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                            >> 1U))));
            tracep->chgBit(oldp+456,((1U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q)));
            tracep->chgBit(oldp+457,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                            >> 4U))));
            tracep->chgBit(oldp+458,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                            >> 3U))));
            tracep->chgBit(oldp+459,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                            >> 6U))));
            tracep->chgBit(oldp+460,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                            >> 5U))));
            tracep->chgBit(oldp+461,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                            >> 9U))));
            tracep->chgBit(oldp+462,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                            >> 8U))));
            tracep->chgBit(oldp+463,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                            >> 7U))));
            tracep->chgBit(oldp+464,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                            >> 0xbU))));
            tracep->chgBit(oldp+465,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                            >> 0xaU))));
            tracep->chgCData(oldp+466,((0xfU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                                >> 0x18U))),4);
            tracep->chgSData(oldp+467,((0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                                  >> 0xcU))),12);
            tracep->chgCData(oldp+468,((0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                 >> 0x14U))),5);
            tracep->chgIData(oldp+469,((0x2000U | (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mcountinhibit_q))),32);
            tracep->chgBit(oldp+470,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_301));
            tracep->chgIData(oldp+471,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int),32);
            tracep->chgCData(oldp+472,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_368),2);
            tracep->chgBit(oldp+473,((1U & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                                             ? (1U 
                                                & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q)
                                             : (1U 
                                                & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q)))));
            tracep->chgIData(oldp+474,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                                         ? (((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14)) 
                                             & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_31))
                                             ? ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14)
                                                 ? 0U
                                                 : 
                                                ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_31)
                                                  ? 
                                                 ((1U 
                                                   == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_ctrl_next_pc_sel_out))
                                                   ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__imm_generation_io_sb_imm
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_ctrl_next_pc_sel_out))
                                                    ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__imm_generation_io_uj_imm
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_ctrl_next_pc_sel_out))
                                                     ? 
                                                    (0xfffffffeU 
                                                     & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__jalr__DOT___GEN_0))
                                                     : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc__DOT__reg_)))
                                                  : 0U))
                                             : 0U) : 0U)),32);
            tracep->chgBit(oldp+475,((1U & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_fetch_mret_inst_o) 
                                            | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                                                ? (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q)
                                                : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)
                                                    ? 
                                                   (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                                    >> 7U)
                                                    : 
                                                   ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                                    >> 1U)))))));
            tracep->chgBit(oldp+476,((1U & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_fetch_mret_inst_o)
                                             ? ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                                >> 1U)
                                             : ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)) 
                                                & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)
                                                    ? 
                                                   (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                                    >> 3U)
                                                    : (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q)))))));
            tracep->chgBit(oldp+477,((1U & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)) 
                                            & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)
                                                ? (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                                   >> 0x15U)
                                                : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                                   >> 5U))))));
            tracep->chgBit(oldp+478,((1U & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)) 
                                            & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                               >> 4U)))));
            tracep->chgBit(oldp+479,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                            >> 0xbU))));
            tracep->chgBit(oldp+480,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                            >> 7U))));
            tracep->chgBit(oldp+481,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                            >> 3U))));
            tracep->chgBit(oldp+482,((1U & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                                             ? (1U 
                                                & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                                   >> 5U))
                                             : (1U 
                                                & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                                   >> 5U))))));
            tracep->chgBit(oldp+483,(((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
                                      & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315)) 
                                         & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_317)) 
                                            & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_319)) 
                                               & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_321)) 
                                                  & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_323)) 
                                                     & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_325)) 
                                                        & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_327)) 
                                                           & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_352)) 
                                                              & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_354)) 
                                                                 & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_356)))))))))))));
            tracep->chgIData(oldp+484,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313),32);
            tracep->chgIData(oldp+485,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312),32);
            tracep->chgSData(oldp+486,((((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
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
                                         ? (2U | (0x1ffdU 
                                                  & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int))
                                         : (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mcountinhibit_q))),13);
            tracep->chgBit(oldp+487,(((3U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_368)) 
                                      & (0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_368)))));
            tracep->chgBit(oldp+488,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                            | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313))));
            tracep->chgIData(oldp+489,(((1U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE_io_i_counter_val
                                         : (IData)(
                                                   (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE__DOT__counter_q 
                                                    >> 0x20U)))),32);
            tracep->chgIData(oldp+490,(((1U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE__DOT__counter_q)
                                         : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE_io_i_counter_val)),32);
            tracep->chgQData(oldp+491,((((QData)((IData)(
                                                         ((1U 
                                                           & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                           ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE_io_i_counter_val
                                                           : (IData)(
                                                                     (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE__DOT__counter_q 
                                                                      >> 0x20U))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((1U 
                                                            & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                            ? (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE__DOT__counter_q)
                                                            : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE_io_i_counter_val))))),64);
            tracep->chgQData(oldp+493,((1ULL + vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE__DOT__counter_q)),64);
            tracep->chgBit(oldp+495,((1U & ((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                             | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                            >> 2U))));
            tracep->chgIData(oldp+496,(((4U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET_io_i_counter_val
                                         : (IData)(
                                                   (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET__DOT__counter_q 
                                                    >> 0x20U)))),32);
            tracep->chgIData(oldp+497,(((4U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET__DOT__counter_q)
                                         : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET_io_i_counter_val)),32);
            tracep->chgQData(oldp+498,((((QData)((IData)(
                                                         ((4U 
                                                           & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                           ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET_io_i_counter_val
                                                           : (IData)(
                                                                     (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET__DOT__counter_q 
                                                                      >> 0x20U))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((4U 
                                                            & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                            ? (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET__DOT__counter_q)
                                                            : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET_io_i_counter_val))))),64);
            tracep->chgQData(oldp+500,((1ULL + vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET__DOT__counter_q)),64);
            tracep->chgBit(oldp+502,((1U & ((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                             | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                            >> 3U))));
            tracep->chgQData(oldp+503,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_q),40);
            VL_EXTEND_WQ(80,40, __Vtemp151, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_q);
            tracep->chgIData(oldp+505,(((8U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_io_i_counter_val
                                         : __Vtemp151[1U])),32);
            VL_EXTEND_WQ(80,40, __Vtemp152, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_q);
            tracep->chgIData(oldp+506,(((8U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? __Vtemp152[0U]
                                         : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_io_i_counter_val)),32);
            VL_EXTEND_WQ(80,40, __Vtemp153, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_q);
            VL_EXTEND_WQ(80,40, __Vtemp154, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_q);
            tracep->chgQData(oldp+507,((((QData)((IData)(
                                                         ((8U 
                                                           & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                           ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_io_i_counter_val
                                                           : 
                                                          __Vtemp153[1U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((8U 
                                                            & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                            ? 
                                                           __Vtemp154[0U]
                                                            : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_io_i_counter_val))))),64);
            tracep->chgQData(oldp+509,((0xffffffffffULL 
                                        & (1ULL + vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_q))),40);
            tracep->chgBit(oldp+511,((1U & ((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                             | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                            >> 4U))));
            tracep->chgQData(oldp+512,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_q),40);
            VL_EXTEND_WQ(80,40, __Vtemp155, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_q);
            tracep->chgIData(oldp+514,(((0x10U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1_io_i_counter_val
                                         : __Vtemp155[1U])),32);
            VL_EXTEND_WQ(80,40, __Vtemp156, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_q);
            tracep->chgIData(oldp+515,(((0x10U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? __Vtemp156[0U]
                                         : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1_io_i_counter_val)),32);
            VL_EXTEND_WQ(80,40, __Vtemp157, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_q);
            VL_EXTEND_WQ(80,40, __Vtemp158, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_q);
            tracep->chgQData(oldp+516,((((QData)((IData)(
                                                         ((0x10U 
                                                           & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                           ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1_io_i_counter_val
                                                           : 
                                                          __Vtemp157[1U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((0x10U 
                                                            & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                            ? 
                                                           __Vtemp158[0U]
                                                            : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1_io_i_counter_val))))),64);
            tracep->chgQData(oldp+518,((0xffffffffffULL 
                                        & (1ULL + vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_q))),40);
            tracep->chgBit(oldp+520,((1U & ((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                             | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                            >> 5U))));
            tracep->chgQData(oldp+521,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_q),40);
            VL_EXTEND_WQ(80,40, __Vtemp159, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_q);
            tracep->chgIData(oldp+523,(((0x20U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2_io_i_counter_val
                                         : __Vtemp159[1U])),32);
            VL_EXTEND_WQ(80,40, __Vtemp160, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_q);
            tracep->chgIData(oldp+524,(((0x20U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? __Vtemp160[0U]
                                         : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2_io_i_counter_val)),32);
            VL_EXTEND_WQ(80,40, __Vtemp161, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_q);
            VL_EXTEND_WQ(80,40, __Vtemp162, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_q);
            tracep->chgQData(oldp+525,((((QData)((IData)(
                                                         ((0x20U 
                                                           & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                           ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2_io_i_counter_val
                                                           : 
                                                          __Vtemp161[1U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((0x20U 
                                                            & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                            ? 
                                                           __Vtemp162[0U]
                                                            : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2_io_i_counter_val))))),64);
            tracep->chgQData(oldp+527,((0xffffffffffULL 
                                        & (1ULL + vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_q))),40);
            tracep->chgBit(oldp+529,((1U & ((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                             | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                            >> 6U))));
            tracep->chgQData(oldp+530,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_q),40);
            VL_EXTEND_WQ(80,40, __Vtemp163, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_q);
            tracep->chgIData(oldp+532,(((0x40U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3_io_i_counter_val
                                         : __Vtemp163[1U])),32);
            VL_EXTEND_WQ(80,40, __Vtemp164, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_q);
            tracep->chgIData(oldp+533,(((0x40U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? __Vtemp164[0U]
                                         : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3_io_i_counter_val)),32);
            VL_EXTEND_WQ(80,40, __Vtemp165, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_q);
            VL_EXTEND_WQ(80,40, __Vtemp166, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_q);
            tracep->chgQData(oldp+534,((((QData)((IData)(
                                                         ((0x40U 
                                                           & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                           ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3_io_i_counter_val
                                                           : 
                                                          __Vtemp165[1U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((0x40U 
                                                            & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                            ? 
                                                           __Vtemp166[0U]
                                                            : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3_io_i_counter_val))))),64);
            tracep->chgQData(oldp+536,((0xffffffffffULL 
                                        & (1ULL + vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_q))),40);
            tracep->chgBit(oldp+538,((1U & ((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                             | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                            >> 7U))));
            tracep->chgQData(oldp+539,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_q),40);
            VL_EXTEND_WQ(80,40, __Vtemp167, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_q);
            tracep->chgIData(oldp+541,(((0x80U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4_io_i_counter_val
                                         : __Vtemp167[1U])),32);
            VL_EXTEND_WQ(80,40, __Vtemp168, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_q);
            tracep->chgIData(oldp+542,(((0x80U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? __Vtemp168[0U]
                                         : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4_io_i_counter_val)),32);
            VL_EXTEND_WQ(80,40, __Vtemp169, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_q);
            VL_EXTEND_WQ(80,40, __Vtemp170, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_q);
            tracep->chgQData(oldp+543,((((QData)((IData)(
                                                         ((0x80U 
                                                           & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                           ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4_io_i_counter_val
                                                           : 
                                                          __Vtemp169[1U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((0x80U 
                                                            & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                            ? 
                                                           __Vtemp170[0U]
                                                            : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4_io_i_counter_val))))),64);
            tracep->chgQData(oldp+545,((0xffffffffffULL 
                                        & (1ULL + vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_q))),40);
            tracep->chgBit(oldp+547,((1U & ((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                             | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                            >> 8U))));
            tracep->chgQData(oldp+548,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_q),40);
            VL_EXTEND_WQ(80,40, __Vtemp171, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_q);
            tracep->chgIData(oldp+550,(((0x100U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5_io_i_counter_val
                                         : __Vtemp171[1U])),32);
            VL_EXTEND_WQ(80,40, __Vtemp172, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_q);
            tracep->chgIData(oldp+551,(((0x100U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? __Vtemp172[0U]
                                         : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5_io_i_counter_val)),32);
            VL_EXTEND_WQ(80,40, __Vtemp173, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_q);
            VL_EXTEND_WQ(80,40, __Vtemp174, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_q);
            tracep->chgQData(oldp+552,((((QData)((IData)(
                                                         ((0x100U 
                                                           & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                           ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5_io_i_counter_val
                                                           : 
                                                          __Vtemp173[1U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((0x100U 
                                                            & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                            ? 
                                                           __Vtemp174[0U]
                                                            : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5_io_i_counter_val))))),64);
            tracep->chgQData(oldp+554,((0xffffffffffULL 
                                        & (1ULL + vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_q))),40);
            tracep->chgBit(oldp+556,((1U & ((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                             | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                            >> 9U))));
            tracep->chgQData(oldp+557,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_q),40);
            VL_EXTEND_WQ(80,40, __Vtemp175, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_q);
            tracep->chgIData(oldp+559,(((0x200U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6_io_i_counter_val
                                         : __Vtemp175[1U])),32);
            VL_EXTEND_WQ(80,40, __Vtemp176, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_q);
            tracep->chgIData(oldp+560,(((0x200U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? __Vtemp176[0U]
                                         : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6_io_i_counter_val)),32);
            VL_EXTEND_WQ(80,40, __Vtemp177, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_q);
            VL_EXTEND_WQ(80,40, __Vtemp178, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_q);
            tracep->chgQData(oldp+561,((((QData)((IData)(
                                                         ((0x200U 
                                                           & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                           ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6_io_i_counter_val
                                                           : 
                                                          __Vtemp177[1U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((0x200U 
                                                            & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                            ? 
                                                           __Vtemp178[0U]
                                                            : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6_io_i_counter_val))))),64);
            tracep->chgQData(oldp+563,((0xffffffffffULL 
                                        & (1ULL + vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_q))),40);
            tracep->chgBit(oldp+565,((1U & ((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                             | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                            >> 0xaU))));
            tracep->chgQData(oldp+566,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_q),40);
            VL_EXTEND_WQ(80,40, __Vtemp179, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_q);
            tracep->chgIData(oldp+568,(((0x400U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7_io_i_counter_val
                                         : __Vtemp179[1U])),32);
            VL_EXTEND_WQ(80,40, __Vtemp180, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_q);
            tracep->chgIData(oldp+569,(((0x400U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? __Vtemp180[0U]
                                         : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7_io_i_counter_val)),32);
            VL_EXTEND_WQ(80,40, __Vtemp181, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_q);
            VL_EXTEND_WQ(80,40, __Vtemp182, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_q);
            tracep->chgQData(oldp+570,((((QData)((IData)(
                                                         ((0x400U 
                                                           & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                           ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7_io_i_counter_val
                                                           : 
                                                          __Vtemp181[1U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((0x400U 
                                                            & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                            ? 
                                                           __Vtemp182[0U]
                                                            : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7_io_i_counter_val))))),64);
            tracep->chgQData(oldp+572,((0xffffffffffULL 
                                        & (1ULL + vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_q))),40);
            tracep->chgBit(oldp+574,((1U & ((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                             | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                            >> 0xbU))));
            tracep->chgQData(oldp+575,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_q),40);
            VL_EXTEND_WQ(80,40, __Vtemp183, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_q);
            tracep->chgIData(oldp+577,(((0x800U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8_io_i_counter_val
                                         : __Vtemp183[1U])),32);
            VL_EXTEND_WQ(80,40, __Vtemp184, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_q);
            tracep->chgIData(oldp+578,(((0x800U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? __Vtemp184[0U]
                                         : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8_io_i_counter_val)),32);
            VL_EXTEND_WQ(80,40, __Vtemp185, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_q);
            VL_EXTEND_WQ(80,40, __Vtemp186, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_q);
            tracep->chgQData(oldp+579,((((QData)((IData)(
                                                         ((0x800U 
                                                           & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                           ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8_io_i_counter_val
                                                           : 
                                                          __Vtemp185[1U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((0x800U 
                                                            & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                            ? 
                                                           __Vtemp186[0U]
                                                            : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8_io_i_counter_val))))),64);
            tracep->chgQData(oldp+581,((0xffffffffffULL 
                                        & (1ULL + vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_q))),40);
            tracep->chgBit(oldp+583,((1U & ((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                             | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                            >> 0xcU))));
            tracep->chgQData(oldp+584,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_q),40);
            VL_EXTEND_WQ(80,40, __Vtemp187, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_q);
            tracep->chgIData(oldp+586,(((0x1000U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9_io_i_counter_val
                                         : __Vtemp187[1U])),32);
            VL_EXTEND_WQ(80,40, __Vtemp188, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_q);
            tracep->chgIData(oldp+587,(((0x1000U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                         ? __Vtemp188[0U]
                                         : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9_io_i_counter_val)),32);
            VL_EXTEND_WQ(80,40, __Vtemp189, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_q);
            VL_EXTEND_WQ(80,40, __Vtemp190, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_q);
            tracep->chgQData(oldp+588,((((QData)((IData)(
                                                         ((0x1000U 
                                                           & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                           ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9_io_i_counter_val
                                                           : 
                                                          __Vtemp189[1U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((0x1000U 
                                                            & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                            ? 
                                                           __Vtemp190[0U]
                                                            : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9_io_i_counter_val))))),64);
            tracep->chgQData(oldp+590,((0xffffffffffULL 
                                        & (1ULL + vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_q))),40);
            tracep->chgBit(oldp+592,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__hazard_in_decode_execute));
            tracep->chgBit(oldp+593,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__hazard_in_decode_memory));
            tracep->chgBit(oldp+594,((((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_26) 
                                         & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__hazard_in_decode_execute))) 
                                        & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__hazard_in_decode_memory))) 
                                       & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_csrWen))) 
                                      & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_33))));
            tracep->chgBit(oldp+595,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__csr_hazard_in_decode_execute));
            tracep->chgBit(oldp+596,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__csr_hazard_in_decode_memory));
            tracep->chgBit(oldp+597,((((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_26) 
                                         & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_csrWen)) 
                                        & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__csr_hazard_in_decode_execute))) 
                                       & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__csr_hazard_in_decode_memory))) 
                                      & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_33))));
            tracep->chgCData(oldp+598,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit_io_forward_a),2);
            tracep->chgCData(oldp+599,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit_io_forward_b),2);
            tracep->chgIData(oldp+600,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_a),32);
            tracep->chgIData(oldp+601,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_b),32);
            tracep->chgCData(oldp+602,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control_io_output),5);
            tracep->chgCData(oldp+603,((3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)),2);
            tracep->chgCData(oldp+604,((0xffU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data)),8);
            tracep->chgSData(oldp+605,((0xffffU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data)),16);
            tracep->chgIData(oldp+606,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg__DOT__q_reg),32);
            tracep->chgIData(oldp+607,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_enable_reg__DOT__q_reg),32);
            tracep->chgBit(oldp+608,((((8U == (0x3cU 
                                               & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                       & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter_io_we_o)) 
                                      & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)))));
            tracep->chgBit(oldp+609,((((0x10U == (0x3cU 
                                                  & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                       & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter_io_we_o)) 
                                      & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)))));
            tracep->chgSData(oldp+610,((0xffffU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i)),16);
            tracep->chgBit(oldp+611,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT___T_71) 
                                      & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)))));
            tracep->chgSData(oldp+612,((0xffffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i 
                                                   >> 0x10U))),16);
            tracep->chgBit(oldp+613,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT___T_76) 
                                      & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)))));
            tracep->chgBit(oldp+614,((((0x1cU == (0x3cU 
                                                  & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                       & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter_io_we_o)) 
                                      & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)))));
            tracep->chgBit(oldp+615,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT___T_86) 
                                      & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)))));
            tracep->chgBit(oldp+616,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT___T_91) 
                                      & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)))));
            tracep->chgIData(oldp+617,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_rising_reg__DOT__q_reg),32);
            tracep->chgIData(oldp+618,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_falling_reg__DOT__q_reg),32);
            tracep->chgIData(oldp+619,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvlhigh_reg__DOT__q_reg),32);
            tracep->chgIData(oldp+620,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvllow_reg__DOT__q_reg),32);
            tracep->chgSData(oldp+621,((0xffffU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_q)),16);
            tracep->chgSData(oldp+622,((0xffffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_q 
                                                   >> 0x10U))),16);
            tracep->chgSData(oldp+623,((0xffffU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_en_q)),16);
            tracep->chgSData(oldp+624,((0xffffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_en_q 
                                                   >> 0x10U))),16);
            tracep->chgIData(oldp+625,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__data_in_q),32);
            tracep->chgBit(oldp+626,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter_io_we_o));
            tracep->chgCData(oldp+627,((0x3cU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)),6);
            tracep->chgIData(oldp+628,(((0U == (0x3cU 
                                                & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                         ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg__DOT__q_reg
                                         : ((4U == 
                                             (0x3cU 
                                              & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                             ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_enable_reg__DOT__q_reg
                                             : ((8U 
                                                 == 
                                                 (0x3cU 
                                                  & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                 ? 0U
                                                 : 
                                                ((0xcU 
                                                  == 
                                                  (0x3cU 
                                                   & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                  ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__data_in_reg__DOT__q_reg
                                                  : 
                                                 ((0x10U 
                                                   == 
                                                   (0x3cU 
                                                    & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                   ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_q
                                                   : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT___GEN_8)))))),32);
            tracep->chgBit(oldp+629,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg_io_we));
            tracep->chgBit(oldp+630,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_enable_reg_io_we));
            tracep->chgIData(oldp+631,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__data_in_reg__DOT__q_reg),32);
            tracep->chgBit(oldp+632,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_rising_reg_io_we));
            tracep->chgBit(oldp+633,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_falling_reg_io_we));
            tracep->chgBit(oldp+634,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvlhigh_reg_io_we));
            tracep->chgBit(oldp+635,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvllow_reg_io_we));
            tracep->chgBit(oldp+636,((0U == (0x3cU 
                                             & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
            tracep->chgBit(oldp+637,((4U == (0x3cU 
                                             & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
            tracep->chgBit(oldp+638,((8U == (0x3cU 
                                             & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
            tracep->chgBit(oldp+639,((0xcU == (0x3cU 
                                               & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
            tracep->chgBit(oldp+640,((0x10U == (0x3cU 
                                                & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
            tracep->chgBit(oldp+641,((0x14U == (0x3cU 
                                                & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
            tracep->chgBit(oldp+642,((0x18U == (0x3cU 
                                                & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
            tracep->chgBit(oldp+643,((0x1cU == (0x3cU 
                                                & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
            tracep->chgBit(oldp+644,((0x20U == (0x3cU 
                                                & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
            tracep->chgBit(oldp+645,((0x24U == (0x3cU 
                                                & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
            tracep->chgBit(oldp+646,((0x28U == (0x3cU 
                                                & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
            tracep->chgBit(oldp+647,((0x2cU == (0x3cU 
                                                & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
            tracep->chgBit(oldp+648,((0x30U == (0x3cU 
                                                & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
            tracep->chgBit(oldp+649,((0x34U == (0x3cU 
                                                & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
            tracep->chgBit(oldp+650,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err));
            tracep->chgBit(oldp+651,((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__tlErr__DOT___T)))));
            tracep->chgBit(oldp+652,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__a_ack));
            tracep->chgBit(oldp+653,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__a_ack) 
                                      & ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode)) 
                                         | (1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode))))));
            tracep->chgBit(oldp+654,((4U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode))));
            tracep->chgBit(oldp+655,((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode))));
            tracep->chgBit(oldp+656,((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode))));
            tracep->chgBit(oldp+657,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__tlErr__DOT___T_5) 
                                      | (0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode)))));
            tracep->chgBit(oldp+658,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_d_o_1_a_valid) 
                                      & (0xfU == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask)))));
            tracep->chgBit(oldp+659,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_d_o_1_a_valid) 
                                      & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__tlErr__DOT___T_5) 
                                         | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_d_o_1_a_valid) 
                                            & (0xfU 
                                               == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask)))))));
            tracep->chgBit(oldp+660,((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__tlErr__DOT___T)))));
            tracep->chgBit(oldp+661,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__error));
            tracep->chgBit(oldp+662,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__a_ack));
            tracep->chgBit(oldp+663,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__a_ack) 
                                      & ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode)) 
                                         | (1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode))))));
            tracep->chgBit(oldp+664,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__tlErr__DOT___T_5) 
                                      | (0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode)))));
            tracep->chgBit(oldp+665,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_d_o_0_a_valid) 
                                      & (0xfU == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask)))));
            tracep->chgBit(oldp+666,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_d_o_0_a_valid) 
                                      & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__tlErr__DOT___T_5) 
                                         | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_d_o_0_a_valid) 
                                            & (0xfU 
                                               == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask)))))));
            tracep->chgBit(oldp+667,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage_io_data_req_o) 
                                      & (2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_dev_sel)))));
            tracep->chgBit(oldp+668,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2__DOT__tl_errResp__DOT__err_reqPending));
            tracep->chgCData(oldp+669,(vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__we_reg),4);
            tracep->chgBit(oldp+670,(vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__en_reg));
            tracep->chgIData(oldp+671,(vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__di_reg),32);
            tracep->chgCData(oldp+672,(vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__a_reg),8);
            tracep->chgCData(oldp+673,((0x3fU & ((0U 
                                                  == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg))
                                                  ? 
                                                 (0x3fU 
                                                  & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc_io_in 
                                                     >> 2U))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg))
                                                   ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__rx_addr_reg
                                                   : 
                                                  (0x3fU 
                                                   & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc_io_in 
                                                      >> 2U)))))),8);
            tracep->chgCData(oldp+674,(vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__we_reg),4);
            tracep->chgBit(oldp+675,(vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__en_reg));
            tracep->chgIData(oldp+676,(vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__di_reg),32);
            tracep->chgCData(oldp+677,(vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__a_reg),8);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+678,(vlTOPp->Ibtida_top_dffram_cv__DOT__io_rx_i));
            tracep->chgBit(oldp+679,(vlTOPp->Ibtida_top_dffram_cv__DOT__reset));
            tracep->chgBit(oldp+680,((0U != vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__intr_hw__DOT__new_event)));
            tracep->chgIData(oldp+681,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__intr_hw__DOT__new_event),32);
        }
        tracep->chgBit(oldp+682,(vlTOPp->wb_clk_i));
        tracep->chgBit(oldp+683,(vlTOPp->wb_rst_i));
        tracep->chgWData(oldp+684,(vlTOPp->la_data_in),128);
        tracep->chgWData(oldp+688,(vlTOPp->la_data_out),128);
        tracep->chgWData(oldp+692,(vlTOPp->la_oen),128);
        tracep->chgBit(oldp+696,(vlTOPp->rx));
        tracep->chgSData(oldp+697,(vlTOPp->la_din),16);
        tracep->chgQData(oldp+698,(vlTOPp->io_in),38);
        tracep->chgQData(oldp+700,(vlTOPp->io_out),38);
        tracep->chgQData(oldp+702,(vlTOPp->io_oeb),38);
        tracep->chgIData(oldp+704,((0x3fffffffU & (IData)(
                                                          (vlTOPp->io_in 
                                                           >> 8U)))),30);
        tracep->chgSData(oldp+705,((0xffffU & vlTOPp->la_data_in[1U])),16);
        tracep->chgIData(oldp+706,((0x3fffffffU & (IData)(
                                                          (vlTOPp->io_in 
                                                           >> 8U)))),32);
        tracep->chgIData(oldp+707,((0xffffU & vlTOPp->la_data_in[1U])),32);
        tracep->chgIData(oldp+708,((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__intr_hw__DOT__new_event 
                                    | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg__DOT__q_reg)),32);
        tracep->chgIData(oldp+709,(((((0x3fffffffU 
                                       & (((~ vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__data_in_q) 
                                           & (IData)(
                                                     (vlTOPp->io_in 
                                                      >> 8U))) 
                                          & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_rising_reg__DOT__q_reg)) 
                                      | ((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__data_in_q 
                                          & (~ (0x3fffffffU 
                                                & (IData)(
                                                          (vlTOPp->io_in 
                                                           >> 8U))))) 
                                         & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_falling_reg__DOT__q_reg)) 
                                     | (0x3fffffffU 
                                        & ((IData)(
                                                   (vlTOPp->io_in 
                                                    >> 8U)) 
                                           & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvlhigh_reg__DOT__q_reg))) 
                                    | ((~ (0x3fffffffU 
                                           & (IData)(
                                                     (vlTOPp->io_in 
                                                      >> 8U)))) 
                                       & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvllow_reg__DOT__q_reg))),32);
        tracep->chgIData(oldp+710,((0x3fffffffU & (
                                                   ((~ vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__data_in_q) 
                                                    & (IData)(
                                                              (vlTOPp->io_in 
                                                               >> 8U))) 
                                                   & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_rising_reg__DOT__q_reg))),32);
        tracep->chgIData(oldp+711,(((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__data_in_q 
                                     & (~ (0x3fffffffU 
                                           & (IData)(
                                                     (vlTOPp->io_in 
                                                      >> 8U))))) 
                                    & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_falling_reg__DOT__q_reg)),32);
        tracep->chgIData(oldp+712,((0x3fffffffU & ((IData)(
                                                           (vlTOPp->io_in 
                                                            >> 8U)) 
                                                   & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvlhigh_reg__DOT__q_reg))),32);
        tracep->chgIData(oldp+713,(((~ (0x3fffffffU 
                                        & (IData)((vlTOPp->io_in 
                                                   >> 8U)))) 
                                    & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvllow_reg__DOT__q_reg)),32);
        tracep->chgBit(oldp+714,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg_io_we) 
                                  | (0U != vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__intr_hw__DOT__new_event))));
        tracep->chgIData(oldp+715,((((0U != vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__intr_hw__DOT__new_event)
                                      ? (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__intr_hw__DOT__new_event 
                                         | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg__DOT__q_reg)
                                      : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg__DOT__q_reg) 
                                    & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg_io_we)
                                        ? (~ vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i)
                                        : 0xffffffffU))),32);
    }
}

void VIbtida_top_dffram_cv::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VIbtida_top_dffram_cv__Syms* __restrict vlSymsp = static_cast<VIbtida_top_dffram_cv__Syms*>(userp);
    VIbtida_top_dffram_cv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}
