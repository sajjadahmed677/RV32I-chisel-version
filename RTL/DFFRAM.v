module DFFRAM (
  CLK, WE, EN, Di, Do, A
);
  input     CLK;
  input     [3:0]    WE;
  input              EN;
  input     [31:0]   Di;
  output    [31:0]   Do;
  input     [7:0]    A;

  reg [3:0] we_reg;
  reg       en_reg;
  reg [31:0] di_reg;
  reg [7:0] a_reg;



  always @(posedge CLK)
      begin
        we_reg = WE;
        en_reg = EN;
        di_reg = Di;
        a_reg = A;
      end

  reg [31:0] RAM[(256*1)-1 : 0];
  assign Do = RAM[a_reg/4];
  always @(posedge CLK)
      if(en_reg) begin
        //  Do <= RAM[a_reg/4];
        if(we_reg[0]) RAM[a_reg/4][ 7: 0] <= di_reg[7:0]; else RAM[a_reg/4][ 7: 0] <= RAM[a_reg/4][ 7: 0];
        if(we_reg[1]) RAM[a_reg/4][15:8] <= di_reg[15:8]; else RAM[a_reg/4][ 15:8] <= RAM[a_reg/4][ 15:8];
        if(we_reg[2]) RAM[a_reg/4][23:16] <= di_reg[23:16]; else RAM[a_reg/4][ 23:16] <= RAM[a_reg/4][23:16];
        if(we_reg[3]) RAM[a_reg/4][31:24] <= di_reg[31:24]; else RAM[a_reg/4][ 31:24] <= RAM[a_reg/4][ 31:24];
      end
endmodule 
