#include<stdio.h>
void main(){
    printf("Enter a number : ");
    int n,a=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==0)
            a=1;
        for(int j=1;j<=i;j++){
        printf("%d",((j+a)%2));
        }
        printf("\n");
        a=0;
    }
}
// 1
// 01
// 101
// 0101
// 10101