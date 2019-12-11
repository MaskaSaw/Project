LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 use ieee.std_logic_unsigned.ALL;

ENTITY main_test IS
END main_test;
 
ARCHITECTURE behavior OF main_test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT main
    PORT(
         A : IN  std_logic_vector(7 downto 0);
         B : IN  std_logic_vector(7 downto 0);
         Clk : IN  std_logic;
         Rst : IN  std_logic;
         add_button : IN  std_logic;
         diff_button : IN  std_logic;
         rst_button : IN  std_logic;
         back_button : IN  std_logic;
         res_button : IN  std_logic;
         Pout : OUT  std_logic_vector(7 downto 0);
			O: out std_logic
        );
    END COMPONENT;
    
   --Inputs
   signal A : std_logic_vector(7 downto 0) := (others => '0');
   signal B : std_logic_vector(7 downto 0) := (others => '0');
   signal Clk : std_logic := '0';
   signal Rst : std_logic := '0';
   signal add_button : std_logic := '0';
   signal diff_button : std_logic := '0';
   signal rst_button : std_logic := '0';
   signal back_button : std_logic := '0';
   signal res_button : std_logic := '0';
	
 	--Outputs
   signal result : std_logic_vector(7 downto 0);
	signal o : std_logic := '0';

   -- Clock period definitions
   constant Clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: main PORT MAP (
          A => A,
          B => B,
          Clk => Clk,
          Rst => Rst,
          add_button => add_button,
          diff_button => diff_button,
          rst_button => rst_button,
          back_button => back_button,
          res_button => res_button,
          Pout => result,
			 O => o
        );

   -- Clock process definitions
   Clk_process :process
   begin
		Clk <= '0';
		wait for Clk_period/2;
		Clk <= '1';
		wait for Clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin
		A <= "00001011";
		B <= "00001101";
		wait for 100 ns;
		diff_button <= '1';
		wait for 20ns;
		diff_button <= '0';
		wait for 20 ns;
		
		res_button <= '1';
		wait for 20ns;
		res_button <= '0';
		wait for 20 ns;
		
		rst_button <= '1';
		wait for 20ns;
		rst_button <= '0';
   end process;

END;
