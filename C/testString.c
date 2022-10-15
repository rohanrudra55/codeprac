#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
   int n[]={84,30,6,9,8,7,6,5,4,12,2,1},t=0;
   for(int i=0;i<12;i++){
       for(int j=0;j<11;j++){
           if(n[j]>n[j+1]){
               t=n[j];
               n[j]=n[j+1];
               n[j+1]=t;
           }
       }
   }
   int a=2,b=5;
   float c=b/2.0;
   printf("%f",c);
   for(int i=0;i<12;i++)
        printf("%d\n",n[i]);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}