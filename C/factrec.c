#include<stdio.h>
int fact(int f);
int main(){
    int n;
    printf("Enter a number to find the factorial: ");
    scanf("%d",&n);
    int ans=fact(n);
    printf("Factorial is: %d\n",ans);
    return 0;
}
int fact(int f){
    if(f==1)
        return 1;
    else
        return f*fact(f-1);
}
