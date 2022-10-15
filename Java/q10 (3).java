import java.util.*;
	class q10{
	public static void main(String args[]){
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter the number");
	int num1=sc.nextInt();
	int num2=sc.nextInt();
	int num3=sc.nextInt();
	int sum=num1%10+num2%10+num3%10;
	System.out.println("The sum is"+sum);
	}
	}