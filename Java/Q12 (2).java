import java.util.*;
class Q12{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
System.out.println("Enter the number");
int sec,h,m,s;
sec=sc.nextInt();
h=s%3600;
m=h%60;
s=h%60;
System.out.println("The time is "+h+m+s);
}
}
