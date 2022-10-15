 import java.util.*;
 class star{
     public static void main(String args[]){
         Scanner sc=new Scanner(System.in);
         System.out.println("Enter a number");
          int n=sc.nextInt();
          for(int i=1;i<=n;i++){
              for(int j=1;j<i;j++){
                  System.out.print(" ");
                }
                if(i==1){
                for(int r=i;r<=n;r++){
                    System.out.print(r);}
                    for(int p=n;p>=1;p--)
                    System.out.print(p);
                }
                else{
                    for(int r=i;r<=n;r++){
                    if(r==i)
                        System.out.print(r);
                        else
                        System.out.print(" ");
                }
                for(int r=n;r>=1;r--){
                    if(r==i)
                        System.out.print(r);
                        else
                        System.out.print(" ");
                }
            }
                System.out.println();
            }
        for(int i=(n-1);i>=1;i--){
              for(int j=1;j<i;j++){
                  System.out.print(" ");
                }
                if(i==1){
                for(int r=i;r<=n;r++){
                    System.out.print(r);
                }
            for(int r=n;r>=i;r--){
                    System.out.print(r);
            }}
                else{
                    for(int r=i;r<=n;r++){
                    if(r==i)
                        System.out.print(r);
                        else
                        System.out.print(" ");
                }
            for(int r=n;r>=i;r--){
                    if(r==i)
                        System.out.print(r);
                        else
                        System.out.print(" ");
                }}
                
                System.out.println();
            }
        }
    }