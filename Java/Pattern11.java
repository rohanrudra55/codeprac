import java.util.*;
class Pattern11{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("ENter a word to find the patter of it");
       String s=" ";
      s+= sc.nextLine();
       int n=s.length();
        for(int i=1;i<n;i++){
            for(int j=n;j>i;j--){
                System.out.print(" ");
            }
            for(int r=1;r<=i;r++){
                if(r==i || r==1){
                char x=s.charAt(i);
                System.out.print(x+" ");}
            else
            System.out.print(" "+" ");
            }
        System.out.println();
        }
    for(int i=(n-2);i>=1;i--){
            for(int j=n;j>i;j--){
                System.out.print(" ");
            }
            for(int r=1;r<=i;r++){
                if(r==i || r==1){
                char x=s.charAt(i);
                System.out.print(x+" ");}
            else
            System.out.print(" "+" ");
            }
        System.out.println();
        }
    }
}