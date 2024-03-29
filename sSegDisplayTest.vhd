--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   07:05:28 12/11/2019
-- Design Name:   
-- Module Name:   C:/dd/Lab2Dop/sSegDisplayTest.vhd
-- Project Name:  Lab2Dop
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: sSegDisplay
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.std_logic_unsigned.ALL;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY sSegDisplayTest IS
END sSegDisplayTest;
 
ARCHITECTURE behavior OF sSegDisplayTest IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT sSegDisplay
    PORT(
         clk : IN  std_logic;
         number : IN  std_logic_vector(7 downto 0);
         seg : OUT  std_logic_vector(6 downto 0);
         an : OUT  std_logic_vector(5 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal number : std_logic_vector(7 downto 0) := (others => '0');

 	--Outputs
   signal seg : std_logic_vector(6 downto 0);
   signal an : std_logic_vector(5 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: sSegDisplay PORT MAP (
          clk => clk,
          number => number,
          seg => seg,
          an => an
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
	
	number_process :process
   begin
		number <= number + '1';
		wait for clk_period * 2/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
