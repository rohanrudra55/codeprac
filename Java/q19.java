import java.util.*;
	class q19{
	public static void main(String args[]){
	Scanner sc=new Scanner(System.in);
	System.out.println("Ente the number");
	int length=sc.nextInt();
	int area=sc.nextInt();
	int breath=area/length;
	int perimeter=2*(length+breath);
	System.out.println("The perimeter is"+perimeter);
	}
	}