import java.util.*;
class hcf{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter 2 number");
        int a=sc.nextInt();
        int b=sc.nextInt();
        int h=0;
        for(int i=2;i<=a; ){
            if(a%i==0&&b%i==0){
                h=i;
                a/=i;
                b/=i;
            }
            else
            i++;
        }
        System.out.println("HCF is"+h);
    }
}