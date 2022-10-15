#include<stdio.h>
int power_calculate(int x, int r);
int main(){
    int x,r;
    printf("Enter the number and its exponent:\n");
    scanf("%d%d",&x,&r);
    printf("Answer: %d \n",power_calculate(x,r));
    return 0;
}
int power_calculate(int x, int r){
    int ans=1;
    for(int i=1;i<=r;i++)
        ans*=x;
    return ans;
}