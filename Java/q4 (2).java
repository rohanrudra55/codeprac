import java.util.*;
class q4{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
System.out.println("Enter the number");
int num1=sc.nextInt();
int num2=sc.nextInt();
int num3=sc.nextInt();
int sum=num1+num2+num3;
int avereage=sum/3;
int difference=(sum)-(avereage);
System.out.println("The Difference is"+difference);
}
}