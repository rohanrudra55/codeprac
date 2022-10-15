import java.util.*;
class ISC20162{
    public static void main(){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number of the matrix");
        int n=sc.nextInt();
        if(n>=3&&10>=n){
        int arr[][]=new int[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr[i][j]=sc.nextInt();
            }
            System.out.println();
        }
        System.out.println("Orignal");
         for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                System.out.print(arr[i][j]+" ");
            }
            System.out.println();
        }
        int a=0,b=0,r=0,t=0,l=0,m=0,o=0,f=0,sum=0;
        for(int k=0;k<n;k++){
            f=0;o=0;
          for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j){
                    if(f==0){
                        a=arr[i][j];
                        r=i;t=j;
                        f++;
                    }
                    else{
                        if(a>arr[i][j]){
                            arr[r][t]=arr[i][j];
                            arr[i][j]=a;
                            r=i;t=j;
                            a=arr[r][t];
                            
                        }
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
               if((i==(n-1)-j)){
                    if(o==0){
                        b=arr[i][j];
                        l=i;m=j;
                        o++;
                    }
                    else{
                        if(b>arr[i][j]){
                            arr[l][m]=arr[i][j];
                            arr[i][j]=b;
                            l=i;m=j;
                            b=arr[l][m];
                            
                        }
                    }
                }
            }
        }
        
    }
    System.out.println("Rearranged");
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                System.out.print(arr[i][j]+" ");
            }
            System.out.println();
        }
                System.out.println("Sum= "+sum);
        
        }
    }
}

            