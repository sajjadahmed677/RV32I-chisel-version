`timescale 1ns/10ps

module UART_RX_TB();

  // Testbench uses a 25 MHz clock (same as Go Board)
  // Want to interface to 115200 baud UART
  // 25000000 / 115200 = 217 Clocks Per Bit.
  parameter c_CLOCK_PERIOD_NS = 40;
  parameter c_BIT_PERIOD      = 8600;
  
  wire [15:0] c_CLKS_PER_BIT = 16'd217;
  reg r_Clock = 0;
  reg r_Reset = 0;
  reg r_RX_Serial = 1;
  wire [7:0] w_RX_Byte;
  

  // Takes in input byte and serializes it 
  task UART_WRITE_BYTE;
    input [7:0] i_Data;
    integer     ii;
    begin
      
      // Send Start Bit
      r_RX_Serial <= 1'b0;
      #(c_BIT_PERIOD);
      #1000;
      
      // Send Data Byte
      for (ii=0; ii<8; ii=ii+1)
        begin
          r_RX_Serial <= i_Data[ii];
          #(c_BIT_PERIOD);
        end
      
      // Send Stop Bit
      r_RX_Serial <= 1'b1;
      #(c_BIT_PERIOD);
     end
  endtask // UART_WRITE_BYTE
  
  
  Ibtida_top_dffram_cv Ibtida
    (.clock(r_Clock),
     .reset(r_Reset),
     .io_rx_i(r_RX_Serial),
     .io_CLK_PER_BIT(c_CLKS_PER_BIT)
     );
  
  always
    #(c_CLOCK_PERIOD_NS/2) r_Clock <= !r_Clock;

  
  // Main Testing:
  initial
    begin
      @(posedge r_Clock);
      r_Reset=1;
      #500
      r_Reset=0;
      // Send a command to the UART (exercise Rx)
      @(posedge r_Clock);
      UART_WRITE_BYTE(8'h13);
      @(posedge r_Clock);
      UART_WRITE_BYTE(8'h00);
      @(posedge r_Clock);
      UART_WRITE_BYTE(8'h00);
      @(posedge r_Clock);
      UART_WRITE_BYTE(8'h00);
      @(posedge r_Clock);
      UART_WRITE_BYTE(8'hff);
      @(posedge r_Clock);
      UART_WRITE_BYTE(8'h0f);
      @(posedge r_Clock);
      UART_WRITE_BYTE(8'h00);
      @(posedge r_Clock);
      UART_WRITE_BYTE(8'h00);      
      // Check that the correct command was received
      
      $display("Executed");
      
    $finish();
    end
  
  initial 
  begin
    // Required to dump signals to EPWave
    $dumpfile("dump.vcd");
    $dumpvars(0);
  end
  
endmodule
