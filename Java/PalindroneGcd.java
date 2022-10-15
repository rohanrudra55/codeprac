import java.util.*;
class PalindroneGcd{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter 1 to find Gcd or 2 to find palindrone");
        int c=sc.nextInt();
        int a,b,r=0,d=0;
        switch(c){
            case 1:
            System.out.println("Enter a nimber");
             a=sc.nextInt();
            for(int i=a;i>0;i/=10){
                d=i%10;
                r=r*10+d;
            }
            if(r==a)
            System.out.println("Palindrone");
            else
            System.out.println("Not a palin drone number");
            break;
            case 2:
            System.out.println("Enter a nimber");
            a=sc.nextInt();
            
            System.out.println("Enter a nimber");
            b=sc.nextInt();
            a=Math.max(a,b);
            b=Math.min(a,b);
            r=a%b;
            while(r>1){
                a=b;
                b=r;
                r=a%b;
            }
            
            System.out.println("It is GCD");
        }
    }
}
            
            