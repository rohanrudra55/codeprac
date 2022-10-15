// 3. WACP to delete all vowels from a sentence.
#include<stdio.h>
#include<string.h>
int main(){
    char sen[100];
    gets(sen);
    printf("The output word: ");
    int i=0;
    while(sen[i]!='\0'){
        int l=sen[i];
        if(l>=97)
            l=(l)-32;
        if(l!='I'&&l!='O'&&l!='U'&&l!='E'&&l!='A')
            printf("%c",sen[i]);
        i++;
    }
    return 0;
}