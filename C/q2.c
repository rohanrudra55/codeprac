//Sum of four numbers and average
#include<stdio.h>
int main(){
    printf("Enter four numbers:");
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int sum= a+b+c+d;
    int avg= sum/4;
    printf("\t Sum:%d\n\t Average:%d",sum,avg);
}