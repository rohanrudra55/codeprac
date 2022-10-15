import java.io.*;
class pattern2{
    public static void main(String args[]){
        int a=1,b=0,c=0;
        for(int i=1;i<=5;i++){
            a=1;b=0;
            for(int j=1;j<=i;j++){
                c=a+b;
                System.out.print(c);
                a=b;
                b=c;
            }
             System.out.println();
        }
    }
}