import java.util.*;
class calprime{
    public static boolean isprime(int n){
        int c=0;
        for(int i=1;i<=n;i++){
            if(n%i==0)
            c++;
        }
         return c==2;
         
    }
    public static int cal(int n){
        int c=0;
        for(int i=n;i>0;i/=10){
            int d=n%10;
            c++;
        }
        return c;
    }
    public static void main(int n){
        int m=n,c=0,a=0,b=0;
        for(int i=1;i<=(cal(n));i++){
            if(isprime(m)==true)
            c++;
            a=m%((int)Math.pow(10,(cal(n)-1)));
            b=m/((int)Math.pow(10,(cal(n)-1)));
            m=a*10+b;
            System.out.println("a "+a+" b "+b+" m "+m);
        }
        if(c==cal(n))
        System.out.println("It is a circular prime");
        else
        System.out.println("It is not a circular prime");
    }
}
        