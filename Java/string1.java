import java.util.*;
class string1{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a word");
        String n=sc.nextLine();
        n=n.trim().toUpperCase();
        int a=n.length();
        for(int i=a;i>=0;i--){
            System.out.println(n.substring(i));
        }
    }
}