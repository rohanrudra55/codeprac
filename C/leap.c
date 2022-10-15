//Question 3
#include<stdio.h>
int main(){
    printf("Enter a year:");
    int a;
    scanf("%d",&a);
    if((a%4==0 && a%100!=0) || a%400==0)
        printf("Leap year");
    else
        printf("Not a leap year");
}