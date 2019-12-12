library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity nAdder is
	 Generic ( n : integer := 8);
    Port ( A : in  STD_LOGIC_VECTOR(n-1 downto 0);
           B : in  STD_LOGIC_VECTOR(n-1 downto 0);
			  L : in  STD_LOGIC_VECTOR(n-1 downto 0);
			  D : in STD_LOGIC;
           S : out  STD_LOGIC_VECTOR(n-1 downto 0);
			  CO : out  STD_LOGIC);
end nAdder;

architecture Behavioral of nAdder is
	
	component adder
		port(CI : in  STD_LOGIC;
           A : in  STD_LOGIC;
           B : in  STD_LOGIC;
           S : out  STD_LOGIC;
           CO : out  STD_LOGIC);
	end component;
	
	component Decider
		port(B : in  STD_LOGIC_VECTOR (N-1 downto 0);
			  Load : in  STD_LOGIC_VECTOR (N-1 downto 0);
			  Button : in STD_LOGIC;
			  Pout : out STD_LOGIC_VECTOR (N-1 downto 0));
	end component;
	
	signal tB : std_logic_vector(n-1 downto 0) := (others => '0');
	signal carryOver: std_logic_vector(n-1 downto 0) := (others => '0');
	signal Sadd: std_logic_vector(n-1 downto 0) := (others => '0');
begin
	U1: Decider port map (B, L, D, tB);
	U2: adder port map ('0', a(0), tB(0), Sadd(0), carryOver(0));
	U3: for i in 1 to n-1 generate
		G: adder port map (carryOver(i-1), a(i), tB(i), Sadd(i), carryOver(i));
	end generate;
	CO <= carryOver(n-1);
	S <= Sadd;
end Behavioral;

