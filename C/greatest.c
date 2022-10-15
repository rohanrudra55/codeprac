//Question 4
#include<stdio.h>
int main(){
    // printf("Enter three numbers:");
    // int a ,b,c;
    // scanf("%d%d%d",&a,&b,&c);
    // if(a>b && a>c)
    //     printf("Greatest:%d",a);
    // else{
    //     if(b>a&&b>c)
    //         printf("Greatest:%d",b);
    //     else
    //         printf("Greatest:%d",c);
    // }
    int a=5;
    int b=++a + a++;
    printf("%d",b);
    return 0;
}
