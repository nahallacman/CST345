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
	// keypad input
	input wire [3:0] column,
	//not used input and output
	input wire [4:0] buttons,
    output reg [7:0] leds,
	// keypad output
	output wire [3:0] row,
	// 7 seg display output
	output wire a,
    output wire b,
    output wire c,
    output wire d,
    output wire e,
    output wire f,
    output wire g,
    output wire dp,
    output wire an1,
    output wire an2,
    output wire an3,
    output wire an4
);

//definitions for 7 seg display data
    reg [3:0] Val0;
    wire [3:0] Val1;
    wire [3:0] Val2;
    wire [3:0] Val3;
	 wire dp0; 
    wire dp1;
    wire dp2;
    wire dp3;
//assign Val0 = 4'd1;
assign Val1 = 4'd2;
assign Val2 = 4'd3;
assign Val3 = 4'd4;
assign dp0 = 1'b0;
assign dp1 = 1'b1;
assign dp2 = 1'b0;
assign dp3 = 1'b1;

always@(*)
begin
Val0 = keypad_data;
end
	
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
//assign interrupt = 0;

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

// Add custom modules for interfacing

//keypad controller. when interrupt comes high, read the data on keypad_data
//the interrupt line will probably need a synchronizer
keypad_controller keypad (
    .reset(rst), 
    .clk(clk_1khz), //does this clock need a 1khz operation? faster? slower?
    .column(column),
    .row(row), 
    .interrupt(interrupt), 
    .keypad_data(keypad_data)
    );

Clock_Divider DivBy100000 (
    .reset(rst), 
    .clk_in(clk), 
    .clk_out(clk_1khz), 
    .i(i)
    );
	 
//assign leds[7:0] = i[17:9];

Mux_disp SevenSegDisplay (
    .reset(rst), 
    .clk(clk_1khz), 
    .dp0(dp0), 
    .dp1(dp1), 
    .dp2(dp2), 
    .dp3(dp3), 
    .Val0(Val0), 
    .Val1(Val1), 
    .Val2(Val2), 
    .Val3(Val3), 
    .a(a), 
    .b(b), 
    .c(c), 
    .d(d), 
    .e(e), 
    .f(f), 
    .g(g), 
    .dp(dp), 
    .an1(an1), 
    .an2(an2), 
    .an3(an3), 
    .an4(an4)
    );


// Input Ports
always @ (posedge clk)
  begin
      case (port_id[1:0])    
        // Read input_port_b at port address 01 hex
         //2'b01 : in_port <= keypad_data;
			2'b01 : in_port <= 8'b10101010;
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
