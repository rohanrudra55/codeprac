public class SecondLargeDigit{
    static void secondLargest(int n){
        int d=0,sl=0,l=0,f=0,t=0;
        for(int i=n;i>0;i/=10){
           d=i%10;
            if(f==0){
                l=d;
                f=1;
            }
            else{
                if(l<d)
                l=d;
            }
        }
        for(int i=n;i>0;i/=10){
            d=i%10;
            if(t==0){
                sl=d;
                t=1;
            }
            else{
                if(l>sl&&l>d&&sl<d)
                sl=d;
                
                
            }
        }
        System.out.println(sl);
    }
}
    