import java.util.*;
class q16{
public static void main(String args[]){
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter the hour");
	int h=sc.nextInt();
	System.out.println("Enter the minute");
	int min=sc.nextInt();
	System.out.println("Enter the second");
	int sec=sc.nextInt();
	int ts=h*3600+min*60+sec;
	System.out.println("The time is"+ts);
}
}