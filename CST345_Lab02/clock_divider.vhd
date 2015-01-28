---------------------------------------------------------------
--Lab 4 - Clock Divider
--Wesley Maxey
---------------------------------------------------------------

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity clock_divider is
    Port ( clk_in : in  STD_LOGIC;
           clk_out : out  STD_LOGIC);
end clock_divider;

architecture Behavioral of clock_divider is
	signal temp: STD_LOGIC;
	signal counter : integer range 0 to 12500 := 0;
begin

	process (clk_in) begin
		if rising_edge(clk_in) then
			if (counter = 12500) then
				temp <= NOT(temp);
				counter <= 0;
			else
				counter <= counter + 1;
			end if;
		end if;
	end process;
    
	clk_out <= temp;
	 
end Behavioral;

