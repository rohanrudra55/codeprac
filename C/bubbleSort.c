#include<stdio.h>
void ascending(int array_f[],int size);
void decending(int array_f[],int size);

int main(){
    int size;
    printf("Enter teh size of the array and then the elements: ");
    scanf("%d",&size);
    int array[size];
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
     for(int i=0;i<size;i++){
        for(int j=0;j<(size-i-1);j++){
            if(array[j]>array[j+1]){
                int swap= array[j];
                array[j]=array[j+1];
                array[j+1]=swap;
            }
        }
    }
    printf("\nAscending: ");
    ascending(array,size);
    printf("\nDecending: ");
    decending(array,size);
}

void ascending(int array_f[],int size){
    for(int i=0;i<size;i++){
            printf("%d ",array_f[i]);
    }
}
void decending(int array_f[],int size){
     for(int i=size-1;i>=0;i--){
            printf("%d ",array_f[i]);
    }   
}