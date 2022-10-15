n=int(input())+1
fgap=len(str(n-1))+1
gap=len(bin(n-1))-1
print(gap)
for i in range(1,n):
    print(str(i).rjust(gap-1,' '),end='')
    print(oct(i)[2:].rjust(gap,' '),end='')
    print(hex(i)[2:].upper().rjust(gap,' '),end='')
    print(bin(i)[2:].rjust(gap,' '),end='')
    print()