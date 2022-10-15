#include<iostream>
using namespace std;
long aVeryBigSum(int ar[],int n){
    long sum;
     for(int i=0;i<n;i++){
         cout<<ar[i]<<endl;
        sum=sum + ar[i];
    }
    return sum;
}
int main(){
    cout<<"enter the length"<<endl;
    int n;
    cin>>n;
    if(n<=10){
       cout<<"enter the arry elements"<<endl; 
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
   

    cout<<aVeryBigSum(ar,n)<<endl;
    }
    return 0;
}