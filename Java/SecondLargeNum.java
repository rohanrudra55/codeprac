import java.util.*;
class SecondLargeNum{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enetr 10 numbers");
       int n=0,l=0,sl=0;
       for(int i=1;i<=10;i++){
        n=sc.nextInt();
        if(i==1)
            sl=l=n;
        
        
            if(l<n){
                sl=l;
                l=n;
            }
           
             else{  if(sl<n)
            sl=n;
        }}
    
    System.out.print(sl);
}
}
            
            
        