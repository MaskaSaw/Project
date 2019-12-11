LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
use ieee.std_logic_unsigned.ALL;
 
ENTITY converter_test IS
END converter_test;
 
ARCHITECTURE behavior OF converter_test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT codeConverter
    PORT(
         sign : IN  std_logic;
         in_vector : IN  std_logic_vector(7 downto 0);
         out_vector : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal sign : std_logic := '0';
   signal in_vector : std_logic_vector(7 downto 0) := "00000000";

 	--Outputs
   signal out_vector : std_logic_vector(7 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: codeConverter PORT MAP (
          sign => sign,
          in_vector => in_vector,
          out_vector => out_vector
        );
	
	stim_proc: process
   begin	
		in_vector <= in_vector + "1";
      wait for 20 ns;	
   end process;
	
	stim_proc1: process
   begin	
		sign <= '0';
      wait for 100 ns;	
		sign <= '1';
      wait for 100 ns;	
   end process;

END;
