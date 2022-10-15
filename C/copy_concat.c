// 2. Write your own strcpy() and strcat() functions in C.
#include<stdio.h>
int main(){
    char let;
    char l[100];
    char concat[100];
    int i=0,j=0;
    while(1){
        scanf("%c",&let);
        if(let=='\n')
            break;
        l[i]=let;
        if(let !=' '){
            concat[j]=let;
            j++;
        }
        i++;
    }
    concat[j+1]='\n';
    puts("Copied Text: ");
    puts(l);
    puts("Concated Text: ");
    puts(concat);
}