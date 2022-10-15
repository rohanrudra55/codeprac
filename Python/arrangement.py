


def main():
    
    m=int(input())
    n=int(input())
    answer=1
    if((m+n)<21 and m>n ):
        answer=int(fact(m)*fact(m+1)/fact(m+1-n))
        print(answer)
    else:
        print("invalid")
    
    
def fact(n):
     a=1
     for i in range (1,n+1):
        a=a*i
     
     return a






main()
# print(fact(8))