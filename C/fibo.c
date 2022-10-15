#include<stdio.h>
int main(){
    printf("Enter the limiting number: ");
    int n,a=1,b=0,c=0;
    scanf("%d",&n);
    for(int i =1;c<=n;i++){
        printf("%d \n",c);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}