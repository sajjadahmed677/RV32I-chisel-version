// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VIbtida_top_dffram_cv__Syms.h"


//======================

void VIbtida_top_dffram_cv::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VIbtida_top_dffram_cv::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VIbtida_top_dffram_cv__Syms* __restrict vlSymsp = static_cast<VIbtida_top_dffram_cv__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VIbtida_top_dffram_cv::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VIbtida_top_dffram_cv::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VIbtida_top_dffram_cv__Syms* __restrict vlSymsp = static_cast<VIbtida_top_dffram_cv__Syms*>(userp);
    VIbtida_top_dffram_cv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VIbtida_top_dffram_cv::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VIbtida_top_dffram_cv__Syms* __restrict vlSymsp = static_cast<VIbtida_top_dffram_cv__Syms*>(userp);
    VIbtida_top_dffram_cv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+683,"wb_clk_i", false,-1);
        tracep->declBit(c+684,"wb_rst_i", false,-1);
        tracep->declArray(c+685,"la_data_in", false,-1, 127,0);
        tracep->declArray(c+689,"la_data_out", false,-1, 127,0);
        tracep->declArray(c+693,"la_oen", false,-1, 127,0);
        tracep->declBit(c+697,"rx", false,-1);
        tracep->declBus(c+698,"la_din", false,-1, 15,0);
        tracep->declQuad(c+699,"io_in", false,-1, 37,0);
        tracep->declQuad(c+701,"io_out", false,-1, 37,0);
        tracep->declQuad(c+703,"io_oeb", false,-1, 37,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv wb_clk_i", false,-1);
        tracep->declBit(c+684,"Ibtida_top_dffram_cv wb_rst_i", false,-1);
        tracep->declArray(c+685,"Ibtida_top_dffram_cv la_data_in", false,-1, 127,0);
        tracep->declArray(c+689,"Ibtida_top_dffram_cv la_data_out", false,-1, 127,0);
        tracep->declArray(c+693,"Ibtida_top_dffram_cv la_oen", false,-1, 127,0);
        tracep->declBit(c+697,"Ibtida_top_dffram_cv rx", false,-1);
        tracep->declBus(c+698,"Ibtida_top_dffram_cv la_din", false,-1, 15,0);
        tracep->declQuad(c+699,"Ibtida_top_dffram_cv io_in", false,-1, 37,0);
        tracep->declQuad(c+701,"Ibtida_top_dffram_cv io_out", false,-1, 37,0);
        tracep->declQuad(c+703,"Ibtida_top_dffram_cv io_oeb", false,-1, 37,0);
        tracep->declBus(c+705,"Ibtida_top_dffram_cv io_gpio_i", false,-1, 29,0);
        tracep->declBus(c+706,"Ibtida_top_dffram_cv io_CLK_PER_BIT", false,-1, 15,0);
        tracep->declBit(c+679,"Ibtida_top_dffram_cv io_rx_i", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv reset", false,-1);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv clock", false,-1);
        tracep->declBus(c+1,"Ibtida_top_dffram_cv io_gpio_o", false,-1, 29,0);
        tracep->declBus(c+2,"Ibtida_top_dffram_cv io_gpio_en_o", false,-1, 29,0);
        tracep->declBit(c+679,"Ibtida_top_dffram_cv ibtidaTop_io_rx_i", false,-1);
        tracep->declBus(c+706,"Ibtida_top_dffram_cv ibtidaTop_io_CLK_PER_BIT", false,-1, 15,0);
        tracep->declBus(c+707,"Ibtida_top_dffram_cv ibtidaTop_io_gpio_i", false,-1, 31,0);
        tracep->declBus(c+3,"Ibtida_top_dffram_cv ibtidaTop_io_gpio_o", false,-1, 31,0);
        tracep->declBus(c+4,"Ibtida_top_dffram_cv ibtidaTop_io_gpio_en_o", false,-1, 31,0);
        tracep->declBit(c+5,"Ibtida_top_dffram_cv ibtidaTop_io_iccm_we_o_0", false,-1);
        tracep->declBit(c+5,"Ibtida_top_dffram_cv ibtidaTop_io_iccm_we_o_1", false,-1);
        tracep->declBit(c+5,"Ibtida_top_dffram_cv ibtidaTop_io_iccm_we_o_2", false,-1);
        tracep->declBit(c+5,"Ibtida_top_dffram_cv ibtidaTop_io_iccm_we_o_3", false,-1);
        tracep->declBus(c+6,"Ibtida_top_dffram_cv ibtidaTop_io_iccm_wdata_o", false,-1, 31,0);
        tracep->declBus(c+7,"Ibtida_top_dffram_cv ibtidaTop_io_iccm_addr_o", false,-1, 7,0);
        tracep->declBus(c+8,"Ibtida_top_dffram_cv ibtidaTop_io_iccm_rdata_i", false,-1, 31,0);
        tracep->declBit(c+9,"Ibtida_top_dffram_cv ibtidaTop_io_dccm_we_o_0", false,-1);
        tracep->declBit(c+10,"Ibtida_top_dffram_cv ibtidaTop_io_dccm_we_o_1", false,-1);
        tracep->declBit(c+11,"Ibtida_top_dffram_cv ibtidaTop_io_dccm_we_o_2", false,-1);
        tracep->declBit(c+12,"Ibtida_top_dffram_cv ibtidaTop_io_dccm_we_o_3", false,-1);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop_io_dccm_wdata_o", false,-1, 31,0);
        tracep->declBus(c+14,"Ibtida_top_dffram_cv ibtidaTop_io_dccm_addr_o", false,-1, 7,0);
        tracep->declBus(c+15,"Ibtida_top_dffram_cv ibtidaTop_io_dccm_rdata_i", false,-1, 31,0);
        tracep->declBit(c+5,"Ibtida_top_dffram_cv iccm_io_we_i_0", false,-1);
        tracep->declBit(c+5,"Ibtida_top_dffram_cv iccm_io_we_i_1", false,-1);
        tracep->declBit(c+5,"Ibtida_top_dffram_cv iccm_io_we_i_2", false,-1);
        tracep->declBit(c+5,"Ibtida_top_dffram_cv iccm_io_we_i_3", false,-1);
        tracep->declBus(c+16,"Ibtida_top_dffram_cv iccm_io_addr_i", false,-1, 5,0);
        tracep->declBus(c+6,"Ibtida_top_dffram_cv iccm_io_wdata_i", false,-1, 31,0);
        tracep->declBus(c+8,"Ibtida_top_dffram_cv iccm_io_rdata_o", false,-1, 31,0);
        tracep->declBit(c+9,"Ibtida_top_dffram_cv dccm_io_we_i_0", false,-1);
        tracep->declBit(c+10,"Ibtida_top_dffram_cv dccm_io_we_i_1", false,-1);
        tracep->declBit(c+11,"Ibtida_top_dffram_cv dccm_io_we_i_2", false,-1);
        tracep->declBit(c+12,"Ibtida_top_dffram_cv dccm_io_we_i_3", false,-1);
        tracep->declBus(c+17,"Ibtida_top_dffram_cv dccm_io_addr_i", false,-1, 5,0);
        tracep->declBus(c+18,"Ibtida_top_dffram_cv dccm_io_wdata_i_0", false,-1, 7,0);
        tracep->declBus(c+19,"Ibtida_top_dffram_cv dccm_io_wdata_i_1", false,-1, 7,0);
        tracep->declBus(c+20,"Ibtida_top_dffram_cv dccm_io_wdata_i_2", false,-1, 7,0);
        tracep->declBus(c+21,"Ibtida_top_dffram_cv dccm_io_wdata_i_3", false,-1, 7,0);
        tracep->declBus(c+22,"Ibtida_top_dffram_cv dccm_io_rdata_o_0", false,-1, 7,0);
        tracep->declBus(c+23,"Ibtida_top_dffram_cv dccm_io_rdata_o_1", false,-1, 7,0);
        tracep->declBus(c+24,"Ibtida_top_dffram_cv dccm_io_rdata_o_2", false,-1, 7,0);
        tracep->declBus(c+25,"Ibtida_top_dffram_cv dccm_io_rdata_o_3", false,-1, 7,0);
        tracep->declBus(c+15,"Ibtida_top_dffram_cv dout", false,-1, 31,0);
        tracep->declBus(c+26,"Ibtida_top_dffram_cv WE_DCCM", false,-1, 3,0);
        tracep->declBit(c+717,"Ibtida_top_dffram_cv EN", false,-1);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv DCCM_di", false,-1, 31,0);
        tracep->declBus(c+17,"Ibtida_top_dffram_cv DCCM_A", false,-1, 5,0);
        tracep->declBus(c+27,"Ibtida_top_dffram_cv WE_ICCM", false,-1, 3,0);
        tracep->declBus(c+6,"Ibtida_top_dffram_cv ICCM_di", false,-1, 31,0);
        tracep->declBus(c+16,"Ibtida_top_dffram_cv ICCM_A", false,-1, 5,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop reset", false,-1);
        tracep->declBit(c+679,"Ibtida_top_dffram_cv ibtidaTop io_rx_i", false,-1);
        tracep->declBus(c+706,"Ibtida_top_dffram_cv ibtidaTop io_CLK_PER_BIT", false,-1, 15,0);
        tracep->declBus(c+707,"Ibtida_top_dffram_cv ibtidaTop io_gpio_i", false,-1, 31,0);
        tracep->declBus(c+3,"Ibtida_top_dffram_cv ibtidaTop io_gpio_o", false,-1, 31,0);
        tracep->declBus(c+4,"Ibtida_top_dffram_cv ibtidaTop io_gpio_en_o", false,-1, 31,0);
        tracep->declBit(c+5,"Ibtida_top_dffram_cv ibtidaTop io_iccm_we_o_0", false,-1);
        tracep->declBit(c+5,"Ibtida_top_dffram_cv ibtidaTop io_iccm_we_o_1", false,-1);
        tracep->declBit(c+5,"Ibtida_top_dffram_cv ibtidaTop io_iccm_we_o_2", false,-1);
        tracep->declBit(c+5,"Ibtida_top_dffram_cv ibtidaTop io_iccm_we_o_3", false,-1);
        tracep->declBus(c+6,"Ibtida_top_dffram_cv ibtidaTop io_iccm_wdata_o", false,-1, 31,0);
        tracep->declBus(c+7,"Ibtida_top_dffram_cv ibtidaTop io_iccm_addr_o", false,-1, 7,0);
        tracep->declBus(c+8,"Ibtida_top_dffram_cv ibtidaTop io_iccm_rdata_i", false,-1, 31,0);
        tracep->declBit(c+9,"Ibtida_top_dffram_cv ibtidaTop io_dccm_we_o_0", false,-1);
        tracep->declBit(c+10,"Ibtida_top_dffram_cv ibtidaTop io_dccm_we_o_1", false,-1);
        tracep->declBit(c+11,"Ibtida_top_dffram_cv ibtidaTop io_dccm_we_o_2", false,-1);
        tracep->declBit(c+12,"Ibtida_top_dffram_cv ibtidaTop io_dccm_we_o_3", false,-1);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop io_dccm_wdata_o", false,-1, 31,0);
        tracep->declBus(c+14,"Ibtida_top_dffram_cv ibtidaTop io_dccm_addr_o", false,-1, 7,0);
        tracep->declBus(c+15,"Ibtida_top_dffram_cv ibtidaTop io_dccm_rdata_i", false,-1, 31,0);
        tracep->declBit(c+28,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl_io_isStalled", false,-1);
        tracep->declBus(c+29,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl_io_rx_data_o", false,-1, 31,0);
        tracep->declBus(c+30,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl_io_addr_o", false,-1, 7,0);
        tracep->declBus(c+706,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl_io_CLK_PER_BIT", false,-1, 15,0);
        tracep->declBit(c+679,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl_io_rxd", false,-1);
        tracep->declBit(c+31,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl_io_valid", false,-1);
        tracep->declBit(c+32,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl_io_done", false,-1);
        tracep->declBit(c+33,"Ibtida_top_dffram_cv ibtidaTop core_io_data_gnt_i", false,-1);
        tracep->declBit(c+34,"Ibtida_top_dffram_cv ibtidaTop core_io_data_rvalid_i", false,-1);
        tracep->declBus(c+35,"Ibtida_top_dffram_cv ibtidaTop core_io_data_rdata_i", false,-1, 31,0);
        tracep->declBit(c+36,"Ibtida_top_dffram_cv ibtidaTop core_io_data_req_o", false,-1);
        tracep->declBit(c+37,"Ibtida_top_dffram_cv ibtidaTop core_io_data_we_o", false,-1);
        tracep->declBit(c+38,"Ibtida_top_dffram_cv ibtidaTop core_io_data_be_o_0", false,-1);
        tracep->declBit(c+39,"Ibtida_top_dffram_cv ibtidaTop core_io_data_be_o_1", false,-1);
        tracep->declBit(c+40,"Ibtida_top_dffram_cv ibtidaTop core_io_data_be_o_2", false,-1);
        tracep->declBit(c+41,"Ibtida_top_dffram_cv ibtidaTop core_io_data_be_o_3", false,-1);
        tracep->declBus(c+42,"Ibtida_top_dffram_cv ibtidaTop core_io_data_addr_o", false,-1, 31,0);
        tracep->declBus(c+43,"Ibtida_top_dffram_cv ibtidaTop core_io_data_wdata_o_0", false,-1, 7,0);
        tracep->declBus(c+44,"Ibtida_top_dffram_cv ibtidaTop core_io_data_wdata_o_1", false,-1, 7,0);
        tracep->declBus(c+45,"Ibtida_top_dffram_cv ibtidaTop core_io_data_wdata_o_2", false,-1, 7,0);
        tracep->declBus(c+46,"Ibtida_top_dffram_cv ibtidaTop core_io_data_wdata_o_3", false,-1, 7,0);
        tracep->declBit(c+717,"Ibtida_top_dffram_cv ibtidaTop core_io_instr_gnt_i", false,-1);
        tracep->declBit(c+47,"Ibtida_top_dffram_cv ibtidaTop core_io_instr_rvalid_i", false,-1);
        tracep->declBus(c+8,"Ibtida_top_dffram_cv ibtidaTop core_io_instr_rdata_i", false,-1, 31,0);
        tracep->declBit(c+717,"Ibtida_top_dffram_cv ibtidaTop core_io_instr_req_o", false,-1);
        tracep->declBus(c+48,"Ibtida_top_dffram_cv ibtidaTop core_io_instr_addr_o", false,-1, 31,0);
        tracep->declBit(c+49,"Ibtida_top_dffram_cv ibtidaTop core_io_stall_core_i", false,-1);
        tracep->declBit(c+50,"Ibtida_top_dffram_cv ibtidaTop core_io_irq_external_i", false,-1);
        tracep->declBit(c+51,"Ibtida_top_dffram_cv ibtidaTop gpio_io_tl_i_a_valid", false,-1);
        tracep->declBus(c+52,"Ibtida_top_dffram_cv ibtidaTop gpio_io_tl_i_a_opcode", false,-1, 2,0);
        tracep->declBus(c+53,"Ibtida_top_dffram_cv ibtidaTop gpio_io_tl_i_a_address", false,-1, 31,0);
        tracep->declBus(c+54,"Ibtida_top_dffram_cv ibtidaTop gpio_io_tl_i_a_mask", false,-1, 3,0);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio_io_tl_i_a_data", false,-1, 31,0);
        tracep->declBit(c+55,"Ibtida_top_dffram_cv ibtidaTop gpio_io_tl_o_d_valid", false,-1);
        tracep->declBus(c+56,"Ibtida_top_dffram_cv ibtidaTop gpio_io_tl_o_d_data", false,-1, 31,0);
        tracep->declBit(c+57,"Ibtida_top_dffram_cv ibtidaTop gpio_io_tl_o_a_ready", false,-1);
        tracep->declBus(c+707,"Ibtida_top_dffram_cv ibtidaTop gpio_io_cio_gpio_i", false,-1, 31,0);
        tracep->declBus(c+3,"Ibtida_top_dffram_cv ibtidaTop gpio_io_cio_gpio_o", false,-1, 31,0);
        tracep->declBus(c+58,"Ibtida_top_dffram_cv ibtidaTop gpio_io_cio_gpio_en_o", false,-1, 31,0);
        tracep->declBus(c+59,"Ibtida_top_dffram_cv ibtidaTop gpio_io_intr_gpio_o", false,-1, 31,0);
        tracep->declBit(c+717,"Ibtida_top_dffram_cv ibtidaTop core_iccm_tl_host_io_req_i", false,-1);
        tracep->declBit(c+717,"Ibtida_top_dffram_cv ibtidaTop core_iccm_tl_host_io_gnt_o", false,-1);
        tracep->declBus(c+48,"Ibtida_top_dffram_cv ibtidaTop core_iccm_tl_host_io_addr_i", false,-1, 31,0);
        tracep->declBit(c+718,"Ibtida_top_dffram_cv ibtidaTop core_iccm_tl_host_io_we_i", false,-1);
        tracep->declBus(c+719,"Ibtida_top_dffram_cv ibtidaTop core_iccm_tl_host_io_wdata_i", false,-1, 31,0);
        tracep->declBus(c+720,"Ibtida_top_dffram_cv ibtidaTop core_iccm_tl_host_io_be_i", false,-1, 3,0);
        tracep->declBit(c+47,"Ibtida_top_dffram_cv ibtidaTop core_iccm_tl_host_io_valid_o", false,-1);
        tracep->declBus(c+8,"Ibtida_top_dffram_cv ibtidaTop core_iccm_tl_host_io_rdata_o", false,-1, 31,0);
        tracep->declBit(c+717,"Ibtida_top_dffram_cv ibtidaTop core_iccm_tl_host_io_tl_o_a_valid", false,-1);
        tracep->declBus(c+721,"Ibtida_top_dffram_cv ibtidaTop core_iccm_tl_host_io_tl_o_a_opcode", false,-1, 2,0);
        tracep->declBus(c+60,"Ibtida_top_dffram_cv ibtidaTop core_iccm_tl_host_io_tl_o_a_address", false,-1, 31,0);
        tracep->declBus(c+720,"Ibtida_top_dffram_cv ibtidaTop core_iccm_tl_host_io_tl_o_a_mask", false,-1, 3,0);
        tracep->declBus(c+719,"Ibtida_top_dffram_cv ibtidaTop core_iccm_tl_host_io_tl_o_a_data", false,-1, 31,0);
        tracep->declBit(c+47,"Ibtida_top_dffram_cv ibtidaTop core_iccm_tl_host_io_tl_i_d_valid", false,-1);
        tracep->declBus(c+8,"Ibtida_top_dffram_cv ibtidaTop core_iccm_tl_host_io_tl_i_d_data", false,-1, 31,0);
        tracep->declBit(c+717,"Ibtida_top_dffram_cv ibtidaTop core_iccm_tl_host_io_tl_i_a_ready", false,-1);
        tracep->declBit(c+36,"Ibtida_top_dffram_cv ibtidaTop core_loadStore_tl_host_io_req_i", false,-1);
        tracep->declBit(c+33,"Ibtida_top_dffram_cv ibtidaTop core_loadStore_tl_host_io_gnt_o", false,-1);
        tracep->declBus(c+42,"Ibtida_top_dffram_cv ibtidaTop core_loadStore_tl_host_io_addr_i", false,-1, 31,0);
        tracep->declBit(c+37,"Ibtida_top_dffram_cv ibtidaTop core_loadStore_tl_host_io_we_i", false,-1);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop core_loadStore_tl_host_io_wdata_i", false,-1, 31,0);
        tracep->declBus(c+61,"Ibtida_top_dffram_cv ibtidaTop core_loadStore_tl_host_io_be_i", false,-1, 3,0);
        tracep->declBit(c+34,"Ibtida_top_dffram_cv ibtidaTop core_loadStore_tl_host_io_valid_o", false,-1);
        tracep->declBus(c+35,"Ibtida_top_dffram_cv ibtidaTop core_loadStore_tl_host_io_rdata_o", false,-1, 31,0);
        tracep->declBit(c+36,"Ibtida_top_dffram_cv ibtidaTop core_loadStore_tl_host_io_tl_o_a_valid", false,-1);
        tracep->declBus(c+52,"Ibtida_top_dffram_cv ibtidaTop core_loadStore_tl_host_io_tl_o_a_opcode", false,-1, 2,0);
        tracep->declBus(c+53,"Ibtida_top_dffram_cv ibtidaTop core_loadStore_tl_host_io_tl_o_a_address", false,-1, 31,0);
        tracep->declBus(c+54,"Ibtida_top_dffram_cv ibtidaTop core_loadStore_tl_host_io_tl_o_a_mask", false,-1, 3,0);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop core_loadStore_tl_host_io_tl_o_a_data", false,-1, 31,0);
        tracep->declBit(c+34,"Ibtida_top_dffram_cv ibtidaTop core_loadStore_tl_host_io_tl_i_d_valid", false,-1);
        tracep->declBus(c+35,"Ibtida_top_dffram_cv ibtidaTop core_loadStore_tl_host_io_tl_i_d_data", false,-1, 31,0);
        tracep->declBit(c+33,"Ibtida_top_dffram_cv ibtidaTop core_loadStore_tl_host_io_tl_i_a_ready", false,-1);
        tracep->declBit(c+717,"Ibtida_top_dffram_cv ibtidaTop iccm_tl_device_io_tl_i_a_valid", false,-1);
        tracep->declBus(c+721,"Ibtida_top_dffram_cv ibtidaTop iccm_tl_device_io_tl_i_a_opcode", false,-1, 2,0);
        tracep->declBus(c+60,"Ibtida_top_dffram_cv ibtidaTop iccm_tl_device_io_tl_i_a_address", false,-1, 31,0);
        tracep->declBus(c+720,"Ibtida_top_dffram_cv ibtidaTop iccm_tl_device_io_tl_i_a_mask", false,-1, 3,0);
        tracep->declBit(c+47,"Ibtida_top_dffram_cv ibtidaTop iccm_tl_device_io_tl_o_d_valid", false,-1);
        tracep->declBus(c+8,"Ibtida_top_dffram_cv ibtidaTop iccm_tl_device_io_tl_o_d_data", false,-1, 31,0);
        tracep->declBit(c+717,"Ibtida_top_dffram_cv ibtidaTop iccm_tl_device_io_tl_o_a_ready", false,-1);
        tracep->declBus(c+62,"Ibtida_top_dffram_cv ibtidaTop iccm_tl_device_io_addr_o", false,-1, 5,0);
        tracep->declBus(c+8,"Ibtida_top_dffram_cv ibtidaTop iccm_tl_device_io_rdata_i", false,-1, 31,0);
        tracep->declBit(c+63,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device_io_tl_i_a_valid", false,-1);
        tracep->declBus(c+52,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device_io_tl_i_a_opcode", false,-1, 2,0);
        tracep->declBus(c+53,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device_io_tl_i_a_address", false,-1, 31,0);
        tracep->declBus(c+54,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device_io_tl_i_a_mask", false,-1, 3,0);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device_io_tl_i_a_data", false,-1, 31,0);
        tracep->declBit(c+64,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device_io_tl_o_d_valid", false,-1);
        tracep->declBus(c+65,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device_io_tl_o_d_data", false,-1, 31,0);
        tracep->declBit(c+66,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device_io_tl_o_a_ready", false,-1);
        tracep->declBit(c+9,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device_io_we_o_0", false,-1);
        tracep->declBit(c+10,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device_io_we_o_1", false,-1);
        tracep->declBit(c+11,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device_io_we_o_2", false,-1);
        tracep->declBit(c+12,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device_io_we_o_3", false,-1);
        tracep->declBus(c+17,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device_io_addr_o", false,-1, 5,0);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device_io_wdata_o", false,-1, 31,0);
        tracep->declBus(c+15,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device_io_rdata_i", false,-1, 31,0);
        tracep->declBit(c+36,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2_io_tl_h_i_a_valid", false,-1);
        tracep->declBus(c+52,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2_io_tl_h_i_a_opcode", false,-1, 2,0);
        tracep->declBus(c+53,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2_io_tl_h_i_a_address", false,-1, 31,0);
        tracep->declBus(c+54,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2_io_tl_h_i_a_mask", false,-1, 3,0);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2_io_tl_h_i_a_data", false,-1, 31,0);
        tracep->declBit(c+34,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2_io_tl_h_o_d_valid", false,-1);
        tracep->declBus(c+35,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2_io_tl_h_o_d_data", false,-1, 31,0);
        tracep->declBit(c+33,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2_io_tl_h_o_a_ready", false,-1);
        tracep->declBit(c+63,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2_io_tl_d_o_0_a_valid", false,-1);
        tracep->declBus(c+52,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2_io_tl_d_o_0_a_opcode", false,-1, 2,0);
        tracep->declBus(c+53,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2_io_tl_d_o_0_a_address", false,-1, 31,0);
        tracep->declBus(c+54,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2_io_tl_d_o_0_a_mask", false,-1, 3,0);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2_io_tl_d_o_0_a_data", false,-1, 31,0);
        tracep->declBit(c+51,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2_io_tl_d_o_1_a_valid", false,-1);
        tracep->declBus(c+52,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2_io_tl_d_o_1_a_opcode", false,-1, 2,0);
        tracep->declBus(c+53,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2_io_tl_d_o_1_a_address", false,-1, 31,0);
        tracep->declBus(c+54,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2_io_tl_d_o_1_a_mask", false,-1, 3,0);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2_io_tl_d_o_1_a_data", false,-1, 31,0);
        tracep->declBit(c+64,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2_io_tl_d_i_0_d_valid", false,-1);
        tracep->declBus(c+65,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2_io_tl_d_i_0_d_data", false,-1, 31,0);
        tracep->declBit(c+66,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2_io_tl_d_i_0_a_ready", false,-1);
        tracep->declBit(c+55,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2_io_tl_d_i_1_d_valid", false,-1);
        tracep->declBus(c+56,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2_io_tl_d_i_1_d_data", false,-1, 31,0);
        tracep->declBit(c+57,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2_io_tl_d_i_1_a_ready", false,-1);
        tracep->declBus(c+67,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2_io_dev_sel", false,-1, 1,0);
        tracep->declBus(c+6,"Ibtida_top_dffram_cv ibtidaTop rx_data_reg", false,-1, 31,0);
        tracep->declBus(c+68,"Ibtida_top_dffram_cv ibtidaTop rx_addr_reg", false,-1, 31,0);
        tracep->declBit(c+69,"Ibtida_top_dffram_cv ibtidaTop reset_reg", false,-1);
        tracep->declBus(c+70,"Ibtida_top_dffram_cv ibtidaTop state_reg", false,-1, 1,0);
        tracep->declBus(c+71,"Ibtida_top_dffram_cv ibtidaTop instr_addr", false,-1, 31,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl reset", false,-1);
        tracep->declBit(c+28,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl io_isStalled", false,-1);
        tracep->declBus(c+29,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl io_rx_data_o", false,-1, 31,0);
        tracep->declBus(c+30,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl io_addr_o", false,-1, 7,0);
        tracep->declBus(c+706,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl io_CLK_PER_BIT", false,-1, 15,0);
        tracep->declBit(c+679,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl io_rxd", false,-1);
        tracep->declBit(c+31,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl io_valid", false,-1);
        tracep->declBit(c+32,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl io_done", false,-1);
        tracep->declBus(c+706,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl rx_io_CLK_PER_BIT", false,-1, 15,0);
        tracep->declBit(c+679,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl rx_io_rxd", false,-1);
        tracep->declBit(c+72,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl rx_io_valid", false,-1);
        tracep->declBus(c+73,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl rx_io_data", false,-1, 7,0);
        tracep->declBit(c+32,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl regDone", false,-1);
        tracep->declBus(c+74,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl count", false,-1, 2,0);
        tracep->declBus(c+29,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl regFinalData", false,-1, 31,0);
        tracep->declBus(c+75,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl regAddr", false,-1, 13,0);
        tracep->declBit(c+31,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl regValid", false,-1);
        tracep->declBus(c+76,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl dataReg", false,-1, 7,0);
        tracep->declBus(c+77,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl regLSB1", false,-1, 7,0);
        tracep->declBus(c+78,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl regLSB2", false,-1, 7,0);
        tracep->declBus(c+79,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl regMSB1", false,-1, 7,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl rx clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl rx reset", false,-1);
        tracep->declBus(c+706,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl rx io_CLK_PER_BIT", false,-1, 15,0);
        tracep->declBit(c+679,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl rx io_rxd", false,-1);
        tracep->declBit(c+72,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl rx io_valid", false,-1);
        tracep->declBus(c+73,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl rx io_data", false,-1, 7,0);
        tracep->declBus(c+80,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl rx stateReg", false,-1, 2,0);
        tracep->declBus(c+81,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl rx clockCount", false,-1, 7,0);
        tracep->declBus(c+82,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl rx bitIndex", false,-1, 3,0);
        tracep->declBit(c+72,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl rx validReg", false,-1);
        tracep->declBit(c+83,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl rx rxReg", false,-1);
        tracep->declBus(c+73,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl rx shiftReg", false,-1, 7,0);
        tracep->declBus(c+708,"Ibtida_top_dffram_cv ibtidaTop uart_ctrl rx CLCK_PER_BIT", false,-1, 31,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop core clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop core reset", false,-1);
        tracep->declBit(c+33,"Ibtida_top_dffram_cv ibtidaTop core io_data_gnt_i", false,-1);
        tracep->declBit(c+34,"Ibtida_top_dffram_cv ibtidaTop core io_data_rvalid_i", false,-1);
        tracep->declBus(c+35,"Ibtida_top_dffram_cv ibtidaTop core io_data_rdata_i", false,-1, 31,0);
        tracep->declBit(c+36,"Ibtida_top_dffram_cv ibtidaTop core io_data_req_o", false,-1);
        tracep->declBit(c+37,"Ibtida_top_dffram_cv ibtidaTop core io_data_we_o", false,-1);
        tracep->declBit(c+38,"Ibtida_top_dffram_cv ibtidaTop core io_data_be_o_0", false,-1);
        tracep->declBit(c+39,"Ibtida_top_dffram_cv ibtidaTop core io_data_be_o_1", false,-1);
        tracep->declBit(c+40,"Ibtida_top_dffram_cv ibtidaTop core io_data_be_o_2", false,-1);
        tracep->declBit(c+41,"Ibtida_top_dffram_cv ibtidaTop core io_data_be_o_3", false,-1);
        tracep->declBus(c+42,"Ibtida_top_dffram_cv ibtidaTop core io_data_addr_o", false,-1, 31,0);
        tracep->declBus(c+43,"Ibtida_top_dffram_cv ibtidaTop core io_data_wdata_o_0", false,-1, 7,0);
        tracep->declBus(c+44,"Ibtida_top_dffram_cv ibtidaTop core io_data_wdata_o_1", false,-1, 7,0);
        tracep->declBus(c+45,"Ibtida_top_dffram_cv ibtidaTop core io_data_wdata_o_2", false,-1, 7,0);
        tracep->declBus(c+46,"Ibtida_top_dffram_cv ibtidaTop core io_data_wdata_o_3", false,-1, 7,0);
        tracep->declBit(c+717,"Ibtida_top_dffram_cv ibtidaTop core io_instr_gnt_i", false,-1);
        tracep->declBit(c+47,"Ibtida_top_dffram_cv ibtidaTop core io_instr_rvalid_i", false,-1);
        tracep->declBus(c+8,"Ibtida_top_dffram_cv ibtidaTop core io_instr_rdata_i", false,-1, 31,0);
        tracep->declBit(c+717,"Ibtida_top_dffram_cv ibtidaTop core io_instr_req_o", false,-1);
        tracep->declBus(c+48,"Ibtida_top_dffram_cv ibtidaTop core io_instr_addr_o", false,-1, 31,0);
        tracep->declBit(c+49,"Ibtida_top_dffram_cv ibtidaTop core io_stall_core_i", false,-1);
        tracep->declBit(c+50,"Ibtida_top_dffram_cv ibtidaTop core io_irq_external_i", false,-1);
        tracep->declBus(c+84,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_pc_in", false,-1, 31,0);
        tracep->declBus(c+85,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_pc4_in", false,-1, 31,0);
        tracep->declBus(c+86,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_rs1_sel_in", false,-1, 4,0);
        tracep->declBus(c+87,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_rs2_sel_in", false,-1, 4,0);
        tracep->declBus(c+88,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_rs1_in", false,-1, 31,0);
        tracep->declBus(c+89,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_rs2_in", false,-1, 31,0);
        tracep->declBus(c+90,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_imm", false,-1, 31,0);
        tracep->declBus(c+91,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_rd_sel_in", false,-1, 4,0);
        tracep->declBus(c+92,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_func3_in", false,-1, 2,0);
        tracep->declBus(c+93,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_func7_in", false,-1, 6,0);
        tracep->declBit(c+94,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_ctrl_MemWr_in", false,-1);
        tracep->declBit(c+95,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_ctrl_MemRd_in", false,-1);
        tracep->declBit(c+96,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_ctrl_CsrWen_in", false,-1);
        tracep->declBit(c+97,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_ctrl_RegWr_in", false,-1);
        tracep->declBit(c+98,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_ctrl_MemToReg_in", false,-1);
        tracep->declBus(c+99,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_ctrl_AluOp_in", false,-1, 3,0);
        tracep->declBus(c+100,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_ctrl_OpA_sel_in", false,-1, 1,0);
        tracep->declBit(c+101,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_ctrl_OpB_sel_in", false,-1);
        tracep->declBus(c+102,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_inst_op_in", false,-1, 6,0);
        tracep->declBus(c+103,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_csr_data_i", false,-1, 31,0);
        tracep->declBit(c+104,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_stall", false,-1);
        tracep->declBus(c+105,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_pc_out", false,-1, 31,0);
        tracep->declBus(c+106,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_pc4_out", false,-1, 31,0);
        tracep->declBus(c+107,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_rs1_out", false,-1, 31,0);
        tracep->declBus(c+108,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_rs2_out", false,-1, 31,0);
        tracep->declBus(c+109,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_imm_out", false,-1, 31,0);
        tracep->declBus(c+110,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_func3_out", false,-1, 2,0);
        tracep->declBus(c+111,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_func7_out", false,-1, 6,0);
        tracep->declBus(c+112,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_inst_op_out", false,-1, 6,0);
        tracep->declBus(c+113,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_rd_sel_out", false,-1, 4,0);
        tracep->declBus(c+114,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_rs1_sel_out", false,-1, 4,0);
        tracep->declBus(c+115,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_rs2_sel_out", false,-1, 4,0);
        tracep->declBit(c+116,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_ctrl_MemWr_out", false,-1);
        tracep->declBit(c+117,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_ctrl_MemRd_out", false,-1);
        tracep->declBit(c+118,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_ctrl_RegWr_out", false,-1);
        tracep->declBit(c+119,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_ctrl_CsrWen_out", false,-1);
        tracep->declBit(c+120,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_ctrl_MemToReg_out", false,-1);
        tracep->declBus(c+121,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_ctrl_AluOp_out", false,-1, 3,0);
        tracep->declBus(c+122,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_ctrl_OpA_sel_out", false,-1, 1,0);
        tracep->declBit(c+123,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_ctrl_OpB_sel_out", false,-1);
        tracep->declBus(c+124,"Ibtida_top_dffram_cv ibtidaTop core ID_EX_io_csr_data_o", false,-1, 31,0);
        tracep->declBit(c+116,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM_io_ctrl_MemWr_in", false,-1);
        tracep->declBit(c+117,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM_io_ctrl_MemRd_in", false,-1);
        tracep->declBit(c+118,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM_io_ctrl_RegWr_in", false,-1);
        tracep->declBit(c+119,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM_io_ctrl_CsrWen_in", false,-1);
        tracep->declBit(c+120,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM_io_ctrl_MemToReg_in", false,-1);
        tracep->declBus(c+125,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM_io_rs2_in", false,-1, 31,0);
        tracep->declBus(c+113,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM_io_rd_sel_in", false,-1, 4,0);
        tracep->declBus(c+126,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM_io_alu_in", false,-1, 31,0);
        tracep->declBus(c+110,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM_io_EX_MEM_func3", false,-1, 2,0);
        tracep->declBus(c+124,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM_io_csr_data_i", false,-1, 31,0);
        tracep->declBit(c+104,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM_io_stall", false,-1);
        tracep->declBit(c+37,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM_io_ctrl_MemWr_out", false,-1);
        tracep->declBit(c+127,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM_io_ctrl_MemRd_out", false,-1);
        tracep->declBit(c+128,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM_io_ctrl_RegWr_out", false,-1);
        tracep->declBit(c+129,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM_io_ctrl_CsrWen_out", false,-1);
        tracep->declBit(c+130,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM_io_ctrl_MemToReg_out", false,-1);
        tracep->declBus(c+131,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM_io_rs2_out", false,-1, 31,0);
        tracep->declBus(c+132,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM_io_rd_sel_out", false,-1, 4,0);
        tracep->declBus(c+42,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM_io_alu_output", false,-1, 31,0);
        tracep->declBus(c+133,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM_io_EX_MEM_func3_out", false,-1, 2,0);
        tracep->declBus(c+134,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM_io_csr_data_o", false,-1, 31,0);
        tracep->declBit(c+128,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB_io_ctrl_RegWr_in", false,-1);
        tracep->declBit(c+129,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB_io_ctrl_CsrWen_in", false,-1);
        tracep->declBit(c+130,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB_io_ctrl_MemToReg_in", false,-1);
        tracep->declBus(c+132,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB_io_rd_sel_in", false,-1, 4,0);
        tracep->declBit(c+127,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB_io_ctrl_MemRd_in", false,-1);
        tracep->declBus(c+135,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB_io_dmem_data_in", false,-1, 31,0);
        tracep->declBus(c+42,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB_io_alu_in", false,-1, 31,0);
        tracep->declBus(c+134,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB_io_csr_data_in", false,-1, 31,0);
        tracep->declBit(c+104,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB_io_stall", false,-1);
        tracep->declBit(c+136,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB_io_ctrl_RegWr_out", false,-1);
        tracep->declBit(c+137,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB_io_ctrl_CsrWen_out", false,-1);
        tracep->declBit(c+138,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB_io_ctrl_MemToReg_out", false,-1);
        tracep->declBit(c+139,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB_io_ctrl_MemRd_out", false,-1);
        tracep->declBus(c+140,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB_io_rd_sel_out", false,-1, 4,0);
        tracep->declBus(c+141,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB_io_dmem_data_out", false,-1, 31,0);
        tracep->declBus(c+142,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB_io_alu_output", false,-1, 31,0);
        tracep->declBus(c+143,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB_io_csr_data_out", false,-1, 31,0);
        tracep->declBit(c+717,"Ibtida_top_dffram_cv ibtidaTop core fetch_io_core_instr_gnt_i", false,-1);
        tracep->declBit(c+47,"Ibtida_top_dffram_cv ibtidaTop core fetch_io_core_instr_rvalid_i", false,-1);
        tracep->declBus(c+8,"Ibtida_top_dffram_cv ibtidaTop core fetch_io_core_instr_rdata_i", false,-1, 31,0);
        tracep->declBit(c+144,"Ibtida_top_dffram_cv ibtidaTop core fetch_io_csrRegFile_irq_pending_i", false,-1);
        tracep->declBit(c+145,"Ibtida_top_dffram_cv ibtidaTop core fetch_io_csrRegFile_csr_mstatus_mie_i", false,-1);
        tracep->declBus(c+146,"Ibtida_top_dffram_cv ibtidaTop core fetch_io_csrRegFile_csr_mtvec_i", false,-1, 31,0);
        tracep->declBit(c+147,"Ibtida_top_dffram_cv ibtidaTop core fetch_io_csrRegFile_csr_mtvec_init_o", false,-1);
        tracep->declBit(c+148,"Ibtida_top_dffram_cv ibtidaTop core fetch_io_csrRegFile_csr_save_cause_o", false,-1);
        tracep->declBit(c+149,"Ibtida_top_dffram_cv ibtidaTop core fetch_io_csrRegFile_csr_save_if_o", false,-1);
        tracep->declBus(c+150,"Ibtida_top_dffram_cv ibtidaTop core fetch_io_csrRegFile_csr_if_pc_o", false,-1, 31,0);
        tracep->declBus(c+151,"Ibtida_top_dffram_cv ibtidaTop core fetch_io_csrRegFile_exc_cause_o", false,-1, 5,0);
        tracep->declBus(c+152,"Ibtida_top_dffram_cv ibtidaTop core fetch_io_csrRegFile_csr_mepc_i", false,-1, 31,0);
        tracep->declBit(c+147,"Ibtida_top_dffram_cv ibtidaTop core fetch_io_core_init_mtvec_i", false,-1);
        tracep->declBus(c+153,"Ibtida_top_dffram_cv ibtidaTop core fetch_io_decode_sb_imm_i", false,-1, 31,0);
        tracep->declBus(c+154,"Ibtida_top_dffram_cv ibtidaTop core fetch_io_decode_uj_imm_i", false,-1, 31,0);
        tracep->declBus(c+155,"Ibtida_top_dffram_cv ibtidaTop core fetch_io_decode_jalr_imm_i", false,-1, 31,0);
        tracep->declBus(c+156,"Ibtida_top_dffram_cv ibtidaTop core fetch_io_decode_ctrl_next_pc_sel_i", false,-1, 1,0);
        tracep->declBit(c+157,"Ibtida_top_dffram_cv ibtidaTop core fetch_io_decode_ctrl_out_branch_i", false,-1);
        tracep->declBit(c+158,"Ibtida_top_dffram_cv ibtidaTop core fetch_io_decode_branchLogic_output_i", false,-1);
        tracep->declBus(c+85,"Ibtida_top_dffram_cv ibtidaTop core fetch_io_decode_hazardDetection_pc_i", false,-1, 31,0);
        tracep->declBus(c+159,"Ibtida_top_dffram_cv ibtidaTop core fetch_io_decode_hazardDetection_inst_i", false,-1, 31,0);
        tracep->declBus(c+84,"Ibtida_top_dffram_cv ibtidaTop core fetch_io_decode_hazardDetection_current_pc_i", false,-1, 31,0);
        tracep->declBit(c+160,"Ibtida_top_dffram_cv ibtidaTop core fetch_io_decode_hazardDetection_pc_forward_i", false,-1);
        tracep->declBit(c+160,"Ibtida_top_dffram_cv ibtidaTop core fetch_io_decode_hazardDetection_inst_forward_i", false,-1);
        tracep->declBit(c+161,"Ibtida_top_dffram_cv ibtidaTop core fetch_io_decode_mret_inst_i", false,-1);
        tracep->declBit(c+162,"Ibtida_top_dffram_cv ibtidaTop core fetch_io_core_stall_i", false,-1);
        tracep->declBus(c+48,"Ibtida_top_dffram_cv ibtidaTop core fetch_io_core_instr_addr_o", false,-1, 31,0);
        tracep->declBit(c+717,"Ibtida_top_dffram_cv ibtidaTop core fetch_io_core_instr_req_o", false,-1);
        tracep->declBus(c+84,"Ibtida_top_dffram_cv ibtidaTop core fetch_io_decode_if_id_pc_o", false,-1, 31,0);
        tracep->declBus(c+85,"Ibtida_top_dffram_cv ibtidaTop core fetch_io_decode_if_id_pc4_o", false,-1, 31,0);
        tracep->declBus(c+159,"Ibtida_top_dffram_cv ibtidaTop core fetch_io_decode_if_id_inst_o", false,-1, 31,0);
        tracep->declBit(c+50,"Ibtida_top_dffram_cv ibtidaTop core decode_io_irq_external_i", false,-1);
        tracep->declBus(c+159,"Ibtida_top_dffram_cv ibtidaTop core decode_io_IF_ID_inst", false,-1, 31,0);
        tracep->declBus(c+84,"Ibtida_top_dffram_cv ibtidaTop core decode_io_IF_ID_pc", false,-1, 31,0);
        tracep->declBus(c+85,"Ibtida_top_dffram_cv ibtidaTop core decode_io_IF_ID_pc4", false,-1, 31,0);
        tracep->declBit(c+136,"Ibtida_top_dffram_cv ibtidaTop core decode_io_MEM_WB_ctrl_regWr", false,-1);
        tracep->declBit(c+137,"Ibtida_top_dffram_cv ibtidaTop core decode_io_MEM_WB_ctrl_csrWen", false,-1);
        tracep->declBus(c+140,"Ibtida_top_dffram_cv ibtidaTop core decode_io_MEM_WB_rd_sel", false,-1, 4,0);
        tracep->declBit(c+117,"Ibtida_top_dffram_cv ibtidaTop core decode_io_ID_EX_ctrl_MemRd", false,-1);
        tracep->declBit(c+118,"Ibtida_top_dffram_cv ibtidaTop core decode_io_ID_EX_ctrl_regWr", false,-1);
        tracep->declBit(c+119,"Ibtida_top_dffram_cv ibtidaTop core decode_io_ID_EX_ctrl_csrWen", false,-1);
        tracep->declBit(c+129,"Ibtida_top_dffram_cv ibtidaTop core decode_io_EX_MEM_ctrl_csrWen", false,-1);
        tracep->declBus(c+113,"Ibtida_top_dffram_cv ibtidaTop core decode_io_ID_EX_rd_sel", false,-1, 4,0);
        tracep->declBus(c+132,"Ibtida_top_dffram_cv ibtidaTop core decode_io_EX_MEM_rd_sel", false,-1, 4,0);
        tracep->declBit(c+127,"Ibtida_top_dffram_cv ibtidaTop core decode_io_EX_MEM_ctrl_MemRd", false,-1);
        tracep->declBit(c+128,"Ibtida_top_dffram_cv ibtidaTop core decode_io_EX_MEM_ctrl_regWr", false,-1);
        tracep->declBit(c+139,"Ibtida_top_dffram_cv ibtidaTop core decode_io_MEM_WB_ctrl_MemRd", false,-1);
        tracep->declBus(c+126,"Ibtida_top_dffram_cv ibtidaTop core decode_io_alu_output", false,-1, 31,0);
        tracep->declBus(c+42,"Ibtida_top_dffram_cv ibtidaTop core decode_io_EX_MEM_alu_output", false,-1, 31,0);
        tracep->declBus(c+35,"Ibtida_top_dffram_cv ibtidaTop core decode_io_dmem_memOut", false,-1, 31,0);
        tracep->declBit(c+34,"Ibtida_top_dffram_cv ibtidaTop core decode_io_dccm_rvalid_i", false,-1);
        tracep->declBus(c+163,"Ibtida_top_dffram_cv ibtidaTop core decode_io_writeback_write_data", false,-1, 31,0);
        tracep->declBus(c+143,"Ibtida_top_dffram_cv ibtidaTop core decode_io_MEM_WB_csr_rdata_i", false,-1, 31,0);
        tracep->declBus(c+134,"Ibtida_top_dffram_cv ibtidaTop core decode_io_EX_MEM_csr_rdata_i", false,-1, 31,0);
        tracep->declBus(c+124,"Ibtida_top_dffram_cv ibtidaTop core decode_io_ID_EX_csr_rdata_i", false,-1, 31,0);
        tracep->declBit(c+147,"Ibtida_top_dffram_cv ibtidaTop core decode_io_fetch_csr_mtvec_init", false,-1);
        tracep->declBus(c+150,"Ibtida_top_dffram_cv ibtidaTop core decode_io_fetch_csr_if_pc", false,-1, 31,0);
        tracep->declBit(c+149,"Ibtida_top_dffram_cv ibtidaTop core decode_io_fetch_csr_save_if", false,-1);
        tracep->declBus(c+151,"Ibtida_top_dffram_cv ibtidaTop core decode_io_fetch_exc_cause_i", false,-1, 5,0);
        tracep->declBit(c+148,"Ibtida_top_dffram_cv ibtidaTop core decode_io_fetch_csr_save_cause_i", false,-1);
        tracep->declBit(c+118,"Ibtida_top_dffram_cv ibtidaTop core decode_io_execute_regwrite", false,-1);
        tracep->declBit(c+128,"Ibtida_top_dffram_cv ibtidaTop core decode_io_mem_regwrite", false,-1);
        tracep->declBit(c+136,"Ibtida_top_dffram_cv ibtidaTop core decode_io_wb_regwrite", false,-1);
        tracep->declBus(c+84,"Ibtida_top_dffram_cv ibtidaTop core decode_io_pc_out", false,-1, 31,0);
        tracep->declBus(c+85,"Ibtida_top_dffram_cv ibtidaTop core decode_io_pc4_out", false,-1, 31,0);
        tracep->declBus(c+164,"Ibtida_top_dffram_cv ibtidaTop core decode_io_inst_op_out", false,-1, 31,0);
        tracep->declBus(c+92,"Ibtida_top_dffram_cv ibtidaTop core decode_io_func3_out", false,-1, 2,0);
        tracep->declBus(c+93,"Ibtida_top_dffram_cv ibtidaTop core decode_io_func7_out", false,-1, 6,0);
        tracep->declBus(c+91,"Ibtida_top_dffram_cv ibtidaTop core decode_io_rd_sel_out", false,-1, 4,0);
        tracep->declBus(c+86,"Ibtida_top_dffram_cv ibtidaTop core decode_io_rs1_sel_out", false,-1, 4,0);
        tracep->declBus(c+87,"Ibtida_top_dffram_cv ibtidaTop core decode_io_rs2_sel_out", false,-1, 4,0);
        tracep->declBus(c+88,"Ibtida_top_dffram_cv ibtidaTop core decode_io_rs1_out", false,-1, 31,0);
        tracep->declBus(c+89,"Ibtida_top_dffram_cv ibtidaTop core decode_io_rs2_out", false,-1, 31,0);
        tracep->declBus(c+103,"Ibtida_top_dffram_cv ibtidaTop core decode_io_csr_rdata_o", false,-1, 31,0);
        tracep->declBus(c+90,"Ibtida_top_dffram_cv ibtidaTop core decode_io_imm_out", false,-1, 31,0);
        tracep->declBus(c+153,"Ibtida_top_dffram_cv ibtidaTop core decode_io_sb_imm", false,-1, 31,0);
        tracep->declBus(c+154,"Ibtida_top_dffram_cv ibtidaTop core decode_io_uj_imm", false,-1, 31,0);
        tracep->declBus(c+155,"Ibtida_top_dffram_cv ibtidaTop core decode_io_jalr_output", false,-1, 31,0);
        tracep->declBit(c+158,"Ibtida_top_dffram_cv ibtidaTop core decode_io_branchLogic_output", false,-1);
        tracep->declBus(c+85,"Ibtida_top_dffram_cv ibtidaTop core decode_io_hazardDetection_pc_out", false,-1, 31,0);
        tracep->declBus(c+159,"Ibtida_top_dffram_cv ibtidaTop core decode_io_hazardDetection_inst_out", false,-1, 31,0);
        tracep->declBus(c+84,"Ibtida_top_dffram_cv ibtidaTop core decode_io_hazardDetection_current_pc_out", false,-1, 31,0);
        tracep->declBit(c+160,"Ibtida_top_dffram_cv ibtidaTop core decode_io_hazardDetection_pc_forward", false,-1);
        tracep->declBit(c+160,"Ibtida_top_dffram_cv ibtidaTop core decode_io_hazardDetection_inst_forward", false,-1);
        tracep->declBit(c+94,"Ibtida_top_dffram_cv ibtidaTop core decode_io_ctrl_MemWr_out", false,-1);
        tracep->declBit(c+95,"Ibtida_top_dffram_cv ibtidaTop core decode_io_ctrl_MemRd_out", false,-1);
        tracep->declBit(c+157,"Ibtida_top_dffram_cv ibtidaTop core decode_io_ctrl_Branch_out", false,-1);
        tracep->declBit(c+97,"Ibtida_top_dffram_cv ibtidaTop core decode_io_ctrl_RegWr_out", false,-1);
        tracep->declBit(c+96,"Ibtida_top_dffram_cv ibtidaTop core decode_io_ctrl_CsrWen_out", false,-1);
        tracep->declBit(c+98,"Ibtida_top_dffram_cv ibtidaTop core decode_io_ctrl_MemToReg_out", false,-1);
        tracep->declBus(c+99,"Ibtida_top_dffram_cv ibtidaTop core decode_io_ctrl_AluOp_out", false,-1, 3,0);
        tracep->declBus(c+100,"Ibtida_top_dffram_cv ibtidaTop core decode_io_ctrl_OpA_sel_out", false,-1, 1,0);
        tracep->declBit(c+101,"Ibtida_top_dffram_cv ibtidaTop core decode_io_ctrl_OpB_sel_out", false,-1);
        tracep->declBus(c+156,"Ibtida_top_dffram_cv ibtidaTop core decode_io_ctrl_next_pc_sel_out", false,-1, 1,0);
        tracep->declBit(c+144,"Ibtida_top_dffram_cv ibtidaTop core decode_io_fetch_irq_pending_o", false,-1);
        tracep->declBit(c+145,"Ibtida_top_dffram_cv ibtidaTop core decode_io_fetch_csr_mstatus_mie_o", false,-1);
        tracep->declBus(c+146,"Ibtida_top_dffram_cv ibtidaTop core decode_io_fetch_csr_mtvec_o", false,-1, 31,0);
        tracep->declBus(c+152,"Ibtida_top_dffram_cv ibtidaTop core decode_io_fetch_csr_mepc_o", false,-1, 31,0);
        tracep->declBit(c+161,"Ibtida_top_dffram_cv ibtidaTop core decode_io_fetch_mret_inst_o", false,-1);
        tracep->declBus(c+132,"Ibtida_top_dffram_cv ibtidaTop core execute_io_EX_MEM_rd_sel", false,-1, 4,0);
        tracep->declBus(c+140,"Ibtida_top_dffram_cv ibtidaTop core execute_io_MEM_WB_rd_sel", false,-1, 4,0);
        tracep->declBus(c+114,"Ibtida_top_dffram_cv ibtidaTop core execute_io_ID_EX_rs1_sel", false,-1, 4,0);
        tracep->declBus(c+115,"Ibtida_top_dffram_cv ibtidaTop core execute_io_ID_EX_rs2_sel", false,-1, 4,0);
        tracep->declBit(c+128,"Ibtida_top_dffram_cv ibtidaTop core execute_io_EX_MEM_ctrl_RegWr", false,-1);
        tracep->declBit(c+129,"Ibtida_top_dffram_cv ibtidaTop core execute_io_EX_MEM_ctrl_csrWen", false,-1);
        tracep->declBit(c+137,"Ibtida_top_dffram_cv ibtidaTop core execute_io_MEM_WB_ctrl_csrWen", false,-1);
        tracep->declBit(c+136,"Ibtida_top_dffram_cv ibtidaTop core execute_io_MEM_WB_ctrl_RegWr", false,-1);
        tracep->declBus(c+122,"Ibtida_top_dffram_cv ibtidaTop core execute_io_ID_EX_ctrl_OpA_sel", false,-1, 1,0);
        tracep->declBit(c+123,"Ibtida_top_dffram_cv ibtidaTop core execute_io_ID_EX_ctrl_OpB_sel", false,-1);
        tracep->declBus(c+106,"Ibtida_top_dffram_cv ibtidaTop core execute_io_ID_EX_pc4", false,-1, 31,0);
        tracep->declBus(c+105,"Ibtida_top_dffram_cv ibtidaTop core execute_io_ID_EX_pc_out", false,-1, 31,0);
        tracep->declBus(c+107,"Ibtida_top_dffram_cv ibtidaTop core execute_io_ID_EX_rs1", false,-1, 31,0);
        tracep->declBus(c+108,"Ibtida_top_dffram_cv ibtidaTop core execute_io_ID_EX_rs2", false,-1, 31,0);
        tracep->declBus(c+124,"Ibtida_top_dffram_cv ibtidaTop core execute_io_ID_EX_csr_data", false,-1, 31,0);
        tracep->declBus(c+42,"Ibtida_top_dffram_cv ibtidaTop core execute_io_EX_MEM_alu_output", false,-1, 31,0);
        tracep->declBus(c+134,"Ibtida_top_dffram_cv ibtidaTop core execute_io_EX_MEM_csr_rdata", false,-1, 31,0);
        tracep->declBus(c+143,"Ibtida_top_dffram_cv ibtidaTop core execute_io_MEM_WB_csr_rdata", false,-1, 31,0);
        tracep->declBus(c+163,"Ibtida_top_dffram_cv ibtidaTop core execute_io_writeback_write_data", false,-1, 31,0);
        tracep->declBus(c+109,"Ibtida_top_dffram_cv ibtidaTop core execute_io_ID_EX_imm", false,-1, 31,0);
        tracep->declBus(c+121,"Ibtida_top_dffram_cv ibtidaTop core execute_io_ID_EX_ctrl_AluOp", false,-1, 3,0);
        tracep->declBus(c+111,"Ibtida_top_dffram_cv ibtidaTop core execute_io_ID_EX_func7", false,-1, 6,0);
        tracep->declBus(c+112,"Ibtida_top_dffram_cv ibtidaTop core execute_io_ID_EX_inst_op", false,-1, 6,0);
        tracep->declBus(c+110,"Ibtida_top_dffram_cv ibtidaTop core execute_io_ID_EX_func3", false,-1, 2,0);
        tracep->declBus(c+113,"Ibtida_top_dffram_cv ibtidaTop core execute_io_ID_EX_rd_sel", false,-1, 4,0);
        tracep->declBit(c+116,"Ibtida_top_dffram_cv ibtidaTop core execute_io_ID_EX_ctrl_MemWr", false,-1);
        tracep->declBit(c+117,"Ibtida_top_dffram_cv ibtidaTop core execute_io_ID_EX_ctrl_MemRd", false,-1);
        tracep->declBit(c+118,"Ibtida_top_dffram_cv ibtidaTop core execute_io_ID_EX_ctrl_RegWr", false,-1);
        tracep->declBit(c+119,"Ibtida_top_dffram_cv ibtidaTop core execute_io_ID_EX_ctrl_CsrWen", false,-1);
        tracep->declBit(c+120,"Ibtida_top_dffram_cv ibtidaTop core execute_io_ID_EX_ctrl_MemToReg", false,-1);
        tracep->declBus(c+125,"Ibtida_top_dffram_cv ibtidaTop core execute_io_rs2_out", false,-1, 31,0);
        tracep->declBus(c+126,"Ibtida_top_dffram_cv ibtidaTop core execute_io_alu_output", false,-1, 31,0);
        tracep->declBus(c+113,"Ibtida_top_dffram_cv ibtidaTop core execute_io_rd_sel_out", false,-1, 4,0);
        tracep->declBit(c+116,"Ibtida_top_dffram_cv ibtidaTop core execute_io_ctrl_MemWr_out", false,-1);
        tracep->declBit(c+117,"Ibtida_top_dffram_cv ibtidaTop core execute_io_ctrl_MemRd_out", false,-1);
        tracep->declBit(c+118,"Ibtida_top_dffram_cv ibtidaTop core execute_io_ctrl_RegWr_out", false,-1);
        tracep->declBit(c+119,"Ibtida_top_dffram_cv ibtidaTop core execute_io_ctrl_CsrWe_out", false,-1);
        tracep->declBit(c+120,"Ibtida_top_dffram_cv ibtidaTop core execute_io_ctrl_MemToReg_out", false,-1);
        tracep->declBus(c+110,"Ibtida_top_dffram_cv ibtidaTop core execute_io_func3_out", false,-1, 2,0);
        tracep->declBus(c+124,"Ibtida_top_dffram_cv ibtidaTop core execute_io_csr_data_o", false,-1, 31,0);
        tracep->declBus(c+42,"Ibtida_top_dffram_cv ibtidaTop core memory_stage_io_EX_MEM_alu_output", false,-1, 31,0);
        tracep->declBus(c+132,"Ibtida_top_dffram_cv ibtidaTop core memory_stage_io_EX_MEM_rd_sel", false,-1, 4,0);
        tracep->declBit(c+128,"Ibtida_top_dffram_cv ibtidaTop core memory_stage_io_EX_MEM_RegWr", false,-1);
        tracep->declBit(c+129,"Ibtida_top_dffram_cv ibtidaTop core memory_stage_io_EX_MEM_CsrWe", false,-1);
        tracep->declBit(c+127,"Ibtida_top_dffram_cv ibtidaTop core memory_stage_io_EX_MEM_MemRd", false,-1);
        tracep->declBit(c+130,"Ibtida_top_dffram_cv ibtidaTop core memory_stage_io_EX_MEM_MemToReg", false,-1);
        tracep->declBit(c+37,"Ibtida_top_dffram_cv ibtidaTop core memory_stage_io_EX_MEM_MemWr", false,-1);
        tracep->declBus(c+131,"Ibtida_top_dffram_cv ibtidaTop core memory_stage_io_EX_MEM_rs2", false,-1, 31,0);
        tracep->declBus(c+133,"Ibtida_top_dffram_cv ibtidaTop core memory_stage_io_func3", false,-1, 2,0);
        tracep->declBus(c+134,"Ibtida_top_dffram_cv ibtidaTop core memory_stage_io_EX_MEM_csr_data", false,-1, 31,0);
        tracep->declBit(c+33,"Ibtida_top_dffram_cv ibtidaTop core memory_stage_io_data_gnt_i", false,-1);
        tracep->declBit(c+34,"Ibtida_top_dffram_cv ibtidaTop core memory_stage_io_data_rvalid_i", false,-1);
        tracep->declBus(c+35,"Ibtida_top_dffram_cv ibtidaTop core memory_stage_io_data_rdata_i", false,-1, 31,0);
        tracep->declBit(c+36,"Ibtida_top_dffram_cv ibtidaTop core memory_stage_io_data_req_o", false,-1);
        tracep->declBit(c+38,"Ibtida_top_dffram_cv ibtidaTop core memory_stage_io_data_be_o_0", false,-1);
        tracep->declBit(c+39,"Ibtida_top_dffram_cv ibtidaTop core memory_stage_io_data_be_o_1", false,-1);
        tracep->declBit(c+40,"Ibtida_top_dffram_cv ibtidaTop core memory_stage_io_data_be_o_2", false,-1);
        tracep->declBit(c+41,"Ibtida_top_dffram_cv ibtidaTop core memory_stage_io_data_be_o_3", false,-1);
        tracep->declBit(c+37,"Ibtida_top_dffram_cv ibtidaTop core memory_stage_io_ctrl_MemWr_out", false,-1);
        tracep->declBus(c+43,"Ibtida_top_dffram_cv ibtidaTop core memory_stage_io_data_wdata_o_0", false,-1, 7,0);
        tracep->declBus(c+44,"Ibtida_top_dffram_cv ibtidaTop core memory_stage_io_data_wdata_o_1", false,-1, 7,0);
        tracep->declBus(c+45,"Ibtida_top_dffram_cv ibtidaTop core memory_stage_io_data_wdata_o_2", false,-1, 7,0);
        tracep->declBus(c+46,"Ibtida_top_dffram_cv ibtidaTop core memory_stage_io_data_wdata_o_3", false,-1, 7,0);
        tracep->declBus(c+42,"Ibtida_top_dffram_cv ibtidaTop core memory_stage_io_memAddress", false,-1, 31,0);
        tracep->declBus(c+135,"Ibtida_top_dffram_cv ibtidaTop core memory_stage_io_data_out", false,-1, 31,0);
        tracep->declBus(c+42,"Ibtida_top_dffram_cv ibtidaTop core memory_stage_io_alu_output", false,-1, 31,0);
        tracep->declBus(c+132,"Ibtida_top_dffram_cv ibtidaTop core memory_stage_io_rd_sel_out", false,-1, 4,0);
        tracep->declBit(c+128,"Ibtida_top_dffram_cv ibtidaTop core memory_stage_io_ctrl_RegWr_out", false,-1);
        tracep->declBit(c+129,"Ibtida_top_dffram_cv ibtidaTop core memory_stage_io_ctrl_CsrWen_out", false,-1);
        tracep->declBit(c+127,"Ibtida_top_dffram_cv ibtidaTop core memory_stage_io_ctrl_MemRd_out", false,-1);
        tracep->declBit(c+130,"Ibtida_top_dffram_cv ibtidaTop core memory_stage_io_ctrl_MemToReg_out", false,-1);
        tracep->declBus(c+134,"Ibtida_top_dffram_cv ibtidaTop core memory_stage_io_csr_data_out", false,-1, 31,0);
        tracep->declBit(c+165,"Ibtida_top_dffram_cv ibtidaTop core memory_stage_io_stall", false,-1);
        tracep->declBit(c+138,"Ibtida_top_dffram_cv ibtidaTop core writeback_io_MEM_WB_MemToReg", false,-1);
        tracep->declBus(c+141,"Ibtida_top_dffram_cv ibtidaTop core writeback_io_MEM_WB_dataMem_data", false,-1, 31,0);
        tracep->declBus(c+142,"Ibtida_top_dffram_cv ibtidaTop core writeback_io_MEM_WB_alu_output", false,-1, 31,0);
        tracep->declBus(c+163,"Ibtida_top_dffram_cv ibtidaTop core writeback_io_write_data", false,-1, 31,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop core ID_EX clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop core ID_EX reset", false,-1);
        tracep->declBus(c+84,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_pc_in", false,-1, 31,0);
        tracep->declBus(c+85,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_pc4_in", false,-1, 31,0);
        tracep->declBus(c+86,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_rs1_sel_in", false,-1, 4,0);
        tracep->declBus(c+87,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_rs2_sel_in", false,-1, 4,0);
        tracep->declBus(c+88,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_rs1_in", false,-1, 31,0);
        tracep->declBus(c+89,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_rs2_in", false,-1, 31,0);
        tracep->declBus(c+90,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_imm", false,-1, 31,0);
        tracep->declBus(c+91,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_rd_sel_in", false,-1, 4,0);
        tracep->declBus(c+92,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_func3_in", false,-1, 2,0);
        tracep->declBus(c+93,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_func7_in", false,-1, 6,0);
        tracep->declBit(c+94,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_ctrl_MemWr_in", false,-1);
        tracep->declBit(c+95,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_ctrl_MemRd_in", false,-1);
        tracep->declBit(c+96,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_ctrl_CsrWen_in", false,-1);
        tracep->declBit(c+97,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_ctrl_RegWr_in", false,-1);
        tracep->declBit(c+98,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_ctrl_MemToReg_in", false,-1);
        tracep->declBus(c+99,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_ctrl_AluOp_in", false,-1, 3,0);
        tracep->declBus(c+100,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_ctrl_OpA_sel_in", false,-1, 1,0);
        tracep->declBit(c+101,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_ctrl_OpB_sel_in", false,-1);
        tracep->declBus(c+102,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_inst_op_in", false,-1, 6,0);
        tracep->declBus(c+103,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_csr_data_i", false,-1, 31,0);
        tracep->declBit(c+104,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_stall", false,-1);
        tracep->declBus(c+105,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_pc_out", false,-1, 31,0);
        tracep->declBus(c+106,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_pc4_out", false,-1, 31,0);
        tracep->declBus(c+107,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_rs1_out", false,-1, 31,0);
        tracep->declBus(c+108,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_rs2_out", false,-1, 31,0);
        tracep->declBus(c+109,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_imm_out", false,-1, 31,0);
        tracep->declBus(c+110,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_func3_out", false,-1, 2,0);
        tracep->declBus(c+111,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_func7_out", false,-1, 6,0);
        tracep->declBus(c+112,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_inst_op_out", false,-1, 6,0);
        tracep->declBus(c+113,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_rd_sel_out", false,-1, 4,0);
        tracep->declBus(c+114,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_rs1_sel_out", false,-1, 4,0);
        tracep->declBus(c+115,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_rs2_sel_out", false,-1, 4,0);
        tracep->declBit(c+116,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_ctrl_MemWr_out", false,-1);
        tracep->declBit(c+117,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_ctrl_MemRd_out", false,-1);
        tracep->declBit(c+118,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_ctrl_RegWr_out", false,-1);
        tracep->declBit(c+119,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_ctrl_CsrWen_out", false,-1);
        tracep->declBit(c+120,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_ctrl_MemToReg_out", false,-1);
        tracep->declBus(c+121,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_ctrl_AluOp_out", false,-1, 3,0);
        tracep->declBus(c+122,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_ctrl_OpA_sel_out", false,-1, 1,0);
        tracep->declBit(c+123,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_ctrl_OpB_sel_out", false,-1);
        tracep->declBus(c+124,"Ibtida_top_dffram_cv ibtidaTop core ID_EX io_csr_data_o", false,-1, 31,0);
        tracep->declBus(c+105,"Ibtida_top_dffram_cv ibtidaTop core ID_EX pc_reg", false,-1, 31,0);
        tracep->declBus(c+106,"Ibtida_top_dffram_cv ibtidaTop core ID_EX pc4_reg", false,-1, 31,0);
        tracep->declBus(c+107,"Ibtida_top_dffram_cv ibtidaTop core ID_EX rs1_reg", false,-1, 31,0);
        tracep->declBus(c+108,"Ibtida_top_dffram_cv ibtidaTop core ID_EX rs2_reg", false,-1, 31,0);
        tracep->declBus(c+109,"Ibtida_top_dffram_cv ibtidaTop core ID_EX imm_reg", false,-1, 31,0);
        tracep->declBus(c+113,"Ibtida_top_dffram_cv ibtidaTop core ID_EX rd_sel_reg", false,-1, 4,0);
        tracep->declBus(c+114,"Ibtida_top_dffram_cv ibtidaTop core ID_EX rs1_sel_reg", false,-1, 4,0);
        tracep->declBus(c+115,"Ibtida_top_dffram_cv ibtidaTop core ID_EX rs2_sel_reg", false,-1, 4,0);
        tracep->declBus(c+110,"Ibtida_top_dffram_cv ibtidaTop core ID_EX func3_reg", false,-1, 2,0);
        tracep->declBus(c+111,"Ibtida_top_dffram_cv ibtidaTop core ID_EX func7_reg", false,-1, 6,0);
        tracep->declBus(c+112,"Ibtida_top_dffram_cv ibtidaTop core ID_EX inst_op_reg", false,-1, 6,0);
        tracep->declBus(c+124,"Ibtida_top_dffram_cv ibtidaTop core ID_EX csr_data_reg", false,-1, 31,0);
        tracep->declBit(c+116,"Ibtida_top_dffram_cv ibtidaTop core ID_EX ctrl_MemWr_reg", false,-1);
        tracep->declBit(c+117,"Ibtida_top_dffram_cv ibtidaTop core ID_EX ctrl_MemRd_reg", false,-1);
        tracep->declBit(c+118,"Ibtida_top_dffram_cv ibtidaTop core ID_EX ctrl_RegWr_reg", false,-1);
        tracep->declBit(c+119,"Ibtida_top_dffram_cv ibtidaTop core ID_EX ctrl_CsrWen_reg", false,-1);
        tracep->declBit(c+120,"Ibtida_top_dffram_cv ibtidaTop core ID_EX ctrl_MemToReg_reg", false,-1);
        tracep->declBus(c+121,"Ibtida_top_dffram_cv ibtidaTop core ID_EX ctrl_AluOp_reg", false,-1, 3,0);
        tracep->declBus(c+122,"Ibtida_top_dffram_cv ibtidaTop core ID_EX ctrl_OpA_sel_reg", false,-1, 1,0);
        tracep->declBit(c+123,"Ibtida_top_dffram_cv ibtidaTop core ID_EX ctrl_OpB_sel_reg", false,-1);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM reset", false,-1);
        tracep->declBit(c+116,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM io_ctrl_MemWr_in", false,-1);
        tracep->declBit(c+117,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM io_ctrl_MemRd_in", false,-1);
        tracep->declBit(c+118,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM io_ctrl_RegWr_in", false,-1);
        tracep->declBit(c+119,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM io_ctrl_CsrWen_in", false,-1);
        tracep->declBit(c+120,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM io_ctrl_MemToReg_in", false,-1);
        tracep->declBus(c+125,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM io_rs2_in", false,-1, 31,0);
        tracep->declBus(c+113,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM io_rd_sel_in", false,-1, 4,0);
        tracep->declBus(c+126,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM io_alu_in", false,-1, 31,0);
        tracep->declBus(c+110,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM io_EX_MEM_func3", false,-1, 2,0);
        tracep->declBus(c+124,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM io_csr_data_i", false,-1, 31,0);
        tracep->declBit(c+104,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM io_stall", false,-1);
        tracep->declBit(c+37,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM io_ctrl_MemWr_out", false,-1);
        tracep->declBit(c+127,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM io_ctrl_MemRd_out", false,-1);
        tracep->declBit(c+128,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM io_ctrl_RegWr_out", false,-1);
        tracep->declBit(c+129,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM io_ctrl_CsrWen_out", false,-1);
        tracep->declBit(c+130,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM io_ctrl_MemToReg_out", false,-1);
        tracep->declBus(c+131,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM io_rs2_out", false,-1, 31,0);
        tracep->declBus(c+132,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM io_rd_sel_out", false,-1, 4,0);
        tracep->declBus(c+42,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM io_alu_output", false,-1, 31,0);
        tracep->declBus(c+133,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM io_EX_MEM_func3_out", false,-1, 2,0);
        tracep->declBus(c+134,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM io_csr_data_o", false,-1, 31,0);
        tracep->declBit(c+37,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM reg_memWr", false,-1);
        tracep->declBit(c+127,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM reg_memRd", false,-1);
        tracep->declBit(c+128,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM reg_regWr", false,-1);
        tracep->declBit(c+129,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM reg_csrWen", false,-1);
        tracep->declBit(c+130,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM reg_memToReg", false,-1);
        tracep->declBus(c+131,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM reg_rs2", false,-1, 31,0);
        tracep->declBus(c+132,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM reg_rd_sel", false,-1, 4,0);
        tracep->declBus(c+42,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM reg_alu_output", false,-1, 31,0);
        tracep->declBus(c+133,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM reg_func3", false,-1, 2,0);
        tracep->declBus(c+134,"Ibtida_top_dffram_cv ibtidaTop core EX_MEM reg_csr_data", false,-1, 31,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB reset", false,-1);
        tracep->declBit(c+128,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB io_ctrl_RegWr_in", false,-1);
        tracep->declBit(c+129,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB io_ctrl_CsrWen_in", false,-1);
        tracep->declBit(c+130,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB io_ctrl_MemToReg_in", false,-1);
        tracep->declBus(c+132,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB io_rd_sel_in", false,-1, 4,0);
        tracep->declBit(c+127,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB io_ctrl_MemRd_in", false,-1);
        tracep->declBus(c+135,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB io_dmem_data_in", false,-1, 31,0);
        tracep->declBus(c+42,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB io_alu_in", false,-1, 31,0);
        tracep->declBus(c+134,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB io_csr_data_in", false,-1, 31,0);
        tracep->declBit(c+104,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB io_stall", false,-1);
        tracep->declBit(c+136,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB io_ctrl_RegWr_out", false,-1);
        tracep->declBit(c+137,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB io_ctrl_CsrWen_out", false,-1);
        tracep->declBit(c+138,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB io_ctrl_MemToReg_out", false,-1);
        tracep->declBit(c+139,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB io_ctrl_MemRd_out", false,-1);
        tracep->declBus(c+140,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB io_rd_sel_out", false,-1, 4,0);
        tracep->declBus(c+141,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB io_dmem_data_out", false,-1, 31,0);
        tracep->declBus(c+142,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB io_alu_output", false,-1, 31,0);
        tracep->declBus(c+143,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB io_csr_data_out", false,-1, 31,0);
        tracep->declBit(c+136,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB reg_regWr", false,-1);
        tracep->declBit(c+137,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB reg_csrWen", false,-1);
        tracep->declBit(c+138,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB reg_memToReg", false,-1);
        tracep->declBit(c+139,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB reg_memRd", false,-1);
        tracep->declBus(c+140,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB reg_rdSel", false,-1, 4,0);
        tracep->declBus(c+141,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB reg_dataMem_data", false,-1, 31,0);
        tracep->declBus(c+142,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB reg_alu_output", false,-1, 31,0);
        tracep->declBus(c+143,"Ibtida_top_dffram_cv ibtidaTop core MEM_WB reg_csr_data", false,-1, 31,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop core fetch clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop core fetch reset", false,-1);
        tracep->declBit(c+717,"Ibtida_top_dffram_cv ibtidaTop core fetch io_core_instr_gnt_i", false,-1);
        tracep->declBit(c+47,"Ibtida_top_dffram_cv ibtidaTop core fetch io_core_instr_rvalid_i", false,-1);
        tracep->declBus(c+8,"Ibtida_top_dffram_cv ibtidaTop core fetch io_core_instr_rdata_i", false,-1, 31,0);
        tracep->declBit(c+144,"Ibtida_top_dffram_cv ibtidaTop core fetch io_csrRegFile_irq_pending_i", false,-1);
        tracep->declBit(c+145,"Ibtida_top_dffram_cv ibtidaTop core fetch io_csrRegFile_csr_mstatus_mie_i", false,-1);
        tracep->declBus(c+146,"Ibtida_top_dffram_cv ibtidaTop core fetch io_csrRegFile_csr_mtvec_i", false,-1, 31,0);
        tracep->declBit(c+147,"Ibtida_top_dffram_cv ibtidaTop core fetch io_csrRegFile_csr_mtvec_init_o", false,-1);
        tracep->declBit(c+148,"Ibtida_top_dffram_cv ibtidaTop core fetch io_csrRegFile_csr_save_cause_o", false,-1);
        tracep->declBit(c+149,"Ibtida_top_dffram_cv ibtidaTop core fetch io_csrRegFile_csr_save_if_o", false,-1);
        tracep->declBus(c+150,"Ibtida_top_dffram_cv ibtidaTop core fetch io_csrRegFile_csr_if_pc_o", false,-1, 31,0);
        tracep->declBus(c+151,"Ibtida_top_dffram_cv ibtidaTop core fetch io_csrRegFile_exc_cause_o", false,-1, 5,0);
        tracep->declBus(c+152,"Ibtida_top_dffram_cv ibtidaTop core fetch io_csrRegFile_csr_mepc_i", false,-1, 31,0);
        tracep->declBit(c+147,"Ibtida_top_dffram_cv ibtidaTop core fetch io_core_init_mtvec_i", false,-1);
        tracep->declBus(c+153,"Ibtida_top_dffram_cv ibtidaTop core fetch io_decode_sb_imm_i", false,-1, 31,0);
        tracep->declBus(c+154,"Ibtida_top_dffram_cv ibtidaTop core fetch io_decode_uj_imm_i", false,-1, 31,0);
        tracep->declBus(c+155,"Ibtida_top_dffram_cv ibtidaTop core fetch io_decode_jalr_imm_i", false,-1, 31,0);
        tracep->declBus(c+156,"Ibtida_top_dffram_cv ibtidaTop core fetch io_decode_ctrl_next_pc_sel_i", false,-1, 1,0);
        tracep->declBit(c+157,"Ibtida_top_dffram_cv ibtidaTop core fetch io_decode_ctrl_out_branch_i", false,-1);
        tracep->declBit(c+158,"Ibtida_top_dffram_cv ibtidaTop core fetch io_decode_branchLogic_output_i", false,-1);
        tracep->declBus(c+85,"Ibtida_top_dffram_cv ibtidaTop core fetch io_decode_hazardDetection_pc_i", false,-1, 31,0);
        tracep->declBus(c+159,"Ibtida_top_dffram_cv ibtidaTop core fetch io_decode_hazardDetection_inst_i", false,-1, 31,0);
        tracep->declBus(c+84,"Ibtida_top_dffram_cv ibtidaTop core fetch io_decode_hazardDetection_current_pc_i", false,-1, 31,0);
        tracep->declBit(c+160,"Ibtida_top_dffram_cv ibtidaTop core fetch io_decode_hazardDetection_pc_forward_i", false,-1);
        tracep->declBit(c+160,"Ibtida_top_dffram_cv ibtidaTop core fetch io_decode_hazardDetection_inst_forward_i", false,-1);
        tracep->declBit(c+161,"Ibtida_top_dffram_cv ibtidaTop core fetch io_decode_mret_inst_i", false,-1);
        tracep->declBit(c+162,"Ibtida_top_dffram_cv ibtidaTop core fetch io_core_stall_i", false,-1);
        tracep->declBus(c+48,"Ibtida_top_dffram_cv ibtidaTop core fetch io_core_instr_addr_o", false,-1, 31,0);
        tracep->declBit(c+717,"Ibtida_top_dffram_cv ibtidaTop core fetch io_core_instr_req_o", false,-1);
        tracep->declBus(c+84,"Ibtida_top_dffram_cv ibtidaTop core fetch io_decode_if_id_pc_o", false,-1, 31,0);
        tracep->declBus(c+85,"Ibtida_top_dffram_cv ibtidaTop core fetch io_decode_if_id_pc4_o", false,-1, 31,0);
        tracep->declBus(c+159,"Ibtida_top_dffram_cv ibtidaTop core fetch io_decode_if_id_inst_o", false,-1, 31,0);
        tracep->declBus(c+166,"Ibtida_top_dffram_cv ibtidaTop core fetch pc_io_in", false,-1, 31,0);
        tracep->declBus(c+167,"Ibtida_top_dffram_cv ibtidaTop core fetch pc_io_out", false,-1, 31,0);
        tracep->declBus(c+168,"Ibtida_top_dffram_cv ibtidaTop core fetch pc_io_pc4", false,-1, 31,0);
        tracep->declBus(c+84,"Ibtida_top_dffram_cv ibtidaTop core fetch if_id_pc_reg", false,-1, 31,0);
        tracep->declBus(c+85,"Ibtida_top_dffram_cv ibtidaTop core fetch if_id_pc4_reg", false,-1, 31,0);
        tracep->declBus(c+159,"Ibtida_top_dffram_cv ibtidaTop core fetch if_id_inst_reg", false,-1, 31,0);
        tracep->declBit(c+169,"Ibtida_top_dffram_cv ibtidaTop core fetch handle_irq", false,-1);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop core fetch pc clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop core fetch pc reset", false,-1);
        tracep->declBus(c+166,"Ibtida_top_dffram_cv ibtidaTop core fetch pc io_in", false,-1, 31,0);
        tracep->declBus(c+167,"Ibtida_top_dffram_cv ibtidaTop core fetch pc io_out", false,-1, 31,0);
        tracep->declBus(c+168,"Ibtida_top_dffram_cv ibtidaTop core fetch pc io_pc4", false,-1, 31,0);
        tracep->declBus(c+167,"Ibtida_top_dffram_cv ibtidaTop core fetch pc reg_", false,-1, 31,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop core decode clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop core decode reset", false,-1);
        tracep->declBit(c+50,"Ibtida_top_dffram_cv ibtidaTop core decode io_irq_external_i", false,-1);
        tracep->declBus(c+159,"Ibtida_top_dffram_cv ibtidaTop core decode io_IF_ID_inst", false,-1, 31,0);
        tracep->declBus(c+84,"Ibtida_top_dffram_cv ibtidaTop core decode io_IF_ID_pc", false,-1, 31,0);
        tracep->declBus(c+85,"Ibtida_top_dffram_cv ibtidaTop core decode io_IF_ID_pc4", false,-1, 31,0);
        tracep->declBit(c+136,"Ibtida_top_dffram_cv ibtidaTop core decode io_MEM_WB_ctrl_regWr", false,-1);
        tracep->declBit(c+137,"Ibtida_top_dffram_cv ibtidaTop core decode io_MEM_WB_ctrl_csrWen", false,-1);
        tracep->declBus(c+140,"Ibtida_top_dffram_cv ibtidaTop core decode io_MEM_WB_rd_sel", false,-1, 4,0);
        tracep->declBit(c+117,"Ibtida_top_dffram_cv ibtidaTop core decode io_ID_EX_ctrl_MemRd", false,-1);
        tracep->declBit(c+118,"Ibtida_top_dffram_cv ibtidaTop core decode io_ID_EX_ctrl_regWr", false,-1);
        tracep->declBit(c+119,"Ibtida_top_dffram_cv ibtidaTop core decode io_ID_EX_ctrl_csrWen", false,-1);
        tracep->declBit(c+129,"Ibtida_top_dffram_cv ibtidaTop core decode io_EX_MEM_ctrl_csrWen", false,-1);
        tracep->declBus(c+113,"Ibtida_top_dffram_cv ibtidaTop core decode io_ID_EX_rd_sel", false,-1, 4,0);
        tracep->declBus(c+132,"Ibtida_top_dffram_cv ibtidaTop core decode io_EX_MEM_rd_sel", false,-1, 4,0);
        tracep->declBit(c+127,"Ibtida_top_dffram_cv ibtidaTop core decode io_EX_MEM_ctrl_MemRd", false,-1);
        tracep->declBit(c+128,"Ibtida_top_dffram_cv ibtidaTop core decode io_EX_MEM_ctrl_regWr", false,-1);
        tracep->declBit(c+139,"Ibtida_top_dffram_cv ibtidaTop core decode io_MEM_WB_ctrl_MemRd", false,-1);
        tracep->declBus(c+126,"Ibtida_top_dffram_cv ibtidaTop core decode io_alu_output", false,-1, 31,0);
        tracep->declBus(c+42,"Ibtida_top_dffram_cv ibtidaTop core decode io_EX_MEM_alu_output", false,-1, 31,0);
        tracep->declBus(c+35,"Ibtida_top_dffram_cv ibtidaTop core decode io_dmem_memOut", false,-1, 31,0);
        tracep->declBit(c+34,"Ibtida_top_dffram_cv ibtidaTop core decode io_dccm_rvalid_i", false,-1);
        tracep->declBus(c+163,"Ibtida_top_dffram_cv ibtidaTop core decode io_writeback_write_data", false,-1, 31,0);
        tracep->declBus(c+143,"Ibtida_top_dffram_cv ibtidaTop core decode io_MEM_WB_csr_rdata_i", false,-1, 31,0);
        tracep->declBus(c+134,"Ibtida_top_dffram_cv ibtidaTop core decode io_EX_MEM_csr_rdata_i", false,-1, 31,0);
        tracep->declBus(c+124,"Ibtida_top_dffram_cv ibtidaTop core decode io_ID_EX_csr_rdata_i", false,-1, 31,0);
        tracep->declBit(c+147,"Ibtida_top_dffram_cv ibtidaTop core decode io_fetch_csr_mtvec_init", false,-1);
        tracep->declBus(c+150,"Ibtida_top_dffram_cv ibtidaTop core decode io_fetch_csr_if_pc", false,-1, 31,0);
        tracep->declBit(c+149,"Ibtida_top_dffram_cv ibtidaTop core decode io_fetch_csr_save_if", false,-1);
        tracep->declBus(c+151,"Ibtida_top_dffram_cv ibtidaTop core decode io_fetch_exc_cause_i", false,-1, 5,0);
        tracep->declBit(c+148,"Ibtida_top_dffram_cv ibtidaTop core decode io_fetch_csr_save_cause_i", false,-1);
        tracep->declBit(c+118,"Ibtida_top_dffram_cv ibtidaTop core decode io_execute_regwrite", false,-1);
        tracep->declBit(c+128,"Ibtida_top_dffram_cv ibtidaTop core decode io_mem_regwrite", false,-1);
        tracep->declBit(c+136,"Ibtida_top_dffram_cv ibtidaTop core decode io_wb_regwrite", false,-1);
        tracep->declBus(c+84,"Ibtida_top_dffram_cv ibtidaTop core decode io_pc_out", false,-1, 31,0);
        tracep->declBus(c+85,"Ibtida_top_dffram_cv ibtidaTop core decode io_pc4_out", false,-1, 31,0);
        tracep->declBus(c+164,"Ibtida_top_dffram_cv ibtidaTop core decode io_inst_op_out", false,-1, 31,0);
        tracep->declBus(c+92,"Ibtida_top_dffram_cv ibtidaTop core decode io_func3_out", false,-1, 2,0);
        tracep->declBus(c+93,"Ibtida_top_dffram_cv ibtidaTop core decode io_func7_out", false,-1, 6,0);
        tracep->declBus(c+91,"Ibtida_top_dffram_cv ibtidaTop core decode io_rd_sel_out", false,-1, 4,0);
        tracep->declBus(c+86,"Ibtida_top_dffram_cv ibtidaTop core decode io_rs1_sel_out", false,-1, 4,0);
        tracep->declBus(c+87,"Ibtida_top_dffram_cv ibtidaTop core decode io_rs2_sel_out", false,-1, 4,0);
        tracep->declBus(c+88,"Ibtida_top_dffram_cv ibtidaTop core decode io_rs1_out", false,-1, 31,0);
        tracep->declBus(c+89,"Ibtida_top_dffram_cv ibtidaTop core decode io_rs2_out", false,-1, 31,0);
        tracep->declBus(c+103,"Ibtida_top_dffram_cv ibtidaTop core decode io_csr_rdata_o", false,-1, 31,0);
        tracep->declBus(c+90,"Ibtida_top_dffram_cv ibtidaTop core decode io_imm_out", false,-1, 31,0);
        tracep->declBus(c+153,"Ibtida_top_dffram_cv ibtidaTop core decode io_sb_imm", false,-1, 31,0);
        tracep->declBus(c+154,"Ibtida_top_dffram_cv ibtidaTop core decode io_uj_imm", false,-1, 31,0);
        tracep->declBus(c+155,"Ibtida_top_dffram_cv ibtidaTop core decode io_jalr_output", false,-1, 31,0);
        tracep->declBit(c+158,"Ibtida_top_dffram_cv ibtidaTop core decode io_branchLogic_output", false,-1);
        tracep->declBus(c+85,"Ibtida_top_dffram_cv ibtidaTop core decode io_hazardDetection_pc_out", false,-1, 31,0);
        tracep->declBus(c+159,"Ibtida_top_dffram_cv ibtidaTop core decode io_hazardDetection_inst_out", false,-1, 31,0);
        tracep->declBus(c+84,"Ibtida_top_dffram_cv ibtidaTop core decode io_hazardDetection_current_pc_out", false,-1, 31,0);
        tracep->declBit(c+160,"Ibtida_top_dffram_cv ibtidaTop core decode io_hazardDetection_pc_forward", false,-1);
        tracep->declBit(c+160,"Ibtida_top_dffram_cv ibtidaTop core decode io_hazardDetection_inst_forward", false,-1);
        tracep->declBit(c+94,"Ibtida_top_dffram_cv ibtidaTop core decode io_ctrl_MemWr_out", false,-1);
        tracep->declBit(c+95,"Ibtida_top_dffram_cv ibtidaTop core decode io_ctrl_MemRd_out", false,-1);
        tracep->declBit(c+157,"Ibtida_top_dffram_cv ibtidaTop core decode io_ctrl_Branch_out", false,-1);
        tracep->declBit(c+97,"Ibtida_top_dffram_cv ibtidaTop core decode io_ctrl_RegWr_out", false,-1);
        tracep->declBit(c+96,"Ibtida_top_dffram_cv ibtidaTop core decode io_ctrl_CsrWen_out", false,-1);
        tracep->declBit(c+98,"Ibtida_top_dffram_cv ibtidaTop core decode io_ctrl_MemToReg_out", false,-1);
        tracep->declBus(c+99,"Ibtida_top_dffram_cv ibtidaTop core decode io_ctrl_AluOp_out", false,-1, 3,0);
        tracep->declBus(c+100,"Ibtida_top_dffram_cv ibtidaTop core decode io_ctrl_OpA_sel_out", false,-1, 1,0);
        tracep->declBit(c+101,"Ibtida_top_dffram_cv ibtidaTop core decode io_ctrl_OpB_sel_out", false,-1);
        tracep->declBus(c+156,"Ibtida_top_dffram_cv ibtidaTop core decode io_ctrl_next_pc_sel_out", false,-1, 1,0);
        tracep->declBit(c+144,"Ibtida_top_dffram_cv ibtidaTop core decode io_fetch_irq_pending_o", false,-1);
        tracep->declBit(c+145,"Ibtida_top_dffram_cv ibtidaTop core decode io_fetch_csr_mstatus_mie_o", false,-1);
        tracep->declBus(c+146,"Ibtida_top_dffram_cv ibtidaTop core decode io_fetch_csr_mtvec_o", false,-1, 31,0);
        tracep->declBus(c+152,"Ibtida_top_dffram_cv ibtidaTop core decode io_fetch_csr_mepc_o", false,-1, 31,0);
        tracep->declBit(c+161,"Ibtida_top_dffram_cv ibtidaTop core decode io_fetch_mret_inst_o", false,-1);
        tracep->declBus(c+159,"Ibtida_top_dffram_cv ibtidaTop core decode hazardDetection_io_IF_ID_INST", false,-1, 31,0);
        tracep->declBit(c+117,"Ibtida_top_dffram_cv ibtidaTop core decode hazardDetection_io_ID_EX_MEMREAD", false,-1);
        tracep->declBus(c+113,"Ibtida_top_dffram_cv ibtidaTop core decode hazardDetection_io_ID_EX_REGRD", false,-1, 4,0);
        tracep->declBus(c+85,"Ibtida_top_dffram_cv ibtidaTop core decode hazardDetection_io_pc_in", false,-1, 31,0);
        tracep->declBus(c+84,"Ibtida_top_dffram_cv ibtidaTop core decode hazardDetection_io_current_pc", false,-1, 31,0);
        tracep->declBit(c+170,"Ibtida_top_dffram_cv ibtidaTop core decode hazardDetection_io_IF_ID_MEMREAD", false,-1);
        tracep->declBit(c+160,"Ibtida_top_dffram_cv ibtidaTop core decode hazardDetection_io_inst_forward", false,-1);
        tracep->declBit(c+160,"Ibtida_top_dffram_cv ibtidaTop core decode hazardDetection_io_pc_forward", false,-1);
        tracep->declBit(c+160,"Ibtida_top_dffram_cv ibtidaTop core decode hazardDetection_io_ctrl_forward", false,-1);
        tracep->declBus(c+159,"Ibtida_top_dffram_cv ibtidaTop core decode hazardDetection_io_inst_out", false,-1, 31,0);
        tracep->declBus(c+85,"Ibtida_top_dffram_cv ibtidaTop core decode hazardDetection_io_pc_out", false,-1, 31,0);
        tracep->declBus(c+84,"Ibtida_top_dffram_cv ibtidaTop core decode hazardDetection_io_current_pc_out", false,-1, 31,0);
        tracep->declBus(c+102,"Ibtida_top_dffram_cv ibtidaTop core decode control_io_in_opcode", false,-1, 6,0);
        tracep->declBus(c+93,"Ibtida_top_dffram_cv ibtidaTop core decode control_io_func7", false,-1, 6,0);
        tracep->declBus(c+92,"Ibtida_top_dffram_cv ibtidaTop core decode control_io_func3", false,-1, 2,0);
        tracep->declBit(c+171,"Ibtida_top_dffram_cv ibtidaTop core decode control_io_out_memWrite", false,-1);
        tracep->declBit(c+172,"Ibtida_top_dffram_cv ibtidaTop core decode control_io_out_branch", false,-1);
        tracep->declBit(c+170,"Ibtida_top_dffram_cv ibtidaTop core decode control_io_out_memRead", false,-1);
        tracep->declBit(c+173,"Ibtida_top_dffram_cv ibtidaTop core decode control_io_out_regWrite", false,-1);
        tracep->declBit(c+174,"Ibtida_top_dffram_cv ibtidaTop core decode control_io_csr_we_o", false,-1);
        tracep->declBit(c+175,"Ibtida_top_dffram_cv ibtidaTop core decode control_io_csr_imm_type", false,-1);
        tracep->declBus(c+176,"Ibtida_top_dffram_cv ibtidaTop core decode control_io_csr_op_o", false,-1, 1,0);
        tracep->declBit(c+177,"Ibtida_top_dffram_cv ibtidaTop core decode control_io_out_memToReg", false,-1);
        tracep->declBus(c+178,"Ibtida_top_dffram_cv ibtidaTop core decode control_io_out_aluOp", false,-1, 3,0);
        tracep->declBus(c+179,"Ibtida_top_dffram_cv ibtidaTop core decode control_io_out_operand_a_sel", false,-1, 1,0);
        tracep->declBit(c+180,"Ibtida_top_dffram_cv ibtidaTop core decode control_io_out_operand_b_sel", false,-1);
        tracep->declBus(c+181,"Ibtida_top_dffram_cv ibtidaTop core decode control_io_out_extend_sel", false,-1, 1,0);
        tracep->declBus(c+182,"Ibtida_top_dffram_cv ibtidaTop core decode control_io_out_next_pc_sel", false,-1, 1,0);
        tracep->declBus(c+113,"Ibtida_top_dffram_cv ibtidaTop core decode decodeForwardUnit_io_ID_EX_REGRD", false,-1, 4,0);
        tracep->declBit(c+117,"Ibtida_top_dffram_cv ibtidaTop core decode decodeForwardUnit_io_ID_EX_MEMRD", false,-1);
        tracep->declBus(c+132,"Ibtida_top_dffram_cv ibtidaTop core decode decodeForwardUnit_io_EX_MEM_REGRD", false,-1, 4,0);
        tracep->declBit(c+127,"Ibtida_top_dffram_cv ibtidaTop core decode decodeForwardUnit_io_EX_MEM_MEMRD", false,-1);
        tracep->declBus(c+140,"Ibtida_top_dffram_cv ibtidaTop core decode decodeForwardUnit_io_MEM_WB_REGRD", false,-1, 4,0);
        tracep->declBit(c+139,"Ibtida_top_dffram_cv ibtidaTop core decode decodeForwardUnit_io_MEM_WB_MEMRD", false,-1);
        tracep->declBit(c+118,"Ibtida_top_dffram_cv ibtidaTop core decode decodeForwardUnit_io_execute_regwrite", false,-1);
        tracep->declBit(c+128,"Ibtida_top_dffram_cv ibtidaTop core decode decodeForwardUnit_io_mem_regwrite", false,-1);
        tracep->declBit(c+136,"Ibtida_top_dffram_cv ibtidaTop core decode decodeForwardUnit_io_wb_regwrite", false,-1);
        tracep->declBus(c+86,"Ibtida_top_dffram_cv ibtidaTop core decode decodeForwardUnit_io_rs1_sel", false,-1, 4,0);
        tracep->declBus(c+87,"Ibtida_top_dffram_cv ibtidaTop core decode decodeForwardUnit_io_rs2_sel", false,-1, 4,0);
        tracep->declBit(c+172,"Ibtida_top_dffram_cv ibtidaTop core decode decodeForwardUnit_io_ctrl_branch", false,-1);
        tracep->declBus(c+183,"Ibtida_top_dffram_cv ibtidaTop core decode decodeForwardUnit_io_forward_rs1", false,-1, 3,0);
        tracep->declBus(c+184,"Ibtida_top_dffram_cv ibtidaTop core decode decodeForwardUnit_io_forward_rs2", false,-1, 3,0);
        tracep->declBus(c+185,"Ibtida_top_dffram_cv ibtidaTop core decode branchLogic_io_in_rs1", false,-1, 31,0);
        tracep->declBus(c+186,"Ibtida_top_dffram_cv ibtidaTop core decode branchLogic_io_in_rs2", false,-1, 31,0);
        tracep->declBus(c+92,"Ibtida_top_dffram_cv ibtidaTop core decode branchLogic_io_in_func3", false,-1, 2,0);
        tracep->declBit(c+158,"Ibtida_top_dffram_cv ibtidaTop core decode branchLogic_io_output", false,-1);
        tracep->declBit(c+136,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file_io_regWrite", false,-1);
        tracep->declBus(c+140,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file_io_rd_sel", false,-1, 4,0);
        tracep->declBus(c+86,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file_io_rs1_sel", false,-1, 4,0);
        tracep->declBus(c+87,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file_io_rs2_sel", false,-1, 4,0);
        tracep->declBus(c+187,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file_io_writeData", false,-1, 31,0);
        tracep->declBus(c+188,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file_io_rs1", false,-1, 31,0);
        tracep->declBus(c+189,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file_io_rs2", false,-1, 31,0);
        tracep->declBus(c+159,"Ibtida_top_dffram_cv ibtidaTop core decode imm_generation_io_instruction", false,-1, 31,0);
        tracep->declBus(c+84,"Ibtida_top_dffram_cv ibtidaTop core decode imm_generation_io_pc", false,-1, 31,0);
        tracep->declBus(c+190,"Ibtida_top_dffram_cv ibtidaTop core decode imm_generation_io_s_imm", false,-1, 31,0);
        tracep->declBus(c+153,"Ibtida_top_dffram_cv ibtidaTop core decode imm_generation_io_sb_imm", false,-1, 31,0);
        tracep->declBus(c+191,"Ibtida_top_dffram_cv ibtidaTop core decode imm_generation_io_u_imm", false,-1, 31,0);
        tracep->declBus(c+154,"Ibtida_top_dffram_cv ibtidaTop core decode imm_generation_io_uj_imm", false,-1, 31,0);
        tracep->declBus(c+192,"Ibtida_top_dffram_cv ibtidaTop core decode imm_generation_io_i_imm", false,-1, 31,0);
        tracep->declBus(c+86,"Ibtida_top_dffram_cv ibtidaTop core decode structuralDetector_io_rs1_sel", false,-1, 4,0);
        tracep->declBus(c+87,"Ibtida_top_dffram_cv ibtidaTop core decode structuralDetector_io_rs2_sel", false,-1, 4,0);
        tracep->declBit(c+136,"Ibtida_top_dffram_cv ibtidaTop core decode structuralDetector_io_MEM_WB_regWr", false,-1);
        tracep->declBus(c+140,"Ibtida_top_dffram_cv ibtidaTop core decode structuralDetector_io_MEM_WB_REGRD", false,-1, 4,0);
        tracep->declBus(c+102,"Ibtida_top_dffram_cv ibtidaTop core decode structuralDetector_io_inst_op_in", false,-1, 6,0);
        tracep->declBit(c+193,"Ibtida_top_dffram_cv ibtidaTop core decode structuralDetector_io_fwd_rs1", false,-1);
        tracep->declBit(c+194,"Ibtida_top_dffram_cv ibtidaTop core decode structuralDetector_io_fwd_rs2", false,-1);
        tracep->declBus(c+195,"Ibtida_top_dffram_cv ibtidaTop core decode jalr_io_input_a", false,-1, 31,0);
        tracep->declBus(c+192,"Ibtida_top_dffram_cv ibtidaTop core decode jalr_io_input_b", false,-1, 31,0);
        tracep->declBus(c+155,"Ibtida_top_dffram_cv ibtidaTop core decode jalr_io_output", false,-1, 31,0);
        tracep->declBus(c+146,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile_io_o_csr_mtvec", false,-1, 31,0);
        tracep->declBit(c+147,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile_io_i_csr_mtvec_init", false,-1);
        tracep->declBit(c+174,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile_io_i_csr_access", false,-1);
        tracep->declBus(c+196,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile_io_i_csr_addr", false,-1, 11,0);
        tracep->declBus(c+197,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile_io_i_csr_wdata", false,-1, 31,0);
        tracep->declBus(c+176,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile_io_i_csr_op", false,-1, 1,0);
        tracep->declBit(c+198,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile_io_i_csr_op_en", false,-1);
        tracep->declBus(c+103,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile_io_o_csr_rdata", false,-1, 31,0);
        tracep->declBit(c+50,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile_io_i_irq_external", false,-1);
        tracep->declBit(c+144,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile_io_o_irq_pending", false,-1);
        tracep->declBus(c+199,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile_io_o_irqs", false,-1, 2,0);
        tracep->declBit(c+145,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile_io_o_csr_mstatus_mie", false,-1);
        tracep->declBus(c+152,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile_io_o_csr_mepc", false,-1, 31,0);
        tracep->declBus(c+150,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile_io_i_pc_if", false,-1, 31,0);
        tracep->declBit(c+149,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile_io_i_csr_save_if", false,-1);
        tracep->declBit(c+161,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile_io_i_csr_restore_mret", false,-1);
        tracep->declBit(c+148,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile_io_i_csr_save_cause", false,-1);
        tracep->declBus(c+151,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile_io_i_csr_mcause", false,-1, 5,0);
        tracep->declBit(c+200,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile_io_o_illegal_csr_insn", false,-1);
        tracep->declBit(c+118,"Ibtida_top_dffram_cv ibtidaTop core decode csrControlUnit_io_reg_wr_in_execute", false,-1);
        tracep->declBus(c+113,"Ibtida_top_dffram_cv ibtidaTop core decode csrControlUnit_io_rd_sel_in_execute", false,-1, 4,0);
        tracep->declBit(c+119,"Ibtida_top_dffram_cv ibtidaTop core decode csrControlUnit_io_csr_wr_in_execute", false,-1);
        tracep->declBit(c+128,"Ibtida_top_dffram_cv ibtidaTop core decode csrControlUnit_io_reg_wr_in_memory", false,-1);
        tracep->declBus(c+132,"Ibtida_top_dffram_cv ibtidaTop core decode csrControlUnit_io_rd_sel_in_memory", false,-1, 4,0);
        tracep->declBit(c+129,"Ibtida_top_dffram_cv ibtidaTop core decode csrControlUnit_io_csr_wr_in_memory", false,-1);
        tracep->declBit(c+136,"Ibtida_top_dffram_cv ibtidaTop core decode csrControlUnit_io_reg_wr_in_writeback", false,-1);
        tracep->declBus(c+140,"Ibtida_top_dffram_cv ibtidaTop core decode csrControlUnit_io_rd_sel_in_writeback", false,-1, 4,0);
        tracep->declBit(c+137,"Ibtida_top_dffram_cv ibtidaTop core decode csrControlUnit_io_csr_wr_in_writeback", false,-1);
        tracep->declBus(c+86,"Ibtida_top_dffram_cv ibtidaTop core decode csrControlUnit_io_rs1_sel_in_decode", false,-1, 4,0);
        tracep->declBit(c+174,"Ibtida_top_dffram_cv ibtidaTop core decode csrControlUnit_io_csr_inst_in_decode", false,-1);
        tracep->declBit(c+175,"Ibtida_top_dffram_cv ibtidaTop core decode csrControlUnit_io_csr_imm_inst_in_decode", false,-1);
        tracep->declBit(c+117,"Ibtida_top_dffram_cv ibtidaTop core decode csrControlUnit_io_load_inst_in_execute", false,-1);
        tracep->declBit(c+127,"Ibtida_top_dffram_cv ibtidaTop core decode csrControlUnit_io_load_inst_in_memory", false,-1);
        tracep->declBit(c+34,"Ibtida_top_dffram_cv ibtidaTop core decode csrControlUnit_io_dccm_rvalid_i", false,-1);
        tracep->declBus(c+201,"Ibtida_top_dffram_cv ibtidaTop core decode csrControlUnit_io_forward_rs1", false,-1, 2,0);
        tracep->declBit(c+198,"Ibtida_top_dffram_cv ibtidaTop core decode csrControlUnit_io_csr_op_en_o", false,-1);
        tracep->declBus(c+159,"Ibtida_top_dffram_cv ibtidaTop core decode hazardDetection io_IF_ID_INST", false,-1, 31,0);
        tracep->declBit(c+117,"Ibtida_top_dffram_cv ibtidaTop core decode hazardDetection io_ID_EX_MEMREAD", false,-1);
        tracep->declBus(c+113,"Ibtida_top_dffram_cv ibtidaTop core decode hazardDetection io_ID_EX_REGRD", false,-1, 4,0);
        tracep->declBus(c+85,"Ibtida_top_dffram_cv ibtidaTop core decode hazardDetection io_pc_in", false,-1, 31,0);
        tracep->declBus(c+84,"Ibtida_top_dffram_cv ibtidaTop core decode hazardDetection io_current_pc", false,-1, 31,0);
        tracep->declBit(c+170,"Ibtida_top_dffram_cv ibtidaTop core decode hazardDetection io_IF_ID_MEMREAD", false,-1);
        tracep->declBit(c+160,"Ibtida_top_dffram_cv ibtidaTop core decode hazardDetection io_inst_forward", false,-1);
        tracep->declBit(c+160,"Ibtida_top_dffram_cv ibtidaTop core decode hazardDetection io_pc_forward", false,-1);
        tracep->declBit(c+160,"Ibtida_top_dffram_cv ibtidaTop core decode hazardDetection io_ctrl_forward", false,-1);
        tracep->declBus(c+159,"Ibtida_top_dffram_cv ibtidaTop core decode hazardDetection io_inst_out", false,-1, 31,0);
        tracep->declBus(c+85,"Ibtida_top_dffram_cv ibtidaTop core decode hazardDetection io_pc_out", false,-1, 31,0);
        tracep->declBus(c+84,"Ibtida_top_dffram_cv ibtidaTop core decode hazardDetection io_current_pc_out", false,-1, 31,0);
        tracep->declBus(c+86,"Ibtida_top_dffram_cv ibtidaTop core decode hazardDetection rs1_sel", false,-1, 4,0);
        tracep->declBus(c+87,"Ibtida_top_dffram_cv ibtidaTop core decode hazardDetection rs2_sel", false,-1, 4,0);
        tracep->declBus(c+102,"Ibtida_top_dffram_cv ibtidaTop core decode control io_in_opcode", false,-1, 6,0);
        tracep->declBus(c+93,"Ibtida_top_dffram_cv ibtidaTop core decode control io_func7", false,-1, 6,0);
        tracep->declBus(c+92,"Ibtida_top_dffram_cv ibtidaTop core decode control io_func3", false,-1, 2,0);
        tracep->declBit(c+171,"Ibtida_top_dffram_cv ibtidaTop core decode control io_out_memWrite", false,-1);
        tracep->declBit(c+172,"Ibtida_top_dffram_cv ibtidaTop core decode control io_out_branch", false,-1);
        tracep->declBit(c+170,"Ibtida_top_dffram_cv ibtidaTop core decode control io_out_memRead", false,-1);
        tracep->declBit(c+173,"Ibtida_top_dffram_cv ibtidaTop core decode control io_out_regWrite", false,-1);
        tracep->declBit(c+174,"Ibtida_top_dffram_cv ibtidaTop core decode control io_csr_we_o", false,-1);
        tracep->declBit(c+175,"Ibtida_top_dffram_cv ibtidaTop core decode control io_csr_imm_type", false,-1);
        tracep->declBus(c+176,"Ibtida_top_dffram_cv ibtidaTop core decode control io_csr_op_o", false,-1, 1,0);
        tracep->declBit(c+177,"Ibtida_top_dffram_cv ibtidaTop core decode control io_out_memToReg", false,-1);
        tracep->declBus(c+178,"Ibtida_top_dffram_cv ibtidaTop core decode control io_out_aluOp", false,-1, 3,0);
        tracep->declBus(c+179,"Ibtida_top_dffram_cv ibtidaTop core decode control io_out_operand_a_sel", false,-1, 1,0);
        tracep->declBit(c+180,"Ibtida_top_dffram_cv ibtidaTop core decode control io_out_operand_b_sel", false,-1);
        tracep->declBus(c+181,"Ibtida_top_dffram_cv ibtidaTop core decode control io_out_extend_sel", false,-1, 1,0);
        tracep->declBus(c+182,"Ibtida_top_dffram_cv ibtidaTop core decode control io_out_next_pc_sel", false,-1, 1,0);
        tracep->declBus(c+92,"Ibtida_top_dffram_cv ibtidaTop core decode control instruction_type_decode_io_func3", false,-1, 2,0);
        tracep->declBus(c+93,"Ibtida_top_dffram_cv ibtidaTop core decode control instruction_type_decode_io_func7", false,-1, 6,0);
        tracep->declBus(c+102,"Ibtida_top_dffram_cv ibtidaTop core decode control instruction_type_decode_io_opcode", false,-1, 6,0);
        tracep->declBit(c+202,"Ibtida_top_dffram_cv ibtidaTop core decode control instruction_type_decode_io_r_type", false,-1);
        tracep->declBit(c+203,"Ibtida_top_dffram_cv ibtidaTop core decode control instruction_type_decode_io_load_type", false,-1);
        tracep->declBit(c+204,"Ibtida_top_dffram_cv ibtidaTop core decode control instruction_type_decode_io_s_type", false,-1);
        tracep->declBit(c+205,"Ibtida_top_dffram_cv ibtidaTop core decode control instruction_type_decode_io_sb_type", false,-1);
        tracep->declBit(c+206,"Ibtida_top_dffram_cv ibtidaTop core decode control instruction_type_decode_io_i_type", false,-1);
        tracep->declBit(c+207,"Ibtida_top_dffram_cv ibtidaTop core decode control instruction_type_decode_io_jalr_type", false,-1);
        tracep->declBit(c+208,"Ibtida_top_dffram_cv ibtidaTop core decode control instruction_type_decode_io_jal_type", false,-1);
        tracep->declBit(c+209,"Ibtida_top_dffram_cv ibtidaTop core decode control instruction_type_decode_io_lui_type", false,-1);
        tracep->declBit(c+210,"Ibtida_top_dffram_cv ibtidaTop core decode control instruction_type_decode_io_Auipc", false,-1);
        tracep->declBit(c+211,"Ibtida_top_dffram_cv ibtidaTop core decode control instruction_type_decode_io_multiply", false,-1);
        tracep->declBit(c+175,"Ibtida_top_dffram_cv ibtidaTop core decode control instruction_type_decode_io_csr_imm_type", false,-1);
        tracep->declBit(c+212,"Ibtida_top_dffram_cv ibtidaTop core decode control instruction_type_decode_io_csr_type", false,-1);
        tracep->declBus(c+176,"Ibtida_top_dffram_cv ibtidaTop core decode control instruction_type_decode_io_csr_op", false,-1, 1,0);
        tracep->declBit(c+202,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode_io_in_r_type", false,-1);
        tracep->declBit(c+203,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode_io_in_load_type", false,-1);
        tracep->declBit(c+204,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode_io_in_s_type", false,-1);
        tracep->declBit(c+205,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode_io_in_sb_type", false,-1);
        tracep->declBit(c+206,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode_io_in_i_type", false,-1);
        tracep->declBit(c+207,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode_io_in_jalr_type", false,-1);
        tracep->declBit(c+208,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode_io_in_jal_type", false,-1);
        tracep->declBit(c+209,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode_io_in_lui_type", false,-1);
        tracep->declBit(c+212,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode_io_in_csr_type", false,-1);
        tracep->declBit(c+175,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode_io_in_csr_imm_type", false,-1);
        tracep->declBit(c+210,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode_io_Auipc", false,-1);
        tracep->declBit(c+211,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode_io_multiply", false,-1);
        tracep->declBit(c+171,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode_io_memWrite", false,-1);
        tracep->declBit(c+170,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode_io_memRead", false,-1);
        tracep->declBit(c+172,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode_io_branch", false,-1);
        tracep->declBit(c+173,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode_io_regWrite", false,-1);
        tracep->declBit(c+174,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode_io_csr_wen", false,-1);
        tracep->declBit(c+177,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode_io_memToReg", false,-1);
        tracep->declBus(c+178,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode_io_aluOperation", false,-1, 3,0);
        tracep->declBus(c+179,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode_io_operand_a_sel", false,-1, 1,0);
        tracep->declBit(c+180,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode_io_operand_b_sel", false,-1);
        tracep->declBus(c+181,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode_io_extend_sel", false,-1, 1,0);
        tracep->declBus(c+182,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode_io_next_pc_sel", false,-1, 1,0);
        tracep->declBus(c+92,"Ibtida_top_dffram_cv ibtidaTop core decode control instruction_type_decode io_func3", false,-1, 2,0);
        tracep->declBus(c+93,"Ibtida_top_dffram_cv ibtidaTop core decode control instruction_type_decode io_func7", false,-1, 6,0);
        tracep->declBus(c+102,"Ibtida_top_dffram_cv ibtidaTop core decode control instruction_type_decode io_opcode", false,-1, 6,0);
        tracep->declBit(c+202,"Ibtida_top_dffram_cv ibtidaTop core decode control instruction_type_decode io_r_type", false,-1);
        tracep->declBit(c+203,"Ibtida_top_dffram_cv ibtidaTop core decode control instruction_type_decode io_load_type", false,-1);
        tracep->declBit(c+204,"Ibtida_top_dffram_cv ibtidaTop core decode control instruction_type_decode io_s_type", false,-1);
        tracep->declBit(c+205,"Ibtida_top_dffram_cv ibtidaTop core decode control instruction_type_decode io_sb_type", false,-1);
        tracep->declBit(c+206,"Ibtida_top_dffram_cv ibtidaTop core decode control instruction_type_decode io_i_type", false,-1);
        tracep->declBit(c+207,"Ibtida_top_dffram_cv ibtidaTop core decode control instruction_type_decode io_jalr_type", false,-1);
        tracep->declBit(c+208,"Ibtida_top_dffram_cv ibtidaTop core decode control instruction_type_decode io_jal_type", false,-1);
        tracep->declBit(c+209,"Ibtida_top_dffram_cv ibtidaTop core decode control instruction_type_decode io_lui_type", false,-1);
        tracep->declBit(c+210,"Ibtida_top_dffram_cv ibtidaTop core decode control instruction_type_decode io_Auipc", false,-1);
        tracep->declBit(c+211,"Ibtida_top_dffram_cv ibtidaTop core decode control instruction_type_decode io_multiply", false,-1);
        tracep->declBit(c+175,"Ibtida_top_dffram_cv ibtidaTop core decode control instruction_type_decode io_csr_imm_type", false,-1);
        tracep->declBit(c+212,"Ibtida_top_dffram_cv ibtidaTop core decode control instruction_type_decode io_csr_type", false,-1);
        tracep->declBus(c+176,"Ibtida_top_dffram_cv ibtidaTop core decode control instruction_type_decode io_csr_op", false,-1, 1,0);
        tracep->declBit(c+202,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode io_in_r_type", false,-1);
        tracep->declBit(c+203,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode io_in_load_type", false,-1);
        tracep->declBit(c+204,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode io_in_s_type", false,-1);
        tracep->declBit(c+205,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode io_in_sb_type", false,-1);
        tracep->declBit(c+206,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode io_in_i_type", false,-1);
        tracep->declBit(c+207,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode io_in_jalr_type", false,-1);
        tracep->declBit(c+208,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode io_in_jal_type", false,-1);
        tracep->declBit(c+209,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode io_in_lui_type", false,-1);
        tracep->declBit(c+212,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode io_in_csr_type", false,-1);
        tracep->declBit(c+175,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode io_in_csr_imm_type", false,-1);
        tracep->declBit(c+210,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode io_Auipc", false,-1);
        tracep->declBit(c+211,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode io_multiply", false,-1);
        tracep->declBit(c+171,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode io_memWrite", false,-1);
        tracep->declBit(c+170,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode io_memRead", false,-1);
        tracep->declBit(c+172,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode io_branch", false,-1);
        tracep->declBit(c+173,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode io_regWrite", false,-1);
        tracep->declBit(c+174,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode io_csr_wen", false,-1);
        tracep->declBit(c+177,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode io_memToReg", false,-1);
        tracep->declBus(c+178,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode io_aluOperation", false,-1, 3,0);
        tracep->declBus(c+179,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode io_operand_a_sel", false,-1, 1,0);
        tracep->declBit(c+180,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode io_operand_b_sel", false,-1);
        tracep->declBus(c+181,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode io_extend_sel", false,-1, 1,0);
        tracep->declBus(c+182,"Ibtida_top_dffram_cv ibtidaTop core decode control control_decode io_next_pc_sel", false,-1, 1,0);
        tracep->declBus(c+113,"Ibtida_top_dffram_cv ibtidaTop core decode decodeForwardUnit io_ID_EX_REGRD", false,-1, 4,0);
        tracep->declBit(c+117,"Ibtida_top_dffram_cv ibtidaTop core decode decodeForwardUnit io_ID_EX_MEMRD", false,-1);
        tracep->declBus(c+132,"Ibtida_top_dffram_cv ibtidaTop core decode decodeForwardUnit io_EX_MEM_REGRD", false,-1, 4,0);
        tracep->declBit(c+127,"Ibtida_top_dffram_cv ibtidaTop core decode decodeForwardUnit io_EX_MEM_MEMRD", false,-1);
        tracep->declBus(c+140,"Ibtida_top_dffram_cv ibtidaTop core decode decodeForwardUnit io_MEM_WB_REGRD", false,-1, 4,0);
        tracep->declBit(c+139,"Ibtida_top_dffram_cv ibtidaTop core decode decodeForwardUnit io_MEM_WB_MEMRD", false,-1);
        tracep->declBit(c+118,"Ibtida_top_dffram_cv ibtidaTop core decode decodeForwardUnit io_execute_regwrite", false,-1);
        tracep->declBit(c+128,"Ibtida_top_dffram_cv ibtidaTop core decode decodeForwardUnit io_mem_regwrite", false,-1);
        tracep->declBit(c+136,"Ibtida_top_dffram_cv ibtidaTop core decode decodeForwardUnit io_wb_regwrite", false,-1);
        tracep->declBus(c+86,"Ibtida_top_dffram_cv ibtidaTop core decode decodeForwardUnit io_rs1_sel", false,-1, 4,0);
        tracep->declBus(c+87,"Ibtida_top_dffram_cv ibtidaTop core decode decodeForwardUnit io_rs2_sel", false,-1, 4,0);
        tracep->declBit(c+172,"Ibtida_top_dffram_cv ibtidaTop core decode decodeForwardUnit io_ctrl_branch", false,-1);
        tracep->declBus(c+183,"Ibtida_top_dffram_cv ibtidaTop core decode decodeForwardUnit io_forward_rs1", false,-1, 3,0);
        tracep->declBus(c+184,"Ibtida_top_dffram_cv ibtidaTop core decode decodeForwardUnit io_forward_rs2", false,-1, 3,0);
        tracep->declBus(c+185,"Ibtida_top_dffram_cv ibtidaTop core decode branchLogic io_in_rs1", false,-1, 31,0);
        tracep->declBus(c+186,"Ibtida_top_dffram_cv ibtidaTop core decode branchLogic io_in_rs2", false,-1, 31,0);
        tracep->declBus(c+92,"Ibtida_top_dffram_cv ibtidaTop core decode branchLogic io_in_func3", false,-1, 2,0);
        tracep->declBit(c+158,"Ibtida_top_dffram_cv ibtidaTop core decode branchLogic io_output", false,-1);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file reset", false,-1);
        tracep->declBit(c+136,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file io_regWrite", false,-1);
        tracep->declBus(c+140,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file io_rd_sel", false,-1, 4,0);
        tracep->declBus(c+86,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file io_rs1_sel", false,-1, 4,0);
        tracep->declBus(c+87,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file io_rs2_sel", false,-1, 4,0);
        tracep->declBus(c+187,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file io_writeData", false,-1, 31,0);
        tracep->declBus(c+188,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file io_rs1", false,-1, 31,0);
        tracep->declBus(c+189,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file io_rs2", false,-1, 31,0);
        tracep->declBus(c+213,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file registers_0", false,-1, 31,0);
        tracep->declBus(c+214,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file registers_1", false,-1, 31,0);
        tracep->declBus(c+215,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file registers_2", false,-1, 31,0);
        tracep->declBus(c+216,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file registers_3", false,-1, 31,0);
        tracep->declBus(c+217,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file registers_4", false,-1, 31,0);
        tracep->declBus(c+218,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file registers_5", false,-1, 31,0);
        tracep->declBus(c+219,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file registers_6", false,-1, 31,0);
        tracep->declBus(c+220,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file registers_7", false,-1, 31,0);
        tracep->declBus(c+221,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file registers_8", false,-1, 31,0);
        tracep->declBus(c+222,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file registers_9", false,-1, 31,0);
        tracep->declBus(c+223,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file registers_10", false,-1, 31,0);
        tracep->declBus(c+224,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file registers_11", false,-1, 31,0);
        tracep->declBus(c+225,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file registers_12", false,-1, 31,0);
        tracep->declBus(c+226,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file registers_13", false,-1, 31,0);
        tracep->declBus(c+227,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file registers_14", false,-1, 31,0);
        tracep->declBus(c+228,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file registers_15", false,-1, 31,0);
        tracep->declBus(c+229,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file registers_16", false,-1, 31,0);
        tracep->declBus(c+230,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file registers_17", false,-1, 31,0);
        tracep->declBus(c+231,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file registers_18", false,-1, 31,0);
        tracep->declBus(c+232,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file registers_19", false,-1, 31,0);
        tracep->declBus(c+233,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file registers_20", false,-1, 31,0);
        tracep->declBus(c+234,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file registers_21", false,-1, 31,0);
        tracep->declBus(c+235,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file registers_22", false,-1, 31,0);
        tracep->declBus(c+236,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file registers_23", false,-1, 31,0);
        tracep->declBus(c+237,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file registers_24", false,-1, 31,0);
        tracep->declBus(c+238,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file registers_25", false,-1, 31,0);
        tracep->declBus(c+239,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file registers_26", false,-1, 31,0);
        tracep->declBus(c+240,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file registers_27", false,-1, 31,0);
        tracep->declBus(c+241,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file registers_28", false,-1, 31,0);
        tracep->declBus(c+242,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file registers_29", false,-1, 31,0);
        tracep->declBus(c+243,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file registers_30", false,-1, 31,0);
        tracep->declBus(c+244,"Ibtida_top_dffram_cv ibtidaTop core decode reg_file registers_31", false,-1, 31,0);
        tracep->declBus(c+159,"Ibtida_top_dffram_cv ibtidaTop core decode imm_generation io_instruction", false,-1, 31,0);
        tracep->declBus(c+84,"Ibtida_top_dffram_cv ibtidaTop core decode imm_generation io_pc", false,-1, 31,0);
        tracep->declBus(c+190,"Ibtida_top_dffram_cv ibtidaTop core decode imm_generation io_s_imm", false,-1, 31,0);
        tracep->declBus(c+153,"Ibtida_top_dffram_cv ibtidaTop core decode imm_generation io_sb_imm", false,-1, 31,0);
        tracep->declBus(c+191,"Ibtida_top_dffram_cv ibtidaTop core decode imm_generation io_u_imm", false,-1, 31,0);
        tracep->declBus(c+154,"Ibtida_top_dffram_cv ibtidaTop core decode imm_generation io_uj_imm", false,-1, 31,0);
        tracep->declBus(c+192,"Ibtida_top_dffram_cv ibtidaTop core decode imm_generation io_i_imm", false,-1, 31,0);
        tracep->declBus(c+91,"Ibtida_top_dffram_cv ibtidaTop core decode imm_generation s_lower_half", false,-1, 4,0);
        tracep->declBus(c+93,"Ibtida_top_dffram_cv ibtidaTop core decode imm_generation s_upper_half", false,-1, 6,0);
        tracep->declBus(c+245,"Ibtida_top_dffram_cv ibtidaTop core decode imm_generation s_imm_12", false,-1, 11,0);
        tracep->declBus(c+246,"Ibtida_top_dffram_cv ibtidaTop core decode imm_generation sb_lower_half", false,-1, 3,0);
        tracep->declBus(c+247,"Ibtida_top_dffram_cv ibtidaTop core decode imm_generation sb_upper_half", false,-1, 5,0);
        tracep->declBit(c+248,"Ibtida_top_dffram_cv ibtidaTop core decode imm_generation sb_11thbit", false,-1);
        tracep->declBit(c+249,"Ibtida_top_dffram_cv ibtidaTop core decode imm_generation sb_12thbit", false,-1);
        tracep->declBus(c+250,"Ibtida_top_dffram_cv ibtidaTop core decode imm_generation sb_imm_13", false,-1, 12,0);
        tracep->declBus(c+251,"Ibtida_top_dffram_cv ibtidaTop core decode imm_generation sb_imm_32", false,-1, 31,0);
        tracep->declBus(c+252,"Ibtida_top_dffram_cv ibtidaTop core decode imm_generation u_imm_20", false,-1, 19,0);
        tracep->declBus(c+253,"Ibtida_top_dffram_cv ibtidaTop core decode imm_generation u_imm_32", false,-1, 31,0);
        tracep->declBus(c+254,"Ibtida_top_dffram_cv ibtidaTop core decode imm_generation uj_lower_half", false,-1, 9,0);
        tracep->declBit(c+255,"Ibtida_top_dffram_cv ibtidaTop core decode imm_generation uj_11thbit", false,-1);
        tracep->declBus(c+256,"Ibtida_top_dffram_cv ibtidaTop core decode imm_generation uj_upper_half", false,-1, 7,0);
        tracep->declBus(c+257,"Ibtida_top_dffram_cv ibtidaTop core decode imm_generation uj_imm_21", false,-1, 20,0);
        tracep->declBus(c+258,"Ibtida_top_dffram_cv ibtidaTop core decode imm_generation uj_imm_32", false,-1, 31,0);
        tracep->declBus(c+196,"Ibtida_top_dffram_cv ibtidaTop core decode imm_generation i_imm_12", false,-1, 11,0);
        tracep->declBus(c+86,"Ibtida_top_dffram_cv ibtidaTop core decode structuralDetector io_rs1_sel", false,-1, 4,0);
        tracep->declBus(c+87,"Ibtida_top_dffram_cv ibtidaTop core decode structuralDetector io_rs2_sel", false,-1, 4,0);
        tracep->declBit(c+136,"Ibtida_top_dffram_cv ibtidaTop core decode structuralDetector io_MEM_WB_regWr", false,-1);
        tracep->declBus(c+140,"Ibtida_top_dffram_cv ibtidaTop core decode structuralDetector io_MEM_WB_REGRD", false,-1, 4,0);
        tracep->declBus(c+102,"Ibtida_top_dffram_cv ibtidaTop core decode structuralDetector io_inst_op_in", false,-1, 6,0);
        tracep->declBit(c+193,"Ibtida_top_dffram_cv ibtidaTop core decode structuralDetector io_fwd_rs1", false,-1);
        tracep->declBit(c+194,"Ibtida_top_dffram_cv ibtidaTop core decode structuralDetector io_fwd_rs2", false,-1);
        tracep->declBus(c+195,"Ibtida_top_dffram_cv ibtidaTop core decode jalr io_input_a", false,-1, 31,0);
        tracep->declBus(c+192,"Ibtida_top_dffram_cv ibtidaTop core decode jalr io_input_b", false,-1, 31,0);
        tracep->declBus(c+155,"Ibtida_top_dffram_cv ibtidaTop core decode jalr io_output", false,-1, 31,0);
        tracep->declBus(c+259,"Ibtida_top_dffram_cv ibtidaTop core decode jalr sum", false,-1, 31,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile reset", false,-1);
        tracep->declBus(c+146,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile io_o_csr_mtvec", false,-1, 31,0);
        tracep->declBit(c+147,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile io_i_csr_mtvec_init", false,-1);
        tracep->declBit(c+174,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile io_i_csr_access", false,-1);
        tracep->declBus(c+196,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile io_i_csr_addr", false,-1, 11,0);
        tracep->declBus(c+197,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile io_i_csr_wdata", false,-1, 31,0);
        tracep->declBus(c+176,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile io_i_csr_op", false,-1, 1,0);
        tracep->declBit(c+198,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile io_i_csr_op_en", false,-1);
        tracep->declBus(c+103,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile io_o_csr_rdata", false,-1, 31,0);
        tracep->declBit(c+50,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile io_i_irq_external", false,-1);
        tracep->declBit(c+144,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile io_o_irq_pending", false,-1);
        tracep->declBus(c+199,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile io_o_irqs", false,-1, 2,0);
        tracep->declBit(c+145,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile io_o_csr_mstatus_mie", false,-1);
        tracep->declBus(c+152,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile io_o_csr_mepc", false,-1, 31,0);
        tracep->declBus(c+150,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile io_i_pc_if", false,-1, 31,0);
        tracep->declBit(c+149,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile io_i_csr_save_if", false,-1);
        tracep->declBit(c+161,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile io_i_csr_restore_mret", false,-1);
        tracep->declBit(c+148,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile io_i_csr_save_cause", false,-1);
        tracep->declBus(c+151,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile io_i_csr_mcause", false,-1, 5,0);
        tracep->declBit(c+200,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile io_o_illegal_csr_insn", false,-1);
        tracep->declBus(c+260,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MSTATUS_io_i_wrdata", false,-1, 5,0);
        tracep->declBit(c+261,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MSTATUS_io_i_wr_en", false,-1);
        tracep->declBus(c+262,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MSTATUS_io_o_rd_data", false,-1, 5,0);
        tracep->declBus(c+263,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MEPC_io_i_wrdata", false,-1, 31,0);
        tracep->declBit(c+264,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MEPC_io_i_wr_en", false,-1);
        tracep->declBus(c+152,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MEPC_io_o_rd_data", false,-1, 31,0);
        tracep->declBus(c+265,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MIE_io_i_wrdata", false,-1, 2,0);
        tracep->declBit(c+266,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MIE_io_i_wr_en", false,-1);
        tracep->declBus(c+267,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MIE_io_o_rd_data", false,-1, 2,0);
        tracep->declBus(c+268,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MSCRATCH_io_i_wrdata", false,-1, 31,0);
        tracep->declBit(c+269,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MSCRATCH_io_i_wr_en", false,-1);
        tracep->declBus(c+270,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MSCRATCH_io_o_rd_data", false,-1, 31,0);
        tracep->declBus(c+271,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MCAUSE_io_i_wrdata", false,-1, 5,0);
        tracep->declBit(c+272,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MCAUSE_io_i_wr_en", false,-1);
        tracep->declBus(c+273,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MCAUSE_io_o_rd_data", false,-1, 5,0);
        tracep->declBus(c+274,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MTVAL_io_i_wrdata", false,-1, 31,0);
        tracep->declBit(c+275,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MTVAL_io_i_wr_en", false,-1);
        tracep->declBus(c+276,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MTVAL_io_o_rd_data", false,-1, 31,0);
        tracep->declBus(c+277,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MTVEC_io_i_wrdata", false,-1, 31,0);
        tracep->declBit(c+147,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MTVEC_io_i_wr_en", false,-1);
        tracep->declBus(c+146,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MTVEC_io_o_rd_data", false,-1, 31,0);
        tracep->declBus(c+278,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_DCSR_io_i_wrdata", false,-1, 27,0);
        tracep->declBit(c+718,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_DCSR_io_i_wr_en", false,-1);
        tracep->declBus(c+279,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_DCSR_io_o_rd_data", false,-1, 27,0);
        tracep->declBus(c+280,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_DEPC_io_i_wrdata", false,-1, 31,0);
        tracep->declBit(c+718,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_DEPC_io_i_wr_en", false,-1);
        tracep->declBus(c+281,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_DEPC_io_o_rd_data", false,-1, 31,0);
        tracep->declBus(c+268,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_DSCRATCH0_io_i_wrdata", false,-1, 31,0);
        tracep->declBit(c+282,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_DSCRATCH0_io_i_wr_en", false,-1);
        tracep->declBus(c+283,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_DSCRATCH0_io_o_rd_data", false,-1, 31,0);
        tracep->declBus(c+268,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_DSCRATCH1_io_i_wrdata", false,-1, 31,0);
        tracep->declBit(c+284,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_DSCRATCH1_io_i_wr_en", false,-1);
        tracep->declBus(c+285,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_DSCRATCH1_io_o_rd_data", false,-1, 31,0);
        tracep->declBit(c+718,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile COUNT_MCYCLE_io_i_counter_inc", false,-1);
        tracep->declBit(c+286,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile COUNT_MCYCLE_io_i_counterh_we", false,-1);
        tracep->declBit(c+287,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile COUNT_MCYCLE_io_i_counter_we", false,-1);
        tracep->declBus(c+288,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile COUNT_MCYCLE_io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+289,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile COUNT_MCYCLE_io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+718,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile COUNT_MINSTRET_io_i_counter_inc", false,-1);
        tracep->declBit(c+291,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile COUNT_MINSTRET_io_i_counterh_we", false,-1);
        tracep->declBit(c+292,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile COUNT_MINSTRET_io_i_counter_we", false,-1);
        tracep->declBus(c+293,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile COUNT_MINSTRET_io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+294,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile COUNT_MINSTRET_io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+718,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_io_i_counter_inc", false,-1);
        tracep->declBit(c+296,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_io_i_counterh_we", false,-1);
        tracep->declBit(c+297,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_io_i_counter_we", false,-1);
        tracep->declBus(c+298,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+299,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+718,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_1_io_i_counter_inc", false,-1);
        tracep->declBit(c+301,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_1_io_i_counterh_we", false,-1);
        tracep->declBit(c+302,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_1_io_i_counter_we", false,-1);
        tracep->declBus(c+303,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_1_io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+304,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_1_io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+718,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_2_io_i_counter_inc", false,-1);
        tracep->declBit(c+306,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_2_io_i_counterh_we", false,-1);
        tracep->declBit(c+307,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_2_io_i_counter_we", false,-1);
        tracep->declBus(c+308,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_2_io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+309,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_2_io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+718,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_3_io_i_counter_inc", false,-1);
        tracep->declBit(c+311,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_3_io_i_counterh_we", false,-1);
        tracep->declBit(c+312,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_3_io_i_counter_we", false,-1);
        tracep->declBus(c+313,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_3_io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+314,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_3_io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+718,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_4_io_i_counter_inc", false,-1);
        tracep->declBit(c+316,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_4_io_i_counterh_we", false,-1);
        tracep->declBit(c+317,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_4_io_i_counter_we", false,-1);
        tracep->declBus(c+318,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_4_io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+319,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_4_io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+718,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_5_io_i_counter_inc", false,-1);
        tracep->declBit(c+321,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_5_io_i_counterh_we", false,-1);
        tracep->declBit(c+322,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_5_io_i_counter_we", false,-1);
        tracep->declBus(c+323,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_5_io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+324,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_5_io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+718,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_6_io_i_counter_inc", false,-1);
        tracep->declBit(c+326,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_6_io_i_counterh_we", false,-1);
        tracep->declBit(c+327,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_6_io_i_counter_we", false,-1);
        tracep->declBus(c+328,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_6_io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+329,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_6_io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+718,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_7_io_i_counter_inc", false,-1);
        tracep->declBit(c+331,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_7_io_i_counterh_we", false,-1);
        tracep->declBit(c+332,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_7_io_i_counter_we", false,-1);
        tracep->declBus(c+333,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_7_io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+334,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_7_io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+718,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_8_io_i_counter_inc", false,-1);
        tracep->declBit(c+336,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_8_io_i_counterh_we", false,-1);
        tracep->declBit(c+337,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_8_io_i_counter_we", false,-1);
        tracep->declBus(c+338,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_8_io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+339,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_8_io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+718,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_9_io_i_counter_inc", false,-1);
        tracep->declBit(c+341,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_9_io_i_counterh_we", false,-1);
        tracep->declBit(c+342,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_9_io_i_counter_we", false,-1);
        tracep->declBus(c+343,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_9_io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+344,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_9_io_o_counter_val", false,-1, 63,0);
        tracep->declBus(c+346,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile priv_lvl_q", false,-1, 1,0);
        tracep->declBus(c+347,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mcountinhibit_q", false,-1, 12,0);
        tracep->declQuad(c+348,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmcounter_0", false,-1, 63,0);
        tracep->declQuad(c+350,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmcounter_1", false,-1, 63,0);
        tracep->declQuad(c+352,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmcounter_2", false,-1, 63,0);
        tracep->declQuad(c+354,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmcounter_3", false,-1, 63,0);
        tracep->declQuad(c+356,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmcounter_4", false,-1, 63,0);
        tracep->declQuad(c+358,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmcounter_5", false,-1, 63,0);
        tracep->declQuad(c+360,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmcounter_6", false,-1, 63,0);
        tracep->declQuad(c+362,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmcounter_7", false,-1, 63,0);
        tracep->declQuad(c+364,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmcounter_8", false,-1, 63,0);
        tracep->declQuad(c+366,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmcounter_9", false,-1, 63,0);
        tracep->declQuad(c+368,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmcounter_10", false,-1, 63,0);
        tracep->declQuad(c+370,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmcounter_11", false,-1, 63,0);
        tracep->declQuad(c+372,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmcounter_12", false,-1, 63,0);
        tracep->declQuad(c+374,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmcounter_13", false,-1, 63,0);
        tracep->declQuad(c+376,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmcounter_14", false,-1, 63,0);
        tracep->declQuad(c+378,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmcounter_15", false,-1, 63,0);
        tracep->declQuad(c+380,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmcounter_16", false,-1, 63,0);
        tracep->declQuad(c+382,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmcounter_17", false,-1, 63,0);
        tracep->declQuad(c+384,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmcounter_18", false,-1, 63,0);
        tracep->declQuad(c+386,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmcounter_19", false,-1, 63,0);
        tracep->declQuad(c+388,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmcounter_20", false,-1, 63,0);
        tracep->declQuad(c+390,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmcounter_21", false,-1, 63,0);
        tracep->declQuad(c+392,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmcounter_22", false,-1, 63,0);
        tracep->declQuad(c+394,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmcounter_23", false,-1, 63,0);
        tracep->declQuad(c+396,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmcounter_24", false,-1, 63,0);
        tracep->declQuad(c+398,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmcounter_25", false,-1, 63,0);
        tracep->declQuad(c+400,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmcounter_26", false,-1, 63,0);
        tracep->declQuad(c+402,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmcounter_27", false,-1, 63,0);
        tracep->declQuad(c+404,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmcounter_28", false,-1, 63,0);
        tracep->declQuad(c+406,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmcounter_29", false,-1, 63,0);
        tracep->declQuad(c+408,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmcounter_30", false,-1, 63,0);
        tracep->declQuad(c+410,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmcounter_31", false,-1, 63,0);
        tracep->declBus(c+412,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmevent_0", false,-1, 31,0);
        tracep->declBus(c+413,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmevent_1", false,-1, 31,0);
        tracep->declBus(c+414,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmevent_2", false,-1, 31,0);
        tracep->declBus(c+415,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmevent_3", false,-1, 31,0);
        tracep->declBus(c+416,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmevent_4", false,-1, 31,0);
        tracep->declBus(c+417,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmevent_5", false,-1, 31,0);
        tracep->declBus(c+418,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmevent_6", false,-1, 31,0);
        tracep->declBus(c+419,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmevent_7", false,-1, 31,0);
        tracep->declBus(c+420,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmevent_8", false,-1, 31,0);
        tracep->declBus(c+421,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmevent_9", false,-1, 31,0);
        tracep->declBus(c+422,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmevent_10", false,-1, 31,0);
        tracep->declBus(c+423,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmevent_11", false,-1, 31,0);
        tracep->declBus(c+424,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmevent_12", false,-1, 31,0);
        tracep->declBus(c+425,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmevent_13", false,-1, 31,0);
        tracep->declBus(c+426,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmevent_14", false,-1, 31,0);
        tracep->declBus(c+427,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmevent_15", false,-1, 31,0);
        tracep->declBus(c+428,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmevent_16", false,-1, 31,0);
        tracep->declBus(c+429,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmevent_17", false,-1, 31,0);
        tracep->declBus(c+430,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmevent_18", false,-1, 31,0);
        tracep->declBus(c+431,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmevent_19", false,-1, 31,0);
        tracep->declBus(c+432,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmevent_20", false,-1, 31,0);
        tracep->declBus(c+433,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmevent_21", false,-1, 31,0);
        tracep->declBus(c+434,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmevent_22", false,-1, 31,0);
        tracep->declBus(c+435,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmevent_23", false,-1, 31,0);
        tracep->declBus(c+436,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmevent_24", false,-1, 31,0);
        tracep->declBus(c+437,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmevent_25", false,-1, 31,0);
        tracep->declBus(c+438,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmevent_26", false,-1, 31,0);
        tracep->declBus(c+439,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmevent_27", false,-1, 31,0);
        tracep->declBus(c+440,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmevent_28", false,-1, 31,0);
        tracep->declBus(c+441,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmevent_29", false,-1, 31,0);
        tracep->declBus(c+442,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmevent_30", false,-1, 31,0);
        tracep->declBus(c+443,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmevent_31", false,-1, 31,0);
        tracep->declBit(c+444,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile illegal_csr_priv", false,-1);
        tracep->declBit(c+445,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile csr_wreq", false,-1);
        tracep->declBit(c+446,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile illegal_csr_write", false,-1);
        tracep->declBit(c+447,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile illegal_csr", false,-1);
        tracep->declBit(c+145,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mstatus_q_mie", false,-1);
        tracep->declBit(c+448,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mstatus_q_mpie", false,-1);
        tracep->declBit(c+449,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mstatus_q_mprv", false,-1);
        tracep->declBus(c+450,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mstatus_q_mpp", false,-1, 1,0);
        tracep->declBit(c+451,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mstatus_q_tw", false,-1);
        tracep->declBit(c+452,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mie_q_irq_software", false,-1);
        tracep->declBit(c+453,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mie_q_irq_timer", false,-1);
        tracep->declBit(c+454,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mie_q_irq_external", false,-1);
        tracep->declBus(c+273,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mcause_q", false,-1, 5,0);
        tracep->declBit(c+718,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mip_irq_software", false,-1);
        tracep->declBit(c+718,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mip_irq_timer", false,-1);
        tracep->declBit(c+50,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mip_irq_external", false,-1);
        tracep->declBit(c+455,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile dcsr_q_nmip", false,-1);
        tracep->declBit(c+456,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile dcsr_q_step", false,-1);
        tracep->declBit(c+457,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile dcsr_q_prv", false,-1);
        tracep->declBit(c+458,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile dcsr_q_zero0", false,-1);
        tracep->declBit(c+459,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile dcsr_q_mprven", false,-1);
        tracep->declBit(c+460,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile dcsr_q_stoptime", false,-1);
        tracep->declBit(c+461,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile dcsr_q_cause", false,-1);
        tracep->declBit(c+462,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile dcsr_q_ebreaks", false,-1);
        tracep->declBit(c+463,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile dcsr_q_stepie", false,-1);
        tracep->declBit(c+464,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile dcsr_q_stopcount", false,-1);
        tracep->declBit(c+465,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile dcsr_q_ebreakm", false,-1);
        tracep->declBit(c+466,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile dcsr_q_zero1", false,-1);
        tracep->declBus(c+467,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile dcsr_q_xdebugver", false,-1, 3,0);
        tracep->declBus(c+468,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile dcsr_q_zero2", false,-1, 11,0);
        tracep->declBus(c+469,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmcounter_idx", false,-1, 4,0);
        tracep->declBus(c+719,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile tmatch_value_rdata", false,-1, 31,0);
        tracep->declBus(c+470,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mcountinhibit", false,-1, 31,0);
        tracep->declBus(c+285,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile dscratch1_q", false,-1, 31,0);
        tracep->declBus(c+283,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile dscratch0_q", false,-1, 31,0);
        tracep->declBus(c+281,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile depc_q", false,-1, 31,0);
        tracep->declBus(c+276,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mtval_q", false,-1, 31,0);
        tracep->declBus(c+152,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mepc_q", false,-1, 31,0);
        tracep->declBus(c+146,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mtvec_q", false,-1, 31,0);
        tracep->declBus(c+270,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mscratch_q", false,-1, 31,0);
        tracep->declBit(c+471,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile csr_we_int", false,-1);
        tracep->declBus(c+472,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile csr_wdata_int", false,-1, 31,0);
        tracep->declBus(c+473,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mstatus_d_mpp", false,-1, 1,0);
        tracep->declBit(c+474,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile dcsr_d_prv", false,-1);
        tracep->declBus(c+475,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile exception_pc", false,-1, 31,0);
        tracep->declBit(c+476,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mstatus_d_mpie", false,-1);
        tracep->declBit(c+477,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mstatus_d_mie", false,-1);
        tracep->declBit(c+478,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mstatus_d_tw", false,-1);
        tracep->declBit(c+479,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mstatus_d_mprv", false,-1);
        tracep->declBit(c+480,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mie_d_irq_external", false,-1);
        tracep->declBit(c+481,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mie_d_irq_timer", false,-1);
        tracep->declBit(c+482,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mie_d_irq_software", false,-1);
        tracep->declBit(c+455,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile dcsr_d_nmip", false,-1);
        tracep->declBit(c+456,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile dcsr_d_step", false,-1);
        tracep->declBit(c+458,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile dcsr_d_zero0", false,-1);
        tracep->declBit(c+459,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile dcsr_d_mprven", false,-1);
        tracep->declBit(c+460,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile dcsr_d_stoptime", false,-1);
        tracep->declBit(c+483,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile dcsr_d_cause", false,-1);
        tracep->declBit(c+462,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile dcsr_d_ebreaks", false,-1);
        tracep->declBit(c+463,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile dcsr_d_stepie", false,-1);
        tracep->declBit(c+464,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile dcsr_d_stopcount", false,-1);
        tracep->declBit(c+465,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile dcsr_d_ebreakm", false,-1);
        tracep->declBit(c+466,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile dcsr_d_zero1", false,-1);
        tracep->declBus(c+467,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile dcsr_d_xdebugver", false,-1, 3,0);
        tracep->declBus(c+468,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile dcsr_d_zero2", false,-1, 11,0);
        tracep->declBit(c+484,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mcountinhibit_we", false,-1);
        tracep->declBus(c+719,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmcounter_incr", false,-1, 31,0);
        tracep->declBus(c+485,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmcounterh_we", false,-1, 31,0);
        tracep->declBus(c+486,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mhpmcounter_we", false,-1, 31,0);
        tracep->declBit(c+261,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mstatus_en", false,-1);
        tracep->declBit(c+266,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mie_en", false,-1);
        tracep->declBit(c+269,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mscratch_en", false,-1);
        tracep->declBus(c+263,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mepc_d", false,-1, 31,0);
        tracep->declBit(c+264,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mepc_en", false,-1);
        tracep->declBus(c+271,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mcause_d", false,-1, 5,0);
        tracep->declBit(c+272,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mcause_en", false,-1);
        tracep->declBus(c+274,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mtval_d", false,-1, 31,0);
        tracep->declBit(c+275,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mtval_en", false,-1);
        tracep->declBus(c+277,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mtvec_d", false,-1, 31,0);
        tracep->declBit(c+147,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mtvec_en", false,-1);
        tracep->declBit(c+718,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile dcsr_en", false,-1);
        tracep->declBus(c+280,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile depc_d", false,-1, 31,0);
        tracep->declBit(c+718,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile depc_en", false,-1);
        tracep->declBit(c+282,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile dscratch0_en", false,-1);
        tracep->declBit(c+284,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile dscratch1_en", false,-1);
        tracep->declBus(c+487,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mcountinhibit_d", false,-1, 12,0);
        tracep->declBit(c+488,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile mstat_priv", false,-1);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MSTATUS clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MSTATUS reset", false,-1);
        tracep->declBus(c+260,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MSTATUS io_i_wrdata", false,-1, 5,0);
        tracep->declBit(c+261,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MSTATUS io_i_wr_en", false,-1);
        tracep->declBus(c+262,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MSTATUS io_o_rd_data", false,-1, 5,0);
        tracep->declBus(c+262,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MSTATUS rdata_q", false,-1, 5,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MEPC clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MEPC reset", false,-1);
        tracep->declBus(c+263,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MEPC io_i_wrdata", false,-1, 31,0);
        tracep->declBit(c+264,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MEPC io_i_wr_en", false,-1);
        tracep->declBus(c+152,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MEPC io_o_rd_data", false,-1, 31,0);
        tracep->declBus(c+152,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MEPC rdata_q", false,-1, 31,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MIE clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MIE reset", false,-1);
        tracep->declBus(c+265,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MIE io_i_wrdata", false,-1, 2,0);
        tracep->declBit(c+266,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MIE io_i_wr_en", false,-1);
        tracep->declBus(c+267,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MIE io_o_rd_data", false,-1, 2,0);
        tracep->declBus(c+267,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MIE rdata_q", false,-1, 2,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MSCRATCH clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MSCRATCH reset", false,-1);
        tracep->declBus(c+268,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MSCRATCH io_i_wrdata", false,-1, 31,0);
        tracep->declBit(c+269,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MSCRATCH io_i_wr_en", false,-1);
        tracep->declBus(c+270,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MSCRATCH io_o_rd_data", false,-1, 31,0);
        tracep->declBus(c+270,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MSCRATCH rdata_q", false,-1, 31,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MCAUSE clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MCAUSE reset", false,-1);
        tracep->declBus(c+271,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MCAUSE io_i_wrdata", false,-1, 5,0);
        tracep->declBit(c+272,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MCAUSE io_i_wr_en", false,-1);
        tracep->declBus(c+273,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MCAUSE io_o_rd_data", false,-1, 5,0);
        tracep->declBus(c+273,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MCAUSE rdata_q", false,-1, 5,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MTVAL clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MTVAL reset", false,-1);
        tracep->declBus(c+274,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MTVAL io_i_wrdata", false,-1, 31,0);
        tracep->declBit(c+275,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MTVAL io_i_wr_en", false,-1);
        tracep->declBus(c+276,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MTVAL io_o_rd_data", false,-1, 31,0);
        tracep->declBus(c+276,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MTVAL rdata_q", false,-1, 31,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MTVEC clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MTVEC reset", false,-1);
        tracep->declBus(c+277,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MTVEC io_i_wrdata", false,-1, 31,0);
        tracep->declBit(c+147,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MTVEC io_i_wr_en", false,-1);
        tracep->declBus(c+146,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MTVEC io_o_rd_data", false,-1, 31,0);
        tracep->declBus(c+146,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_MTVEC rdata_q", false,-1, 31,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_DCSR clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_DCSR reset", false,-1);
        tracep->declBus(c+278,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_DCSR io_i_wrdata", false,-1, 27,0);
        tracep->declBit(c+718,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_DCSR io_i_wr_en", false,-1);
        tracep->declBus(c+279,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_DCSR io_o_rd_data", false,-1, 27,0);
        tracep->declBus(c+279,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_DCSR rdata_q", false,-1, 27,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_DEPC clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_DEPC reset", false,-1);
        tracep->declBus(c+280,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_DEPC io_i_wrdata", false,-1, 31,0);
        tracep->declBit(c+718,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_DEPC io_i_wr_en", false,-1);
        tracep->declBus(c+281,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_DEPC io_o_rd_data", false,-1, 31,0);
        tracep->declBus(c+281,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_DEPC rdata_q", false,-1, 31,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_DSCRATCH0 clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_DSCRATCH0 reset", false,-1);
        tracep->declBus(c+268,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_DSCRATCH0 io_i_wrdata", false,-1, 31,0);
        tracep->declBit(c+282,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_DSCRATCH0 io_i_wr_en", false,-1);
        tracep->declBus(c+283,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_DSCRATCH0 io_o_rd_data", false,-1, 31,0);
        tracep->declBus(c+283,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_DSCRATCH0 rdata_q", false,-1, 31,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_DSCRATCH1 clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_DSCRATCH1 reset", false,-1);
        tracep->declBus(c+268,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_DSCRATCH1 io_i_wrdata", false,-1, 31,0);
        tracep->declBit(c+284,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_DSCRATCH1 io_i_wr_en", false,-1);
        tracep->declBus(c+285,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_DSCRATCH1 io_o_rd_data", false,-1, 31,0);
        tracep->declBus(c+285,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile PRIM_DSCRATCH1 rdata_q", false,-1, 31,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile COUNT_MCYCLE clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile COUNT_MCYCLE reset", false,-1);
        tracep->declBit(c+718,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile COUNT_MCYCLE io_i_counter_inc", false,-1);
        tracep->declBit(c+286,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile COUNT_MCYCLE io_i_counterh_we", false,-1);
        tracep->declBit(c+287,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile COUNT_MCYCLE io_i_counter_we", false,-1);
        tracep->declBus(c+288,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile COUNT_MCYCLE io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+289,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile COUNT_MCYCLE io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+489,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile COUNT_MCYCLE we", false,-1);
        tracep->declQuad(c+289,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile COUNT_MCYCLE counter_q", false,-1, 63,0);
        tracep->declBus(c+490,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile COUNT_MCYCLE counter_msb", false,-1, 31,0);
        tracep->declBus(c+491,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile COUNT_MCYCLE counter_lsb", false,-1, 31,0);
        tracep->declQuad(c+492,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile COUNT_MCYCLE counter_load", false,-1, 63,0);
        tracep->declQuad(c+494,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile COUNT_MCYCLE counter_upd", false,-1, 63,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile COUNT_MINSTRET clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile COUNT_MINSTRET reset", false,-1);
        tracep->declBit(c+718,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile COUNT_MINSTRET io_i_counter_inc", false,-1);
        tracep->declBit(c+291,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile COUNT_MINSTRET io_i_counterh_we", false,-1);
        tracep->declBit(c+292,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile COUNT_MINSTRET io_i_counter_we", false,-1);
        tracep->declBus(c+293,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile COUNT_MINSTRET io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+294,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile COUNT_MINSTRET io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+496,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile COUNT_MINSTRET we", false,-1);
        tracep->declQuad(c+294,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile COUNT_MINSTRET counter_q", false,-1, 63,0);
        tracep->declBus(c+497,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile COUNT_MINSTRET counter_msb", false,-1, 31,0);
        tracep->declBus(c+498,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile COUNT_MINSTRET counter_lsb", false,-1, 31,0);
        tracep->declQuad(c+499,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile COUNT_MINSTRET counter_load", false,-1, 63,0);
        tracep->declQuad(c+501,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile COUNT_MINSTRET counter_upd", false,-1, 63,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter reset", false,-1);
        tracep->declBit(c+718,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter io_i_counter_inc", false,-1);
        tracep->declBit(c+296,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter io_i_counterh_we", false,-1);
        tracep->declBit(c+297,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter io_i_counter_we", false,-1);
        tracep->declBus(c+298,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+299,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+503,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter we", false,-1);
        tracep->declQuad(c+504,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter counter_q", false,-1, 39,0);
        tracep->declQuad(c+299,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter counter", false,-1, 63,0);
        tracep->declBus(c+506,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter counter_msb", false,-1, 31,0);
        tracep->declBus(c+507,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter counter_lsb", false,-1, 31,0);
        tracep->declQuad(c+508,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter counter_load", false,-1, 63,0);
        tracep->declQuad(c+510,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter counter_upd", false,-1, 39,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_1 clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_1 reset", false,-1);
        tracep->declBit(c+718,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_1 io_i_counter_inc", false,-1);
        tracep->declBit(c+301,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_1 io_i_counterh_we", false,-1);
        tracep->declBit(c+302,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_1 io_i_counter_we", false,-1);
        tracep->declBus(c+303,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_1 io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+304,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_1 io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+512,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_1 we", false,-1);
        tracep->declQuad(c+513,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_1 counter_q", false,-1, 39,0);
        tracep->declQuad(c+304,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_1 counter", false,-1, 63,0);
        tracep->declBus(c+515,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_1 counter_msb", false,-1, 31,0);
        tracep->declBus(c+516,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_1 counter_lsb", false,-1, 31,0);
        tracep->declQuad(c+517,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_1 counter_load", false,-1, 63,0);
        tracep->declQuad(c+519,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_1 counter_upd", false,-1, 39,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_2 clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_2 reset", false,-1);
        tracep->declBit(c+718,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_2 io_i_counter_inc", false,-1);
        tracep->declBit(c+306,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_2 io_i_counterh_we", false,-1);
        tracep->declBit(c+307,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_2 io_i_counter_we", false,-1);
        tracep->declBus(c+308,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_2 io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+309,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_2 io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+521,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_2 we", false,-1);
        tracep->declQuad(c+522,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_2 counter_q", false,-1, 39,0);
        tracep->declQuad(c+309,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_2 counter", false,-1, 63,0);
        tracep->declBus(c+524,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_2 counter_msb", false,-1, 31,0);
        tracep->declBus(c+525,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_2 counter_lsb", false,-1, 31,0);
        tracep->declQuad(c+526,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_2 counter_load", false,-1, 63,0);
        tracep->declQuad(c+528,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_2 counter_upd", false,-1, 39,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_3 clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_3 reset", false,-1);
        tracep->declBit(c+718,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_3 io_i_counter_inc", false,-1);
        tracep->declBit(c+311,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_3 io_i_counterh_we", false,-1);
        tracep->declBit(c+312,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_3 io_i_counter_we", false,-1);
        tracep->declBus(c+313,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_3 io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+314,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_3 io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+530,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_3 we", false,-1);
        tracep->declQuad(c+531,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_3 counter_q", false,-1, 39,0);
        tracep->declQuad(c+314,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_3 counter", false,-1, 63,0);
        tracep->declBus(c+533,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_3 counter_msb", false,-1, 31,0);
        tracep->declBus(c+534,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_3 counter_lsb", false,-1, 31,0);
        tracep->declQuad(c+535,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_3 counter_load", false,-1, 63,0);
        tracep->declQuad(c+537,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_3 counter_upd", false,-1, 39,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_4 clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_4 reset", false,-1);
        tracep->declBit(c+718,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_4 io_i_counter_inc", false,-1);
        tracep->declBit(c+316,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_4 io_i_counterh_we", false,-1);
        tracep->declBit(c+317,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_4 io_i_counter_we", false,-1);
        tracep->declBus(c+318,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_4 io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+319,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_4 io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+539,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_4 we", false,-1);
        tracep->declQuad(c+540,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_4 counter_q", false,-1, 39,0);
        tracep->declQuad(c+319,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_4 counter", false,-1, 63,0);
        tracep->declBus(c+542,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_4 counter_msb", false,-1, 31,0);
        tracep->declBus(c+543,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_4 counter_lsb", false,-1, 31,0);
        tracep->declQuad(c+544,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_4 counter_load", false,-1, 63,0);
        tracep->declQuad(c+546,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_4 counter_upd", false,-1, 39,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_5 clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_5 reset", false,-1);
        tracep->declBit(c+718,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_5 io_i_counter_inc", false,-1);
        tracep->declBit(c+321,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_5 io_i_counterh_we", false,-1);
        tracep->declBit(c+322,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_5 io_i_counter_we", false,-1);
        tracep->declBus(c+323,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_5 io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+324,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_5 io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+548,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_5 we", false,-1);
        tracep->declQuad(c+549,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_5 counter_q", false,-1, 39,0);
        tracep->declQuad(c+324,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_5 counter", false,-1, 63,0);
        tracep->declBus(c+551,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_5 counter_msb", false,-1, 31,0);
        tracep->declBus(c+552,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_5 counter_lsb", false,-1, 31,0);
        tracep->declQuad(c+553,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_5 counter_load", false,-1, 63,0);
        tracep->declQuad(c+555,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_5 counter_upd", false,-1, 39,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_6 clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_6 reset", false,-1);
        tracep->declBit(c+718,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_6 io_i_counter_inc", false,-1);
        tracep->declBit(c+326,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_6 io_i_counterh_we", false,-1);
        tracep->declBit(c+327,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_6 io_i_counter_we", false,-1);
        tracep->declBus(c+328,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_6 io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+329,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_6 io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+557,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_6 we", false,-1);
        tracep->declQuad(c+558,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_6 counter_q", false,-1, 39,0);
        tracep->declQuad(c+329,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_6 counter", false,-1, 63,0);
        tracep->declBus(c+560,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_6 counter_msb", false,-1, 31,0);
        tracep->declBus(c+561,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_6 counter_lsb", false,-1, 31,0);
        tracep->declQuad(c+562,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_6 counter_load", false,-1, 63,0);
        tracep->declQuad(c+564,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_6 counter_upd", false,-1, 39,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_7 clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_7 reset", false,-1);
        tracep->declBit(c+718,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_7 io_i_counter_inc", false,-1);
        tracep->declBit(c+331,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_7 io_i_counterh_we", false,-1);
        tracep->declBit(c+332,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_7 io_i_counter_we", false,-1);
        tracep->declBus(c+333,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_7 io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+334,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_7 io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+566,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_7 we", false,-1);
        tracep->declQuad(c+567,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_7 counter_q", false,-1, 39,0);
        tracep->declQuad(c+334,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_7 counter", false,-1, 63,0);
        tracep->declBus(c+569,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_7 counter_msb", false,-1, 31,0);
        tracep->declBus(c+570,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_7 counter_lsb", false,-1, 31,0);
        tracep->declQuad(c+571,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_7 counter_load", false,-1, 63,0);
        tracep->declQuad(c+573,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_7 counter_upd", false,-1, 39,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_8 clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_8 reset", false,-1);
        tracep->declBit(c+718,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_8 io_i_counter_inc", false,-1);
        tracep->declBit(c+336,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_8 io_i_counterh_we", false,-1);
        tracep->declBit(c+337,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_8 io_i_counter_we", false,-1);
        tracep->declBus(c+338,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_8 io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+339,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_8 io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+575,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_8 we", false,-1);
        tracep->declQuad(c+576,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_8 counter_q", false,-1, 39,0);
        tracep->declQuad(c+339,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_8 counter", false,-1, 63,0);
        tracep->declBus(c+578,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_8 counter_msb", false,-1, 31,0);
        tracep->declBus(c+579,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_8 counter_lsb", false,-1, 31,0);
        tracep->declQuad(c+580,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_8 counter_load", false,-1, 63,0);
        tracep->declQuad(c+582,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_8 counter_upd", false,-1, 39,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_9 clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_9 reset", false,-1);
        tracep->declBit(c+718,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_9 io_i_counter_inc", false,-1);
        tracep->declBit(c+341,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_9 io_i_counterh_we", false,-1);
        tracep->declBit(c+342,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_9 io_i_counter_we", false,-1);
        tracep->declBus(c+343,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_9 io_i_counter_val", false,-1, 31,0);
        tracep->declQuad(c+344,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_9 io_o_counter_val", false,-1, 63,0);
        tracep->declBit(c+584,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_9 we", false,-1);
        tracep->declQuad(c+585,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_9 counter_q", false,-1, 39,0);
        tracep->declQuad(c+344,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_9 counter", false,-1, 63,0);
        tracep->declBus(c+587,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_9 counter_msb", false,-1, 31,0);
        tracep->declBus(c+588,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_9 counter_lsb", false,-1, 31,0);
        tracep->declQuad(c+589,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_9 counter_load", false,-1, 63,0);
        tracep->declQuad(c+591,"Ibtida_top_dffram_cv ibtidaTop core decode csrRegFile BrqCounter_9 counter_upd", false,-1, 39,0);
        tracep->declBit(c+118,"Ibtida_top_dffram_cv ibtidaTop core decode csrControlUnit io_reg_wr_in_execute", false,-1);
        tracep->declBus(c+113,"Ibtida_top_dffram_cv ibtidaTop core decode csrControlUnit io_rd_sel_in_execute", false,-1, 4,0);
        tracep->declBit(c+119,"Ibtida_top_dffram_cv ibtidaTop core decode csrControlUnit io_csr_wr_in_execute", false,-1);
        tracep->declBit(c+128,"Ibtida_top_dffram_cv ibtidaTop core decode csrControlUnit io_reg_wr_in_memory", false,-1);
        tracep->declBus(c+132,"Ibtida_top_dffram_cv ibtidaTop core decode csrControlUnit io_rd_sel_in_memory", false,-1, 4,0);
        tracep->declBit(c+129,"Ibtida_top_dffram_cv ibtidaTop core decode csrControlUnit io_csr_wr_in_memory", false,-1);
        tracep->declBit(c+136,"Ibtida_top_dffram_cv ibtidaTop core decode csrControlUnit io_reg_wr_in_writeback", false,-1);
        tracep->declBus(c+140,"Ibtida_top_dffram_cv ibtidaTop core decode csrControlUnit io_rd_sel_in_writeback", false,-1, 4,0);
        tracep->declBit(c+137,"Ibtida_top_dffram_cv ibtidaTop core decode csrControlUnit io_csr_wr_in_writeback", false,-1);
        tracep->declBus(c+86,"Ibtida_top_dffram_cv ibtidaTop core decode csrControlUnit io_rs1_sel_in_decode", false,-1, 4,0);
        tracep->declBit(c+174,"Ibtida_top_dffram_cv ibtidaTop core decode csrControlUnit io_csr_inst_in_decode", false,-1);
        tracep->declBit(c+175,"Ibtida_top_dffram_cv ibtidaTop core decode csrControlUnit io_csr_imm_inst_in_decode", false,-1);
        tracep->declBit(c+117,"Ibtida_top_dffram_cv ibtidaTop core decode csrControlUnit io_load_inst_in_execute", false,-1);
        tracep->declBit(c+127,"Ibtida_top_dffram_cv ibtidaTop core decode csrControlUnit io_load_inst_in_memory", false,-1);
        tracep->declBit(c+34,"Ibtida_top_dffram_cv ibtidaTop core decode csrControlUnit io_dccm_rvalid_i", false,-1);
        tracep->declBus(c+201,"Ibtida_top_dffram_cv ibtidaTop core decode csrControlUnit io_forward_rs1", false,-1, 2,0);
        tracep->declBit(c+198,"Ibtida_top_dffram_cv ibtidaTop core decode csrControlUnit io_csr_op_en_o", false,-1);
        tracep->declBit(c+593,"Ibtida_top_dffram_cv ibtidaTop core decode csrControlUnit hazard_in_decode_execute", false,-1);
        tracep->declBit(c+594,"Ibtida_top_dffram_cv ibtidaTop core decode csrControlUnit hazard_in_decode_memory", false,-1);
        tracep->declBit(c+595,"Ibtida_top_dffram_cv ibtidaTop core decode csrControlUnit hazard_in_decode_writeback", false,-1);
        tracep->declBit(c+596,"Ibtida_top_dffram_cv ibtidaTop core decode csrControlUnit csr_hazard_in_decode_execute", false,-1);
        tracep->declBit(c+597,"Ibtida_top_dffram_cv ibtidaTop core decode csrControlUnit csr_hazard_in_decode_memory", false,-1);
        tracep->declBit(c+598,"Ibtida_top_dffram_cv ibtidaTop core decode csrControlUnit csr_hazard_in_decode_writeback", false,-1);
        tracep->declBus(c+132,"Ibtida_top_dffram_cv ibtidaTop core execute io_EX_MEM_rd_sel", false,-1, 4,0);
        tracep->declBus(c+140,"Ibtida_top_dffram_cv ibtidaTop core execute io_MEM_WB_rd_sel", false,-1, 4,0);
        tracep->declBus(c+114,"Ibtida_top_dffram_cv ibtidaTop core execute io_ID_EX_rs1_sel", false,-1, 4,0);
        tracep->declBus(c+115,"Ibtida_top_dffram_cv ibtidaTop core execute io_ID_EX_rs2_sel", false,-1, 4,0);
        tracep->declBit(c+128,"Ibtida_top_dffram_cv ibtidaTop core execute io_EX_MEM_ctrl_RegWr", false,-1);
        tracep->declBit(c+129,"Ibtida_top_dffram_cv ibtidaTop core execute io_EX_MEM_ctrl_csrWen", false,-1);
        tracep->declBit(c+137,"Ibtida_top_dffram_cv ibtidaTop core execute io_MEM_WB_ctrl_csrWen", false,-1);
        tracep->declBit(c+136,"Ibtida_top_dffram_cv ibtidaTop core execute io_MEM_WB_ctrl_RegWr", false,-1);
        tracep->declBus(c+122,"Ibtida_top_dffram_cv ibtidaTop core execute io_ID_EX_ctrl_OpA_sel", false,-1, 1,0);
        tracep->declBit(c+123,"Ibtida_top_dffram_cv ibtidaTop core execute io_ID_EX_ctrl_OpB_sel", false,-1);
        tracep->declBus(c+106,"Ibtida_top_dffram_cv ibtidaTop core execute io_ID_EX_pc4", false,-1, 31,0);
        tracep->declBus(c+105,"Ibtida_top_dffram_cv ibtidaTop core execute io_ID_EX_pc_out", false,-1, 31,0);
        tracep->declBus(c+107,"Ibtida_top_dffram_cv ibtidaTop core execute io_ID_EX_rs1", false,-1, 31,0);
        tracep->declBus(c+108,"Ibtida_top_dffram_cv ibtidaTop core execute io_ID_EX_rs2", false,-1, 31,0);
        tracep->declBus(c+124,"Ibtida_top_dffram_cv ibtidaTop core execute io_ID_EX_csr_data", false,-1, 31,0);
        tracep->declBus(c+42,"Ibtida_top_dffram_cv ibtidaTop core execute io_EX_MEM_alu_output", false,-1, 31,0);
        tracep->declBus(c+134,"Ibtida_top_dffram_cv ibtidaTop core execute io_EX_MEM_csr_rdata", false,-1, 31,0);
        tracep->declBus(c+143,"Ibtida_top_dffram_cv ibtidaTop core execute io_MEM_WB_csr_rdata", false,-1, 31,0);
        tracep->declBus(c+163,"Ibtida_top_dffram_cv ibtidaTop core execute io_writeback_write_data", false,-1, 31,0);
        tracep->declBus(c+109,"Ibtida_top_dffram_cv ibtidaTop core execute io_ID_EX_imm", false,-1, 31,0);
        tracep->declBus(c+121,"Ibtida_top_dffram_cv ibtidaTop core execute io_ID_EX_ctrl_AluOp", false,-1, 3,0);
        tracep->declBus(c+111,"Ibtida_top_dffram_cv ibtidaTop core execute io_ID_EX_func7", false,-1, 6,0);
        tracep->declBus(c+112,"Ibtida_top_dffram_cv ibtidaTop core execute io_ID_EX_inst_op", false,-1, 6,0);
        tracep->declBus(c+110,"Ibtida_top_dffram_cv ibtidaTop core execute io_ID_EX_func3", false,-1, 2,0);
        tracep->declBus(c+113,"Ibtida_top_dffram_cv ibtidaTop core execute io_ID_EX_rd_sel", false,-1, 4,0);
        tracep->declBit(c+116,"Ibtida_top_dffram_cv ibtidaTop core execute io_ID_EX_ctrl_MemWr", false,-1);
        tracep->declBit(c+117,"Ibtida_top_dffram_cv ibtidaTop core execute io_ID_EX_ctrl_MemRd", false,-1);
        tracep->declBit(c+118,"Ibtida_top_dffram_cv ibtidaTop core execute io_ID_EX_ctrl_RegWr", false,-1);
        tracep->declBit(c+119,"Ibtida_top_dffram_cv ibtidaTop core execute io_ID_EX_ctrl_CsrWen", false,-1);
        tracep->declBit(c+120,"Ibtida_top_dffram_cv ibtidaTop core execute io_ID_EX_ctrl_MemToReg", false,-1);
        tracep->declBus(c+125,"Ibtida_top_dffram_cv ibtidaTop core execute io_rs2_out", false,-1, 31,0);
        tracep->declBus(c+126,"Ibtida_top_dffram_cv ibtidaTop core execute io_alu_output", false,-1, 31,0);
        tracep->declBus(c+113,"Ibtida_top_dffram_cv ibtidaTop core execute io_rd_sel_out", false,-1, 4,0);
        tracep->declBit(c+116,"Ibtida_top_dffram_cv ibtidaTop core execute io_ctrl_MemWr_out", false,-1);
        tracep->declBit(c+117,"Ibtida_top_dffram_cv ibtidaTop core execute io_ctrl_MemRd_out", false,-1);
        tracep->declBit(c+118,"Ibtida_top_dffram_cv ibtidaTop core execute io_ctrl_RegWr_out", false,-1);
        tracep->declBit(c+119,"Ibtida_top_dffram_cv ibtidaTop core execute io_ctrl_CsrWe_out", false,-1);
        tracep->declBit(c+120,"Ibtida_top_dffram_cv ibtidaTop core execute io_ctrl_MemToReg_out", false,-1);
        tracep->declBus(c+110,"Ibtida_top_dffram_cv ibtidaTop core execute io_func3_out", false,-1, 2,0);
        tracep->declBus(c+124,"Ibtida_top_dffram_cv ibtidaTop core execute io_csr_data_o", false,-1, 31,0);
        tracep->declBus(c+132,"Ibtida_top_dffram_cv ibtidaTop core execute forwardUnit_io_EX_MEM_REGRD", false,-1, 4,0);
        tracep->declBus(c+140,"Ibtida_top_dffram_cv ibtidaTop core execute forwardUnit_io_MEM_WB_REGRD", false,-1, 4,0);
        tracep->declBus(c+114,"Ibtida_top_dffram_cv ibtidaTop core execute forwardUnit_io_ID_EX_REGRS1", false,-1, 4,0);
        tracep->declBus(c+115,"Ibtida_top_dffram_cv ibtidaTop core execute forwardUnit_io_ID_EX_REGRS2", false,-1, 4,0);
        tracep->declBus(c+112,"Ibtida_top_dffram_cv ibtidaTop core execute forwardUnit_io_ID_EX_inst_op", false,-1, 6,0);
        tracep->declBit(c+128,"Ibtida_top_dffram_cv ibtidaTop core execute forwardUnit_io_EX_MEM_REGWR", false,-1);
        tracep->declBit(c+136,"Ibtida_top_dffram_cv ibtidaTop core execute forwardUnit_io_MEM_WB_REGWR", false,-1);
        tracep->declBus(c+599,"Ibtida_top_dffram_cv ibtidaTop core execute forwardUnit_io_forward_a", false,-1, 1,0);
        tracep->declBus(c+600,"Ibtida_top_dffram_cv ibtidaTop core execute forwardUnit_io_forward_b", false,-1, 1,0);
        tracep->declBus(c+601,"Ibtida_top_dffram_cv ibtidaTop core execute alu_io_oper_a", false,-1, 31,0);
        tracep->declBus(c+602,"Ibtida_top_dffram_cv ibtidaTop core execute alu_io_oper_b", false,-1, 31,0);
        tracep->declBus(c+603,"Ibtida_top_dffram_cv ibtidaTop core execute alu_io_aluCtrl", false,-1, 4,0);
        tracep->declBus(c+126,"Ibtida_top_dffram_cv ibtidaTop core execute alu_io_output", false,-1, 31,0);
        tracep->declBus(c+121,"Ibtida_top_dffram_cv ibtidaTop core execute alu_control_io_aluOp", false,-1, 3,0);
        tracep->declBus(c+111,"Ibtida_top_dffram_cv ibtidaTop core execute alu_control_io_func7", false,-1, 6,0);
        tracep->declBus(c+110,"Ibtida_top_dffram_cv ibtidaTop core execute alu_control_io_func3", false,-1, 2,0);
        tracep->declBus(c+603,"Ibtida_top_dffram_cv ibtidaTop core execute alu_control_io_output", false,-1, 4,0);
        tracep->declBus(c+132,"Ibtida_top_dffram_cv ibtidaTop core execute forwardUnit io_EX_MEM_REGRD", false,-1, 4,0);
        tracep->declBus(c+140,"Ibtida_top_dffram_cv ibtidaTop core execute forwardUnit io_MEM_WB_REGRD", false,-1, 4,0);
        tracep->declBus(c+114,"Ibtida_top_dffram_cv ibtidaTop core execute forwardUnit io_ID_EX_REGRS1", false,-1, 4,0);
        tracep->declBus(c+115,"Ibtida_top_dffram_cv ibtidaTop core execute forwardUnit io_ID_EX_REGRS2", false,-1, 4,0);
        tracep->declBus(c+112,"Ibtida_top_dffram_cv ibtidaTop core execute forwardUnit io_ID_EX_inst_op", false,-1, 6,0);
        tracep->declBit(c+128,"Ibtida_top_dffram_cv ibtidaTop core execute forwardUnit io_EX_MEM_REGWR", false,-1);
        tracep->declBit(c+136,"Ibtida_top_dffram_cv ibtidaTop core execute forwardUnit io_MEM_WB_REGWR", false,-1);
        tracep->declBus(c+599,"Ibtida_top_dffram_cv ibtidaTop core execute forwardUnit io_forward_a", false,-1, 1,0);
        tracep->declBus(c+600,"Ibtida_top_dffram_cv ibtidaTop core execute forwardUnit io_forward_b", false,-1, 1,0);
        tracep->declBus(c+601,"Ibtida_top_dffram_cv ibtidaTop core execute alu io_oper_a", false,-1, 31,0);
        tracep->declBus(c+602,"Ibtida_top_dffram_cv ibtidaTop core execute alu io_oper_b", false,-1, 31,0);
        tracep->declBus(c+603,"Ibtida_top_dffram_cv ibtidaTop core execute alu io_aluCtrl", false,-1, 4,0);
        tracep->declBus(c+126,"Ibtida_top_dffram_cv ibtidaTop core execute alu io_output", false,-1, 31,0);
        tracep->declBus(c+121,"Ibtida_top_dffram_cv ibtidaTop core execute alu_control io_aluOp", false,-1, 3,0);
        tracep->declBus(c+111,"Ibtida_top_dffram_cv ibtidaTop core execute alu_control io_func7", false,-1, 6,0);
        tracep->declBus(c+110,"Ibtida_top_dffram_cv ibtidaTop core execute alu_control io_func3", false,-1, 2,0);
        tracep->declBus(c+603,"Ibtida_top_dffram_cv ibtidaTop core execute alu_control io_output", false,-1, 4,0);
        tracep->declBus(c+42,"Ibtida_top_dffram_cv ibtidaTop core memory_stage io_EX_MEM_alu_output", false,-1, 31,0);
        tracep->declBus(c+132,"Ibtida_top_dffram_cv ibtidaTop core memory_stage io_EX_MEM_rd_sel", false,-1, 4,0);
        tracep->declBit(c+128,"Ibtida_top_dffram_cv ibtidaTop core memory_stage io_EX_MEM_RegWr", false,-1);
        tracep->declBit(c+129,"Ibtida_top_dffram_cv ibtidaTop core memory_stage io_EX_MEM_CsrWe", false,-1);
        tracep->declBit(c+127,"Ibtida_top_dffram_cv ibtidaTop core memory_stage io_EX_MEM_MemRd", false,-1);
        tracep->declBit(c+130,"Ibtida_top_dffram_cv ibtidaTop core memory_stage io_EX_MEM_MemToReg", false,-1);
        tracep->declBit(c+37,"Ibtida_top_dffram_cv ibtidaTop core memory_stage io_EX_MEM_MemWr", false,-1);
        tracep->declBus(c+131,"Ibtida_top_dffram_cv ibtidaTop core memory_stage io_EX_MEM_rs2", false,-1, 31,0);
        tracep->declBus(c+133,"Ibtida_top_dffram_cv ibtidaTop core memory_stage io_func3", false,-1, 2,0);
        tracep->declBus(c+134,"Ibtida_top_dffram_cv ibtidaTop core memory_stage io_EX_MEM_csr_data", false,-1, 31,0);
        tracep->declBit(c+33,"Ibtida_top_dffram_cv ibtidaTop core memory_stage io_data_gnt_i", false,-1);
        tracep->declBit(c+34,"Ibtida_top_dffram_cv ibtidaTop core memory_stage io_data_rvalid_i", false,-1);
        tracep->declBus(c+35,"Ibtida_top_dffram_cv ibtidaTop core memory_stage io_data_rdata_i", false,-1, 31,0);
        tracep->declBit(c+36,"Ibtida_top_dffram_cv ibtidaTop core memory_stage io_data_req_o", false,-1);
        tracep->declBit(c+38,"Ibtida_top_dffram_cv ibtidaTop core memory_stage io_data_be_o_0", false,-1);
        tracep->declBit(c+39,"Ibtida_top_dffram_cv ibtidaTop core memory_stage io_data_be_o_1", false,-1);
        tracep->declBit(c+40,"Ibtida_top_dffram_cv ibtidaTop core memory_stage io_data_be_o_2", false,-1);
        tracep->declBit(c+41,"Ibtida_top_dffram_cv ibtidaTop core memory_stage io_data_be_o_3", false,-1);
        tracep->declBit(c+37,"Ibtida_top_dffram_cv ibtidaTop core memory_stage io_ctrl_MemWr_out", false,-1);
        tracep->declBus(c+43,"Ibtida_top_dffram_cv ibtidaTop core memory_stage io_data_wdata_o_0", false,-1, 7,0);
        tracep->declBus(c+44,"Ibtida_top_dffram_cv ibtidaTop core memory_stage io_data_wdata_o_1", false,-1, 7,0);
        tracep->declBus(c+45,"Ibtida_top_dffram_cv ibtidaTop core memory_stage io_data_wdata_o_2", false,-1, 7,0);
        tracep->declBus(c+46,"Ibtida_top_dffram_cv ibtidaTop core memory_stage io_data_wdata_o_3", false,-1, 7,0);
        tracep->declBus(c+42,"Ibtida_top_dffram_cv ibtidaTop core memory_stage io_memAddress", false,-1, 31,0);
        tracep->declBus(c+135,"Ibtida_top_dffram_cv ibtidaTop core memory_stage io_data_out", false,-1, 31,0);
        tracep->declBus(c+42,"Ibtida_top_dffram_cv ibtidaTop core memory_stage io_alu_output", false,-1, 31,0);
        tracep->declBus(c+132,"Ibtida_top_dffram_cv ibtidaTop core memory_stage io_rd_sel_out", false,-1, 4,0);
        tracep->declBit(c+128,"Ibtida_top_dffram_cv ibtidaTop core memory_stage io_ctrl_RegWr_out", false,-1);
        tracep->declBit(c+129,"Ibtida_top_dffram_cv ibtidaTop core memory_stage io_ctrl_CsrWen_out", false,-1);
        tracep->declBit(c+127,"Ibtida_top_dffram_cv ibtidaTop core memory_stage io_ctrl_MemRd_out", false,-1);
        tracep->declBit(c+130,"Ibtida_top_dffram_cv ibtidaTop core memory_stage io_ctrl_MemToReg_out", false,-1);
        tracep->declBus(c+134,"Ibtida_top_dffram_cv ibtidaTop core memory_stage io_csr_data_out", false,-1, 31,0);
        tracep->declBit(c+165,"Ibtida_top_dffram_cv ibtidaTop core memory_stage io_stall", false,-1);
        tracep->declBus(c+133,"Ibtida_top_dffram_cv ibtidaTop core memory_stage load_unit_io_func3", false,-1, 2,0);
        tracep->declBus(c+604,"Ibtida_top_dffram_cv ibtidaTop core memory_stage load_unit_io_data_offset", false,-1, 1,0);
        tracep->declBus(c+35,"Ibtida_top_dffram_cv ibtidaTop core memory_stage load_unit_io_memData", false,-1, 31,0);
        tracep->declBus(c+135,"Ibtida_top_dffram_cv ibtidaTop core memory_stage load_unit_io_LoadData", false,-1, 31,0);
        tracep->declBus(c+604,"Ibtida_top_dffram_cv ibtidaTop core memory_stage data_offset", false,-1, 1,0);
        tracep->declBus(c+133,"Ibtida_top_dffram_cv ibtidaTop core memory_stage load_unit io_func3", false,-1, 2,0);
        tracep->declBus(c+604,"Ibtida_top_dffram_cv ibtidaTop core memory_stage load_unit io_data_offset", false,-1, 1,0);
        tracep->declBus(c+35,"Ibtida_top_dffram_cv ibtidaTop core memory_stage load_unit io_memData", false,-1, 31,0);
        tracep->declBus(c+135,"Ibtida_top_dffram_cv ibtidaTop core memory_stage load_unit io_LoadData", false,-1, 31,0);
        tracep->declBus(c+605,"Ibtida_top_dffram_cv ibtidaTop core memory_stage load_unit lb", false,-1, 7,0);
        tracep->declBus(c+606,"Ibtida_top_dffram_cv ibtidaTop core memory_stage load_unit lh", false,-1, 15,0);
        tracep->declBit(c+138,"Ibtida_top_dffram_cv ibtidaTop core writeback io_MEM_WB_MemToReg", false,-1);
        tracep->declBus(c+141,"Ibtida_top_dffram_cv ibtidaTop core writeback io_MEM_WB_dataMem_data", false,-1, 31,0);
        tracep->declBus(c+142,"Ibtida_top_dffram_cv ibtidaTop core writeback io_MEM_WB_alu_output", false,-1, 31,0);
        tracep->declBus(c+163,"Ibtida_top_dffram_cv ibtidaTop core writeback io_write_data", false,-1, 31,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop gpio clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop gpio reset", false,-1);
        tracep->declBit(c+51,"Ibtida_top_dffram_cv ibtidaTop gpio io_tl_i_a_valid", false,-1);
        tracep->declBus(c+52,"Ibtida_top_dffram_cv ibtidaTop gpio io_tl_i_a_opcode", false,-1, 2,0);
        tracep->declBus(c+53,"Ibtida_top_dffram_cv ibtidaTop gpio io_tl_i_a_address", false,-1, 31,0);
        tracep->declBus(c+54,"Ibtida_top_dffram_cv ibtidaTop gpio io_tl_i_a_mask", false,-1, 3,0);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio io_tl_i_a_data", false,-1, 31,0);
        tracep->declBit(c+55,"Ibtida_top_dffram_cv ibtidaTop gpio io_tl_o_d_valid", false,-1);
        tracep->declBus(c+56,"Ibtida_top_dffram_cv ibtidaTop gpio io_tl_o_d_data", false,-1, 31,0);
        tracep->declBit(c+57,"Ibtida_top_dffram_cv ibtidaTop gpio io_tl_o_a_ready", false,-1);
        tracep->declBus(c+707,"Ibtida_top_dffram_cv ibtidaTop gpio io_cio_gpio_i", false,-1, 31,0);
        tracep->declBus(c+3,"Ibtida_top_dffram_cv ibtidaTop gpio io_cio_gpio_o", false,-1, 31,0);
        tracep->declBus(c+58,"Ibtida_top_dffram_cv ibtidaTop gpio io_cio_gpio_en_o", false,-1, 31,0);
        tracep->declBus(c+59,"Ibtida_top_dffram_cv ibtidaTop gpio io_intr_gpio_o", false,-1, 31,0);
        tracep->declBit(c+51,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_tl_i_a_valid", false,-1);
        tracep->declBus(c+52,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_tl_i_a_opcode", false,-1, 2,0);
        tracep->declBus(c+53,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_tl_i_a_address", false,-1, 31,0);
        tracep->declBus(c+54,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_tl_i_a_mask", false,-1, 3,0);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_tl_i_a_data", false,-1, 31,0);
        tracep->declBit(c+55,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_tl_o_d_valid", false,-1);
        tracep->declBus(c+56,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_tl_o_d_data", false,-1, 31,0);
        tracep->declBit(c+57,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_tl_o_a_ready", false,-1);
        tracep->declBus(c+607,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_reg2hw_intr_state_q", false,-1, 31,0);
        tracep->declBus(c+608,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_reg2hw_intr_enable_q", false,-1, 31,0);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_reg2hw_intr_test_q", false,-1, 31,0);
        tracep->declBit(c+609,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_reg2hw_intr_test_qe", false,-1);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_reg2hw_direct_out_q", false,-1, 31,0);
        tracep->declBit(c+610,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_reg2hw_direct_out_qe", false,-1);
        tracep->declBus(c+611,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_reg2hw_masked_out_lower_data_q", false,-1, 15,0);
        tracep->declBit(c+612,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_reg2hw_masked_out_lower_data_qe", false,-1);
        tracep->declBus(c+613,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_reg2hw_masked_out_lower_mask_q", false,-1, 15,0);
        tracep->declBus(c+611,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_reg2hw_masked_out_upper_data_q", false,-1, 15,0);
        tracep->declBit(c+614,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_reg2hw_masked_out_upper_data_qe", false,-1);
        tracep->declBus(c+613,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_reg2hw_masked_out_upper_mask_q", false,-1, 15,0);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_reg2hw_direct_oe_q", false,-1, 31,0);
        tracep->declBit(c+615,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_reg2hw_direct_oe_qe", false,-1);
        tracep->declBus(c+611,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_reg2hw_masked_oe_lower_data_q", false,-1, 15,0);
        tracep->declBit(c+616,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_reg2hw_masked_oe_lower_data_qe", false,-1);
        tracep->declBus(c+613,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_reg2hw_masked_oe_lower_mask_q", false,-1, 15,0);
        tracep->declBus(c+611,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_reg2hw_masked_oe_upper_data_q", false,-1, 15,0);
        tracep->declBit(c+617,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_reg2hw_masked_oe_upper_data_qe", false,-1);
        tracep->declBus(c+613,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_reg2hw_masked_oe_upper_mask_q", false,-1, 15,0);
        tracep->declBus(c+618,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_reg2hw_intr_ctrl_en_rising_q", false,-1, 31,0);
        tracep->declBus(c+619,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_reg2hw_intr_ctrl_en_falling_q", false,-1, 31,0);
        tracep->declBus(c+620,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_reg2hw_intr_ctrl_en_lvlHigh_q", false,-1, 31,0);
        tracep->declBus(c+621,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_reg2hw_intr_ctrl_en_lvlLow_q", false,-1, 31,0);
        tracep->declBus(c+709,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_hw2reg_intr_state_d", false,-1, 31,0);
        tracep->declBit(c+681,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_hw2reg_intr_state_de", false,-1);
        tracep->declBus(c+707,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_hw2reg_data_in_d", false,-1, 31,0);
        tracep->declBus(c+3,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_hw2reg_direct_out_d", false,-1, 31,0);
        tracep->declBus(c+622,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_hw2reg_masked_out_lower_data_d", false,-1, 15,0);
        tracep->declBus(c+623,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_hw2reg_masked_out_upper_data_d", false,-1, 15,0);
        tracep->declBus(c+58,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_hw2reg_direct_oe_d", false,-1, 31,0);
        tracep->declBus(c+624,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_hw2reg_masked_oe_lower_data_d", false,-1, 15,0);
        tracep->declBus(c+625,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop_io_hw2reg_masked_oe_upper_data_d", false,-1, 15,0);
        tracep->declBus(c+710,"Ibtida_top_dffram_cv ibtidaTop gpio intr_hw_io_event_intr_i", false,-1, 31,0);
        tracep->declBus(c+608,"Ibtida_top_dffram_cv ibtidaTop gpio intr_hw_io_reg2hw_intr_enable_q_i", false,-1, 31,0);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio intr_hw_io_reg2hw_intr_test_q_i", false,-1, 31,0);
        tracep->declBit(c+609,"Ibtida_top_dffram_cv ibtidaTop gpio intr_hw_io_reg2hw_intr_test_qe_i", false,-1);
        tracep->declBus(c+607,"Ibtida_top_dffram_cv ibtidaTop gpio intr_hw_io_reg2hw_intr_state_q_i", false,-1, 31,0);
        tracep->declBit(c+681,"Ibtida_top_dffram_cv ibtidaTop gpio intr_hw_io_hw2reg_intr_state_de_o", false,-1);
        tracep->declBus(c+709,"Ibtida_top_dffram_cv ibtidaTop gpio intr_hw_io_hw2reg_intr_state_d_o", false,-1, 31,0);
        tracep->declBus(c+59,"Ibtida_top_dffram_cv ibtidaTop gpio intr_hw_io_intr_o", false,-1, 31,0);
        tracep->declBus(c+3,"Ibtida_top_dffram_cv ibtidaTop gpio cio_gpio_q", false,-1, 31,0);
        tracep->declBus(c+58,"Ibtida_top_dffram_cv ibtidaTop gpio cio_gpio_en_q", false,-1, 31,0);
        tracep->declBus(c+626,"Ibtida_top_dffram_cv ibtidaTop gpio data_in_q", false,-1, 31,0);
        tracep->declBus(c+623,"Ibtida_top_dffram_cv ibtidaTop gpio hw2reg_masked_out_upper_data_d", false,-1, 15,0);
        tracep->declBus(c+622,"Ibtida_top_dffram_cv ibtidaTop gpio hw2reg_masked_out_lower_data_d", false,-1, 15,0);
        tracep->declBus(c+611,"Ibtida_top_dffram_cv ibtidaTop gpio reg2hw_masked_out_upper_data_q", false,-1, 15,0);
        tracep->declBus(c+613,"Ibtida_top_dffram_cv ibtidaTop gpio reg2hw_masked_out_upper_mask_q", false,-1, 15,0);
        tracep->declBus(c+611,"Ibtida_top_dffram_cv ibtidaTop gpio reg2hw_masked_out_lower_data_q", false,-1, 15,0);
        tracep->declBus(c+613,"Ibtida_top_dffram_cv ibtidaTop gpio reg2hw_masked_out_lower_mask_q", false,-1, 15,0);
        tracep->declBit(c+612,"Ibtida_top_dffram_cv ibtidaTop gpio reg2hw_masked_out_lower_data_qe", false,-1);
        tracep->declBit(c+614,"Ibtida_top_dffram_cv ibtidaTop gpio reg2hw_masked_out_upper_data_qe", false,-1);
        tracep->declBit(c+610,"Ibtida_top_dffram_cv ibtidaTop gpio reg2hw_direct_out_qe", false,-1);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio reg2hw_direct_out_q", false,-1, 31,0);
        tracep->declBus(c+625,"Ibtida_top_dffram_cv ibtidaTop gpio hw2reg_masked_oe_upper_data_d", false,-1, 15,0);
        tracep->declBus(c+624,"Ibtida_top_dffram_cv ibtidaTop gpio hw2reg_masked_oe_lower_data_d", false,-1, 15,0);
        tracep->declBus(c+611,"Ibtida_top_dffram_cv ibtidaTop gpio reg2hw_masked_oe_upper_data_q", false,-1, 15,0);
        tracep->declBus(c+613,"Ibtida_top_dffram_cv ibtidaTop gpio reg2hw_masked_oe_upper_mask_q", false,-1, 15,0);
        tracep->declBus(c+611,"Ibtida_top_dffram_cv ibtidaTop gpio reg2hw_masked_oe_lower_data_q", false,-1, 15,0);
        tracep->declBus(c+613,"Ibtida_top_dffram_cv ibtidaTop gpio reg2hw_masked_oe_lower_mask_q", false,-1, 15,0);
        tracep->declBit(c+616,"Ibtida_top_dffram_cv ibtidaTop gpio reg2hw_masked_oe_lower_data_qe", false,-1);
        tracep->declBit(c+617,"Ibtida_top_dffram_cv ibtidaTop gpio reg2hw_masked_oe_upper_data_qe", false,-1);
        tracep->declBit(c+615,"Ibtida_top_dffram_cv ibtidaTop gpio reg2hw_direct_oe_qe", false,-1);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio reg2hw_direct_oe_q", false,-1, 31,0);
        tracep->declBus(c+618,"Ibtida_top_dffram_cv ibtidaTop gpio reg2hw_intr_ctrl_en_rising_q", false,-1, 31,0);
        tracep->declBus(c+711,"Ibtida_top_dffram_cv ibtidaTop gpio event_intr_rise", false,-1, 31,0);
        tracep->declBus(c+619,"Ibtida_top_dffram_cv ibtidaTop gpio reg2hw_intr_ctrl_en_falling_q", false,-1, 31,0);
        tracep->declBus(c+712,"Ibtida_top_dffram_cv ibtidaTop gpio event_intr_fall", false,-1, 31,0);
        tracep->declBus(c+620,"Ibtida_top_dffram_cv ibtidaTop gpio reg2hw_intr_ctrl_en_lvlHigh_q", false,-1, 31,0);
        tracep->declBus(c+713,"Ibtida_top_dffram_cv ibtidaTop gpio event_intr_acthigh", false,-1, 31,0);
        tracep->declBus(c+621,"Ibtida_top_dffram_cv ibtidaTop gpio reg2hw_intr_ctrl_en_lvlLow_q", false,-1, 31,0);
        tracep->declBus(c+714,"Ibtida_top_dffram_cv ibtidaTop gpio event_intr_actlow", false,-1, 31,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop reset", false,-1);
        tracep->declBit(c+51,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_tl_i_a_valid", false,-1);
        tracep->declBus(c+52,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_tl_i_a_opcode", false,-1, 2,0);
        tracep->declBus(c+53,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_tl_i_a_address", false,-1, 31,0);
        tracep->declBus(c+54,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_tl_i_a_mask", false,-1, 3,0);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_tl_i_a_data", false,-1, 31,0);
        tracep->declBit(c+55,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_tl_o_d_valid", false,-1);
        tracep->declBus(c+56,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_tl_o_d_data", false,-1, 31,0);
        tracep->declBit(c+57,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_tl_o_a_ready", false,-1);
        tracep->declBus(c+607,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_reg2hw_intr_state_q", false,-1, 31,0);
        tracep->declBus(c+608,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_reg2hw_intr_enable_q", false,-1, 31,0);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_reg2hw_intr_test_q", false,-1, 31,0);
        tracep->declBit(c+609,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_reg2hw_intr_test_qe", false,-1);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_reg2hw_direct_out_q", false,-1, 31,0);
        tracep->declBit(c+610,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_reg2hw_direct_out_qe", false,-1);
        tracep->declBus(c+611,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_reg2hw_masked_out_lower_data_q", false,-1, 15,0);
        tracep->declBit(c+612,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_reg2hw_masked_out_lower_data_qe", false,-1);
        tracep->declBus(c+613,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_reg2hw_masked_out_lower_mask_q", false,-1, 15,0);
        tracep->declBus(c+611,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_reg2hw_masked_out_upper_data_q", false,-1, 15,0);
        tracep->declBit(c+614,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_reg2hw_masked_out_upper_data_qe", false,-1);
        tracep->declBus(c+613,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_reg2hw_masked_out_upper_mask_q", false,-1, 15,0);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_reg2hw_direct_oe_q", false,-1, 31,0);
        tracep->declBit(c+615,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_reg2hw_direct_oe_qe", false,-1);
        tracep->declBus(c+611,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_reg2hw_masked_oe_lower_data_q", false,-1, 15,0);
        tracep->declBit(c+616,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_reg2hw_masked_oe_lower_data_qe", false,-1);
        tracep->declBus(c+613,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_reg2hw_masked_oe_lower_mask_q", false,-1, 15,0);
        tracep->declBus(c+611,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_reg2hw_masked_oe_upper_data_q", false,-1, 15,0);
        tracep->declBit(c+617,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_reg2hw_masked_oe_upper_data_qe", false,-1);
        tracep->declBus(c+613,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_reg2hw_masked_oe_upper_mask_q", false,-1, 15,0);
        tracep->declBus(c+618,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_reg2hw_intr_ctrl_en_rising_q", false,-1, 31,0);
        tracep->declBus(c+619,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_reg2hw_intr_ctrl_en_falling_q", false,-1, 31,0);
        tracep->declBus(c+620,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_reg2hw_intr_ctrl_en_lvlHigh_q", false,-1, 31,0);
        tracep->declBus(c+621,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_reg2hw_intr_ctrl_en_lvlLow_q", false,-1, 31,0);
        tracep->declBus(c+709,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_hw2reg_intr_state_d", false,-1, 31,0);
        tracep->declBit(c+681,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_hw2reg_intr_state_de", false,-1);
        tracep->declBus(c+707,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_hw2reg_data_in_d", false,-1, 31,0);
        tracep->declBus(c+3,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_hw2reg_direct_out_d", false,-1, 31,0);
        tracep->declBus(c+622,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_hw2reg_masked_out_lower_data_d", false,-1, 15,0);
        tracep->declBus(c+623,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_hw2reg_masked_out_upper_data_d", false,-1, 15,0);
        tracep->declBus(c+58,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_hw2reg_direct_oe_d", false,-1, 31,0);
        tracep->declBus(c+624,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_hw2reg_masked_oe_lower_data_d", false,-1, 15,0);
        tracep->declBus(c+625,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop io_hw2reg_masked_oe_upper_data_d", false,-1, 15,0);
        tracep->declBit(c+51,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter_io_tl_i_a_valid", false,-1);
        tracep->declBus(c+52,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter_io_tl_i_a_opcode", false,-1, 2,0);
        tracep->declBus(c+53,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter_io_tl_i_a_address", false,-1, 31,0);
        tracep->declBus(c+54,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter_io_tl_i_a_mask", false,-1, 3,0);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter_io_tl_i_a_data", false,-1, 31,0);
        tracep->declBit(c+55,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter_io_tl_o_d_valid", false,-1);
        tracep->declBus(c+56,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter_io_tl_o_d_data", false,-1, 31,0);
        tracep->declBit(c+57,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter_io_tl_o_a_ready", false,-1);
        tracep->declBit(c+627,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter_io_we_o", false,-1);
        tracep->declBus(c+628,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter_io_addr_o", false,-1, 5,0);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter_io_wdata_o", false,-1, 31,0);
        tracep->declBus(c+54,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter_io_be_o", false,-1, 3,0);
        tracep->declBus(c+629,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter_io_rdata_i", false,-1, 31,0);
        tracep->declBit(c+630,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_state_reg_io_we", false,-1);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_state_reg_io_wd", false,-1, 31,0);
        tracep->declBit(c+681,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_state_reg_io_de", false,-1);
        tracep->declBus(c+709,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_state_reg_io_d", false,-1, 31,0);
        tracep->declBus(c+607,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_state_reg_io_q", false,-1, 31,0);
        tracep->declBus(c+607,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_state_reg_io_qs", false,-1, 31,0);
        tracep->declBit(c+631,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_enable_reg_io_we", false,-1);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_enable_reg_io_wd", false,-1, 31,0);
        tracep->declBus(c+608,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_enable_reg_io_q", false,-1, 31,0);
        tracep->declBus(c+608,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_enable_reg_io_qs", false,-1, 31,0);
        tracep->declBit(c+609,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_test_reg_io_we", false,-1);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_test_reg_io_wd", false,-1, 31,0);
        tracep->declBus(c+719,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_test_reg_io_d", false,-1, 31,0);
        tracep->declBit(c+609,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_test_reg_io_qe", false,-1);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_test_reg_io_q", false,-1, 31,0);
        tracep->declBus(c+719,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_test_reg_io_qs", false,-1, 31,0);
        tracep->declBus(c+707,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop data_in_reg_io_d", false,-1, 31,0);
        tracep->declBus(c+632,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop data_in_reg_io_qs", false,-1, 31,0);
        tracep->declBit(c+610,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop direct_out_reg_io_we", false,-1);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop direct_out_reg_io_wd", false,-1, 31,0);
        tracep->declBus(c+3,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop direct_out_reg_io_d", false,-1, 31,0);
        tracep->declBit(c+610,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop direct_out_reg_io_qe", false,-1);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop direct_out_reg_io_q", false,-1, 31,0);
        tracep->declBus(c+3,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop direct_out_reg_io_qs", false,-1, 31,0);
        tracep->declBit(c+612,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_lower_data_reg_io_we", false,-1);
        tracep->declBus(c+611,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_lower_data_reg_io_wd", false,-1, 15,0);
        tracep->declBus(c+622,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_lower_data_reg_io_d", false,-1, 15,0);
        tracep->declBit(c+612,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_lower_data_reg_io_qe", false,-1);
        tracep->declBus(c+611,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_lower_data_reg_io_q", false,-1, 15,0);
        tracep->declBus(c+622,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_lower_data_reg_io_qs", false,-1, 15,0);
        tracep->declBit(c+612,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_lower_mask_reg_io_we", false,-1);
        tracep->declBus(c+613,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_lower_mask_reg_io_wd", false,-1, 15,0);
        tracep->declBus(c+722,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_lower_mask_reg_io_d", false,-1, 15,0);
        tracep->declBit(c+612,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_lower_mask_reg_io_qe", false,-1);
        tracep->declBus(c+613,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_lower_mask_reg_io_q", false,-1, 15,0);
        tracep->declBus(c+722,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_lower_mask_reg_io_qs", false,-1, 15,0);
        tracep->declBit(c+614,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_upper_data_reg_io_we", false,-1);
        tracep->declBus(c+611,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_upper_data_reg_io_wd", false,-1, 15,0);
        tracep->declBus(c+623,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_upper_data_reg_io_d", false,-1, 15,0);
        tracep->declBit(c+614,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_upper_data_reg_io_qe", false,-1);
        tracep->declBus(c+611,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_upper_data_reg_io_q", false,-1, 15,0);
        tracep->declBus(c+623,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_upper_data_reg_io_qs", false,-1, 15,0);
        tracep->declBit(c+614,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_upper_mask_reg_io_we", false,-1);
        tracep->declBus(c+613,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_upper_mask_reg_io_wd", false,-1, 15,0);
        tracep->declBus(c+722,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_upper_mask_reg_io_d", false,-1, 15,0);
        tracep->declBit(c+614,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_upper_mask_reg_io_qe", false,-1);
        tracep->declBus(c+613,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_upper_mask_reg_io_q", false,-1, 15,0);
        tracep->declBus(c+722,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_upper_mask_reg_io_qs", false,-1, 15,0);
        tracep->declBit(c+615,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop direct_oe_reg_io_we", false,-1);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop direct_oe_reg_io_wd", false,-1, 31,0);
        tracep->declBus(c+58,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop direct_oe_reg_io_d", false,-1, 31,0);
        tracep->declBit(c+615,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop direct_oe_reg_io_qe", false,-1);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop direct_oe_reg_io_q", false,-1, 31,0);
        tracep->declBus(c+58,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop direct_oe_reg_io_qs", false,-1, 31,0);
        tracep->declBit(c+616,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_lower_data_reg_io_we", false,-1);
        tracep->declBus(c+611,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_lower_data_reg_io_wd", false,-1, 15,0);
        tracep->declBus(c+624,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_lower_data_reg_io_d", false,-1, 15,0);
        tracep->declBit(c+616,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_lower_data_reg_io_qe", false,-1);
        tracep->declBus(c+611,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_lower_data_reg_io_q", false,-1, 15,0);
        tracep->declBus(c+624,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_lower_data_reg_io_qs", false,-1, 15,0);
        tracep->declBit(c+616,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_lower_mask_reg_io_we", false,-1);
        tracep->declBus(c+613,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_lower_mask_reg_io_wd", false,-1, 15,0);
        tracep->declBus(c+722,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_lower_mask_reg_io_d", false,-1, 15,0);
        tracep->declBit(c+616,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_lower_mask_reg_io_qe", false,-1);
        tracep->declBus(c+613,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_lower_mask_reg_io_q", false,-1, 15,0);
        tracep->declBus(c+722,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_lower_mask_reg_io_qs", false,-1, 15,0);
        tracep->declBit(c+617,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_upper_data_reg_io_we", false,-1);
        tracep->declBus(c+611,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_upper_data_reg_io_wd", false,-1, 15,0);
        tracep->declBus(c+625,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_upper_data_reg_io_d", false,-1, 15,0);
        tracep->declBit(c+617,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_upper_data_reg_io_qe", false,-1);
        tracep->declBus(c+611,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_upper_data_reg_io_q", false,-1, 15,0);
        tracep->declBus(c+625,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_upper_data_reg_io_qs", false,-1, 15,0);
        tracep->declBit(c+617,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_upper_mask_reg_io_we", false,-1);
        tracep->declBus(c+613,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_upper_mask_reg_io_wd", false,-1, 15,0);
        tracep->declBus(c+722,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_upper_mask_reg_io_d", false,-1, 15,0);
        tracep->declBit(c+617,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_upper_mask_reg_io_qe", false,-1);
        tracep->declBus(c+613,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_upper_mask_reg_io_q", false,-1, 15,0);
        tracep->declBus(c+722,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_upper_mask_reg_io_qs", false,-1, 15,0);
        tracep->declBit(c+633,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_rising_reg_io_we", false,-1);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_rising_reg_io_wd", false,-1, 31,0);
        tracep->declBus(c+618,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_rising_reg_io_q", false,-1, 31,0);
        tracep->declBus(c+618,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_rising_reg_io_qs", false,-1, 31,0);
        tracep->declBit(c+634,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_falling_reg_io_we", false,-1);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_falling_reg_io_wd", false,-1, 31,0);
        tracep->declBus(c+619,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_falling_reg_io_q", false,-1, 31,0);
        tracep->declBus(c+619,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_falling_reg_io_qs", false,-1, 31,0);
        tracep->declBit(c+635,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_lvlhigh_reg_io_we", false,-1);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_lvlhigh_reg_io_wd", false,-1, 31,0);
        tracep->declBus(c+620,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_lvlhigh_reg_io_q", false,-1, 31,0);
        tracep->declBus(c+620,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_lvlhigh_reg_io_qs", false,-1, 31,0);
        tracep->declBit(c+636,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_lvllow_reg_io_we", false,-1);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_lvllow_reg_io_wd", false,-1, 31,0);
        tracep->declBus(c+621,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_lvllow_reg_io_q", false,-1, 31,0);
        tracep->declBus(c+621,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_lvllow_reg_io_qs", false,-1, 31,0);
        tracep->declBit(c+627,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop reg_we", false,-1);
        tracep->declBus(c+628,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop reg_addr", false,-1, 5,0);
        tracep->declBit(c+637,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop addr_hit_0", false,-1);
        tracep->declBit(c+638,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop addr_hit_1", false,-1);
        tracep->declBit(c+639,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop addr_hit_2", false,-1);
        tracep->declBit(c+640,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop addr_hit_3", false,-1);
        tracep->declBit(c+641,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop addr_hit_4", false,-1);
        tracep->declBit(c+642,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop addr_hit_5", false,-1);
        tracep->declBit(c+643,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop addr_hit_6", false,-1);
        tracep->declBit(c+644,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop addr_hit_7", false,-1);
        tracep->declBit(c+645,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop addr_hit_8", false,-1);
        tracep->declBit(c+646,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop addr_hit_9", false,-1);
        tracep->declBit(c+647,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop addr_hit_10", false,-1);
        tracep->declBit(c+648,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop addr_hit_11", false,-1);
        tracep->declBit(c+649,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop addr_hit_12", false,-1);
        tracep->declBit(c+650,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop addr_hit_13", false,-1);
        tracep->declBus(c+54,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop reg_be", false,-1, 3,0);
        tracep->declBit(c+651,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop wr_err", false,-1);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop reg_wdata", false,-1, 31,0);
        tracep->declBus(c+622,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_lower_data_qs", false,-1, 15,0);
        tracep->declBus(c+623,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_upper_data_qs", false,-1, 15,0);
        tracep->declBus(c+722,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_lower_mask_qs", false,-1, 15,0);
        tracep->declBus(c+624,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_lower_data_qs", false,-1, 15,0);
        tracep->declBus(c+722,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_upper_mask_qs", false,-1, 15,0);
        tracep->declBus(c+625,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_upper_data_qs", false,-1, 15,0);
        tracep->declBus(c+621,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_lvllow_qs", false,-1, 31,0);
        tracep->declBus(c+620,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_lvlhigh_qs", false,-1, 31,0);
        tracep->declBus(c+619,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_falling_qs", false,-1, 31,0);
        tracep->declBus(c+618,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_rising_qs", false,-1, 31,0);
        tracep->declBus(c+58,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop direct_oe_qs", false,-1, 31,0);
        tracep->declBus(c+3,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop direct_out_qs", false,-1, 31,0);
        tracep->declBus(c+632,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop data_in_qs", false,-1, 31,0);
        tracep->declBus(c+608,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_enable_qs", false,-1, 31,0);
        tracep->declBus(c+607,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_state_qs", false,-1, 31,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter reset", false,-1);
        tracep->declBit(c+51,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter io_tl_i_a_valid", false,-1);
        tracep->declBus(c+52,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter io_tl_i_a_opcode", false,-1, 2,0);
        tracep->declBus(c+53,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter io_tl_i_a_address", false,-1, 31,0);
        tracep->declBus(c+54,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter io_tl_i_a_mask", false,-1, 3,0);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter io_tl_i_a_data", false,-1, 31,0);
        tracep->declBit(c+55,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter io_tl_o_d_valid", false,-1);
        tracep->declBus(c+56,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter io_tl_o_d_data", false,-1, 31,0);
        tracep->declBit(c+57,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter io_tl_o_a_ready", false,-1);
        tracep->declBit(c+627,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter io_we_o", false,-1);
        tracep->declBus(c+628,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter io_addr_o", false,-1, 5,0);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter io_wdata_o", false,-1, 31,0);
        tracep->declBus(c+54,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter io_be_o", false,-1, 3,0);
        tracep->declBus(c+629,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter io_rdata_i", false,-1, 31,0);
        tracep->declBit(c+51,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter tlErr_io_tl_i_a_valid", false,-1);
        tracep->declBus(c+52,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter tlErr_io_tl_i_a_opcode", false,-1, 2,0);
        tracep->declBus(c+53,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter tlErr_io_tl_i_a_address", false,-1, 31,0);
        tracep->declBus(c+54,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter tlErr_io_tl_i_a_mask", false,-1, 3,0);
        tracep->declBit(c+652,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter tlErr_io_err_o", false,-1);
        tracep->declBus(c+56,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter rdata_q", false,-1, 31,0);
        tracep->declBit(c+55,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter outstanding", false,-1);
        tracep->declBit(c+653,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter a_ack", false,-1);
        tracep->declBit(c+654,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter wr_req", false,-1);
        tracep->declBit(c+718,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter addr_align_err", false,-1);
        tracep->declBit(c+652,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter tl_err", false,-1);
        tracep->declBit(c+652,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter err_internal", false,-1);
        tracep->declBit(c+51,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter tlErr io_tl_i_a_valid", false,-1);
        tracep->declBus(c+52,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter tlErr io_tl_i_a_opcode", false,-1, 2,0);
        tracep->declBus(c+53,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter tlErr io_tl_i_a_address", false,-1, 31,0);
        tracep->declBus(c+54,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter tlErr io_tl_i_a_mask", false,-1, 3,0);
        tracep->declBit(c+652,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter tlErr io_err_o", false,-1);
        tracep->declBit(c+655,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter tlErr op_get", false,-1);
        tracep->declBit(c+656,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter tlErr op_partial", false,-1);
        tracep->declBit(c+657,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter tlErr op_full", false,-1);
        tracep->declBit(c+658,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter tlErr opcode_allowed", false,-1);
        tracep->declBit(c+51,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter tlErr addr_size_chk", false,-1);
        tracep->declBit(c+659,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter tlErr fulldata_chk", false,-1);
        tracep->declBit(c+660,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop tlul_regAdapter tlErr a_config_allowed", false,-1);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_state_reg clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_state_reg reset", false,-1);
        tracep->declBit(c+630,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_state_reg io_we", false,-1);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_state_reg io_wd", false,-1, 31,0);
        tracep->declBit(c+681,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_state_reg io_de", false,-1);
        tracep->declBus(c+709,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_state_reg io_d", false,-1, 31,0);
        tracep->declBus(c+607,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_state_reg io_q", false,-1, 31,0);
        tracep->declBus(c+607,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_state_reg io_qs", false,-1, 31,0);
        tracep->declBus(c+607,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_state_reg q_reg", false,-1, 31,0);
        tracep->declBit(c+715,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_state_reg wr_en", false,-1);
        tracep->declBus(c+716,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_state_reg wr_data", false,-1, 31,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_enable_reg clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_enable_reg reset", false,-1);
        tracep->declBit(c+631,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_enable_reg io_we", false,-1);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_enable_reg io_wd", false,-1, 31,0);
        tracep->declBus(c+608,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_enable_reg io_q", false,-1, 31,0);
        tracep->declBus(c+608,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_enable_reg io_qs", false,-1, 31,0);
        tracep->declBus(c+608,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_enable_reg q_reg", false,-1, 31,0);
        tracep->declBit(c+609,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_test_reg io_we", false,-1);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_test_reg io_wd", false,-1, 31,0);
        tracep->declBus(c+719,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_test_reg io_d", false,-1, 31,0);
        tracep->declBit(c+609,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_test_reg io_qe", false,-1);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_test_reg io_q", false,-1, 31,0);
        tracep->declBus(c+719,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_test_reg io_qs", false,-1, 31,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop data_in_reg clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop data_in_reg reset", false,-1);
        tracep->declBus(c+707,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop data_in_reg io_d", false,-1, 31,0);
        tracep->declBus(c+632,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop data_in_reg io_qs", false,-1, 31,0);
        tracep->declBus(c+632,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop data_in_reg q_reg", false,-1, 31,0);
        tracep->declBit(c+610,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop direct_out_reg io_we", false,-1);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop direct_out_reg io_wd", false,-1, 31,0);
        tracep->declBus(c+3,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop direct_out_reg io_d", false,-1, 31,0);
        tracep->declBit(c+610,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop direct_out_reg io_qe", false,-1);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop direct_out_reg io_q", false,-1, 31,0);
        tracep->declBus(c+3,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop direct_out_reg io_qs", false,-1, 31,0);
        tracep->declBit(c+612,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_lower_data_reg io_we", false,-1);
        tracep->declBus(c+611,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_lower_data_reg io_wd", false,-1, 15,0);
        tracep->declBus(c+622,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_lower_data_reg io_d", false,-1, 15,0);
        tracep->declBit(c+612,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_lower_data_reg io_qe", false,-1);
        tracep->declBus(c+611,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_lower_data_reg io_q", false,-1, 15,0);
        tracep->declBus(c+622,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_lower_data_reg io_qs", false,-1, 15,0);
        tracep->declBit(c+612,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_lower_mask_reg io_we", false,-1);
        tracep->declBus(c+613,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_lower_mask_reg io_wd", false,-1, 15,0);
        tracep->declBus(c+722,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_lower_mask_reg io_d", false,-1, 15,0);
        tracep->declBit(c+612,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_lower_mask_reg io_qe", false,-1);
        tracep->declBus(c+613,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_lower_mask_reg io_q", false,-1, 15,0);
        tracep->declBus(c+722,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_lower_mask_reg io_qs", false,-1, 15,0);
        tracep->declBit(c+614,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_upper_data_reg io_we", false,-1);
        tracep->declBus(c+611,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_upper_data_reg io_wd", false,-1, 15,0);
        tracep->declBus(c+623,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_upper_data_reg io_d", false,-1, 15,0);
        tracep->declBit(c+614,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_upper_data_reg io_qe", false,-1);
        tracep->declBus(c+611,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_upper_data_reg io_q", false,-1, 15,0);
        tracep->declBus(c+623,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_upper_data_reg io_qs", false,-1, 15,0);
        tracep->declBit(c+614,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_upper_mask_reg io_we", false,-1);
        tracep->declBus(c+613,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_upper_mask_reg io_wd", false,-1, 15,0);
        tracep->declBus(c+722,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_upper_mask_reg io_d", false,-1, 15,0);
        tracep->declBit(c+614,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_upper_mask_reg io_qe", false,-1);
        tracep->declBus(c+613,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_upper_mask_reg io_q", false,-1, 15,0);
        tracep->declBus(c+722,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_out_upper_mask_reg io_qs", false,-1, 15,0);
        tracep->declBit(c+615,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop direct_oe_reg io_we", false,-1);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop direct_oe_reg io_wd", false,-1, 31,0);
        tracep->declBus(c+58,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop direct_oe_reg io_d", false,-1, 31,0);
        tracep->declBit(c+615,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop direct_oe_reg io_qe", false,-1);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop direct_oe_reg io_q", false,-1, 31,0);
        tracep->declBus(c+58,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop direct_oe_reg io_qs", false,-1, 31,0);
        tracep->declBit(c+616,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_lower_data_reg io_we", false,-1);
        tracep->declBus(c+611,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_lower_data_reg io_wd", false,-1, 15,0);
        tracep->declBus(c+624,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_lower_data_reg io_d", false,-1, 15,0);
        tracep->declBit(c+616,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_lower_data_reg io_qe", false,-1);
        tracep->declBus(c+611,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_lower_data_reg io_q", false,-1, 15,0);
        tracep->declBus(c+624,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_lower_data_reg io_qs", false,-1, 15,0);
        tracep->declBit(c+616,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_lower_mask_reg io_we", false,-1);
        tracep->declBus(c+613,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_lower_mask_reg io_wd", false,-1, 15,0);
        tracep->declBus(c+722,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_lower_mask_reg io_d", false,-1, 15,0);
        tracep->declBit(c+616,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_lower_mask_reg io_qe", false,-1);
        tracep->declBus(c+613,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_lower_mask_reg io_q", false,-1, 15,0);
        tracep->declBus(c+722,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_lower_mask_reg io_qs", false,-1, 15,0);
        tracep->declBit(c+617,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_upper_data_reg io_we", false,-1);
        tracep->declBus(c+611,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_upper_data_reg io_wd", false,-1, 15,0);
        tracep->declBus(c+625,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_upper_data_reg io_d", false,-1, 15,0);
        tracep->declBit(c+617,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_upper_data_reg io_qe", false,-1);
        tracep->declBus(c+611,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_upper_data_reg io_q", false,-1, 15,0);
        tracep->declBus(c+625,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_upper_data_reg io_qs", false,-1, 15,0);
        tracep->declBit(c+617,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_upper_mask_reg io_we", false,-1);
        tracep->declBus(c+613,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_upper_mask_reg io_wd", false,-1, 15,0);
        tracep->declBus(c+722,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_upper_mask_reg io_d", false,-1, 15,0);
        tracep->declBit(c+617,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_upper_mask_reg io_qe", false,-1);
        tracep->declBus(c+613,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_upper_mask_reg io_q", false,-1, 15,0);
        tracep->declBus(c+722,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop masked_oe_upper_mask_reg io_qs", false,-1, 15,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_rising_reg clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_rising_reg reset", false,-1);
        tracep->declBit(c+633,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_rising_reg io_we", false,-1);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_rising_reg io_wd", false,-1, 31,0);
        tracep->declBus(c+618,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_rising_reg io_q", false,-1, 31,0);
        tracep->declBus(c+618,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_rising_reg io_qs", false,-1, 31,0);
        tracep->declBus(c+618,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_rising_reg q_reg", false,-1, 31,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_falling_reg clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_falling_reg reset", false,-1);
        tracep->declBit(c+634,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_falling_reg io_we", false,-1);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_falling_reg io_wd", false,-1, 31,0);
        tracep->declBus(c+619,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_falling_reg io_q", false,-1, 31,0);
        tracep->declBus(c+619,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_falling_reg io_qs", false,-1, 31,0);
        tracep->declBus(c+619,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_falling_reg q_reg", false,-1, 31,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_lvlhigh_reg clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_lvlhigh_reg reset", false,-1);
        tracep->declBit(c+635,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_lvlhigh_reg io_we", false,-1);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_lvlhigh_reg io_wd", false,-1, 31,0);
        tracep->declBus(c+620,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_lvlhigh_reg io_q", false,-1, 31,0);
        tracep->declBus(c+620,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_lvlhigh_reg io_qs", false,-1, 31,0);
        tracep->declBus(c+620,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_lvlhigh_reg q_reg", false,-1, 31,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_lvllow_reg clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_lvllow_reg reset", false,-1);
        tracep->declBit(c+636,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_lvllow_reg io_we", false,-1);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_lvllow_reg io_wd", false,-1, 31,0);
        tracep->declBus(c+621,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_lvllow_reg io_q", false,-1, 31,0);
        tracep->declBus(c+621,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_lvllow_reg io_qs", false,-1, 31,0);
        tracep->declBus(c+621,"Ibtida_top_dffram_cv ibtidaTop gpio gpioRegTop intr_ctrl_en_lvllow_reg q_reg", false,-1, 31,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop gpio intr_hw clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop gpio intr_hw reset", false,-1);
        tracep->declBus(c+710,"Ibtida_top_dffram_cv ibtidaTop gpio intr_hw io_event_intr_i", false,-1, 31,0);
        tracep->declBus(c+608,"Ibtida_top_dffram_cv ibtidaTop gpio intr_hw io_reg2hw_intr_enable_q_i", false,-1, 31,0);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop gpio intr_hw io_reg2hw_intr_test_q_i", false,-1, 31,0);
        tracep->declBit(c+609,"Ibtida_top_dffram_cv ibtidaTop gpio intr_hw io_reg2hw_intr_test_qe_i", false,-1);
        tracep->declBus(c+607,"Ibtida_top_dffram_cv ibtidaTop gpio intr_hw io_reg2hw_intr_state_q_i", false,-1, 31,0);
        tracep->declBit(c+681,"Ibtida_top_dffram_cv ibtidaTop gpio intr_hw io_hw2reg_intr_state_de_o", false,-1);
        tracep->declBus(c+709,"Ibtida_top_dffram_cv ibtidaTop gpio intr_hw io_hw2reg_intr_state_d_o", false,-1, 31,0);
        tracep->declBus(c+59,"Ibtida_top_dffram_cv ibtidaTop gpio intr_hw io_intr_o", false,-1, 31,0);
        tracep->declBus(c+682,"Ibtida_top_dffram_cv ibtidaTop gpio intr_hw new_event", false,-1, 31,0);
        tracep->declBit(c+717,"Ibtida_top_dffram_cv ibtidaTop core_iccm_tl_host io_req_i", false,-1);
        tracep->declBit(c+717,"Ibtida_top_dffram_cv ibtidaTop core_iccm_tl_host io_gnt_o", false,-1);
        tracep->declBus(c+48,"Ibtida_top_dffram_cv ibtidaTop core_iccm_tl_host io_addr_i", false,-1, 31,0);
        tracep->declBit(c+718,"Ibtida_top_dffram_cv ibtidaTop core_iccm_tl_host io_we_i", false,-1);
        tracep->declBus(c+719,"Ibtida_top_dffram_cv ibtidaTop core_iccm_tl_host io_wdata_i", false,-1, 31,0);
        tracep->declBus(c+720,"Ibtida_top_dffram_cv ibtidaTop core_iccm_tl_host io_be_i", false,-1, 3,0);
        tracep->declBit(c+47,"Ibtida_top_dffram_cv ibtidaTop core_iccm_tl_host io_valid_o", false,-1);
        tracep->declBus(c+8,"Ibtida_top_dffram_cv ibtidaTop core_iccm_tl_host io_rdata_o", false,-1, 31,0);
        tracep->declBit(c+717,"Ibtida_top_dffram_cv ibtidaTop core_iccm_tl_host io_tl_o_a_valid", false,-1);
        tracep->declBus(c+721,"Ibtida_top_dffram_cv ibtidaTop core_iccm_tl_host io_tl_o_a_opcode", false,-1, 2,0);
        tracep->declBus(c+60,"Ibtida_top_dffram_cv ibtidaTop core_iccm_tl_host io_tl_o_a_address", false,-1, 31,0);
        tracep->declBus(c+720,"Ibtida_top_dffram_cv ibtidaTop core_iccm_tl_host io_tl_o_a_mask", false,-1, 3,0);
        tracep->declBus(c+719,"Ibtida_top_dffram_cv ibtidaTop core_iccm_tl_host io_tl_o_a_data", false,-1, 31,0);
        tracep->declBit(c+47,"Ibtida_top_dffram_cv ibtidaTop core_iccm_tl_host io_tl_i_d_valid", false,-1);
        tracep->declBus(c+8,"Ibtida_top_dffram_cv ibtidaTop core_iccm_tl_host io_tl_i_d_data", false,-1, 31,0);
        tracep->declBit(c+717,"Ibtida_top_dffram_cv ibtidaTop core_iccm_tl_host io_tl_i_a_ready", false,-1);
        tracep->declBit(c+36,"Ibtida_top_dffram_cv ibtidaTop core_loadStore_tl_host io_req_i", false,-1);
        tracep->declBit(c+33,"Ibtida_top_dffram_cv ibtidaTop core_loadStore_tl_host io_gnt_o", false,-1);
        tracep->declBus(c+42,"Ibtida_top_dffram_cv ibtidaTop core_loadStore_tl_host io_addr_i", false,-1, 31,0);
        tracep->declBit(c+37,"Ibtida_top_dffram_cv ibtidaTop core_loadStore_tl_host io_we_i", false,-1);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop core_loadStore_tl_host io_wdata_i", false,-1, 31,0);
        tracep->declBus(c+61,"Ibtida_top_dffram_cv ibtidaTop core_loadStore_tl_host io_be_i", false,-1, 3,0);
        tracep->declBit(c+34,"Ibtida_top_dffram_cv ibtidaTop core_loadStore_tl_host io_valid_o", false,-1);
        tracep->declBus(c+35,"Ibtida_top_dffram_cv ibtidaTop core_loadStore_tl_host io_rdata_o", false,-1, 31,0);
        tracep->declBit(c+36,"Ibtida_top_dffram_cv ibtidaTop core_loadStore_tl_host io_tl_o_a_valid", false,-1);
        tracep->declBus(c+52,"Ibtida_top_dffram_cv ibtidaTop core_loadStore_tl_host io_tl_o_a_opcode", false,-1, 2,0);
        tracep->declBus(c+53,"Ibtida_top_dffram_cv ibtidaTop core_loadStore_tl_host io_tl_o_a_address", false,-1, 31,0);
        tracep->declBus(c+54,"Ibtida_top_dffram_cv ibtidaTop core_loadStore_tl_host io_tl_o_a_mask", false,-1, 3,0);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop core_loadStore_tl_host io_tl_o_a_data", false,-1, 31,0);
        tracep->declBit(c+34,"Ibtida_top_dffram_cv ibtidaTop core_loadStore_tl_host io_tl_i_d_valid", false,-1);
        tracep->declBus(c+35,"Ibtida_top_dffram_cv ibtidaTop core_loadStore_tl_host io_tl_i_d_data", false,-1, 31,0);
        tracep->declBit(c+33,"Ibtida_top_dffram_cv ibtidaTop core_loadStore_tl_host io_tl_i_a_ready", false,-1);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop iccm_tl_device clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop iccm_tl_device reset", false,-1);
        tracep->declBit(c+717,"Ibtida_top_dffram_cv ibtidaTop iccm_tl_device io_tl_i_a_valid", false,-1);
        tracep->declBus(c+721,"Ibtida_top_dffram_cv ibtidaTop iccm_tl_device io_tl_i_a_opcode", false,-1, 2,0);
        tracep->declBus(c+60,"Ibtida_top_dffram_cv ibtidaTop iccm_tl_device io_tl_i_a_address", false,-1, 31,0);
        tracep->declBus(c+720,"Ibtida_top_dffram_cv ibtidaTop iccm_tl_device io_tl_i_a_mask", false,-1, 3,0);
        tracep->declBit(c+47,"Ibtida_top_dffram_cv ibtidaTop iccm_tl_device io_tl_o_d_valid", false,-1);
        tracep->declBus(c+8,"Ibtida_top_dffram_cv ibtidaTop iccm_tl_device io_tl_o_d_data", false,-1, 31,0);
        tracep->declBit(c+717,"Ibtida_top_dffram_cv ibtidaTop iccm_tl_device io_tl_o_a_ready", false,-1);
        tracep->declBus(c+62,"Ibtida_top_dffram_cv ibtidaTop iccm_tl_device io_addr_o", false,-1, 5,0);
        tracep->declBus(c+8,"Ibtida_top_dffram_cv ibtidaTop iccm_tl_device io_rdata_i", false,-1, 31,0);
        tracep->declBit(c+717,"Ibtida_top_dffram_cv ibtidaTop iccm_tl_device tlErr_io_tl_i_a_valid", false,-1);
        tracep->declBus(c+721,"Ibtida_top_dffram_cv ibtidaTop iccm_tl_device tlErr_io_tl_i_a_opcode", false,-1, 2,0);
        tracep->declBus(c+60,"Ibtida_top_dffram_cv ibtidaTop iccm_tl_device tlErr_io_tl_i_a_address", false,-1, 31,0);
        tracep->declBus(c+720,"Ibtida_top_dffram_cv ibtidaTop iccm_tl_device tlErr_io_tl_i_a_mask", false,-1, 3,0);
        tracep->declBit(c+718,"Ibtida_top_dffram_cv ibtidaTop iccm_tl_device tlErr_io_err_o", false,-1);
        tracep->declBit(c+47,"Ibtida_top_dffram_cv ibtidaTop iccm_tl_device outstanding", false,-1);
        tracep->declBit(c+717,"Ibtida_top_dffram_cv ibtidaTop iccm_tl_device a_ack", false,-1);
        tracep->declBit(c+717,"Ibtida_top_dffram_cv ibtidaTop iccm_tl_device tlErr io_tl_i_a_valid", false,-1);
        tracep->declBus(c+721,"Ibtida_top_dffram_cv ibtidaTop iccm_tl_device tlErr io_tl_i_a_opcode", false,-1, 2,0);
        tracep->declBus(c+60,"Ibtida_top_dffram_cv ibtidaTop iccm_tl_device tlErr io_tl_i_a_address", false,-1, 31,0);
        tracep->declBus(c+720,"Ibtida_top_dffram_cv ibtidaTop iccm_tl_device tlErr io_tl_i_a_mask", false,-1, 3,0);
        tracep->declBit(c+718,"Ibtida_top_dffram_cv ibtidaTop iccm_tl_device tlErr io_err_o", false,-1);
        tracep->declBit(c+717,"Ibtida_top_dffram_cv ibtidaTop iccm_tl_device tlErr op_get", false,-1);
        tracep->declBit(c+718,"Ibtida_top_dffram_cv ibtidaTop iccm_tl_device tlErr op_partial", false,-1);
        tracep->declBit(c+718,"Ibtida_top_dffram_cv ibtidaTop iccm_tl_device tlErr op_full", false,-1);
        tracep->declBit(c+717,"Ibtida_top_dffram_cv ibtidaTop iccm_tl_device tlErr opcode_allowed", false,-1);
        tracep->declBit(c+717,"Ibtida_top_dffram_cv ibtidaTop iccm_tl_device tlErr addr_size_chk", false,-1);
        tracep->declBit(c+717,"Ibtida_top_dffram_cv ibtidaTop iccm_tl_device tlErr fulldata_chk", false,-1);
        tracep->declBit(c+717,"Ibtida_top_dffram_cv ibtidaTop iccm_tl_device tlErr a_config_allowed", false,-1);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device reset", false,-1);
        tracep->declBit(c+63,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device io_tl_i_a_valid", false,-1);
        tracep->declBus(c+52,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device io_tl_i_a_opcode", false,-1, 2,0);
        tracep->declBus(c+53,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device io_tl_i_a_address", false,-1, 31,0);
        tracep->declBus(c+54,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device io_tl_i_a_mask", false,-1, 3,0);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device io_tl_i_a_data", false,-1, 31,0);
        tracep->declBit(c+64,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device io_tl_o_d_valid", false,-1);
        tracep->declBus(c+65,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device io_tl_o_d_data", false,-1, 31,0);
        tracep->declBit(c+66,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device io_tl_o_a_ready", false,-1);
        tracep->declBit(c+9,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device io_we_o_0", false,-1);
        tracep->declBit(c+10,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device io_we_o_1", false,-1);
        tracep->declBit(c+11,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device io_we_o_2", false,-1);
        tracep->declBit(c+12,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device io_we_o_3", false,-1);
        tracep->declBus(c+17,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device io_addr_o", false,-1, 5,0);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device io_wdata_o", false,-1, 31,0);
        tracep->declBus(c+15,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device io_rdata_i", false,-1, 31,0);
        tracep->declBit(c+63,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device tlErr_io_tl_i_a_valid", false,-1);
        tracep->declBus(c+52,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device tlErr_io_tl_i_a_opcode", false,-1, 2,0);
        tracep->declBus(c+53,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device tlErr_io_tl_i_a_address", false,-1, 31,0);
        tracep->declBus(c+54,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device tlErr_io_tl_i_a_mask", false,-1, 3,0);
        tracep->declBit(c+661,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device tlErr_io_err_o", false,-1);
        tracep->declBit(c+662,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device error", false,-1);
        tracep->declBit(c+64,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device outstanding", false,-1);
        tracep->declBit(c+663,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device a_ack", false,-1);
        tracep->declBit(c+664,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device wr_req", false,-1);
        tracep->declBit(c+718,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device addr_align_err", false,-1);
        tracep->declBit(c+661,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device tl_err", false,-1);
        tracep->declBit(c+661,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device err_internal", false,-1);
        tracep->declBit(c+63,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device tlErr io_tl_i_a_valid", false,-1);
        tracep->declBus(c+52,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device tlErr io_tl_i_a_opcode", false,-1, 2,0);
        tracep->declBus(c+53,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device tlErr io_tl_i_a_address", false,-1, 31,0);
        tracep->declBus(c+54,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device tlErr io_tl_i_a_mask", false,-1, 3,0);
        tracep->declBit(c+661,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device tlErr io_err_o", false,-1);
        tracep->declBit(c+655,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device tlErr op_get", false,-1);
        tracep->declBit(c+656,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device tlErr op_partial", false,-1);
        tracep->declBit(c+657,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device tlErr op_full", false,-1);
        tracep->declBit(c+665,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device tlErr opcode_allowed", false,-1);
        tracep->declBit(c+63,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device tlErr addr_size_chk", false,-1);
        tracep->declBit(c+666,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device tlErr fulldata_chk", false,-1);
        tracep->declBit(c+667,"Ibtida_top_dffram_cv ibtidaTop dccm_tl_device tlErr a_config_allowed", false,-1);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2 clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2 reset", false,-1);
        tracep->declBit(c+36,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2 io_tl_h_i_a_valid", false,-1);
        tracep->declBus(c+52,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2 io_tl_h_i_a_opcode", false,-1, 2,0);
        tracep->declBus(c+53,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2 io_tl_h_i_a_address", false,-1, 31,0);
        tracep->declBus(c+54,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2 io_tl_h_i_a_mask", false,-1, 3,0);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2 io_tl_h_i_a_data", false,-1, 31,0);
        tracep->declBit(c+34,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2 io_tl_h_o_d_valid", false,-1);
        tracep->declBus(c+35,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2 io_tl_h_o_d_data", false,-1, 31,0);
        tracep->declBit(c+33,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2 io_tl_h_o_a_ready", false,-1);
        tracep->declBit(c+63,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2 io_tl_d_o_0_a_valid", false,-1);
        tracep->declBus(c+52,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2 io_tl_d_o_0_a_opcode", false,-1, 2,0);
        tracep->declBus(c+53,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2 io_tl_d_o_0_a_address", false,-1, 31,0);
        tracep->declBus(c+54,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2 io_tl_d_o_0_a_mask", false,-1, 3,0);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2 io_tl_d_o_0_a_data", false,-1, 31,0);
        tracep->declBit(c+51,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2 io_tl_d_o_1_a_valid", false,-1);
        tracep->declBus(c+52,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2 io_tl_d_o_1_a_opcode", false,-1, 2,0);
        tracep->declBus(c+53,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2 io_tl_d_o_1_a_address", false,-1, 31,0);
        tracep->declBus(c+54,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2 io_tl_d_o_1_a_mask", false,-1, 3,0);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2 io_tl_d_o_1_a_data", false,-1, 31,0);
        tracep->declBit(c+64,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2 io_tl_d_i_0_d_valid", false,-1);
        tracep->declBus(c+65,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2 io_tl_d_i_0_d_data", false,-1, 31,0);
        tracep->declBit(c+66,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2 io_tl_d_i_0_a_ready", false,-1);
        tracep->declBit(c+55,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2 io_tl_d_i_1_d_valid", false,-1);
        tracep->declBus(c+56,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2 io_tl_d_i_1_d_data", false,-1, 31,0);
        tracep->declBit(c+57,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2 io_tl_d_i_1_a_ready", false,-1);
        tracep->declBus(c+67,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2 io_dev_sel", false,-1, 1,0);
        tracep->declBit(c+668,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2 tl_errResp_io_tl_h_i_a_valid", false,-1);
        tracep->declBit(c+669,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2 tl_errResp_io_tl_d_o_d_valid", false,-1);
        tracep->declBit(c+717,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2 tl_errResp_io_tl_d_o_a_ready", false,-1);
        tracep->declBit(c+669,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2 tl_err_d_i_d_valid", false,-1);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2 tl_errResp clock", false,-1);
        tracep->declBit(c+680,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2 tl_errResp reset", false,-1);
        tracep->declBit(c+668,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2 tl_errResp io_tl_h_i_a_valid", false,-1);
        tracep->declBit(c+669,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2 tl_errResp io_tl_d_o_d_valid", false,-1);
        tracep->declBit(c+717,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2 tl_errResp io_tl_d_o_a_ready", false,-1);
        tracep->declBit(c+669,"Ibtida_top_dffram_cv ibtidaTop tl_switch_1to2 tl_errResp err_reqPending", false,-1);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv DCCM CLK", false,-1);
        tracep->declBus(c+26,"Ibtida_top_dffram_cv DCCM WE", false,-1, 3,0);
        tracep->declBit(c+717,"Ibtida_top_dffram_cv DCCM EN", false,-1);
        tracep->declBus(c+13,"Ibtida_top_dffram_cv DCCM Di", false,-1, 31,0);
        tracep->declBus(c+15,"Ibtida_top_dffram_cv DCCM Do", false,-1, 31,0);
        tracep->declBus(c+14,"Ibtida_top_dffram_cv DCCM A", false,-1, 7,0);
        tracep->declBus(c+670,"Ibtida_top_dffram_cv DCCM we_reg", false,-1, 3,0);
        tracep->declBit(c+671,"Ibtida_top_dffram_cv DCCM en_reg", false,-1);
        tracep->declBus(c+672,"Ibtida_top_dffram_cv DCCM di_reg", false,-1, 31,0);
        tracep->declBus(c+673,"Ibtida_top_dffram_cv DCCM a_reg", false,-1, 7,0);
        tracep->declBit(c+683,"Ibtida_top_dffram_cv ICCM CLK", false,-1);
        tracep->declBus(c+27,"Ibtida_top_dffram_cv ICCM WE", false,-1, 3,0);
        tracep->declBit(c+717,"Ibtida_top_dffram_cv ICCM EN", false,-1);
        tracep->declBus(c+6,"Ibtida_top_dffram_cv ICCM Di", false,-1, 31,0);
        tracep->declBus(c+8,"Ibtida_top_dffram_cv ICCM Do", false,-1, 31,0);
        tracep->declBus(c+674,"Ibtida_top_dffram_cv ICCM A", false,-1, 7,0);
        tracep->declBus(c+675,"Ibtida_top_dffram_cv ICCM we_reg", false,-1, 3,0);
        tracep->declBit(c+676,"Ibtida_top_dffram_cv ICCM en_reg", false,-1);
        tracep->declBus(c+677,"Ibtida_top_dffram_cv ICCM di_reg", false,-1, 31,0);
        tracep->declBus(c+678,"Ibtida_top_dffram_cv ICCM a_reg", false,-1, 7,0);
    }
}

void VIbtida_top_dffram_cv::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VIbtida_top_dffram_cv::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VIbtida_top_dffram_cv__Syms* __restrict vlSymsp = static_cast<VIbtida_top_dffram_cv__Syms*>(userp);
    VIbtida_top_dffram_cv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VIbtida_top_dffram_cv::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VIbtida_top_dffram_cv__Syms* __restrict vlSymsp = static_cast<VIbtida_top_dffram_cv__Syms*>(userp);
    VIbtida_top_dffram_cv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp91[3];
    WData/*95:0*/ __Vtemp92[3];
    WData/*95:0*/ __Vtemp93[3];
    WData/*95:0*/ __Vtemp94[3];
    WData/*95:0*/ __Vtemp95[3];
    WData/*95:0*/ __Vtemp96[3];
    WData/*95:0*/ __Vtemp97[3];
    WData/*95:0*/ __Vtemp98[3];
    WData/*95:0*/ __Vtemp99[3];
    WData/*95:0*/ __Vtemp100[3];
    WData/*95:0*/ __Vtemp101[3];
    WData/*95:0*/ __Vtemp102[3];
    WData/*95:0*/ __Vtemp103[3];
    WData/*95:0*/ __Vtemp104[3];
    WData/*95:0*/ __Vtemp105[3];
    WData/*95:0*/ __Vtemp106[3];
    WData/*95:0*/ __Vtemp107[3];
    WData/*95:0*/ __Vtemp108[3];
    WData/*95:0*/ __Vtemp109[3];
    WData/*95:0*/ __Vtemp110[3];
    WData/*95:0*/ __Vtemp111[3];
    WData/*95:0*/ __Vtemp112[3];
    WData/*95:0*/ __Vtemp113[3];
    WData/*95:0*/ __Vtemp114[3];
    WData/*95:0*/ __Vtemp115[3];
    WData/*95:0*/ __Vtemp116[3];
    WData/*95:0*/ __Vtemp117[3];
    WData/*95:0*/ __Vtemp118[3];
    WData/*95:0*/ __Vtemp119[3];
    WData/*95:0*/ __Vtemp120[3];
    WData/*95:0*/ __Vtemp121[3];
    WData/*95:0*/ __Vtemp122[3];
    WData/*95:0*/ __Vtemp123[3];
    WData/*95:0*/ __Vtemp124[3];
    WData/*95:0*/ __Vtemp125[3];
    WData/*95:0*/ __Vtemp126[3];
    WData/*95:0*/ __Vtemp127[3];
    WData/*95:0*/ __Vtemp128[3];
    WData/*95:0*/ __Vtemp129[3];
    WData/*95:0*/ __Vtemp130[3];
    WData/*95:0*/ __Vtemp131[3];
    WData/*95:0*/ __Vtemp132[3];
    WData/*95:0*/ __Vtemp133[3];
    WData/*95:0*/ __Vtemp134[3];
    WData/*95:0*/ __Vtemp135[3];
    WData/*95:0*/ __Vtemp136[3];
    WData/*95:0*/ __Vtemp137[3];
    WData/*95:0*/ __Vtemp138[3];
    WData/*95:0*/ __Vtemp139[3];
    WData/*95:0*/ __Vtemp140[3];
    // Body
    {
        tracep->fullIData(oldp+1,((0x3fffffffU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_q)),30);
        tracep->fullIData(oldp+2,((0x3fffffffU & (~ vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_en_q))),30);
        tracep->fullIData(oldp+3,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_q),32);
        tracep->fullIData(oldp+4,((~ vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_en_q)),32);
        tracep->fullBit(oldp+5,(((0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg)) 
                                 & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT___GEN_13))));
        tracep->fullIData(oldp+6,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__rx_data_reg),32);
        tracep->fullCData(oldp+7,((0xffU & ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg))
                                             ? (0x3fU 
                                                & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc_io_in 
                                                   >> 2U))
                                             : ((2U 
                                                 == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg))
                                                 ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__rx_addr_reg
                                                 : 
                                                (0x3fU 
                                                 & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc_io_in 
                                                    >> 2U)))))),8);
        tracep->fullIData(oldp+8,(vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__RAM
                                  [(0xffU & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__a_reg) 
                                             >> 2U))]),32);
        tracep->fullBit(oldp+9,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT___T_10) 
                                 & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask))));
        tracep->fullBit(oldp+10,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT___T_10) 
                                  & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask) 
                                     >> 1U))));
        tracep->fullBit(oldp+11,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT___T_10) 
                                  & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask) 
                                     >> 2U))));
        tracep->fullBit(oldp+12,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT___T_10) 
                                  & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask) 
                                     >> 3U))));
        tracep->fullIData(oldp+13,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i),32);
        tracep->fullCData(oldp+14,((0x3fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output 
                                             >> 2U))),8);
        tracep->fullIData(oldp+15,(vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM
                                   [(0xffU & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__a_reg) 
                                              >> 2U))]),32);
        tracep->fullCData(oldp+16,((0x3fU & ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg))
                                              ? (0x3fU 
                                                 & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc_io_in 
                                                    >> 2U))
                                              : ((2U 
                                                  == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg))
                                                  ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__rx_addr_reg
                                                  : 
                                                 (0x3fU 
                                                  & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc_io_in 
                                                     >> 2U)))))),6);
        tracep->fullCData(oldp+17,((0x3fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output 
                                             >> 2U))),6);
        tracep->fullCData(oldp+18,((0xffU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i)),8);
        tracep->fullCData(oldp+19,((0xffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i 
                                             >> 8U))),8);
        tracep->fullCData(oldp+20,((0xffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i 
                                             >> 0x10U))),8);
        tracep->fullCData(oldp+21,((0xffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i 
                                             >> 0x18U))),8);
        tracep->fullCData(oldp+22,((0xffU & vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM
                                    [(0xffU & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__a_reg) 
                                               >> 2U))])),8);
        tracep->fullCData(oldp+23,((0xffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM
                                             [(0xffU 
                                               & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__a_reg) 
                                                  >> 2U))] 
                                             >> 8U))),8);
        tracep->fullCData(oldp+24,((0xffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM
                                             [(0xffU 
                                               & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__a_reg) 
                                                  >> 2U))] 
                                             >> 0x10U))),8);
        tracep->fullCData(oldp+25,((0xffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM
                                             [(0xffU 
                                               & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__a_reg) 
                                                  >> 2U))] 
                                             >> 0x18U))),8);
        tracep->fullCData(oldp+26,(((0xfffffff8U & 
                                     (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT___T_10) 
                                       << 3U) & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask))) 
                                    | ((0xfffffffcU 
                                        & (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT___T_10) 
                                            << 2U) 
                                           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask))) 
                                       | (3U & ((- (IData)((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT___T_10))) 
                                                & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask)))))),4);
        tracep->fullCData(oldp+27,(((((0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg)) 
                                      & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT___GEN_13)) 
                                     << 3U) | ((((0U 
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
        tracep->fullBit(oldp+28,(((0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg)) 
                                  & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT___GEN_16))));
        tracep->fullIData(oldp+29,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regFinalData),32);
        tracep->fullCData(oldp+30,((0xffU & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regAddr))),8);
        tracep->fullBit(oldp+31,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regValid));
        tracep->fullBit(oldp+32,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regDone));
        tracep->fullBit(oldp+33,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_a_ready));
        tracep->fullBit(oldp+34,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_valid));
        tracep->fullIData(oldp+35,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data),32);
        tracep->fullBit(oldp+36,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage_io_data_req_o));
        tracep->fullBit(oldp+37,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_memWr));
        tracep->fullBit(oldp+38,(((0U == (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                  | ((1U != (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                     & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___GEN_2)))));
        tracep->fullBit(oldp+39,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___T_7)
                                   ? (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___GEN_10)
                                   : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___T_14)
                                       ? (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___GEN_10)
                                       : ((0U != (3U 
                                                  & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                          & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___GEN_6))))));
        tracep->fullBit(oldp+40,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___T_7)
                                   ? ((0U == (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                      | (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___GEN_7))
                                   : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___T_14)
                                       ? ((0U != (3U 
                                                  & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                          & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___GEN_7))
                                       : ((0U != (3U 
                                                  & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                          & ((1U != 
                                              (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                             & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___GEN_3)))))));
        tracep->fullBit(oldp+41,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___T_7) 
                                  | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage__DOT___T_14)
                                      ? ((0U != (3U 
                                                 & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                         & (1U != (3U 
                                                   & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)))
                                      : ((0U != (3U 
                                                 & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                         & ((1U != 
                                             (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                            & (2U != 
                                               (3U 
                                                & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))))))));
        tracep->fullIData(oldp+42,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output),32);
        tracep->fullCData(oldp+43,((0xffU & ((0U == 
                                              (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
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
                                                    : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2)))))),8);
        tracep->fullCData(oldp+44,((0xffU & ((0U == 
                                              (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                              ? (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                                 >> 8U)
                                              : ((1U 
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
        tracep->fullCData(oldp+45,((0xffU & ((0U == 
                                              (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
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
                                                    >> 0x10U))))))),8);
        tracep->fullCData(oldp+46,((0xffU & ((0U == 
                                              (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                              ? (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2 
                                                 >> 0x18U)
                                              : ((1U 
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
        tracep->fullBit(oldp+47,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__iccm_tl_device__DOT__outstanding));
        tracep->fullIData(oldp+48,((0x3fffU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc_io_in)),32);
        tracep->fullBit(oldp+49,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_io_stall_core_i));
        tracep->fullBit(oldp+50,((0U != vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__intr_hw__DOT___T_6)));
        tracep->fullBit(oldp+51,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_d_o_1_a_valid));
        tracep->fullCData(oldp+52,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode),3);
        tracep->fullIData(oldp+53,((0xfffffffcU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)),32);
        tracep->fullCData(oldp+54,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask),4);
        tracep->fullBit(oldp+55,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__outstanding));
        tracep->fullIData(oldp+56,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__rdata_q),32);
        tracep->fullBit(oldp+57,((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__outstanding)))));
        tracep->fullIData(oldp+58,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_en_q),32);
        tracep->fullIData(oldp+59,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__intr_hw__DOT___T_6),32);
        tracep->fullIData(oldp+60,((0x3ffcU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc_io_in)),32);
        tracep->fullCData(oldp+61,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_be_i),4);
        tracep->fullCData(oldp+62,((0x3fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc_io_in 
                                             >> 2U))),6);
        tracep->fullBit(oldp+63,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_d_o_0_a_valid));
        tracep->fullBit(oldp+64,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__outstanding));
        tracep->fullIData(oldp+65,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__outstanding)
                                     ? ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__error)
                                         ? 0xffffffffU
                                         : vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__RAM
                                        [(0xffU & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__a_reg) 
                                                   >> 2U))])
                                     : 0U)),32);
        tracep->fullBit(oldp+66,((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__outstanding)))));
        tracep->fullCData(oldp+67,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_dev_sel),2);
        tracep->fullIData(oldp+68,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__rx_addr_reg),32);
        tracep->fullBit(oldp+69,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__reset_reg));
        tracep->fullCData(oldp+70,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg),2);
        tracep->fullIData(oldp+71,(((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg))
                                     ? (0x3fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc_io_in 
                                                 >> 2U))
                                     : ((2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg))
                                         ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__rx_addr_reg
                                         : (0x3fU & 
                                            (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc_io_in 
                                             >> 2U))))),32);
        tracep->fullBit(oldp+72,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__validReg));
        tracep->fullCData(oldp+73,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__shiftReg),8);
        tracep->fullCData(oldp+74,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__count),3);
        tracep->fullSData(oldp+75,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regAddr),14);
        tracep->fullCData(oldp+76,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__dataReg),8);
        tracep->fullCData(oldp+77,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regLSB1),8);
        tracep->fullCData(oldp+78,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regLSB2),8);
        tracep->fullCData(oldp+79,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__regMSB1),8);
        tracep->fullCData(oldp+80,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__stateReg),3);
        tracep->fullCData(oldp+81,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__clockCount),8);
        tracep->fullCData(oldp+82,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__bitIndex),4);
        tracep->fullBit(oldp+83,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__uart_ctrl__DOT__rx__DOT__rxReg));
        tracep->fullIData(oldp+84,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_pc_reg),32);
        tracep->fullIData(oldp+85,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_pc4_reg),32);
        tracep->fullCData(oldp+86,((0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+87,((0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                             >> 0x14U))),5);
        tracep->fullIData(oldp+88,(((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_224) 
                                      & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel) 
                                         == (0x1fU 
                                             & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                >> 0xfU)))) 
                                     & (0x37U != (0x7fU 
                                                  & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)))
                                     ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT___T_45
                                     : ((0x37U != (0x7fU 
                                                   & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg))
                                         ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1
                                         : 0U))),32);
        tracep->fullIData(oldp+89,(((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_224) 
                                      & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel) 
                                         == (0x1fU 
                                             & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                >> 0x14U)))) 
                                     & (0x37U != (0x7fU 
                                                  & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)))
                                     ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT___T_45
                                     : ((0x37U != (0x7fU 
                                                   & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg))
                                         ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_rs2
                                         : 0U))),32);
        tracep->fullIData(oldp+90,(((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_extend_sel))
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
                                         : ((2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_extend_sel))
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
        tracep->fullCData(oldp+91,((0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                             >> 7U))),5);
        tracep->fullCData(oldp+92,((7U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+93,((0x7fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                             >> 0x19U))),7);
        tracep->fullBit(oldp+94,(((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)) 
                                  & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)) 
                                     & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type)) 
                                        & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type))))));
        tracep->fullBit(oldp+95,(((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)) 
                                  & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_memRead))));
        tracep->fullBit(oldp+96,(((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)) 
                                  & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_csr_wen))));
        tracep->fullBit(oldp+97,(((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)) 
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
        tracep->fullBit(oldp+98,(((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)) 
                                  & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)) 
                                     & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type)))));
        tracep->fullCData(oldp+99,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)
                                     ? 0U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)
                                              ? 0U : 
                                             ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type)
                                               ? 4U
                                               : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type)
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
        tracep->fullCData(oldp+100,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)
                                      ? 0U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)
                                               ? 0U
                                               : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type)
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
        tracep->fullBit(oldp+101,(((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)) 
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
        tracep->fullCData(oldp+102,((0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)),7);
        tracep->fullIData(oldp+103,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile_io_o_csr_rdata),32);
        tracep->fullBit(oldp+104,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX_io_stall));
        tracep->fullIData(oldp+105,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__pc_reg),32);
        tracep->fullIData(oldp+106,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__pc4_reg),32);
        tracep->fullIData(oldp+107,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rs1_reg),32);
        tracep->fullIData(oldp+108,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rs2_reg),32);
        tracep->fullIData(oldp+109,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__imm_reg),32);
        tracep->fullCData(oldp+110,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func3_reg),3);
        tracep->fullCData(oldp+111,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__func7_reg),7);
        tracep->fullCData(oldp+112,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__inst_op_reg),7);
        tracep->fullCData(oldp+113,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rd_sel_reg),5);
        tracep->fullCData(oldp+114,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rs1_sel_reg),5);
        tracep->fullCData(oldp+115,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__rs2_sel_reg),5);
        tracep->fullBit(oldp+116,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_MemWr_reg));
        tracep->fullBit(oldp+117,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_MemRd_reg));
        tracep->fullBit(oldp+118,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_RegWr_reg));
        tracep->fullBit(oldp+119,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_CsrWen_reg));
        tracep->fullBit(oldp+120,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_MemToReg_reg));
        tracep->fullCData(oldp+121,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_AluOp_reg),4);
        tracep->fullCData(oldp+122,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_OpA_sel_reg),2);
        tracep->fullBit(oldp+123,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_OpB_sel_reg));
        tracep->fullIData(oldp+124,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__csr_data_reg),32);
        tracep->fullIData(oldp+125,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT___GEN_7),32);
        tracep->fullIData(oldp+126,((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu__DOT___GEN_30)),32);
        tracep->fullBit(oldp+127,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_memRd));
        tracep->fullBit(oldp+128,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_regWr));
        tracep->fullBit(oldp+129,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_csrWen));
        tracep->fullBit(oldp+130,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_memToReg));
        tracep->fullIData(oldp+131,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rs2),32);
        tracep->fullCData(oldp+132,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_rd_sel),5);
        tracep->fullCData(oldp+133,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_func3),3);
        tracep->fullIData(oldp+134,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_csr_data),32);
        tracep->fullIData(oldp+135,(((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_func3))
                                      ? ((0U == (3U 
                                                 & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                          ? ((((0x80U 
                                                & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data)
                                                ? 0xffffffU
                                                : 0U) 
                                              << 8U) 
                                             | (0xffU 
                                                & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data))
                                          : ((1U == 
                                              (3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                              ? (((
                                                   (0x8000U 
                                                    & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data)
                                                    ? 0xffffffU
                                                    : 0U) 
                                                  << 8U) 
                                                 | (0xffU 
                                                    & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data 
                                                       >> 8U)))
                                              : ((2U 
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
        tracep->fullBit(oldp+136,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_regWr));
        tracep->fullBit(oldp+137,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_csrWen));
        tracep->fullBit(oldp+138,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_memToReg));
        tracep->fullBit(oldp+139,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_memRd));
        tracep->fullCData(oldp+140,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel),5);
        tracep->fullIData(oldp+141,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_dataMem_data),32);
        tracep->fullIData(oldp+142,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_alu_output),32);
        tracep->fullIData(oldp+143,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_csr_data),32);
        tracep->fullBit(oldp+144,(((0U != vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__intr_hw__DOT___T_6) 
                                   & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MIE__DOT__rdata_q) 
                                      >> 2U))));
        tracep->fullBit(oldp+145,((1U & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q))));
        tracep->fullIData(oldp+146,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MTVEC__DOT__rdata_q),32);
        tracep->fullBit(oldp+147,((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_io_stall_core_i)))));
        tracep->fullBit(oldp+148,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o));
        tracep->fullBit(oldp+149,(((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14)) 
                                   & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_31))));
        tracep->fullIData(oldp+150,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14)
                                      ? 0U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_31)
                                               ? ((1U 
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
        tracep->fullCData(oldp+151,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14)
                                      ? 0U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_31)
                                               ? 0x2bU
                                               : 0U))),6);
        tracep->fullIData(oldp+152,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MEPC__DOT__rdata_q),32);
        tracep->fullIData(oldp+153,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__imm_generation_io_sb_imm),32);
        tracep->fullIData(oldp+154,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__imm_generation_io_uj_imm),32);
        tracep->fullIData(oldp+155,((0xfffffffeU & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__jalr__DOT___GEN_0))),32);
        tracep->fullCData(oldp+156,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_ctrl_next_pc_sel_out),2);
        tracep->fullBit(oldp+157,(((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward)) 
                                   & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_branch))));
        tracep->fullBit(oldp+158,(((0U == (7U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                 >> 0xcU)))
                                    ? (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs1 
                                       == vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs2)
                                    : ((1U == (7U & 
                                               (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                >> 0xcU)))
                                        ? (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs1 
                                           != vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs2)
                                        : ((4U == (7U 
                                                   & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                      >> 0xcU)))
                                            ? VL_LTS_III(1,32,32, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs1, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs2)
                                            : ((5U 
                                                == 
                                                (7U 
                                                 & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                    >> 0xcU)))
                                                ? VL_GTES_III(1,32,32, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs1, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs2)
                                                : (
                                                   (6U 
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
        tracep->fullIData(oldp+159,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg),32);
        tracep->fullBit(oldp+160,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__hazardDetection_io_pc_forward));
        tracep->fullBit(oldp+161,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_fetch_mret_inst_o));
        tracep->fullBit(oldp+162,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_core_stall_i));
        tracep->fullIData(oldp+163,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__writeback_io_write_data),32);
        tracep->fullIData(oldp+164,((0x7fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)),32);
        tracep->fullBit(oldp+165,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage_io_stall));
        tracep->fullIData(oldp+166,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc_io_in),32);
        tracep->fullIData(oldp+167,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc__DOT__reg_),32);
        tracep->fullIData(oldp+168,(((IData)(4U) + vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc__DOT__reg_)),32);
        tracep->fullBit(oldp+169,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__handle_irq));
        tracep->fullBit(oldp+170,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_memRead));
        tracep->fullBit(oldp+171,(((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)) 
                                   & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type)) 
                                      & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type)))));
        tracep->fullBit(oldp+172,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_branch));
        tracep->fullBit(oldp+173,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type) 
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
        tracep->fullBit(oldp+174,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_csr_wen));
        tracep->fullBit(oldp+175,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_imm_type));
        tracep->fullCData(oldp+176,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_op),2);
        tracep->fullBit(oldp+177,(((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)) 
                                   & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type))));
        tracep->fullCData(oldp+178,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)
                                      ? 0U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type)
                                               ? 4U
                                               : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type)
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
        tracep->fullCData(oldp+179,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)
                                      ? 0U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type)
                                               ? 0U
                                               : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type)
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
        tracep->fullBit(oldp+180,(((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)) 
                                   & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type) 
                                      | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type) 
                                         | ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_sb_type)) 
                                            & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_i_type) 
                                               | ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jalr_type)) 
                                                  & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jal_type)) 
                                                     & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_lui_type) 
                                                        | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_Auipc) 
                                                           | (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode__DOT___GEN_9))))))))))));
        tracep->fullCData(oldp+181,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_extend_sel),2);
        tracep->fullCData(oldp+182,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type)
                                      ? 0U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type)
                                               ? 0U
                                               : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type)
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
        tracep->fullCData(oldp+183,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1),4);
        tracep->fullCData(oldp+184,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___GEN_34),4);
        tracep->fullIData(oldp+185,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs1),32);
        tracep->fullIData(oldp+186,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__branchLogic_io_in_rs2),32);
        tracep->fullIData(oldp+187,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_writeData),32);
        tracep->fullIData(oldp+188,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1),32);
        tracep->fullIData(oldp+189,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_rs2),32);
        tracep->fullIData(oldp+190,(((((0x80000000U 
                                        & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)
                                        ? 0xfffffU : 0U) 
                                      << 0xcU) | ((0xfe0U 
                                                   & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                        >> 7U))))),32);
        tracep->fullIData(oldp+191,((IData)(((QData)((IData)(
                                                             ((((0x80000000U 
                                                                 & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)
                                                                 ? 0xfffU
                                                                 : 0U) 
                                                               << 0x14U) 
                                                              | (0xfffffU 
                                                                 & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                                    >> 0xcU))))) 
                                             << 0xcU))),32);
        tracep->fullIData(oldp+192,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__imm_generation_io_i_imm),32);
        tracep->fullBit(oldp+193,((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_224) 
                                    & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel) 
                                       == (0x1fU & 
                                           (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                            >> 0xfU)))) 
                                   & (0x37U != (0x7fU 
                                                & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)))));
        tracep->fullBit(oldp+194,((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit__DOT___T_224) 
                                    & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_rdSel) 
                                       == (0x1fU & 
                                           (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                            >> 0x14U)))) 
                                   & (0x37U != (0x7fU 
                                                & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)))));
        tracep->fullIData(oldp+195,(((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                                      ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1
                                      : ((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                                          ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1
                                          : ((2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__decodeForwardUnit_io_forward_rs1))
                                              ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file_io_rs1
                                              : ((3U 
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
        tracep->fullSData(oldp+196,((0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                               >> 0x14U))),12);
        tracep->fullIData(oldp+197,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile_io_i_csr_wdata),32);
        tracep->fullBit(oldp+198,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_csr_wen) 
                                   & (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_memRd) 
                                       & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_valid)) 
                                      | ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__ID_EX__DOT__ctrl_MemRd_reg)) 
                                         & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_memRd)))))));
        tracep->fullCData(oldp+199,((((0U != vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__intr_hw__DOT___T_6) 
                                      & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MIE__DOT__rdata_q) 
                                         >> 2U)) << 2U)),3);
        tracep->fullBit(oldp+200,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__control_decode_io_csr_wen) 
                                   & ((((0xf14U != 
                                         (0xfffU & 
                                          (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                           >> 0x14U))) 
                                        & ((0x300U 
                                            != (0xfffU 
                                                & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
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
                                                       & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_99))))))) 
                                       | ((3U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                 >> 0x1cU)) 
                                          > (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__priv_lvl_q))) 
                                      | ((3U == (3U 
                                                 & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                    >> 0x1eU))) 
                                         & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wreq))))));
        tracep->fullCData(oldp+201,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit_io_forward_rs1),3);
        tracep->fullBit(oldp+202,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_r_type));
        tracep->fullBit(oldp+203,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_load_type));
        tracep->fullBit(oldp+204,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_s_type));
        tracep->fullBit(oldp+205,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_sb_type));
        tracep->fullBit(oldp+206,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_i_type));
        tracep->fullBit(oldp+207,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jalr_type));
        tracep->fullBit(oldp+208,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_jal_type));
        tracep->fullBit(oldp+209,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_lui_type));
        tracep->fullBit(oldp+210,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_Auipc));
        tracep->fullBit(oldp+211,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_multiply));
        tracep->fullBit(oldp+212,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_type));
        tracep->fullIData(oldp+213,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_0),32);
        tracep->fullIData(oldp+214,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_1),32);
        tracep->fullIData(oldp+215,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_2),32);
        tracep->fullIData(oldp+216,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_3),32);
        tracep->fullIData(oldp+217,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_4),32);
        tracep->fullIData(oldp+218,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_5),32);
        tracep->fullIData(oldp+219,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_6),32);
        tracep->fullIData(oldp+220,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_7),32);
        tracep->fullIData(oldp+221,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_8),32);
        tracep->fullIData(oldp+222,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_9),32);
        tracep->fullIData(oldp+223,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_10),32);
        tracep->fullIData(oldp+224,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_11),32);
        tracep->fullIData(oldp+225,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_12),32);
        tracep->fullIData(oldp+226,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_13),32);
        tracep->fullIData(oldp+227,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_14),32);
        tracep->fullIData(oldp+228,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_15),32);
        tracep->fullIData(oldp+229,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_16),32);
        tracep->fullIData(oldp+230,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_17),32);
        tracep->fullIData(oldp+231,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_18),32);
        tracep->fullIData(oldp+232,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_19),32);
        tracep->fullIData(oldp+233,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_20),32);
        tracep->fullIData(oldp+234,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_21),32);
        tracep->fullIData(oldp+235,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_22),32);
        tracep->fullIData(oldp+236,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_23),32);
        tracep->fullIData(oldp+237,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_24),32);
        tracep->fullIData(oldp+238,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_25),32);
        tracep->fullIData(oldp+239,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_26),32);
        tracep->fullIData(oldp+240,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_27),32);
        tracep->fullIData(oldp+241,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_28),32);
        tracep->fullIData(oldp+242,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_29),32);
        tracep->fullIData(oldp+243,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_30),32);
        tracep->fullIData(oldp+244,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__reg_file__DOT__registers_31),32);
        tracep->fullSData(oldp+245,(((0xfe0U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                 >> 7U)))),12);
        tracep->fullCData(oldp+246,((0xfU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                             >> 8U))),4);
        tracep->fullCData(oldp+247,((0x3fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                              >> 0x19U))),6);
        tracep->fullBit(oldp+248,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                         >> 7U))));
        tracep->fullBit(oldp+249,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                         >> 0x1fU))));
        tracep->fullSData(oldp+250,(((0x1000U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                 >> 0x13U)) 
                                     | ((0x800U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                   << 4U)) 
                                        | ((0x7e0U 
                                            & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                 >> 7U)))))),13);
        tracep->fullIData(oldp+251,(((((0x80000000U 
                                        & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)
                                        ? 0x7ffffU : 0U) 
                                      << 0xdU) | ((0x1000U 
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
        tracep->fullIData(oldp+252,((0xfffffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                 >> 0xcU))),20);
        tracep->fullIData(oldp+253,(((((0x80000000U 
                                        & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)
                                        ? 0xfffU : 0U) 
                                      << 0x14U) | (0xfffffU 
                                                   & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                      >> 0xcU)))),32);
        tracep->fullSData(oldp+254,((0x3ffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                               >> 0x15U))),10);
        tracep->fullBit(oldp+255,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                         >> 0x14U))));
        tracep->fullCData(oldp+256,((0xffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                              >> 0xcU))),8);
        tracep->fullIData(oldp+257,(((0x100000U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                   >> 0xbU)) 
                                     | ((0xff000U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg) 
                                        | ((0x800U 
                                            & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                               >> 9U)) 
                                           | (0x7feU 
                                              & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                 >> 0x14U)))))),21);
        tracep->fullIData(oldp+258,(((((0x80000000U 
                                        & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg)
                                        ? 0x7ffU : 0U) 
                                      << 0x15U) | (
                                                   (0x100000U 
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
        tracep->fullIData(oldp+259,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__jalr__DOT__sum),32);
        tracep->fullCData(oldp+260,((((0x20U & (((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)) 
                                                 & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)
                                                     ? 
                                                    (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                                     >> 0x15U)
                                                     : 
                                                    ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                                     >> 5U))) 
                                                << 5U)) 
                                      | ((0x10U & (
                                                   ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)) 
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
                                        | (1U & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_fetch_mret_inst_o)
                                                  ? 
                                                 ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                                  >> 1U)
                                                  : 
                                                 ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)) 
                                                  & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)
                                                      ? 
                                                     (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                                      >> 3U)
                                                      : (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q)))))))),6);
        tracep->fullBit(oldp+261,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_fetch_mret_inst_o) 
                                   | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o) 
                                      | (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)))));
        tracep->fullCData(oldp+262,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q),6);
        tracep->fullIData(oldp+263,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                                      ? ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
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
                                              : 0U)
                                          : 0U) : (0xfffffffeU 
                                                   & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int))),32);
        tracep->fullBit(oldp+264,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o) 
                                   | ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
                                      & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315)) 
                                         & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_317)) 
                                            & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_319)))))));
        tracep->fullCData(oldp+265,(((4U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                            >> 9U)) 
                                     | ((2U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                               >> 6U)) 
                                        | (1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                                 >> 3U))))),3);
        tracep->fullBit(oldp+266,(((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
                                   & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315))));
        tracep->fullCData(oldp+267,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MIE__DOT__rdata_q),3);
        tracep->fullIData(oldp+268,(((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__control__DOT__instruction_type_decode_io_csr_op))
                                      ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile_io_i_csr_wdata
                                      : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_372)),32);
        tracep->fullBit(oldp+269,(((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
                                   & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315)) 
                                      & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_317)))));
        tracep->fullIData(oldp+270,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSCRATCH__DOT__rdata_q),32);
        tracep->fullCData(oldp+271,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                                      ? ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14)
                                          ? 0U : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_31)
                                                   ? 0x2bU
                                                   : 0U))
                                      : ((0x20U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                                   >> 0x1aU)) 
                                         | (0x1fU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int)))),6);
        tracep->fullBit(oldp+272,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o) 
                                   | ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
                                      & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315)) 
                                         & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_317)) 
                                            & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_319)) 
                                               & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_321))))))));
        tracep->fullCData(oldp+273,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MCAUSE__DOT__rdata_q),6);
        tracep->fullIData(oldp+274,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                                      ? 0U : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int)),32);
        tracep->fullBit(oldp+275,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o) 
                                   | ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
                                      & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315)) 
                                         & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_317)) 
                                            & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_319)) 
                                               & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_321)) 
                                                  & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_323)))))))));
        tracep->fullIData(oldp+276,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MTVAL__DOT__rdata_q),32);
        tracep->fullIData(oldp+277,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_io_stall_core_i)
                                      ? (1U | (0x7fffff80U 
                                               & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                                  >> 1U)))
                                      : 1U)),32);
        tracep->fullIData(oldp+278,(((0xfffff80U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q) 
                                     | ((0x40U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q) 
                                        | ((0x20U & 
                                            (((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                                               ? (1U 
                                                  & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                                     >> 5U))
                                               : (1U 
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
        tracep->fullIData(oldp+279,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q),28);
        tracep->fullIData(oldp+280,((0xfffffffeU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int)),32);
        tracep->fullIData(oldp+281,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DEPC__DOT__rdata_q),32);
        tracep->fullBit(oldp+282,(((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
                                   & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315)) 
                                      & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_317)) 
                                         & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_319)) 
                                            & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_321)) 
                                               & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_323)) 
                                                  & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_325)) 
                                                     & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_327)) 
                                                        & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_352)))))))))));
        tracep->fullIData(oldp+283,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DSCRATCH0__DOT__rdata_q),32);
        tracep->fullBit(oldp+284,(((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
                                   & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_315)) 
                                      & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_317)) 
                                         & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_319)) 
                                            & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_321)) 
                                               & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_323)) 
                                                  & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_325)) 
                                                     & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_327)) 
                                                        & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_352)) 
                                                           & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_354))))))))))));
        tracep->fullIData(oldp+285,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DSCRATCH1__DOT__rdata_q),32);
        tracep->fullBit(oldp+286,((1U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)));
        tracep->fullBit(oldp+287,((1U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312)));
        tracep->fullIData(oldp+288,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE_io_i_counter_val),32);
        tracep->fullQData(oldp+289,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE__DOT__counter_q),64);
        tracep->fullBit(oldp+291,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                         >> 2U))));
        tracep->fullBit(oldp+292,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                         >> 2U))));
        tracep->fullIData(oldp+293,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET_io_i_counter_val),32);
        tracep->fullQData(oldp+294,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET__DOT__counter_q),64);
        tracep->fullBit(oldp+296,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                         >> 3U))));
        tracep->fullBit(oldp+297,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                         >> 3U))));
        tracep->fullIData(oldp+298,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_io_i_counter_val),32);
        VL_EXTEND_WQ(80,40, __Vtemp91, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_q);
        tracep->fullQData(oldp+299,((((QData)((IData)(
                                                      __Vtemp91[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp91[0U])))),64);
        tracep->fullBit(oldp+301,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                         >> 4U))));
        tracep->fullBit(oldp+302,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                         >> 4U))));
        tracep->fullIData(oldp+303,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1_io_i_counter_val),32);
        VL_EXTEND_WQ(80,40, __Vtemp92, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_q);
        tracep->fullQData(oldp+304,((((QData)((IData)(
                                                      __Vtemp92[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp92[0U])))),64);
        tracep->fullBit(oldp+306,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                         >> 5U))));
        tracep->fullBit(oldp+307,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                         >> 5U))));
        tracep->fullIData(oldp+308,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2_io_i_counter_val),32);
        VL_EXTEND_WQ(80,40, __Vtemp93, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_q);
        tracep->fullQData(oldp+309,((((QData)((IData)(
                                                      __Vtemp93[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp93[0U])))),64);
        tracep->fullBit(oldp+311,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                         >> 6U))));
        tracep->fullBit(oldp+312,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                         >> 6U))));
        tracep->fullIData(oldp+313,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3_io_i_counter_val),32);
        VL_EXTEND_WQ(80,40, __Vtemp94, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_q);
        tracep->fullQData(oldp+314,((((QData)((IData)(
                                                      __Vtemp94[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp94[0U])))),64);
        tracep->fullBit(oldp+316,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                         >> 7U))));
        tracep->fullBit(oldp+317,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                         >> 7U))));
        tracep->fullIData(oldp+318,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4_io_i_counter_val),32);
        VL_EXTEND_WQ(80,40, __Vtemp95, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_q);
        tracep->fullQData(oldp+319,((((QData)((IData)(
                                                      __Vtemp95[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp95[0U])))),64);
        tracep->fullBit(oldp+321,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                         >> 8U))));
        tracep->fullBit(oldp+322,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                         >> 8U))));
        tracep->fullIData(oldp+323,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5_io_i_counter_val),32);
        VL_EXTEND_WQ(80,40, __Vtemp96, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_q);
        tracep->fullQData(oldp+324,((((QData)((IData)(
                                                      __Vtemp96[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp96[0U])))),64);
        tracep->fullBit(oldp+326,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                         >> 9U))));
        tracep->fullBit(oldp+327,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                         >> 9U))));
        tracep->fullIData(oldp+328,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6_io_i_counter_val),32);
        VL_EXTEND_WQ(80,40, __Vtemp97, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_q);
        tracep->fullQData(oldp+329,((((QData)((IData)(
                                                      __Vtemp97[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp97[0U])))),64);
        tracep->fullBit(oldp+331,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                         >> 0xaU))));
        tracep->fullBit(oldp+332,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                         >> 0xaU))));
        tracep->fullIData(oldp+333,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7_io_i_counter_val),32);
        VL_EXTEND_WQ(80,40, __Vtemp98, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_q);
        tracep->fullQData(oldp+334,((((QData)((IData)(
                                                      __Vtemp98[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp98[0U])))),64);
        tracep->fullBit(oldp+336,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                         >> 0xbU))));
        tracep->fullBit(oldp+337,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                         >> 0xbU))));
        tracep->fullIData(oldp+338,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8_io_i_counter_val),32);
        VL_EXTEND_WQ(80,40, __Vtemp99, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_q);
        tracep->fullQData(oldp+339,((((QData)((IData)(
                                                      __Vtemp99[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp99[0U])))),64);
        tracep->fullBit(oldp+341,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313 
                                         >> 0xcU))));
        tracep->fullBit(oldp+342,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                         >> 0xcU))));
        tracep->fullIData(oldp+343,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9_io_i_counter_val),32);
        VL_EXTEND_WQ(80,40, __Vtemp100, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_q);
        tracep->fullQData(oldp+344,((((QData)((IData)(
                                                      __Vtemp100[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp100[0U])))),64);
        tracep->fullCData(oldp+346,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__priv_lvl_q),2);
        tracep->fullSData(oldp+347,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mcountinhibit_q),13);
        tracep->fullQData(oldp+348,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_0),64);
        tracep->fullQData(oldp+350,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_1),64);
        tracep->fullQData(oldp+352,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_2),64);
        tracep->fullQData(oldp+354,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_3),64);
        tracep->fullQData(oldp+356,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_4),64);
        tracep->fullQData(oldp+358,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_5),64);
        tracep->fullQData(oldp+360,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_6),64);
        tracep->fullQData(oldp+362,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_7),64);
        tracep->fullQData(oldp+364,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_8),64);
        tracep->fullQData(oldp+366,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_9),64);
        tracep->fullQData(oldp+368,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_10),64);
        tracep->fullQData(oldp+370,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_11),64);
        tracep->fullQData(oldp+372,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_12),64);
        tracep->fullQData(oldp+374,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_13),64);
        tracep->fullQData(oldp+376,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_14),64);
        tracep->fullQData(oldp+378,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_15),64);
        tracep->fullQData(oldp+380,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_16),64);
        tracep->fullQData(oldp+382,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_17),64);
        tracep->fullQData(oldp+384,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_18),64);
        tracep->fullQData(oldp+386,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_19),64);
        tracep->fullQData(oldp+388,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_20),64);
        tracep->fullQData(oldp+390,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_21),64);
        tracep->fullQData(oldp+392,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_22),64);
        tracep->fullQData(oldp+394,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_23),64);
        tracep->fullQData(oldp+396,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_24),64);
        tracep->fullQData(oldp+398,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_25),64);
        tracep->fullQData(oldp+400,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_26),64);
        tracep->fullQData(oldp+402,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_27),64);
        tracep->fullQData(oldp+404,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_28),64);
        tracep->fullQData(oldp+406,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_29),64);
        tracep->fullQData(oldp+408,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_30),64);
        tracep->fullQData(oldp+410,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmcounter_31),64);
        tracep->fullIData(oldp+412,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_0),32);
        tracep->fullIData(oldp+413,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_1),32);
        tracep->fullIData(oldp+414,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_2),32);
        tracep->fullIData(oldp+415,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_3),32);
        tracep->fullIData(oldp+416,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_4),32);
        tracep->fullIData(oldp+417,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_5),32);
        tracep->fullIData(oldp+418,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_6),32);
        tracep->fullIData(oldp+419,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_7),32);
        tracep->fullIData(oldp+420,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_8),32);
        tracep->fullIData(oldp+421,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_9),32);
        tracep->fullIData(oldp+422,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_10),32);
        tracep->fullIData(oldp+423,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_11),32);
        tracep->fullIData(oldp+424,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_12),32);
        tracep->fullIData(oldp+425,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_13),32);
        tracep->fullIData(oldp+426,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_14),32);
        tracep->fullIData(oldp+427,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_15),32);
        tracep->fullIData(oldp+428,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_16),32);
        tracep->fullIData(oldp+429,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_17),32);
        tracep->fullIData(oldp+430,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_18),32);
        tracep->fullIData(oldp+431,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_19),32);
        tracep->fullIData(oldp+432,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_20),32);
        tracep->fullIData(oldp+433,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_21),32);
        tracep->fullIData(oldp+434,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_22),32);
        tracep->fullIData(oldp+435,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_23),32);
        tracep->fullIData(oldp+436,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_24),32);
        tracep->fullIData(oldp+437,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_25),32);
        tracep->fullIData(oldp+438,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_26),32);
        tracep->fullIData(oldp+439,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_27),32);
        tracep->fullIData(oldp+440,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_28),32);
        tracep->fullIData(oldp+441,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_29),32);
        tracep->fullIData(oldp+442,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_30),32);
        tracep->fullIData(oldp+443,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mhpmevent_31),32);
        tracep->fullBit(oldp+444,(((3U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                          >> 0x1cU)) 
                                   > (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__priv_lvl_q))));
        tracep->fullBit(oldp+445,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wreq));
        tracep->fullBit(oldp+446,(((3U == (3U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                 >> 0x1eU))) 
                                   & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wreq))));
        tracep->fullBit(oldp+447,(((0xf14U != (0xfffU 
                                               & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                  >> 0x14U))) 
                                   & ((0x300U != (0xfffU 
                                                  & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                                     >> 0x14U))) 
                                      & ((0x301U != 
                                          (0xfffU & 
                                           (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                            >> 0x14U))) 
                                         & ((0x304U 
                                             != (0xfffU 
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
        tracep->fullBit(oldp+448,((1U & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                         >> 1U))));
        tracep->fullBit(oldp+449,((1U & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                         >> 4U))));
        tracep->fullCData(oldp+450,((3U & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                           >> 2U))),2);
        tracep->fullBit(oldp+451,((1U & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                         >> 5U))));
        tracep->fullBit(oldp+452,((1U & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MIE__DOT__rdata_q))));
        tracep->fullBit(oldp+453,((1U & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MIE__DOT__rdata_q) 
                                         >> 1U))));
        tracep->fullBit(oldp+454,((1U & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MIE__DOT__rdata_q) 
                                         >> 2U))));
        tracep->fullBit(oldp+455,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                         >> 2U))));
        tracep->fullBit(oldp+456,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                         >> 1U))));
        tracep->fullBit(oldp+457,((1U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q)));
        tracep->fullBit(oldp+458,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                         >> 4U))));
        tracep->fullBit(oldp+459,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                         >> 3U))));
        tracep->fullBit(oldp+460,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                         >> 6U))));
        tracep->fullBit(oldp+461,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                         >> 5U))));
        tracep->fullBit(oldp+462,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                         >> 9U))));
        tracep->fullBit(oldp+463,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                         >> 8U))));
        tracep->fullBit(oldp+464,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                         >> 7U))));
        tracep->fullBit(oldp+465,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                         >> 0xbU))));
        tracep->fullBit(oldp+466,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                         >> 0xaU))));
        tracep->fullCData(oldp+467,((0xfU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                             >> 0x18U))),4);
        tracep->fullSData(oldp+468,((0xfffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                               >> 0xcU))),12);
        tracep->fullCData(oldp+469,((0x1fU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__if_id_inst_reg 
                                              >> 0x14U))),5);
        tracep->fullIData(oldp+470,((0x2000U | (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__mcountinhibit_q))),32);
        tracep->fullBit(oldp+471,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_301));
        tracep->fullIData(oldp+472,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int),32);
        tracep->fullCData(oldp+473,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_368),2);
        tracep->fullBit(oldp+474,((1U & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                                          ? (1U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q)
                                          : (1U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q)))));
        tracep->fullIData(oldp+475,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                                      ? (((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14)) 
                                          & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_31))
                                          ? ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_14)
                                              ? 0U : 
                                             ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT___T_31)
                                               ? ((1U 
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
        tracep->fullBit(oldp+476,((1U & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_fetch_mret_inst_o) 
                                         | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                                             ? (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q)
                                             : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)
                                                 ? 
                                                (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                                 >> 7U)
                                                 : 
                                                ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                                 >> 1U)))))));
        tracep->fullBit(oldp+477,((1U & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode_io_fetch_mret_inst_o)
                                          ? ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                             >> 1U)
                                          : ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)) 
                                             & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)
                                                 ? 
                                                (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                                 >> 3U)
                                                 : (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q)))))));
        tracep->fullBit(oldp+478,((1U & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)) 
                                         & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)
                                             ? (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                                >> 0x15U)
                                             : ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                                >> 5U))))));
        tracep->fullBit(oldp+479,((1U & ((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)) 
                                         & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_MSTATUS__DOT__rdata_q) 
                                            >> 4U)))));
        tracep->fullBit(oldp+480,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                         >> 0xbU))));
        tracep->fullBit(oldp+481,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                         >> 7U))));
        tracep->fullBit(oldp+482,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__csr_wdata_int 
                                         >> 3U))));
        tracep->fullBit(oldp+483,((1U & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch_io_csrRegFile_csr_save_cause_o)
                                          ? (1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                                   >> 5U))
                                          : (1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__PRIM_DCSR__DOT__rdata_q 
                                                   >> 5U))))));
        tracep->fullBit(oldp+484,(((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
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
        tracep->fullIData(oldp+485,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313),32);
        tracep->fullIData(oldp+486,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312),32);
        tracep->fullSData(oldp+487,((((~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___T_303)) 
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
        tracep->fullBit(oldp+488,(((3U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_368)) 
                                   & (0U != (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_368)))));
        tracep->fullBit(oldp+489,((1U & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                         | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313))));
        tracep->fullIData(oldp+490,(((1U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE_io_i_counter_val
                                      : (IData)((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE__DOT__counter_q 
                                                 >> 0x20U)))),32);
        tracep->fullIData(oldp+491,(((1U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE__DOT__counter_q)
                                      : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE_io_i_counter_val)),32);
        tracep->fullQData(oldp+492,((((QData)((IData)(
                                                      ((1U 
                                                        & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE_io_i_counter_val
                                                        : (IData)(
                                                                  (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE__DOT__counter_q 
                                                                   >> 0x20U))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((1U 
                                                                    & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                                    ? (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE__DOT__counter_q)
                                                                    : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE_io_i_counter_val))))),64);
        tracep->fullQData(oldp+494,((1ULL + vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MCYCLE__DOT__counter_q)),64);
        tracep->fullBit(oldp+496,((1U & ((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                          | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                         >> 2U))));
        tracep->fullIData(oldp+497,(((4U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET_io_i_counter_val
                                      : (IData)((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET__DOT__counter_q 
                                                 >> 0x20U)))),32);
        tracep->fullIData(oldp+498,(((4U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET__DOT__counter_q)
                                      : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET_io_i_counter_val)),32);
        tracep->fullQData(oldp+499,((((QData)((IData)(
                                                      ((4U 
                                                        & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET_io_i_counter_val
                                                        : (IData)(
                                                                  (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET__DOT__counter_q 
                                                                   >> 0x20U))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((4U 
                                                                    & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                                    ? (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET__DOT__counter_q)
                                                                    : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET_io_i_counter_val))))),64);
        tracep->fullQData(oldp+501,((1ULL + vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__COUNT_MINSTRET__DOT__counter_q)),64);
        tracep->fullBit(oldp+503,((1U & ((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                          | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                         >> 3U))));
        tracep->fullQData(oldp+504,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_q),40);
        VL_EXTEND_WQ(80,40, __Vtemp101, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_q);
        tracep->fullIData(oldp+506,(((8U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_io_i_counter_val
                                      : __Vtemp101[1U])),32);
        VL_EXTEND_WQ(80,40, __Vtemp102, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_q);
        tracep->fullIData(oldp+507,(((8U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? __Vtemp102[0U]
                                      : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_io_i_counter_val)),32);
        VL_EXTEND_WQ(80,40, __Vtemp103, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_q);
        VL_EXTEND_WQ(80,40, __Vtemp104, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_q);
        tracep->fullQData(oldp+508,((((QData)((IData)(
                                                      ((8U 
                                                        & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_io_i_counter_val
                                                        : 
                                                       __Vtemp103[1U]))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((8U 
                                                                    & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                                    ? 
                                                                   __Vtemp104[0U]
                                                                    : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_io_i_counter_val))))),64);
        tracep->fullQData(oldp+510,((0xffffffffffULL 
                                     & (1ULL + vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter__DOT__counter_q))),40);
        tracep->fullBit(oldp+512,((1U & ((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                          | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                         >> 4U))));
        tracep->fullQData(oldp+513,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_q),40);
        VL_EXTEND_WQ(80,40, __Vtemp105, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_q);
        tracep->fullIData(oldp+515,(((0x10U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1_io_i_counter_val
                                      : __Vtemp105[1U])),32);
        VL_EXTEND_WQ(80,40, __Vtemp106, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_q);
        tracep->fullIData(oldp+516,(((0x10U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? __Vtemp106[0U]
                                      : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1_io_i_counter_val)),32);
        VL_EXTEND_WQ(80,40, __Vtemp107, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_q);
        VL_EXTEND_WQ(80,40, __Vtemp108, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_q);
        tracep->fullQData(oldp+517,((((QData)((IData)(
                                                      ((0x10U 
                                                        & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1_io_i_counter_val
                                                        : 
                                                       __Vtemp107[1U]))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((0x10U 
                                                                    & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                                    ? 
                                                                   __Vtemp108[0U]
                                                                    : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1_io_i_counter_val))))),64);
        tracep->fullQData(oldp+519,((0xffffffffffULL 
                                     & (1ULL + vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_1__DOT__counter_q))),40);
        tracep->fullBit(oldp+521,((1U & ((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                          | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                         >> 5U))));
        tracep->fullQData(oldp+522,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_q),40);
        VL_EXTEND_WQ(80,40, __Vtemp109, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_q);
        tracep->fullIData(oldp+524,(((0x20U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2_io_i_counter_val
                                      : __Vtemp109[1U])),32);
        VL_EXTEND_WQ(80,40, __Vtemp110, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_q);
        tracep->fullIData(oldp+525,(((0x20U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? __Vtemp110[0U]
                                      : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2_io_i_counter_val)),32);
        VL_EXTEND_WQ(80,40, __Vtemp111, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_q);
        VL_EXTEND_WQ(80,40, __Vtemp112, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_q);
        tracep->fullQData(oldp+526,((((QData)((IData)(
                                                      ((0x20U 
                                                        & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2_io_i_counter_val
                                                        : 
                                                       __Vtemp111[1U]))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((0x20U 
                                                                    & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                                    ? 
                                                                   __Vtemp112[0U]
                                                                    : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2_io_i_counter_val))))),64);
        tracep->fullQData(oldp+528,((0xffffffffffULL 
                                     & (1ULL + vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_2__DOT__counter_q))),40);
        tracep->fullBit(oldp+530,((1U & ((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                          | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                         >> 6U))));
        tracep->fullQData(oldp+531,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_q),40);
        VL_EXTEND_WQ(80,40, __Vtemp113, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_q);
        tracep->fullIData(oldp+533,(((0x40U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3_io_i_counter_val
                                      : __Vtemp113[1U])),32);
        VL_EXTEND_WQ(80,40, __Vtemp114, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_q);
        tracep->fullIData(oldp+534,(((0x40U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? __Vtemp114[0U]
                                      : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3_io_i_counter_val)),32);
        VL_EXTEND_WQ(80,40, __Vtemp115, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_q);
        VL_EXTEND_WQ(80,40, __Vtemp116, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_q);
        tracep->fullQData(oldp+535,((((QData)((IData)(
                                                      ((0x40U 
                                                        & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3_io_i_counter_val
                                                        : 
                                                       __Vtemp115[1U]))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((0x40U 
                                                                    & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                                    ? 
                                                                   __Vtemp116[0U]
                                                                    : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3_io_i_counter_val))))),64);
        tracep->fullQData(oldp+537,((0xffffffffffULL 
                                     & (1ULL + vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_3__DOT__counter_q))),40);
        tracep->fullBit(oldp+539,((1U & ((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                          | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                         >> 7U))));
        tracep->fullQData(oldp+540,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_q),40);
        VL_EXTEND_WQ(80,40, __Vtemp117, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_q);
        tracep->fullIData(oldp+542,(((0x80U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4_io_i_counter_val
                                      : __Vtemp117[1U])),32);
        VL_EXTEND_WQ(80,40, __Vtemp118, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_q);
        tracep->fullIData(oldp+543,(((0x80U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? __Vtemp118[0U]
                                      : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4_io_i_counter_val)),32);
        VL_EXTEND_WQ(80,40, __Vtemp119, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_q);
        VL_EXTEND_WQ(80,40, __Vtemp120, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_q);
        tracep->fullQData(oldp+544,((((QData)((IData)(
                                                      ((0x80U 
                                                        & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4_io_i_counter_val
                                                        : 
                                                       __Vtemp119[1U]))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((0x80U 
                                                                    & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                                    ? 
                                                                   __Vtemp120[0U]
                                                                    : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4_io_i_counter_val))))),64);
        tracep->fullQData(oldp+546,((0xffffffffffULL 
                                     & (1ULL + vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_4__DOT__counter_q))),40);
        tracep->fullBit(oldp+548,((1U & ((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                          | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                         >> 8U))));
        tracep->fullQData(oldp+549,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_q),40);
        VL_EXTEND_WQ(80,40, __Vtemp121, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_q);
        tracep->fullIData(oldp+551,(((0x100U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5_io_i_counter_val
                                      : __Vtemp121[1U])),32);
        VL_EXTEND_WQ(80,40, __Vtemp122, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_q);
        tracep->fullIData(oldp+552,(((0x100U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? __Vtemp122[0U]
                                      : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5_io_i_counter_val)),32);
        VL_EXTEND_WQ(80,40, __Vtemp123, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_q);
        VL_EXTEND_WQ(80,40, __Vtemp124, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_q);
        tracep->fullQData(oldp+553,((((QData)((IData)(
                                                      ((0x100U 
                                                        & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5_io_i_counter_val
                                                        : 
                                                       __Vtemp123[1U]))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((0x100U 
                                                                    & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                                    ? 
                                                                   __Vtemp124[0U]
                                                                    : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5_io_i_counter_val))))),64);
        tracep->fullQData(oldp+555,((0xffffffffffULL 
                                     & (1ULL + vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_5__DOT__counter_q))),40);
        tracep->fullBit(oldp+557,((1U & ((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                          | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                         >> 9U))));
        tracep->fullQData(oldp+558,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_q),40);
        VL_EXTEND_WQ(80,40, __Vtemp125, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_q);
        tracep->fullIData(oldp+560,(((0x200U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6_io_i_counter_val
                                      : __Vtemp125[1U])),32);
        VL_EXTEND_WQ(80,40, __Vtemp126, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_q);
        tracep->fullIData(oldp+561,(((0x200U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? __Vtemp126[0U]
                                      : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6_io_i_counter_val)),32);
        VL_EXTEND_WQ(80,40, __Vtemp127, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_q);
        VL_EXTEND_WQ(80,40, __Vtemp128, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_q);
        tracep->fullQData(oldp+562,((((QData)((IData)(
                                                      ((0x200U 
                                                        & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6_io_i_counter_val
                                                        : 
                                                       __Vtemp127[1U]))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((0x200U 
                                                                    & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                                    ? 
                                                                   __Vtemp128[0U]
                                                                    : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6_io_i_counter_val))))),64);
        tracep->fullQData(oldp+564,((0xffffffffffULL 
                                     & (1ULL + vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_6__DOT__counter_q))),40);
        tracep->fullBit(oldp+566,((1U & ((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                          | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                         >> 0xaU))));
        tracep->fullQData(oldp+567,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_q),40);
        VL_EXTEND_WQ(80,40, __Vtemp129, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_q);
        tracep->fullIData(oldp+569,(((0x400U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7_io_i_counter_val
                                      : __Vtemp129[1U])),32);
        VL_EXTEND_WQ(80,40, __Vtemp130, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_q);
        tracep->fullIData(oldp+570,(((0x400U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? __Vtemp130[0U]
                                      : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7_io_i_counter_val)),32);
        VL_EXTEND_WQ(80,40, __Vtemp131, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_q);
        VL_EXTEND_WQ(80,40, __Vtemp132, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_q);
        tracep->fullQData(oldp+571,((((QData)((IData)(
                                                      ((0x400U 
                                                        & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7_io_i_counter_val
                                                        : 
                                                       __Vtemp131[1U]))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((0x400U 
                                                                    & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                                    ? 
                                                                   __Vtemp132[0U]
                                                                    : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7_io_i_counter_val))))),64);
        tracep->fullQData(oldp+573,((0xffffffffffULL 
                                     & (1ULL + vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_7__DOT__counter_q))),40);
        tracep->fullBit(oldp+575,((1U & ((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                          | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                         >> 0xbU))));
        tracep->fullQData(oldp+576,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_q),40);
        VL_EXTEND_WQ(80,40, __Vtemp133, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_q);
        tracep->fullIData(oldp+578,(((0x800U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8_io_i_counter_val
                                      : __Vtemp133[1U])),32);
        VL_EXTEND_WQ(80,40, __Vtemp134, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_q);
        tracep->fullIData(oldp+579,(((0x800U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? __Vtemp134[0U]
                                      : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8_io_i_counter_val)),32);
        VL_EXTEND_WQ(80,40, __Vtemp135, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_q);
        VL_EXTEND_WQ(80,40, __Vtemp136, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_q);
        tracep->fullQData(oldp+580,((((QData)((IData)(
                                                      ((0x800U 
                                                        & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8_io_i_counter_val
                                                        : 
                                                       __Vtemp135[1U]))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((0x800U 
                                                                    & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                                    ? 
                                                                   __Vtemp136[0U]
                                                                    : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8_io_i_counter_val))))),64);
        tracep->fullQData(oldp+582,((0xffffffffffULL 
                                     & (1ULL + vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_8__DOT__counter_q))),40);
        tracep->fullBit(oldp+584,((1U & ((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_312 
                                          | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313) 
                                         >> 0xcU))));
        tracep->fullQData(oldp+585,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_q),40);
        VL_EXTEND_WQ(80,40, __Vtemp137, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_q);
        tracep->fullIData(oldp+587,(((0x1000U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9_io_i_counter_val
                                      : __Vtemp137[1U])),32);
        VL_EXTEND_WQ(80,40, __Vtemp138, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_q);
        tracep->fullIData(oldp+588,(((0x1000U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                      ? __Vtemp138[0U]
                                      : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9_io_i_counter_val)),32);
        VL_EXTEND_WQ(80,40, __Vtemp139, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_q);
        VL_EXTEND_WQ(80,40, __Vtemp140, vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_q);
        tracep->fullQData(oldp+589,((((QData)((IData)(
                                                      ((0x1000U 
                                                        & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                        ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9_io_i_counter_val
                                                        : 
                                                       __Vtemp139[1U]))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((0x1000U 
                                                                    & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT___GEN_313)
                                                                    ? 
                                                                   __Vtemp140[0U]
                                                                    : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9_io_i_counter_val))))),64);
        tracep->fullQData(oldp+591,((0xffffffffffULL 
                                     & (1ULL + vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrRegFile__DOT__BrqCounter_9__DOT__counter_q))),40);
        tracep->fullBit(oldp+593,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__hazard_in_decode_execute));
        tracep->fullBit(oldp+594,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__hazard_in_decode_memory));
        tracep->fullBit(oldp+595,((((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_26) 
                                      & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__hazard_in_decode_execute))) 
                                     & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__hazard_in_decode_memory))) 
                                    & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_csrWen))) 
                                   & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_33))));
        tracep->fullBit(oldp+596,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__csr_hazard_in_decode_execute));
        tracep->fullBit(oldp+597,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__csr_hazard_in_decode_memory));
        tracep->fullBit(oldp+598,((((((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_26) 
                                      & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__MEM_WB__DOT__reg_csrWen)) 
                                     & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__csr_hazard_in_decode_execute))) 
                                    & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT__csr_hazard_in_decode_memory))) 
                                   & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__decode__DOT__csrControlUnit__DOT___T_33))));
        tracep->fullCData(oldp+599,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit_io_forward_a),2);
        tracep->fullCData(oldp+600,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__forwardUnit_io_forward_b),2);
        tracep->fullIData(oldp+601,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_a),32);
        tracep->fullIData(oldp+602,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_io_oper_b),32);
        tracep->fullCData(oldp+603,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__execute__DOT__alu_control_io_output),5);
        tracep->fullCData(oldp+604,((3U & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)),2);
        tracep->fullCData(oldp+605,((0xffU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data)),8);
        tracep->fullSData(oldp+606,((0xffffU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_h_o_d_data)),16);
        tracep->fullIData(oldp+607,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg__DOT__q_reg),32);
        tracep->fullIData(oldp+608,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_enable_reg__DOT__q_reg),32);
        tracep->fullBit(oldp+609,((((8U == (0x3cU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                    & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter_io_we_o)) 
                                   & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)))));
        tracep->fullBit(oldp+610,((((0x10U == (0x3cU 
                                               & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                    & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter_io_we_o)) 
                                   & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)))));
        tracep->fullSData(oldp+611,((0xffffU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i)),16);
        tracep->fullBit(oldp+612,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT___T_71) 
                                   & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)))));
        tracep->fullSData(oldp+613,((0xffffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i 
                                                >> 0x10U))),16);
        tracep->fullBit(oldp+614,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT___T_76) 
                                   & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)))));
        tracep->fullBit(oldp+615,((((0x1cU == (0x3cU 
                                               & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)) 
                                    & (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter_io_we_o)) 
                                   & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)))));
        tracep->fullBit(oldp+616,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT___T_86) 
                                   & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)))));
        tracep->fullBit(oldp+617,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT___T_91) 
                                   & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err)))));
        tracep->fullIData(oldp+618,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_rising_reg__DOT__q_reg),32);
        tracep->fullIData(oldp+619,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_falling_reg__DOT__q_reg),32);
        tracep->fullIData(oldp+620,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvlhigh_reg__DOT__q_reg),32);
        tracep->fullIData(oldp+621,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvllow_reg__DOT__q_reg),32);
        tracep->fullSData(oldp+622,((0xffffU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_q)),16);
        tracep->fullSData(oldp+623,((0xffffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_q 
                                                >> 0x10U))),16);
        tracep->fullSData(oldp+624,((0xffffU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_en_q)),16);
        tracep->fullSData(oldp+625,((0xffffU & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_en_q 
                                                >> 0x10U))),16);
        tracep->fullIData(oldp+626,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__data_in_q),32);
        tracep->fullBit(oldp+627,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter_io_we_o));
        tracep->fullCData(oldp+628,((0x3cU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output)),6);
        tracep->fullIData(oldp+629,(((0U == (0x3cU 
                                             & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                      ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg__DOT__q_reg
                                      : ((4U == (0x3cU 
                                                 & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                          ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_enable_reg__DOT__q_reg
                                          : ((8U == 
                                              (0x3cU 
                                               & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                              ? 0U : 
                                             ((0xcU 
                                               == (0x3cU 
                                                   & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                               ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__data_in_reg__DOT__q_reg
                                               : ((0x10U 
                                                   == 
                                                   (0x3cU 
                                                    & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))
                                                   ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__cio_gpio_q
                                                   : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT___GEN_8)))))),32);
        tracep->fullBit(oldp+630,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg_io_we));
        tracep->fullBit(oldp+631,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_enable_reg_io_we));
        tracep->fullIData(oldp+632,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__data_in_reg__DOT__q_reg),32);
        tracep->fullBit(oldp+633,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_rising_reg_io_we));
        tracep->fullBit(oldp+634,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_falling_reg_io_we));
        tracep->fullBit(oldp+635,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvlhigh_reg_io_we));
        tracep->fullBit(oldp+636,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvllow_reg_io_we));
        tracep->fullBit(oldp+637,((0U == (0x3cU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
        tracep->fullBit(oldp+638,((4U == (0x3cU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
        tracep->fullBit(oldp+639,((8U == (0x3cU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
        tracep->fullBit(oldp+640,((0xcU == (0x3cU & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
        tracep->fullBit(oldp+641,((0x10U == (0x3cU 
                                             & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
        tracep->fullBit(oldp+642,((0x14U == (0x3cU 
                                             & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
        tracep->fullBit(oldp+643,((0x18U == (0x3cU 
                                             & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
        tracep->fullBit(oldp+644,((0x1cU == (0x3cU 
                                             & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
        tracep->fullBit(oldp+645,((0x20U == (0x3cU 
                                             & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
        tracep->fullBit(oldp+646,((0x24U == (0x3cU 
                                             & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
        tracep->fullBit(oldp+647,((0x28U == (0x3cU 
                                             & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
        tracep->fullBit(oldp+648,((0x2cU == (0x3cU 
                                             & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
        tracep->fullBit(oldp+649,((0x30U == (0x3cU 
                                             & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
        tracep->fullBit(oldp+650,((0x34U == (0x3cU 
                                             & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__EX_MEM__DOT__reg_alu_output))));
        tracep->fullBit(oldp+651,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__wr_err));
        tracep->fullBit(oldp+652,((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__tlErr__DOT___T)))));
        tracep->fullBit(oldp+653,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__a_ack));
        tracep->fullBit(oldp+654,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__a_ack) 
                                   & ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode)) 
                                      | (1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode))))));
        tracep->fullBit(oldp+655,((4U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode))));
        tracep->fullBit(oldp+656,((1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode))));
        tracep->fullBit(oldp+657,((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode))));
        tracep->fullBit(oldp+658,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__tlErr__DOT___T_5) 
                                   | (0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode)))));
        tracep->fullBit(oldp+659,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_d_o_1_a_valid) 
                                   & (0xfU == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask)))));
        tracep->fullBit(oldp+660,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_d_o_1_a_valid) 
                                   & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__tlul_regAdapter__DOT__tlErr__DOT___T_5) 
                                      | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_d_o_1_a_valid) 
                                         & (0xfU == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask)))))));
        tracep->fullBit(oldp+661,((1U & (~ (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__tlErr__DOT___T)))));
        tracep->fullBit(oldp+662,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__error));
        tracep->fullBit(oldp+663,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__a_ack));
        tracep->fullBit(oldp+664,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__a_ack) 
                                   & ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode)) 
                                      | (1U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode))))));
        tracep->fullBit(oldp+665,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__tlErr__DOT___T_5) 
                                   | (0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_opcode)))));
        tracep->fullBit(oldp+666,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_d_o_0_a_valid) 
                                   & (0xfU == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask)))));
        tracep->fullBit(oldp+667,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_d_o_0_a_valid) 
                                   & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__dccm_tl_device__DOT__tlErr__DOT___T_5) 
                                      | ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_tl_d_o_0_a_valid) 
                                         & (0xfU == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_tl_o_a_mask)))))));
        tracep->fullBit(oldp+668,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__memory_stage_io_data_req_o) 
                                   & (2U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2_io_dev_sel)))));
        tracep->fullBit(oldp+669,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__tl_switch_1to2__DOT__tl_errResp__DOT__err_reqPending));
        tracep->fullCData(oldp+670,(vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__we_reg),4);
        tracep->fullBit(oldp+671,(vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__en_reg));
        tracep->fullIData(oldp+672,(vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__di_reg),32);
        tracep->fullCData(oldp+673,(vlTOPp->Ibtida_top_dffram_cv__DOT__DCCM__DOT__a_reg),8);
        tracep->fullCData(oldp+674,((0x3fU & ((0U == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg))
                                               ? (0x3fU 
                                                  & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc_io_in 
                                                     >> 2U))
                                               : ((2U 
                                                   == (IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__state_reg))
                                                   ? vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__rx_addr_reg
                                                   : 
                                                  (0x3fU 
                                                   & (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core__DOT__fetch__DOT__pc_io_in 
                                                      >> 2U)))))),8);
        tracep->fullCData(oldp+675,(vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__we_reg),4);
        tracep->fullBit(oldp+676,(vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__en_reg));
        tracep->fullIData(oldp+677,(vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__di_reg),32);
        tracep->fullCData(oldp+678,(vlTOPp->Ibtida_top_dffram_cv__DOT__ICCM__DOT__a_reg),8);
        tracep->fullBit(oldp+679,(vlTOPp->Ibtida_top_dffram_cv__DOT__io_rx_i));
        tracep->fullBit(oldp+680,(vlTOPp->Ibtida_top_dffram_cv__DOT__reset));
        tracep->fullBit(oldp+681,((0U != vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__intr_hw__DOT__new_event)));
        tracep->fullIData(oldp+682,(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__intr_hw__DOT__new_event),32);
        tracep->fullBit(oldp+683,(vlTOPp->wb_clk_i));
        tracep->fullBit(oldp+684,(vlTOPp->wb_rst_i));
        tracep->fullWData(oldp+685,(vlTOPp->la_data_in),128);
        tracep->fullWData(oldp+689,(vlTOPp->la_data_out),128);
        tracep->fullWData(oldp+693,(vlTOPp->la_oen),128);
        tracep->fullBit(oldp+697,(vlTOPp->rx));
        tracep->fullSData(oldp+698,(vlTOPp->la_din),16);
        tracep->fullQData(oldp+699,(vlTOPp->io_in),38);
        tracep->fullQData(oldp+701,(vlTOPp->io_out),38);
        tracep->fullQData(oldp+703,(vlTOPp->io_oeb),38);
        tracep->fullIData(oldp+705,((0x3fffffffU & (IData)(
                                                           (vlTOPp->io_in 
                                                            >> 8U)))),30);
        tracep->fullSData(oldp+706,((0xffffU & vlTOPp->la_data_in[1U])),16);
        tracep->fullIData(oldp+707,((0x3fffffffU & (IData)(
                                                           (vlTOPp->io_in 
                                                            >> 8U)))),32);
        tracep->fullIData(oldp+708,((0xffffU & vlTOPp->la_data_in[1U])),32);
        tracep->fullIData(oldp+709,((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__intr_hw__DOT__new_event 
                                     | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg__DOT__q_reg)),32);
        tracep->fullIData(oldp+710,(((((0x3fffffffU 
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
        tracep->fullIData(oldp+711,((0x3fffffffU & 
                                     (((~ vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__data_in_q) 
                                       & (IData)((vlTOPp->io_in 
                                                  >> 8U))) 
                                      & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_rising_reg__DOT__q_reg))),32);
        tracep->fullIData(oldp+712,(((vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__data_in_q 
                                      & (~ (0x3fffffffU 
                                            & (IData)(
                                                      (vlTOPp->io_in 
                                                       >> 8U))))) 
                                     & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_falling_reg__DOT__q_reg)),32);
        tracep->fullIData(oldp+713,((0x3fffffffU & 
                                     ((IData)((vlTOPp->io_in 
                                               >> 8U)) 
                                      & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvlhigh_reg__DOT__q_reg))),32);
        tracep->fullIData(oldp+714,(((~ (0x3fffffffU 
                                         & (IData)(
                                                   (vlTOPp->io_in 
                                                    >> 8U)))) 
                                     & vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_ctrl_en_lvllow_reg__DOT__q_reg)),32);
        tracep->fullBit(oldp+715,(((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg_io_we) 
                                   | (0U != vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__intr_hw__DOT__new_event))));
        tracep->fullIData(oldp+716,((((0U != vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__intr_hw__DOT__new_event)
                                       ? (vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__intr_hw__DOT__new_event 
                                          | vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg__DOT__q_reg)
                                       : vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg__DOT__q_reg) 
                                     & ((IData)(vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__gpio__DOT__gpioRegTop__DOT__intr_state_reg_io_we)
                                         ? (~ vlTOPp->Ibtida_top_dffram_cv__DOT__ibtidaTop__DOT__core_loadStore_tl_host_io_wdata_i)
                                         : 0xffffffffU))),32);
        tracep->fullBit(oldp+717,(1U));
        tracep->fullBit(oldp+718,(0U));
        tracep->fullIData(oldp+719,(0U),32);
        tracep->fullCData(oldp+720,(0xfU),4);
        tracep->fullCData(oldp+721,(4U),3);
        tracep->fullSData(oldp+722,(0U),16);
    }
}
