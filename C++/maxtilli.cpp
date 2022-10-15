#include<iostream>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","v",stdin);
    freopen("output.txt","w",stdout);
    #endif

    cout<<"Enter the length of Array"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the numbers"<<endl;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int maxi=ar[0];
    for(int i=0;i<n;i++){
            
                maxi=max(ar[i],maxi);
            
        }
    
    cout<<maxi<<endl;
    return 0;
}