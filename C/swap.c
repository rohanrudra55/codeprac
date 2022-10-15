#include<stdio.h>
void swap_input(int *a,int *b);
int main(){
    int num1,num2;
    puts("Enter two number:");
    scanf("%d %d",&num1,&num2);
    printf("Number1 : %d\tNumber2 : %d\n",num1,num2);
    swap_input(&num1,&num2);
    printf("Number1 : %d\tNumber2 : %d\n",num1,num2);
}
void swap_input(int *a,int *b){
    int c=*a;
    *a=*b;
    *b=c;
}