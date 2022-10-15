n=int(input())
c=1
for i in range(1,n+1):
    for j in range(1,i+1):
        value=c*c
        c+=1
        print(value,end=' ')
    if(i != n):
        print()
