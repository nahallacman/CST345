  // Interrupt (low) is  
  // defined at signal declaration.
  always @(posedge clk or posedge interrupt_ack) 
  begin
    if(interrupt_ack == 1'b1) 
      begin
        interrupt <= 1'b0;
      end
    else if(interrupt_event == 1'b1) 
      begin
        interrupt <= 1'b1;
    	end
    else 
      begin
        interrupt <= interrupt;
    	end
  end

    else 
      begin
        interrupt <= interrupt;
    	end
  end
