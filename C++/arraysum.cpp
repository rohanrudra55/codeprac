#include <iostream>
using namespace std;
int simpleArraySum(int ar[],int i){
    int sum=0;
    for(int a=0;a<i;a++){
    sum+=ar[a];
    }
    cout<<"Sum of the array:"<<endl;
    return sum;
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout);
    #endif
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    if(n>0){
    int ar[n];
    cout<<"Enter the elements of array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        if(ar[i]>1000){
            i--;
            cout<<"Wrong Input Tryagain"<<endl;
        }
    }
    
    cout<<simpleArraySum(ar,n)<<endl;
    }
    else{
        cout<<"Nothing to print"<<endl;
    }
    return 0;

}
