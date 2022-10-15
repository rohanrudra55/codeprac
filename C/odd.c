#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the number of times: \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2!=0)
            sum+=i;
    }
    printf("Sum of the odd numbers anong the inputs %d",sum);
    return 0;
}