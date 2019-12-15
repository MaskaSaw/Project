
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY DividerTB IS
END DividerTB;
 
ARCHITECTURE behavior OF DividerTB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Divider
    PORT(
         A : IN  std_logic_vector(7 downto 0);
         B : IN  std_logic_vector(7 downto 0);
         Output : OUT  std_logic_vector(7 downto 0);
         IntOutput : OUT  integer
        );
    END COMPONENT;
    

   --Inputs
   signal A : std_logic_vector(7 downto 0) := "00000010";
   signal B : std_logic_vector(7 downto 0) := "00000001";

 	--Outputs
   signal Output : std_logic_vector(7 downto 0);
   signal IntOutput : integer;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Divider PORT MAP (
          A => A,
          B => B,
          Output => Output,
          IntOutput => IntOutput
        );

   -- Clock process definition
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      -- insert stimulus here 

      wait;
   end process;

END;
