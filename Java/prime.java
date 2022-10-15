import java.util.*;
class prime{
    static int n;
    static int f;
    public prime(){
        n=3;
        f=2;
    }
    public static int isPrime(int x){
        if(x<=n){
            
            if(n%x ==0){
                if(f==3)
                return 0;
                f++;
            return isPrime(x+1);}
            
            return isPrime(x+1);
        }
        
        return 1;
      
    }
    public static void main(){
        prime ob= new prime();
        if(isPrime(2)!= 0)
        System.out.println("it is priem Number");
        else
         System.out.println("it is not");
    }
}