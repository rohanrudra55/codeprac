
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int a=n+1;
    int steps=n*2-1;
    for(int i=1;i<=steps;i++){
        n=a;
        for(int j=1;j<=steps;j++){
            if(i>=j )
                n--;
            if(j>=(steps-(i-2)))
                n++;
            printf("%d ",n);
            
        }
        printf("\n");
    }
    return 0;
}