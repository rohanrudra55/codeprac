import java.util.*;
class Q3{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
System.out.println("Enter the number");
int num1,num2,sum,differ,pro;
num1=sc.nextInt();
num2=sc.nextInt();
sum=num1+num2;
differ=num2-num1;
pro=sum*differ;
System.out.println("The number is"+pro);
}
}