#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the limiting number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            sum+=j;
            if(j==i)
                printf("%d ",j);
            else
                printf("%d + ",j);
        }
        if(i!=n)
         printf("\n");
    }
    printf("= %d\n",sum);

}