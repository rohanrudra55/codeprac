import java.util.*;
class q12{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number");
        int a=sc.nextInt();
        int b=sc.nextInt();
        int c=sc.nextInt();
        int d=sc.nextInt();
        int e=sc.nextInt();
       double av=(a+b+c+d+e)/5;
       System.out.println((av>a)?a :(av>b)?b :(av>c)?c :(av>d)?d :(av>e)?e : "invalid" );
    }
}