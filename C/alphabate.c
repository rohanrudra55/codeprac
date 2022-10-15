#include<stdio.h>
int main(){
	int arr[26];
	for(int i=0;i<=25;i++){
		arr[i]='A'+i;
		printf("\n%d %c",arr[i],arr[i]);
	}
	return 0;
}
