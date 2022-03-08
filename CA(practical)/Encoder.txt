library IEEE;
use IEEE.STD_LOGIC_1164.all;
entity encoder8_3 is
     port(
         din : in STD_LOGIC_VECTOR(7 downto 0);
         dout : out STD_LOGIC_VECTOR(2 downto 0)
         );
end encoder8_3;
architecture encoder8_3_arc of encoder8_3 is
begin
    dout <= "000" when (din="10000000") else
            "001" when (din="01000000") else
            "010" when (din="00100000") else
            "011" when (din="00010000") else
            "100" when (din="00001000") else
            "101" when (din="00000100") else
            "110" when (din="00000010") else
            "111";
end encoder8_3_arc;
