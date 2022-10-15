import java.util.*;
class arry{
    public static void main(int a[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Print 10 numbers");
        int s=0;
        
        for(int i=0;i<a.length;i++){
           
            s+=a[i];
        }
        System.out.println(s/5);
    }
     public static void main0(){
        Scanner sc=new Scanner(System.in);
        System.out.println("Print 10 numbers");
        String a[]=new String[10];
        String s="";
        for(int i=0;i<10;i++){
           a[i]=sc.nextLine();
            s=s + a[i];
        }
        System.out.println(s);
    }
}