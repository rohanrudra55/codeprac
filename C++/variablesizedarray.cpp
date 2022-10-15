#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q,a;
    cin>>n>>q;
    int k[n];
    vector<int> v[n];
    for (int i=0; i<n; i++) {
        cin>>k[i];
        for(int j=0;j<(sizeof(k)/sizeof(k[0]));j++){
            cin>>a;
            v[i].push_back(a);
        }
    
    }
    int qur[q];
    for(int i=0;i<(q*2);i++){
        cin>>qur[i];
    }
    
    
    vector<int>::iterator it;
    for(int i=q;i<(q);i+=2){
         it=v[qur[i]].begin();
         it+qur[i+1];
         cout<<*it<<endl;
        }
    
    return 0;
}