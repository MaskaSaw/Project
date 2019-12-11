LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY halfAdderTest IS
END halfAdderTest;
 
ARCHITECTURE behavior OF halfAdderTest IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT halfAdder
    PORT(
         A : IN  std_logic;
         B : IN  std_logic;
         S : OUT  std_logic;
         C : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal A : std_logic := '0';
   signal B : std_logic := '0';

 	--Outputs
   signal S : std_logic;
   signal C : std_logic; 
 
   constant a_period : time := 10 ns;
	constant b_period : time := 20 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: halfAdder PORT MAP (
          A => A,
          B => B,
          S => S,
          C => C
        );

   -- Stimulus process
   a_proc: process
   begin		
      a <= '0';
      wait for a_period / 2;	
		a <= '1';
		wait for a_period / 2;
   end process;
	
	b_proc: process
   begin		
      b <= '0';
      wait for b_period / 2;	
		b <= '1';
		wait for b_period / 2;
   end process;

END;
