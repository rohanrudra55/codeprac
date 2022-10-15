#include <iostream>
using namespace std;
int  compareTriplets(int a[],int b[]){
    int s[2];
    s[0]=0;s[1]=0;
    for(int i=0;i<3;i++){
        if(a[i]>b[i]){
            s[0]= s[0] + 1;
        }
         
        if(a[i]<b[i]){
          s[1]=s[1] + 1;
        }
        
    }
    for(int i=0;i<2;i++){
        cout<<s[i]<<" ";
    }
    return 0;
}
int main(){
    int a[3],b[3];
    for(int i=0;i<3;i++){
        cin>>a[i];
}
   for(int i=0;i<3;i++){
        cin>>b[i];
}
compareTriplets(a,b);
return 0;
}