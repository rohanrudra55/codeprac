import java.util.*;
class patern1111{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number");
        int n=sc.nextInt();
        for(int i=n;i>=1;i--){
            for(int j=1;j<=i;j++){
                if(j==i||j==1)
                System.out.print(j+" ");
                else
                System.out.print(" "+" ");
            }
            System.out.println();
        }
        for(int i=2;i<=n;i++){
            for(int j=1;j<=i;j++){
                 if(j==i||j==1)
                System.out.print(j+" ");
                                else
                System.out.print(" "+" ");
            }
            System.out.println();
        }
    }
}