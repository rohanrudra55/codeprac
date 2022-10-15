import java.util.*;
class Qq8{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
System.out.println("enter the number");
int l=sc.nextInt();
int b=sc.nextInt();
int h=sc.nextInt();
int v=l*b*h;
int s=2*(l*b+b*h+h*l);
System.out.println("the v is"+v);
System.out.println("the s is"+s);
}
}