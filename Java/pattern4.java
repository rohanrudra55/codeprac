import java.util.*;
public class pattern4{
    static void main(){
        
        for(int i=1;i<=5;i++){
            if(i==2)
            continue;
            for(int j=i;j<=5;j++){
                System.out.print(j);
            }
            for(int k=1;k<i;k++){
                System.out.print(k);
            }
        System.out.println();
        }
        }
    }