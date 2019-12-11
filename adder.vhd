library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity adder is
    Port ( CI : in  STD_LOGIC;
           A : in  STD_LOGIC;
           B : in  STD_LOGIC;
           S : out  STD_LOGIC;
           CO : out  STD_LOGIC);
end adder;

architecture Behavioral of adder is
	component halfAdder
		Port (A: in std_logic;
				B: in std_logic;
				S: out std_logic;
				C: out std_logic);
	end component;
	
	component MY_OR
		Port (I0: in std_logic;
				I1: in std_logic;
				O: out std_logic);
	end component;
	
	signal ab_c, ab_s, abCi_c: std_logic := '0'; 
begin
	U1: halfAdder port map (A => A, B => B, S => ab_s, C => ab_c);
	U2: halfAdder port map (A => CI, B => ab_s, S => S, C => abCi_c);
	U3: MY_OR port map (ab_c, abCi_c, CO);
end Behavioral;

