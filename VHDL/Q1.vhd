
library IEEE;
use IEEE.STD_LOGIC_1164.All;
entity ANDGATE is
    port(   A   :   in STD_LOGIC;
            B   :   in STD_LOGIC;
            C   :   out STD_LOGIC);
            end ANDGATE;
architecture structural of NANDGATE is
begin
    C   <=  A and B;
end structural;

library IEEE;
use IEEE.STD_LOGIC_1164.All;
entity NOTGATE is
	port( 	A	: 	in STD_LOGIC;
    		B	:	out STD_LOGIC);
architecture structural of NOTGATE is
begin
    B   <=  NOT A;
end structural;



library IEEE;
use IEEE.STD_LOGIC_1164.All;
entity ORGATE is
	port( 	A	: 	in STD_LOGIC;
    		B	:	in STD_LOGIC;
    		C	:	out STD_LOGIC);
architecture structural of ORGATE is
begin
    C   <=  A or B;
end structural;

library IEEE;
use IEEE.STD_LOGIC_1164.All;
entity ckt1 is
    port(   A,B,C :   in STD_LOGIC;
            Y :   out STD_LOGIC);
            end ckt1;
architecture structural of ckt1 is
    component ANDGATE is
        Port(   A,B : in STD_LOGIC;
                C : out STD_LOGIC);
                end component;
    component ORGATE is
        Port(   A,B : in STD_LOGIC;
            C : out STD_LOGIC);
            end component;
         component NOTGATE is
        Port(   A : in STD_LOGIC;
            B : out STD_LOGIC);
            end component;
        signal s1,s2,s3,s4 : STD_LOGIC;
begin
U1:ANDGATE PORT MAP(A,B,s1);
U2:NOTGATE PORT MAP(C,s2);
U3:ORGATE PORT MAP(s1,s2,s3);
U4:NOTGATE PORT MAP(s3,Y);
end structural;