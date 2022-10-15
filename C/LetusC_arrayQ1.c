#include<stdio.h>
#define LIMIT 5 //The limit of the array
int main(){
    int given[LIMIT],element,times=0;
    printf("Enter the elements:\n");
    for(int i=0;i<LIMIT;i++)
        scanf("%d",&given[i]);
    printf("Enter the number to be searched: ");
    scanf("%d",&element);
    for(int i=0;i<LIMIT;i++){
        if(given[i]==element)
            times++;
    }
    printf("%d occur's %d times.\n",element,times);
    return 0;
}