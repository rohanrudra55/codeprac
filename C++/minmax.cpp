#include<iostream>
using namespace std;
int main(){
    long long int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    long long int sum,max,min;
    for(int i=0;i<5;i++){
        sum=0;
        for(int j=0;j<5;j++){
            if(i!=j){
                sum+=arr[j];
                cout<<sum<<endl;
                
            }
        }
        max=std::max(max,sum);
        min=std::min(min,sum);
        
    }
    cout<<min<<" "<<max;
}