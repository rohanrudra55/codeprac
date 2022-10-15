#include<stdio.h>
void main(){
    printf("Enter a number : ");
    int n,a=0;
    scanf("%d",&n);
    for(int i=1;i<=(n*2-1);i++){
        for(int space=1;space<i;space++){
            if(space<=(2*n-i-1))
                printf(" ");
        }
        a=(i<=n)?i:(2*n-i);
        for(int j=a;j<=n;j++)
            printf("*");
        printf("\n");

    }
}
// *
//  **
//   ***
//    ****
//     ****
//    ***
//   **
//  *

// *****
//  ****
//   ***
//    **
//     *
//    **
//   ***
//  ****
// *****