import java.util.*;
class w{
    public static void main(String args[]){
        for(int i=0;i<5;i++){
            for(int j=5;j>=1;j--){
                if((j-i)<=0){
                    System.out.print(j-i+5);
                }
                else{
                    System.out.print(j-i);
                }
            }
                System.out.println();
            
        }
    }
}
        