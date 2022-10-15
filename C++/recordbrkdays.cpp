#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n+1];
    arr[n+1]=-1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mx=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>mx && arr[i]>arr[i+1]){
            mx=arr[i];
        }
    }
    cout<<mx<<endl;
    return 0;
}