import java.util.*;
class q{
    public static void main(String args[]){
        for(int i=0;i<5;i++){
            for(int j=1;j<=5;j++){
                if((j+i)>5){
                    System.out.print((j+i)-5);
                }
                else{
                    System.out.print(i+j);
                }
            }
                System.out.println();
            
        }
    }
}
        