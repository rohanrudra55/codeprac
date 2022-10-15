#include<stdio.h>
int fact(int n);
int main(){
    int n;
    int sum=0;
    printf("Enter the upper limit of the series: \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=fact(i)/(i);
    }
    printf("Sum of the series: %d",sum);
    return 0;
}
int fact(int n){
    int c=1;
    for(int i=1;i<=n;i++)
        c*=i;
    return c;
}