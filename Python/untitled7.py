

def magic_square(n):
    magicsq = []
    for i in range(n):
        l=[]
        for j in range(n):
            l.append(0)
        magicsq.append(l)
            
    i=n//2
    j=n-1
    num=n*n
    count=1
    while(count<=num):
        if(i==-1 and j==n):
            i=0
            j=n-2
        else:
            if(j==n):
                j=0
            if(i<0):
                i=n-1
        if(magicsq[i][j]!=0):
            j=j-2
            i=i+1
            continue
        else:
            magicsq[i][j]=count
            count+=1
        i=i-1
        j=j+1
     
    for i in range(n):
        for j in range(n):
            print(magicsq[i][j]," ",end='')
        print()
        
    
magic_square(7)