import java.util.*;
class SecondLargeDigit2{
   public static void largestandsmallest(int n){
       
       int l=0,sl=0,f=0,p=0,d=0;
        for(int i=n;i>0;i++){
            d=i%10;
            if(f==0){
                l=d;
                f=1;}
                else{
                    if(l<d)
                    l=d;
                }
            }
            for(int i=n;i>0;i++){
            d=i%10;
                if(p==0){
                sl=d;
                p=1;}
                else{
                    if(l>d && l>sl && sl<d)
                    sl=d;
                }
            }
            System.out.println("Second largest"+sl);
        }
    }
        
