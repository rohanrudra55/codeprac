import java.util.*;
class ISC20152{
   public static void main(){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the value of rows and coloums");
        int m=sc.nextInt();
        int arr[][]=new int[m][m];
        System.out.println("Enter the elements");
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                arr[i][j]=sc.nextInt();
            }
            System.out.println();
        }
        display(arr);
        System.out.println();
        int arr1[][]=new int[m][m];
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                arr1[(j)][(m-1-i)]=arr[i][j];
            }
        }
        display(arr1);
    }
    public static void display(int arr[][]){
       int m=arr.length;
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                System.out.print(arr[i][j]);
            }
            System.out.println();
        }
    }
}
        
    

   