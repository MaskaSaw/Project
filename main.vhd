library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_unsigned.ALL;
entity main is
	 Generic (n : integer := 8);
    Port ( A : in  STD_LOGIC_VECTOR (n-1 downto 0);
           B : in  STD_LOGIC_VECTOR (n-1 downto 0);
			  Clk: in STD_LOGIC;       
           add_button : in  STD_LOGIC;
           diff_button : in  STD_LOGIC;
           rst_button : in  STD_LOGIC;
           back_button : in  STD_LOGIC;
           res_button : in  STD_LOGIC;
			  seg : out std_logic_vector(6 downto 0);
			  an : out std_logic_vector(7 downto 0));
end main;

architecture Behavioral of main is
	component sSegDisplay
		port (
			clk : in std_logic;
			number : in  std_logic_vector(7 downto 0);
			minus : in std_logic;
			seg : out std_logic_vector(6 downto 0);
			an : out std_logic_vector(7 downto 0));
	end component;

	component nAdder
		Generic (n : integer);
		Port ( A : in  STD_LOGIC_VECTOR(n-1 downto 0);
				 B : in  STD_LOGIC_VECTOR(n-1 downto 0);
				 S : out  STD_LOGIC_VECTOR(n-1 downto 0);
				 CO : out  STD_LOGIC
		);
	end component;
	
	component codeConverter
		Generic (n : integer);
		Port ( sign : in  STD_LOGIC;
           in_vector : in  STD_LOGIC_VECTOR (n-1 downto 0);
           out_vector : out  STD_LOGIC_VECTOR (n-1 downto 0)
		);
	end component;

	type states is (S0, S1, S2);
	signal current_state, next_state: states := S0;
	signal operation: std_logic := '0';
	signal result, sum, preRes: std_logic_vector(n-1 downto 0);
	signal tB, tSum : std_logic_vector(n-1 downto 0);
	signal over, sign_res : std_logic := '0';
begin
	
	U0: codeConverter Generic map (n => n)
		Port map(sign => operation, in_vector => B, out_vector => tB);
	
	U1: nAdder Generic map (n => n) 
		Port map (A => A, B => tB, S => tSum, CO => over);
			
	U3: codeConverter Generic map (n => n)
		Port map(sign => tSum(n-1), in_vector => tSum, out_vector => preRes);
		
	U4: sSegDisplay port map (Clk, result, sign_res, seg, an);
	
	FSM_dff: process(Clk, next_state, rst_button)
	begin
		if rst_button = '1' then 
			current_state <= S0;
		elsif rising_edge(Clk) then
			current_state <= next_state;
		end if;
	end process;
	
	FSM_gamma: process(current_state, add_button, diff_button, rst_button, back_button, res_button)
	begin
		case current_state is
			when S0 => if add_button = '1' then
								next_state <= S1;
								operation <= '0';
							elsif diff_button = '1' then
								next_state <= S1;
								operation <= '1';
							else 
								next_state <= S0;
							end if;
			when S1 => if res_button = '1' then
								next_state <= S2;
							elsif back_button = '1' then
								next_state <= S0;
								operation <= '1';
							elsif rst_button = '1' then
								next_state <= S0;
								operation <= '0';
							else
								next_state <= S1;
							end if;
			when S2 => if back_button = '1' then
								next_state <= S1;
							elsif rst_button = '1' then
								next_state <= S0;
								operation <= '0';
							else
								next_state <= S2;
							end if;
			when others => next_state <= S0;
		end case;
	end process;
	
	FSM_phi: process(current_state, A, B)
	begin
		case current_state is
			when S0 =>
				sign_res <= '0';
				result <= A;
			when S1 => 
				result <= B;
				sign_res <= '0';
			when S2 => 
				result <= preRes;
				sign_res <= tsum(n-1);
		end case;
	end process;
 
end Behavioral;