library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Multiplier is
	Generic (N : integer := 4);
	Port ( A : in std_logic_vector ((n-1) downto 0);
				B : in std_logic_vector ((n-1) downto 0);
				Output : out std_logic_vector ((2*n-1) downto 0));
end Multiplier;

architecture Behavioral of Multiplier is

	signal first_sign, second_sign : std_logic ;
	signal first_number, second_number : std_logic_vector (2 downto 0);
	signal pre_result : std_logic_vector (5 downto 0) := (others => '0');
	signal result : std_logic_vector (2*n-1 downto 0) := (others => '0');
begin
	Main : process (A,B, first_number, second_number, pre_result)
	begin
		for i in 0 to 2 loop
			first_number(i) <= A(i);
			second_number(i) <= B(i);
		end loop;
		first_sign <= A(n-1);
		second_sign <= B(n-1);
		pre_result <= first_number * second_number;
		if first_sign = second_sign then 
			result(7) <= '0';
		else
			result(7) <= '1';
		end if;
		for i in 0 to 5 loop
			result(i) <= pre_result(i);
		end loop;
		result(6) <= '0';
	end process;
	
	Output <= result;
end Behavioral;

