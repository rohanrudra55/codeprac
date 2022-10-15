#include<stdio.h>
#include<math.h>
void main(){
    printf("Enter a number within 1 to 5: ");
    int n,a=1,b=0;
    scanf("%d",&n);
    for(int i=1;i<=(n*2-1);i++){
        if(i<=n)
            a=(pow(10,i)-1)/9;
        else
            a=(pow(10,(2*n-i))-1)/9;
        b=pow(a,2);
        printf("%d \n",b);
    }
}
// 1 
// 121 
// 12321 
// 1234321 
// 123454321 
// 1234321 
// 12321 
// 121 
// 1 