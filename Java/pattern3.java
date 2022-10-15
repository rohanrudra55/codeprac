import java.io.*;
public class pattern3{
    static void amin(){
        
        for(int i=5;i>=1;i--){
        if(i==4)
        continue;
            for(int j=i;j>=1;j--){
        System.out.print(j);
    }
    for(int k=5;k>i;k--){
        System.out.print(k);
    }
    System.out.println();
}
}
}