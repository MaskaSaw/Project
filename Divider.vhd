
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Divider is
	Generic ( n : integer := 8);
	Port ( A : in std_logic_vector(n-1 downto 0);
			 B : in std_logic_vector(n-1 downto 0);
			 Output :  out std_logic_vector(n-1 downto 0);
			 IntOutput : out integer range 0 to 127);
end Divider;

architecture Behavioral of Divider is

	signal first_sign, second_sign : std_logic := '0';
	signal first_number, second_number : std_logic_vector (n-2 downto 0) := (others => '0');
	signal a_int, b_int, pre_result_int : integer range 0 to 127 := 0;
	signal pre_result : std_logic_vector (6 downto 0) := (others => '0');
	signal result : std_logic_vector (n-1 downto 0) := (others => '0');
begin
	Main : process (A,B, first_number, second_number, first_sign, pre_result, a_int, b_int, pre_result_int)
	begin
		for i in 0 to 6 loop
				first_number(i) <= A(i);
				second_number(i) <= B(i);
		end loop;
		first_sign <= A(n-1);
		second_sign <= B(n-1);
		a_int <= conv_integer(first_number);
		b_int <= conv_integer(second_number);
		pre_result_int <= (a_int / b_int);
		pre_result <= conv_std_logic_vector(pre_result_int,7);
		if first_sign = second_sign then 
			result(7) <= '0';
		else
			result(7) <= '1';
		end if;
		for i in 0 to 6 loop
			result(i) <= pre_result(i);
		end loop;
	end process;
	
	IntOutput <= pre_result_int;
	Output <= result;
end Behavioral;

