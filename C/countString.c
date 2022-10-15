#include<stdio.h>
int main(){
    int n,alpha=0,spcl=0,num=0;
    printf("Enter the length of the string: ");
    scanf("%d",&n);
    printf("Enter the string:\n>>>");
    char array[n+1];
    scanf("%s",&array);
    for(int i=0;i<n;i++){
        if(array[i]>32&&array[i]<48 || array[i]>57&&array[i]<65 || array[i]>16 && array[i]<24)
            spcl++;
        else if(array[i]>47&&array[i]<57)
            num++;
        else if(array[i]>64&&array[i]<91 || array[i]>96&&array[i]<123)
            alpha++;
    }
    printf("Total number of characters:\n\t\t\t>Alphabates:%d\n\t\t\t>Numbers:%d\n\t\t\t>Special Characters:%d\n",alpha,num,spcl);
    return 0;
}