#include<stdio.h>
int main(){
    printf("Enter a number:");
    int a;
    scanf("%d",&a);
    if(a%2==0){
        int s=a%2;
        printf("Even%d",s);
    }
    else{
        printf("Odd");
    }

    return 0;
}