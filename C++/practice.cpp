#include<iostream>
#include<vector>
#include <string>
using namespace std;
int main(){
    /*vector<int> a;
    a.resize(5);
    int v=0;
    for(int i=0;i<a.size();i++){
        cin>>v;
        a[i]=(v);
        if(i==0){
            a.resize(v+1);
        }
    }
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    } 

    int n=1;
    vector<int> arr;
    while(n-- >0){
        int a=0;
        cin>>a;
        arr.resize(a);
        for(int i=0;i<a;i++){
            cin>>arr[i];
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    */
   int q=2;
   int querry[q][q];
    for(int i=0;i<q;i++){
        for(int j=0;j<q;j++){
            cin>>querry[i][j];
        }
    }
    for(int i=0;i<q;i++){
        for(int j=0;j<q;j++){
            cout<<querry[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}