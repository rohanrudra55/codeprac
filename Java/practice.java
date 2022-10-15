import java.util.*;
class practice{
public static void main(String args[]){
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter a sentence  ");
    String a=sc.nextLine();
    a=a.trim()+ " ";
    String w=" ";
    for(int i=0;i<a.length(); ){
        int b=a.indexOf(' ',i);
         w=a.substring(i,b);
        
            System.out.print((w.toUpperCase()).charAt(0)+".");           //.toUpperCase()) if(w != " "){
        
        i=b+1;
    }
}
}