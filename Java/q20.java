import java.util.*;
class q20{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
System.out.println("Enter the basicpay");
double bp=sc.nextDouble();
double dearnessallowance=bp*25/100;
double houserent=bp*15/100;
double pf=bp*8.33/100;
double np=bp+dearnessallowance+houserent;
double gp=np-pf;
System.out.println("The grosspay is"+gp);
}
}		
			
