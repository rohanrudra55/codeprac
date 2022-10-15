#include<iostream>
#include<vector>
using namespace std;

int main(){

    int arr[2];
    for(int i=0;i<2;i++){
        cin>>arr[i];
    }
    int n=arr[0];
    int q=arr[1];
    
    //Part 2
    //Loop 1
    vector< vector <int> > main_array;
    int c=0;
    while(n-- >0){
        int a=0;
        cin>>a;
        main_array.resize((arr[0]),vector<int> (a));
        for(int i=0;i<a;i++){
            cin>>main_array[c][i];
        }
        c++;
    }
    
    int querry[q][q];
    for(int i=0;i<q;i++){
        for(int j=0;j<q;j++){
            cin>>querry[i][j];
        }
    }
    for(int i=0;i<q;i++){
        int k1=querry[i][0];
        int k2=0;
        for(int j=1;j<q;j++){
            k2=querry[i][j];
            cout<<main_array[k1][k2]<<endl;
        }
    }
    return 0;
    }