library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_unsigned.ALL;

entity codeConverter is
	 Generic (n : integer := 8);
    Port ( sign : in  STD_LOGIC;
           in_vector : in  STD_LOGIC_VECTOR (n-1 downto 0);
           out_vector : out  STD_LOGIC_VECTOR (n-1 downto 0));
end codeConverter;

architecture Behavioral of codeConverter is
	signal temp: STD_LOGIC_VECTOR (n-1 downto 0) := (others => '0');
begin
	out_vector <= (not in_vector) + "1" when sign = '1' else in_vector;
end Behavioral;

