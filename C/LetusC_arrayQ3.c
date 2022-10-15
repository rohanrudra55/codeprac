#include<stdio.h>
#define LIMIT 5 //The limit of the array
void selection_sort(int array_t[]);
void display(int array_s[]);
void bubble_sort(int array_b[]);
void insertion_sort(int array_i[]);

int main(){
    int array[LIMIT],choice;
    printf("Enter the elements:\n");
    for(int i=0;i<LIMIT;i++)
        scanf("%d",&array[i]);
    printf("Enter the process to use: \n1.Selectin Sort\n2.Bubble Sort\n3.Insertion Sort\n------->");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        selection_sort(array);
        break;
    case 2:
        bubble_sort(array);
        break;
    case 3:
        insertion_sort(array);
        break;
    default:
        break;
    }
    return 0;
}
void selection_sort(int array_t[]){
    int f=0;
    int swap=0;
    for(int i=0;i<LIMIT;i++){
        for(int j=i;j<LIMIT;j++){
            if(array_t[i]>array_t[j]){
                f++;
                swap=array_t[i];
                array_t[i]=array_t[j];
                array_t[j]=swap;
            }
        }
    }
    printf("%d/n",f);
    display(array_t);
}

void bubble_sort(int array_b[]){
    int f=0;
    int swap=0;
    for(int i=0;i<LIMIT;i++){
        for(int j=0;j<(LIMIT-i-1);j++){
            if(array_b[j]>array_b[j+1]){
                f++;
                swap=array_b[j];
                array_b[j]=array_b[j+1];
                array_b[j+1]=swap;
            }
        }
    }
    printf("%d/n",f);
    display(array_b);
}

void insertion_sort(int array_i[]){
    int flag=0;
    int f=0;
    for(int i=0;i<LIMIT;i++){ //Outer Loop 1
        int j=0;
        for(j=0;j<(i-1);j++){ //Inner Loop 1
            if(array_i[i]<array_i[j]){
                f++;
                flag=1;
                break;
            }
        }
        if(flag==1){
            int e=array_i[i];
        for( int k=i;k>j;k--){ //Inner Loop 1
            array_i[k]=array_i[k-1];
            if(k-1==j)
                array_i[j]=e;
        }
        }
        flag=0;
    }
    printf("%d/n",f);
    display(array_i);
}

void display(int array_s[]){
    for(int i=0;i<LIMIT;i++){
        printf("%d  ",array_s[i]);
    }
}