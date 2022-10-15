#include<stdio.h>
#include<math.h>
void bin(int a);
void dec(int b);
int main(){
    int n;
    char ch;
    printf("Enter \n'B' for Binary Convertion\n'D' for Decimal Convertion\n");
    scanf("%c",&ch);
    printf("Enter a number:\n");
    scanf("%d",&n);
    switch (ch)
    {
    case 'B':
        bin(n);
        break;
    case 'D':
        dec(n);
        break;
    default:
        printf("Invalid Input :(\n");
        break;
    }
    return 0;
}
void bin(int a){
    int conv=0,c=0;
    for(int i=a;i>0;i/=2){
        if(i%2==0)
            conv=conv+pow(10,c++)*0;
        else 
            conv=conv+pow(10,c++)*1;
    }
    printf("The binary form of the given decimal is %d\n",conv);
}
void dec(int b){
    int conv=0,p=0;
    for(int i=b;i>0;i/=10){
        int d=i%10;
        conv+=d*pow(2,p++);
    }
    printf("The decimal form of the given binary is %d\n",conv);
}