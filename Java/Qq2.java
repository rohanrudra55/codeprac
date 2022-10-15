import java.util.*;
class Qq2{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
System.out.println("Enter the side");
double a=sc.nextDouble();
double b=sc.nextDouble();
double c=sc.nextDouble();
double s=(a+b+c)/2;
double area=Math.sqrt(s*(s-a)*(s-b)*(s-c));
System.out.println("The area is"+area);
}
}