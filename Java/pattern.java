import java.util.*;
class pattern{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a naumber");
        int n=sc.nextInt();
        
        
        for(int i=n,c=0; i>=1 ; c+=2,i--){
            
            for(int j=1;j<=i;j++){
                System.out.print(j);
            }
            for(int p=1;p<c;p++){
             System.out.print(" ");
            }
            
    for(int q=i;q>=1;q--){
                if(q==n)
                ;
                else
                System.out.print(q);
            }
        System.out.println();
        }
    }
}
            
        