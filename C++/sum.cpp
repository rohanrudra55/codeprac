#include<iostream>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
          freopen("input.txt","r",stdin);
          freopen("output.txt","w",stdout);
    #endif
    int amount1,amount2;
    cin>>amount1>>amount2;
    cout<<amount1<<" "<<amount2;
    int sum = amount2 + amount1;
    cout<<sum<<endl;
    cout<<"sum\n";
    return 0;

}