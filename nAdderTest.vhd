LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
use ieee.std_logic_unsigned.ALL;

ENTITY nAdderTest IS
END nAdderTest;
 
ARCHITECTURE behavior OF nAdderTest IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT nAdder
    PORT(
         A : IN  std_logic_vector(3 downto 0);
         B : IN  std_logic_vector(3 downto 0);
         S : OUT  std_logic_vector(3 downto 0);
         CO : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal A : std_logic_vector(3 downto 0) := (others => '0');
   signal B : std_logic_vector(3 downto 0) := (others => '0');

 	--Outputs
   signal S : std_logic_vector(3 downto 0);
   signal CO : std_logic;
 
   constant a_period : time := 10 ns;
	constant b_period : time := 20 ns;
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: nAdder PORT MAP (
          A => A,
          B => B,
          S => S,
          CO => CO
        );

   a_process :process
   begin
		wait for a_period;
		a <= a + "1";
		
   end process;
	
	b_process :process
   begin
		wait for b_period;
		b <= b + "1";
   end process;
END;
