#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the three sides\n";
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b && c==a && b==c){
        cout<<"Equilateral";
    }
    else if(a==b||b==c||c==a){
        cout<<"Iosceles";
    }
    else{
        cout<<"Scalene";
    }
    return 0;
}