#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("Enter the length of the string: ");
    scanf("%d",&n);
    printf("Enter the string:\n>>>");
    char array[n+1];
    scanf("%s",&array);
    n=strlen(array);
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(array[i]>array[j]){
                char t=array[j];
                array[j]=array[i];
                array[i]=t;
            }
        }
    }
    puts(array);
}