import java.util.*;
class q25{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
System.out.println("Enter the cp");
double sp=sc.nextDouble();
System.out.println("Enter the profit");
double p=sc.nextDouble();
double cp=sp-p;
double vcp=cp/15;
System.out.println("The cp of 1 item is"+vcp);
}
}