#include<stdio.h>
void main(){
    printf("Enter a number: ");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int space=i;space<n;space++)
            printf(" ");
        for(int j=1;j<=i;j++)
            printf("* ");
        
        printf("\n");
    }
}