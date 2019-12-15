
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY MultiplierTB IS
END MultiplierTB;
 
ARCHITECTURE behavior OF MultiplierTB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Multiplier
    PORT(
         A : IN  std_logic_vector(3 downto 0);
         B : IN  std_logic_vector(3 downto 0);
         Output : OUT  std_logic_vector(7 downto 0);
         aT : OUT  std_logic_vector(2 downto 0);
         bT : OUT  std_logic_vector(2 downto 0);
         pre_res : OUT  std_logic_vector(5 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal A : std_logic_vector(3 downto 0) := "1010";
   signal B : std_logic_vector(3 downto 0) := "0010";

 	--Outputs
   signal Output : std_logic_vector(7 downto 0);
   signal aT : std_logic_vector(2 downto 0);
   signal bT : std_logic_vector(2 downto 0);
   signal pre_res : std_logic_vector(5 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Multiplier PORT MAP (
          A => A,
          B => B,
          Output => Output,
          aT => aT,
          bT => bT,
          pre_res => pre_res
        );

   -- Clock process definitions
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      -- insert stimulus here 

      wait;
   end process;

END;
