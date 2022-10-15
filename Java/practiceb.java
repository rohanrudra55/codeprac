import java.util.*;
class practiceb{
public static void main(String args[]){
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter 2 number ");
    int a=sc.nextInt();
    int b=sc.nextInt();
    System.out.println("lcm"+lcm(a,b));
}
static int i=2;
public static int lcm(int n,int m){
    System.out.println(i);
    if(((n%i !=1)||(m%i != 1))&&((n%i==0)&&(m%i==0))){
        return i*lcm(n/i,m/i);
    }
    else if(((n%i !=0)||(m%i !=0))&&((n>=i)&&(m>=i))){
        return ((i++)*(lcm(n/i,m/i)));
    }
    else{
    return (m*n);
}
}
}
    