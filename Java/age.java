import java.util.*;
	class age{
		public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		int presentYear, birthYear,age;
		System.out.println("Enter the birth year");
		birthYear=sc.nextInt();
		System.out.println("Enter the Present year");
		presentYear=sc.nextInt();
		age=presentYear-birthYear;

	System.out.println("b y"+birthYear);
	System.out.println("p y"+presentYear);
	System.out.println("age "+age);
	}
	}