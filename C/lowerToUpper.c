#include<stdio.h>
#include<string.h>
int main(){
    int n,alpha=0,spcl=0,num=0;
    printf("Enter the length of the string: ");
    scanf("%d",&n);
    gets();
    printf("Enter the string:\n>>>");
    char array[n+1];
    gets(array);
    for(int i=0;i<n;i++){
        if(array[i]>64&&array[i]<91)
            array[i]=array[i]+32;
        else if(array[i]>96&&array[i]<123)
            array[i]=array[i]-32;
    }
    puts(array);
    return 0;
}