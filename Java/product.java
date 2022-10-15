import java.util.*;
class product{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Ebter two numbers");
        int a=sc.nextInt();
        int b=sc.nextInt();
        int t=b,s=0;
        for(int i=a;i>1;i/=2){
            if(i%2==0){
                b*=2;
            }
            else{
                b*=2;
                s+=b;
            }
        }
        System.out.println("Product is"+(s+t));
    }
}