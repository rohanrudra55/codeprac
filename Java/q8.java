import java.util.*;
	class q8{
	public static void main(String args[]){
	Scanner sc=new Scanner(System.in);
	System.out.println("The number is");
	int l=sc.nextInt();
	int b=sc.nextInt();	
	int h=sc.nextInt();
	int area=l*b*h;
	int volume=2*(l*b+b*h+l*h);
	System.out.println("The number is"+area);
	System.out.println("The number is"+volume);
	}
	}