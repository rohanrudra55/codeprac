#include<stdio.h>
void main(){
    printf("Enter a number: ");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int space=i;space<n;space++)
            printf("  ");
        for(int j=i;j>1;j--)
            printf("%d ",j);
        for(int j=1;j<=i;j++)
            printf("%d ",j);
        printf("\n");
        }
}

/*
        1 
      2 1 2 
    3 2 1 2 3 
  4 3 2 1 2 3 4 
5 4 3 2 1 2 3 4 5 
*/ 
