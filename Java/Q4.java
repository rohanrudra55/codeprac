import java.util.*;
class Q4{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
System.out.println("Enter the number");
int num1,num2,num3,sum,differ,av;
num1=sc.nextInt();
num2=sc.nextInt();
num3=sc.nextInt();
sum=num1+num2+num3;
av=sum/3;
differ=sum-av;
System.out.println("The number is"+differ);
}
}