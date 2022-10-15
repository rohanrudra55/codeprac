#include<stdio.h>
int main(){
	printf("Enter a number: ");
	int r;
	scanf("%d",&r);
	int a[r],b[r];
	for(int i=1;i<=r;i++){
		int c=0,k=0;
		for(int j=0;j<r;j++)
			b[j]=a[j];
		for(int j=r;j>i;j--){
			printf("  ");
		}
		for(int j=1;j<(i*2);j++){
			if(j==1 || j==(i*2-1)){
				a[k++]=1;
				printf("1 ");
			}
			else if(j%2==0)
					printf("  ");
			else{
				int n=b[c]+b[(++c)];
				a[k++]=n;
				printf("%d " ,(n));
			}
			
		}
		
		printf("\n");
	}
	
	// for(int i=1;i<=r;i++){
	// 	for(int space=r; space>i; space--)
	// 		printf("  ");
		
	// 	for(int j=1; j<=i; j++){
	// 		if(j==1 || j==i)
	// 			printf("1 ");
	// 		else
	// 			printf("%d ",)
	// 	}
	// }
	return 0;
}
/*  
 
  
  
    
	\
\\

\

\
 `	  1 
      1   1 
    1   2   1 
  1   3   3   1 
1   4   6   4   1  */
 