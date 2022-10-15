import java.util.*;
class practicea{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a matrix row and colum limits");
        int a=sc.nextInt();
        int b=sc.nextInt();
        int mat[][]=new int[a][b];
        System.out.println("Enter the elements");
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                mat[i][j]=sc.nextInt();
            }
        }
        System.out.println("The sum of the respective rows");
        int s=0;
        for(int i=0;i<a;i++){
            s=0;
            for(int j=0;j<b;j++){
            s+=mat[i][j];
        }
        System.out.print(s+" ");
    }
        for(int i=0;i<b;i++){
            s=0;
            for(int j=0;j<a;j++){
            s+=mat[i][j];
        }
        System.out.print(s+" ");
    }
}
}