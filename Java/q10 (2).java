import java.util.*;
class q10{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
System.out.println("Enter the numbes to add their last number");
int a,b,c,sum;
a=sc.nextInt();
b=sc.nextInt();
c=sc.nextInt();
sum=a%10+b%10+c%10;
System.out.println("The sum of the last number is"+sum);
}
}