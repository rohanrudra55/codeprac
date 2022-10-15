#include<stdio.h>
void cal_lcm(int arr[],int n);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter %d number: ",(i+1));
        scanf("%d",&arr[i]);
    }
    cal_lcm(arr,n);
    return 0;
}
void cal_lcm(int arr[],int n){
    int f=0,lcm=1;
    for(int i=2;arr[0]>1;){
        f=0;
        for(int j=0;j<n;j++){
            if(arr[j]%i==0){
                arr[j]=arr[j]/i;
                f=1;
            }
        }
        if(f==1)
            lcm*=i;
        else
            i++;
    }
    printf("LCM of the given number %d\n",lcm);
}