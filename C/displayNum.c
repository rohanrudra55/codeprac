#include<stdio.h>
int main(){
    int f=0;
    for(int i=1;i<=100;i++){
        if((i%3!=0) && (i%4!=0) && (i%5!=0)){
            f++;
            printf("%2d ",i);
        }
        if(f==10){
            f=0;
            printf("\n");
        }
    }
}