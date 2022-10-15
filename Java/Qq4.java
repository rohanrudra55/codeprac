import java.util.*;
class Qq4{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
System.out.println("Enter the coificient of \n quadratic equation");
double a=sc.nextDouble();
double b=sc.nextDouble();
double c=sc.nextDouble();
double r1=(-b+Math.sqrt(b*b)-4*a*c)/(2*a);
double r2=(-b-Math.sqrt(b*b)-4*a*c)/(2*a);
System.out.println("The root is"+r1);
System.out.println("The root is"+r2);
}
}