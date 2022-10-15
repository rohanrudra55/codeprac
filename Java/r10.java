import java.util.*;
	class r10{
		public static void main(String args[]){
		Scanner sc =new Scanner(System.in);
		int num1,num2,num3,sum;
		System.out.println("Enter three numbers");
		num1=sc .nextInt();
		num2=sc .nextInt();
		num3=sc .nextInt();
		sum=num1%10+num2%10+num3%10;
		System.out.println("The sum of the last digit is"+sum);
	}
	}