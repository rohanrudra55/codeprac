import java.util.*;
class Pattern111{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("ENter a number to find the patter of it");
        int n=sc.nextInt();
        for(int i=1;i<=n;i++){
            for(int j=n;j>i;j--){
                System.out.print(" ");
            }
            for(int r=1;r<=i;r++){
                if(r==i || r==1)
                System.out.print("*"+" ");
            else
            System.out.print(" "+" ");
            }
        System.out.println();
        }
    for(int i=(n-1);i>=1;i--){
            for(int j=n;j>i;j--){
                System.out.print(" ");
            }
            for(int r=1;r<=i;r++){
                if(r==i || r==1)
                System.out.print("*"+" ");
            else
            System.out.print(" "+" ");
            }
        System.out.println();
        }
    }
}