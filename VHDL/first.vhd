--AND GATE
library IEEE;
use IEEE.STD_LOGIC_1164.All;
entity ANDGATE is
    port(   A   :   in STD_LOGIC;
            B   :   in STD_LOGIC;
            C   :   out STD_LOGIC);
            end ANDGATE;
architecture structural of ANDGATE is
begin
    C   <=  A and B;
end structural;

--OR GATE
library IEEE;
use IEEE.STD_LOGIC_1164.All;
entity XORGATE is
    port(   A   :   in STD_LOGIC; 
            B   :   in STD_LOGIC;
            C   :   out STD_LOGIC);
            end XORGATE;
architecture structural of XORGATE is
begin
    C   <=  A xor B;
end structural;

--CIRCUIT 
library IEEE;
use IEEE.STD_LOGIC_1164.All;
entity ckt1 is
    port(   A,B :   in STD_LOGIC;
            S,C :   out STD_LOGIC);
            end ckt1;
architecture structural of ckt1 is
    component ANDGATE is
        Port(   A,B : in STD_LOGIC;
                C : out STD_LOGIC);
                end component;
    component XORGATE is
        Port(   A,B : in STD_LOGIC;
            C : out STD_LOGIC);
            end component;
--        signal s1,s2,s3,s4 : STD_LOGIC;
begin
U1:ANDGATE PORT MAP(A,B,C);
U2:XORGATE PORT MAP(A,B,S); 
end structural;





--OR GATE
library IEEE;
use IEEE.STD_LOGIC_1164.All;
entity ORGATE is
    port(   A   :   in STD_LOGIC;
            B   :   in STD_LOGIC;
--            C   :   in STD_LOGIC;
        C             :   out STD_LOGIC);
            end ORGATE;
architecture structural of ORGATE is
begin
    C   <=  A or B;
end structural;

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
entity fulladder is
    Port ( Ain:in STD_LOGIC;
           Bin:in STD_LOGIC;
           Cin : in STD_LOGIC;
           SUM : out STD_LOGIC;
           Cout : out STD_LOGIC);
end fulladder;

architecture Behavioral of fulladder is
component halfadder is
Port( A,B : in STD_LOGIC;
S,C : out STD_LOGIC);
end component;
component ORGATE is
Port(A,B : in STD_LOGIC;
C : out STD_LOGIC);
end component;
signal s1,s2,s3:STD_LOGIC;
begin
U1:halfadder PORT MAP(Ain,Bin,s1,s2);
U2:halfadder PORT MAP(s1,Cin,SUM,s3);
U3:ORGATE PORT MAP(s3,s2,Cout);



end Behavioral;

|-- } } } } } } } } } } } } } } }
|--> . . . . . . . . . . . . . . .
|||||||||||||||||=-
|--> <-- 
|--> 
|--> <--
|-->     -->
|--> <--     <--
|-->     -->     -->
|--> <--     <--     <-- <*> -->
|-->     -->     -->
|--> <--     <--
|-->     -->
|--> <--
|||||||||||||||||
|--> . . . . . . . . . . . . . .
|-- } } } } } } } } } } } } } } }


library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
entity NOTGATE is
Port( A:in STD_LOGIC;
Y:out STD_LOGIC);
end NOTGATE;
architecture structural of NOTGATE is begin
Y <= NOT A;
end structural;

library IEEE;
use IEEE.STD_LOGIC_1164.ALL; entity ANDGATE is
Port( A,B:in STD_LOGIC;
Y:out STD_LOGIC);
end ANDGATE;
architecture structural of ANDGATE is begin
Y <= A AND B;
end structural;

library IEEE;
use IEEE.STD_LOGIC_1164.ALL; entity ORGATE is
Port( A,B:in STD_LOGIC;
Y:out STD_LOGIC);
end ORGATE;
architecture structural of ORGATE is begin
Y <= A OR B;
end structural;



library IEEE;
use IEEE.STD_LOGIC_1164.ALL; entity XORGATE is
Port( A,B:in STD_LOGIC;
Y:out STD_LOGIC);
end XORGATE;
architecture structural of XORGATE is begin
Y <= A XOR B;
end structural;


*-- * -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- >
* *-- * -- -- * -- -- * -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- >
* * * -- * -- -- -- -- -- -- -- * -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- >
* *-- * -- -- * -- -- * -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- >
*-- * -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- >


library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
entity HALFADDER is
Port( A,B:in STD_LOGIC;
S,C:out STD_LOGIC);
end HALFADDER;
architecture structural of HALFADDER is component ANDGATE is
Port ( A,B : in STD_LOGIC;
Y : out STD_LOGIC);
end component;
component XORGATE is
Port ( A,B : in STD_LOGIC;
Y : out STD_LOGIC);
end component;
begin
U1:ANDGATE PORT MAP(A,B,C); U2:XORGATE PORT MAP(A,B,S);
end structural;


*-- * -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- >
* *-- * -- -- * -- -- * -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- >
* * * -- * -- -- -- -- -- -- -- * -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- >
* *-- * -- -- * -- -- * -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- >
*-- * -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- >


library IEEE;
use IEEE.STD_LOGIC_1164.ALL; entity FULLADDER is
Port( A,B,C_IN:in STD_LOGIC; SUM,C_OUT:out STD_LOGIC);
end FULLADDER;
architecture structural of FULLADDER is component ORGATE is
Port ( A,B : in STD_LOGIC;
Y : out STD_LOGIC);
end component;
component HALFADDER is
Port ( A,B : in STD_LOGIC;
S,C : out STD_LOGIC);
end component;


*-- * -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- >
* *-- * -- -- * -- -- * -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- >
* * * -- * -- -- -- -- -- -- -- * -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- >
* *-- * -- -- * -- -- * -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- >
*-- * -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- >


signal S1,S2:STD_LOGIC;
begin
U1:HALFADDER PORT MAP(A,B,S1,S2); U2:HALFADDER PORT MAP(C_IN,S1,SUM); U3:ORGATE PORT MAP(S2,S1,C_OUT); end structural;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
entity ripple_carry_adder is
Port( a,b:in STD_LOGIC_VECTOR(7 downto 0); sum:out STD_LOGIC_VECTOR(7 downto 0);
-- carry :out STD_LOGIC_VECTOR(7 downto 0); cin : in STD_LOGIC;
cout: out STD_LOGIC);
end ripple_carry_adder;
architecture structural of ripple_carry_adder is component FULLADDER is
    Port( A,B,C_IN:in STD_LOGIC;
            SUM,C_OUT:out STD_LOGIC);
end component;


*-- * -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- >
* *-- * -- -- * -- -- * -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- >
* * * -- * -- -- -- -- -- -- -- * -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- >
* *-- * -- -- * -- -- * -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- >
*-- * -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- >


signal carry: STD_LOGIC_VECTOR(6 downto 0); 
begin
    U1: FULLADDER port map(a(0),b(0),cin,sum(0),carry(0));
    U2: for i in 1 to 6 generate
    U3: FULLADDER port map (a(i),b(i),carry(i-1),sum(i),carry(i)); 
    end generate;
    U4: FULLADDER port map (a(7),b(7),carry(6),sum(7),cout); 
end structural;