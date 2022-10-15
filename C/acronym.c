// 4. WACP to print the acronym of a name. e.g. print D.V.C. for Damoder Valley Corporation
#include<stdio.h>
int main(){
    char l;
    while(1){
        scanf("%c",&l);
        if(l=='\n')
            break;
        if(l>=65 &&l<97)
            printf("%c.",l);
    } 
}