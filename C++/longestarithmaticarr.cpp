#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the num of element"<<endl;
    cin>>a;
    int arr[a];
    cout<<"enter the number of elements"<<endl;
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    int pd=arr[1]-arr[0];
    int ans=2;
    int cur=2;
    int j=2;
    while(j<a){
        if(pd==(arr[j]-arr[j-1])){
            cur++;
        }
        else{
            cur=2;
        }
        ans=max(ans,cur);
    }
    cout<<"answer"<<" "<<ans<<endl;
    return 0;
}