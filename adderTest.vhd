LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY adderTest IS
END adderTest;
 
ARCHITECTURE behavior OF adderTest IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT adder
    PORT(
         CI : IN  std_logic;
         A : IN  std_logic;
         B : IN  std_logic;
         S : OUT  std_logic;
         CO : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal CI : std_logic := '0';
   signal A : std_logic := '0';
   signal B : std_logic := '0';

 	--Outputs
   signal S : std_logic;
   signal CO : std_logic;
 
   constant ci_period : time := 40 ns;
	constant a_period : time := 20 ns;
	constant b_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: adder PORT MAP (
          CI => CI,
          A => A,
          B => B,
          S => S,
          CO => CO
        );

   a_process :process
   begin
		a <= '0';
		wait for a_period/2;
		a <= '1';
		wait for a_period/2;
   end process;
	
	b_process :process
   begin
		b <= '0';
		wait for b_period/2;
		b <= '1';
		wait for b_period/2;
   end process;
	
	ci_process :process
   begin
		ci <= '0';
		wait for ci_period/2;
		ci <= '1';
		wait for ci_period/2;
   end process;

END;
