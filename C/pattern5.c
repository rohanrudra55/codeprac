#include<stdio.h>
void main(){
    printf("Enter a number: ");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int space=1;space<i;space++)
            printf(" ");
        for(int j=i;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }
}

// *****
//  ****
//   ***
//    **
//     *