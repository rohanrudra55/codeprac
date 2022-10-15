import java.io.*;
class pattern5{
    public static void main(String args[]){
        for(int i=5;i>=1;i--){
            for(int j=i+1;j<=5;j++){
                System.out.print(j);
            }
            for(int k=1;k<=i;k++){
                System.out.print(k);
            }
            System.out.println();
        }
    }
}