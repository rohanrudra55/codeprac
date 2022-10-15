


def main(): 
    m=int(input())
    n=int(input())
    answer=0
    if((m+n)<21 and m>n ):
        answer=fact(m)*fact(m+1)/fact(n)
    else:
        print("invalid")
    print(answer)
    
def fact(n):
    a=1
    for i in range (1,n+1):
        a=a*i
    return a