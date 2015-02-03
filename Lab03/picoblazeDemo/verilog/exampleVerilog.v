`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:34:43 01/26/2014 
// Design Name: 
// Module Name:    exampleVerilog 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module exampleVerilog(
    input wire clk,
    input wire rst,
    input wire [7:0] sw,
	 input wire [4:0] buttons,
    output reg [7:0] leds
);


// Definitions for wiring in Picoblaze
wire [11:0] address;
wire [17:0] instruction;
wire        bram_enable;
wire [7:0]  port_id;
wire [7:0]  out_port;
reg  [7:0]  in_port;
wire        write_strobe;
wire        k_write_strobe;
wire        read_strobe;
wire         interrupt;
wire        interrupt_ack;
wire        kcpsm6_sleep;
wire         kcpsm6_reset;
wire        cpu_reset;
wire        rdl;
wire        int_request;

// Circuit Description
// Instantiate Picoblaze 6
kcpsm6 #(
	.interrupt_vector	(12'h3FF),
	.scratch_pad_memory_size(64),
	.hwbuild		(8'h00))
  processor (
	.address 		(address),
	.instruction 	(instruction),
	.bram_enable 	(bram_enable),
	.port_id 		(port_id),
	.write_strobe 	(write_strobe),
	.k_write_strobe	(k_write_strobe),
	.out_port 		(out_port),
	.read_strobe 	(read_strobe),
	.in_port 		(in_port),
	.interrupt 		(interrupt),
	.interrupt_ack 	(interrupt_ack),
	.reset          (rst),
	.sleep		    (kcpsm6_sleep),
	.clk 			(clk)); 

// Not using sleep or interrupts so tie them low
assign kcpsm6_sleep = 1'b0;
assign interrupt = 0;

// Tie in the program ROM
 simple #(
	.C_FAMILY             ("S6"), //Family 'S6' or 'V6'
	.C_RAM_SIZE_KWORDS    (1),  	//Program size '1', '2' or '4'
	.C_JTAG_LOADER_ENABLE (1))  	//Include JTAG Loader when set to '1' 
  simple (    				    		//Name to match your PSM file
// 	.rdl 			(kcpsm6_reset),
	.enable 		(bram_enable),
	.address 		(address),
	.instruction 	(instruction),
	.clk 			(clk));
	
assign kcpsm6_reset = cpu_reset;

// Input Ports
always @ (posedge clk)
  begin
      case (port_id[1:0])    
        // Read input_port_b at port address 01 hex
        2'b01 : in_port <= sw;
		  2'b10 : in_port <= buttons;
        default : in_port <= 8'bXXXXXXXX ;  
      endcase
  end

// Output Ports
always @ (posedge clk)
  begin
      // 'write_strobe' is used to qualify all writes to general output ports.
      if (write_strobe == 1'b1) begin
        // Write to output_port_w at port address 01 hex
        if (port_id[0] == 1'b1) begin
          leds <= out_port;
        end
      end
  end	  
endmodule
