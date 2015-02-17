module sync_int (clk,interrupt_in, interrupt);
    input clk, interrupt_in;
    output  interrupt;
    reg interrupt;
    reg ff_data;
    reg [1:0] q;
    wire clear;
assign clear = (interrupt_in && interrupt); 

always @ (posedge interrupt_in or posedge clear)
  if (clear) 
    ff_data = 1'b0;
  else
    ff_data = 1'b1;

always @ (posedge clk)
  begin
    q = {q[0],ff_data}; interrupt=q[1]; 
  end
endmodule	
