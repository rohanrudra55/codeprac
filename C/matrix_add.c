#include<stdio.h>
#define LIMIT 5
void display(int array_f[LIMIT][LIMIT]);
void addMatrix(int array_a[LIMIT][LIMIT],int array_b[LIMIT][LIMIT]);
void transpose(int array_t[LIMIT][LIMIT]);
int main(){
    int array1[LIMIT][LIMIT];
    int array2[LIMIT][LIMIT];
    printf("Enter the array one elements:\n");
    for(int i=0;i<LIMIT;i++){
        for(int j=0;j<LIMIT;j++){
            scanf("%d",&array1[i][j]);
        }
    }
    printf("Enter the array two elements:\n");
    for(int i=0;i<LIMIT;i++){
        for(int j=0;j<LIMIT;j++){
            scanf("%d",&array2[i][j]);
        }
    }
    printf("\x1B[2J\n\nMatrix one:\n");
    display(array1);
    printf("\n\nMatrix two:\n");
    display(array2);
    addMatrix(array1,array2);
    return 0;
}
void addMatrix(int array_a[LIMIT][LIMIT],int array_b[LIMIT][LIMIT]){
    int array_add[LIMIT][LIMIT];
    for(int i=0;i<LIMIT;i++){
        for(int j=0;j<LIMIT;j++){
            array_add[i][j]=array_a[i][j]+array_b[i][j];
        }
    }
    printf("\n\nAddition:\n");
    display(array_add);
    printf("\n\nTranspose:\n");
    transpose(array_add);
}
void transpose(int array_t[LIMIT][LIMIT]){
    int array_trans[LIMIT][LIMIT];
    for(int i=0;i<LIMIT;i++){
        for(int j=0;j<LIMIT;j++){
            array_trans[j][i]=array_t[i][j];
        }
    }
    display(array_trans);

}
void display(int array_f[LIMIT][LIMIT]){
    for(int i=0;i<LIMIT;i++){
        for(int j=0;j<LIMIT;j++)
            printf("%3d ",array_f[i][j]);
        printf("\n");
    }
}