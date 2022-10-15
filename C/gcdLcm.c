#include<stdio.h>
#include<math.h>
void cal_lcm(int arr[],int n);
void gcd(int a,int b);
int main(){
    char ch;
    int n=0,m;
    printf("Enter:\n'G' to find GCD\n'L' to find LCM\n\t");
    scanf("%c",&ch);
    switch(ch){
        case 'G':{
            printf("Enter the numbers: ");
            scanf("%d%d",&n,&m);
            gcd(n,m);
            break;
        }
        case 'L':{
            printf("Enter a number: ");
            scanf("%d",&n);
            int arr[n];
            for(int i=0;i<n;i++){
                printf("Enter %d number: ",(i+1));
                scanf("%d",&arr[i]);
            }
            cal_lcm(arr,n);
            break;
        }
        default:
            printf("Invalid Input\n");
            break;
    }
    return 0;
}
void gcd(int a,int b){
    int g=1;
    for(int i=2;a>1;){
        if(a%i==0 && b%i==0){
            a/=i;
            b/=i;
            g*=i;
        }
        else if(a%i==0)
            a/=i;
        else if(b%i==0)
            b/=i;
        else
            i++;
    }
    printf("GCD of the given number is %d\n",g);
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