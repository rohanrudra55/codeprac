#include<stdio.h>
int fibbo(int a,int b,int c);
int n;
int main(){
    printf("Enter a number to find the factorial: ");
    scanf("%d",&n);
    printf("Fibbonaci is:\n");
    int temp=fibbo(1,0,0);
    return 0;
}
int fibbo(int a,int b,int c){
    if(c==n){
        printf("\n");
        return 0;
    }
    else{
        printf("%d\t",b);
        fibbo(b,(a+b),(c+1));
        return 0;
    }
}
