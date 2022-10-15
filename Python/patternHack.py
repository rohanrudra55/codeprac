n=int(input())
m=n*3
inc=+2
j=1
char1='.|.'
for i in range(n):
    if (i+1) == ((n+1)/2):
        print('WELCOME'.center(m,'-'))
        inc=-2
        j=j+inc
    else:
        print((char1*j).center(m,'-'))
        j=j+inc
    