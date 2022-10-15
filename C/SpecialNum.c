#include<stdio.h>
int spcl(int n){
    int c=0,len=0,f=0;
    for(int i=n;i>0;i/=10)
        c++;
    for(int i=n;i>0;i/=10){
        int d=i%10;
        if(i==n){
            len++;
            f=d;
        }
        else{
            if(f==d)
                len++;
        }
    }
    if(len==c)
    return 1;
    else
    return 0;
}
void allP(int n){
    int c=0;
    for(int i=1;i<n;i++){
        if(spcl(i)==1)
            c++;
    }
    printf("%d",c);
}
int main(){
    int n,num=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&num);
        if(num>0 && num<10)
            printf("%d",num);
        else{
            if(spcl(num)==1)
                printf("%d",num);
            else
                allP(num);
        }
    }
    return 0;
}