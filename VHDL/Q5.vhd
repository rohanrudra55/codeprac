library IEEE;
use IEEE.STD_LOGIC_1164.All;
entity NANDGATE is
    port(   A   :   in STD_LOGIC;
            B   :   in STD_LOGIC;
            C   :   out STD_LOGIC);
            end NANDGATE;
architecture structural of NANDGATE is
begin
    C   <=  A nand B;
end structural;
library IEEE;
use IEEE.STD_LOGIC_1164.All;
entity NORGATE is
	port( 	A	: 	in STD_LOGIC;
    		B	:	in STD_LOGIC;
    		C	:	out STD_LOGIC);
architecture structural of NORGATE is
begin
    C   <=  A nor B;
end structural;
library IEEE;
use IEEE.STD_LOGIC_1164.All;
entity ckt1 is
    port(   A,B,C,D :   in STD_LOGIC;
            Y :   out STD_LOGIC);
            end ckt1;
architecture structural of ckt1 is
    component NANDGATE is
        Port(   A,B : in STD_LOGIC;
                C : out STD_LOGIC);
                end component;
    component NORGATE is
        Port(   A,B : in STD_LOGIC;
            C : out STD_LOGIC);
            end component;
            signal s1,s2,s3,s4 : STD_LOGIC;
begin
U1:NORGATE PORT MAP(A,B,s1);
U2:NANDGATE PORT MAP(s1,c,s2);
U3:NANDGATE PORT MAP(s2,D,Y);
end structural;