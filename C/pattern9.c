#include<stdio.h>
void main(){
    printf("Enter a number: ");
    int n,a=1,b=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",b);
            b=a+b;
            a=b-a;
            // b=c;
        }
        printf("\n");
    }
}
// 0 
// 1 1 
// 2 3 5 
// 8 13 21 34 
// 55 89 144 233 377 