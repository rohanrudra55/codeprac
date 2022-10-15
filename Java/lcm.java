import java.util.*;
class lcm{
    public static void main(String args[]){
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter 2 number");
    int a=sc.nextInt();
    int b=sc.nextInt();
    int l=1;
    for(int i=2;i<=a; ){
        if(a%i==0&&b%i==0){
            l*=i;
            a=a/i;
            b=b/=i;
        }
        else
        i++;
    }
    System.out.println("Lcm is"+l);
}
}
    
       