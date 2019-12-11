library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity MY_OR is
    Port ( I0 : in  STD_LOGIC;
           I1 : in  STD_LOGIC;
           O : out  STD_LOGIC);
end MY_OR;

architecture Behavioral of MY_OR is
begin
	O <= I0 or I1;
end Behavioral;

