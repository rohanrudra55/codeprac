#include<stdio.h>
#define LIMIT 5 //The limit of the array
int main(){
    int given[LIMIT],pos=0,neg=0;
    printf("Enter the elements:\n");
    for(int i=0;i<LIMIT;i++)
        scanf("%d",&given[i]);
    
    for(int i=0;i<LIMIT;i++){
        if(given[i]>=0)
            pos++;
        else
            neg++;
    }
    printf("It has %d possitive and %d negative numbers.\n",pos,neg);
    return 0;
}