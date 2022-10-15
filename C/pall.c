#include<stdio.h>
int main(){
    printf("Enter the number:\n");
    int n,reverse=0;
    scanf("%d",&n);
    for(int i=n;i>0;i/=10){
        int d=i%10;
        reverse=reverse*10+d;
    }
    if(reverse==n)
        printf("Its a palindrone");
    else
        printf("Not a palindrone");
    return 0;
}