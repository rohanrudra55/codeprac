import java.util.*;
class Q13{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
System.out.println("Enter the number to round up");
double n=sc.nextDouble();
n=n+0.5;
n=(int)n;
System.out.println("The round up number is "+n);
}
}