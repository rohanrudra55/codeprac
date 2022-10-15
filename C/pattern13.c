#include<stdio.h>
void main(){
    printf("Enter a number: ");
    int n,odd=1,gap=0;
    scanf("%d",&n);
    gap=2*n+1;
    for(int i=1;i<=(2*n-1);i++){
        for(int j=1;j<(odd*2+gap);j++){
            if(j>odd && j<(odd+gap) )
                printf(" ");
            else
                printf("%d",odd);
        }
        gap+=(i<n)?(-3):3;
        odd+=(i<n)?2:(-2);
        printf("\n");
    }
}
// 1          1
// 333       333
// 55555    55555
// 7777777 7777777
// 9999999999999999
// 7777777 7777777
// 55555    55555
// 333       333
// 1          1