//Question 5
#include<stdio.h>
int main(){
    printf("Enter the marks: ");
    int m;
    scanf("%d",&m);
    if(m>0 && m<40)
        printf("F");
    else if (m>39 && m<50)
        printf("D");
    else if (m>49 && m<60)
        printf("C");    
    else if (m>59 && m<70)
        printf("B");
    else if (m>69 && m<80)
        printf("A");
    else if (m>79 && m<90)
        printf("E");
    else if (m>89 && m<100)
        printf("O");
    return 0;
}