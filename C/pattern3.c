#include<stdio.h>
int main(){
	for(int i=1;i<=4;i++){
		for(int j=4;j>=i;j--){
			printf("  ");
			}
		for(int j=i;j<(i*2);j++){
			printf("%d ",j);
			}
		for(int j=(i*2-1);j>i;j--){
			printf("%d ",(j-1));
			}
		printf("\n");
		}
	return 0;
}
//         1 
//       2 3 2 
//     3 4 5 4 3 
//   4 5 6 7 6 5 4 