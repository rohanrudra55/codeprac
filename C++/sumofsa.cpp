#include<iostream>
using namespace std;
int main(){
    cout<<"enter the num of elements"<<endl;
    int a;
    cin>>a;
    int ar[a];
    for(int i=0;i<a;i++){
        cin>>ar[i];
    }
    int sum;
    for(int i=0;i<a;i++){
        sum=0;
        for(int j=i;j<a;j++){
            sum=ar[j] + sum;
            cout<<sum<<" ";
        }
        cout<<endl;
    }
return 0;
}
