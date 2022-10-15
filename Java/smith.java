import java.util.*;
class smith{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number");
        int a=sc.nextInt();
        int d=0,s=0,n=0;
        for(int i=2;i<=a; ){
            if(a%i==0){
                if(i>9){
                    for(int j=i;j>0;j/=10){
                        d=j%10;
                        s+=d;
                    }
                }
                else
                s+=i;
            }
            else
            i++;
        }
        for(int r=a;r>0;r/=10){
            d=r%10;
            n+=d;
        }
        if(n==s)
        System.out.println("IT is Smith number");
        else
        System.out.println("It is not a smith number");
    }
}
