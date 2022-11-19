#include<iostream>
using namespace std;

string equals(int a,int b){
    if(a==b) return "Yes";
return "no";
}

int main(){
    int t,a,b;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        cout<<equals(a,b);
        

    }
    return 0;
}