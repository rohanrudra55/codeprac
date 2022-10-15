import java.util.*;
class q23{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
System.out.println("Enter the numbers to exchange");
int a=sc.nextInt();
int b=sc.nextInt();
System.out.println("The exchage number is");
a=a+b;
 b=a-b;
 a=a-b;
System.out.println("The a is"+a);
System.out.println("The bis "+b);
}
}