library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity halfAdder is
    Port ( A : in  STD_LOGIC;
           B : in  STD_LOGIC;
           S : out  STD_LOGIC;
           C : out  STD_LOGIC);
end halfAdder;

architecture Behavioral of halfAdder is

begin
	S <= A xor B;
	C <= A and B;
end Behavioral;

