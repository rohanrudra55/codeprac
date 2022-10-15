import java.util.*;
class Qq1{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
System.out.println("Enter the dimenssions");
int l=sc.nextInt();
int b=sc.nextInt();
double diagonal=Math.sqrt(l*l+b*b);
System.out.println("The diagonal is"+diagonal);
}
}