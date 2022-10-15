// Assignment 7
// 1.WACP to reverse a given String(of Characters).

#include<stdio.h>
#include<string.h>
int main(){
    char array[100];
    printf("Enter a word: ");
    scanf("%s",&array);
    printf("Reverse: ");
    int len=strlen(array)-1;
    for(int i=len;i>=0;i--)
        printf("%c",array[i]);

}