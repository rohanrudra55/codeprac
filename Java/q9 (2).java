import java.util.*;
 class q9{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
System.out.println("Enter the value of the height and radius of a cylinder");
int h,r,v,s;
h=sc.nextInt();
r=sc.nextInt();
s=2*22/7*r*r+2*22/7*r*h;
v=22/7*r*r*h;
System.out.println("The wanted volume is"+s);
System.out.println("The wanted total surface area is"+v);
}
}