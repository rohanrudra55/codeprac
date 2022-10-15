#include<stdio.h>
#include<math.h>
#define PI 3.14
int circle(int r);
int main(){
    int i;
    printf("Enter the radius of the circle: ");
    scanf("%d",&i);
    printf("Area of circles: \n");
    int temp=circle(i+1);
    return 0;
}
int circle(int d){
    if(d==1){
        return d;
    }
    else{
        printf("Area of radius %d is %0.2f \n",(d-1),(PI*pow(circle(d-1)/2.0,2)));
        return d;
    }
}