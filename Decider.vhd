library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Decider is
	Generic (N : integer := 8);
	Port ( B : in  STD_LOGIC_VECTOR (N-1 downto 0);
			 Load : in  STD_LOGIC_VECTOR (N-1 downto 0);
			 Button : in STD_LOGIC;
			 Pout : out STD_LOGIC_VECTOR (N-1 downto 0));
end Decider;

architecture Behavioral of Decider is
	signal p : STD_LOGIC_VECTOR (N-1 downto 0);
begin
   process (Button)
	begin
		if button = '1' then
			p <= Load;
		else
			p <= B;
		end if;
	end process;
	
	Pout <= p;
end Behavioral;

