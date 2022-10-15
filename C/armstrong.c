#include<stdio.h>
#include<math.h>
int main(){
    printf("Enter a two to four digit number:\n");
    int n,sum=0,c=0,i=0;
    scanf("%d",&n);
    c=n;
    // for(int i=n;i>0;i/=10)
    //     c++;
    // for(int i=n;i>0;i/=10){
    //     int d= i%10,a=1;
    //     for(int j=1;j<=c;j++)
    //         a*=d;
    //     sum+=a;
    // }
    //Without Loop:----------------------------------------------
    if(c>999 && c<10000){
        sum+=pow((c%10),4);
        c=c/10;
        i=4;
    }
    else
        i=3;
    if(c>99 && c<1000){
        sum+=pow((c%10),i);
        c=c/10;
    }
    else
        i=2;
    if(c>9 && c<100){
        sum+=pow((c%10),i);
         c=c/10;
        sum+=pow((c),i);
    }
    if(sum==n)
        printf("Its an armstrong number");
    else
        printf("Its not an armstrong");
    return 0;
}