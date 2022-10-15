#include<stdio.h>
#include<math.h>
int bin(int n);
void dec(int n);
int main(){
    int n;
    scanf("%d",&n);
    // for(int i=1;i<=n;i++){
    //     int ans =bin(i);
    //     printf("%d\n",ans);
    // }
    dec(n);
    return 0;
}
int bin(int n){
    int binnum=1;
    for(int i=n;i>0;i/=2){
        // printf("i=%d\n",i);
        if(i%2==0)
            binnum=binnum*10+0;
        else
            binnum=binnum*10+1;
        // printf("bin=%d\n",binnum);
    }
    int final=0;
    for(int i=binnum;i>1;i/=10)
        final=final*10+i%10;
    return final;
}
void dec(int n){
    int decnum=0,c=0;
    for(int i=n;i>0;i/=10)
        decnum+=(i%10)*pow(2,c++);
    printf("Decimal of it is %d",decnum);
}