//Question 2
#include<stdio.h>
#include<math.h>
int main(){
    printf("Enter three numbers: ");
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    double r=b*b-4*a*c;
    if(r<0)
        printf("There are no real roots");
    else if(r==0){
        double root=(-b)/(2*a);
        printf("There are one real root which is %f",root);
    }
    else{
        double x=(-b+sqrt(r))/(2*a);
        double y=(-b-sqrt(r))/(2*a);
        printf("X:%f and Y:%f",x,y);
    }
    
    return 0;
}