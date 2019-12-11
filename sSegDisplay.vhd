----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    02:30:28 12/11/2019 
-- Design Name: 
-- Module Name:    sSegDisplay - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity sSegDisplay is
	port ( 
		clk : in std_logic;
		number : in  std_logic_vector(7 downto 0);
		seg : out std_logic_vector(6 downto 0);
		an : out std_logic_vector(5 downto 0));
	
end sSegDisplay;

architecture Behavioral of sSegDisplay is
	signal counter: std_logic_vector(2 downto 0) := "000";
	signal currentNumber: std_logic_vector(4 downto 0);
	signal segNum: std_logic_vector(6 downto 0);
	signal intAn: std_logic_vector(5 downto 0);
begin
	an <= intAn;
	seg <= segNum;
	
	clockDivider: process(clk)
	begin
		if rising_edge(clk) then
			counter <= counter + '1';		
			if counter = "100" then
				counter <= "000";
			end if;
		end if;
	end process;
	
	numberPosition: process(counter, number)
	begin
		case counter is
			when "000" => currentNumber <= "0" & number(3 downto 0);
			when "010" => currentNumber <= "00" & number(6 downto 4);
			when "011" => currentNumber <= number(7) & "0000";
			when others => currentNumber <= "11111";
		end case;
	end process;
	
	encodeNumber: process(currentNumber)
		constant codeMinus : std_logic_vector(6 downto 0) := "1111110";
		constant codeZero : std_logic_vector(6 downto 0)  := "0000001";
		constant codeOne : std_logic_vector(6 downto 0)   := "1001111";
		constant codeTwo : std_logic_vector(6 downto 0)   := "0010010";
		constant codeThree : std_logic_vector(6 downto 0) := "0000110";
		constant codeFour : std_logic_vector(6 downto 0)  := "1001100";
		constant codeFive : std_logic_vector(6 downto 0)  := "0100100";
		constant codeSix : std_logic_vector(6 downto 0)   := "0100001";
		constant codeSeven : std_logic_vector(6 downto 0) := "0001111";
		constant codeEight : std_logic_vector(6 downto 0) := "0000000";
		constant codeNine : std_logic_vector(6 downto 0)  := "0000100";
		constant codeNone : std_logic_vector(6 downto 0)  := "1111111";
	begin
		case currentNumber is
			when "00000" => segNum <= codeZero;
			when "00001" => segNum <= codeOne;
			when "00010" => segNum <= codeTwo;
			when "00011" => segNum <= codeThree;
			when "00100" => segNum <= codeFour;
			when "00101" => segNum <= codeFive;
			when "00110" => segNum <= codeSix;
			when "00111" => segNum <= codeSeven;
			when "01000" => segNum <= codeEight;
			when "01001" => segNum <= codeNine;
			when "10000" => segNum <= codeMinus;
			when others => segNum <= codeNone;
		end case;
	end process;
	
	with counter select  
		intAn <=
			"111110" when "000",
			"111101" when "001",
			"111011" when "010",
			"110111" when "011",
			"101111" when "100",
			"011111" when "101",
			"111111" when others;
	
	
	
	
	
end Behavioral;

