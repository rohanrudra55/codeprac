#include<stdio.h>
int fact(int n);
int main(){
    int n;
    printf("Enter a number to find the factorial:\n");
    scanf("%d",&n);
    int ans = fact(n);
    printf("The factorial is %d \n",ans);
    return 0;
}
int fact(int n){
    int c=1;
    for(int i=1;i<=n;i++)
        c*=i;
    return c;
}