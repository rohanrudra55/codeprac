#include<iostream>
using namespace std;
int main(){
    cout<<"Enter two numbers\n";
    int a,b;
    cin>>a>>b;
    if(a>b){
        cout<<"Max:"<<a<<endl;
        cout<<"Min:"<<b<<endl;
    }
    else{
        cout<<"Max:"<<b<<endl;
        cout<<"Min:"<<a<<endl;
    }
    return 0;
}