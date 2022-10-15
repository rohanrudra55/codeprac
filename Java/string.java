import java.util.*;
class string{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a sentence");
        String n=sc.nextLine();
        n=n+" ";
        for(int i=0;i<n.length(); ){
int a=n.indexOf(' ',i);
String b=n.substring(i,a);
if(b !=" "){
    System.out.println(b);
}
i=a+1;
}
}
}
     