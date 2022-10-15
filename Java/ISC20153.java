import java.util.*;
class ISC20153{
   public static void main(){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the sentence");
        String n=sc.nextLine();
        if(n.indexOf('?')>=0||n.indexOf('.')>=0){
            n=n.trim();
            int c=0,b=0;
            String v="AEIOUaeiou";
            String arr[]=n.split(" ");
            for(int i=0;i<arr.length;i++){
                if(arr[i].length()<=15){
                arr[i]=Character.toUpperCase((arr[i].charAt(0)))+arr[i].substring(1,arr[i].length());
                c=0;
                for(int j=0;j<arr[i].length();j++){
                    if(v.indexOf(arr[i].charAt(j))>=0)
                    c++;
                }
                    b=arr[i].length()-c;
                }
                System.out.println(arr[i]+"     "+"Vowels:  "+c+"   Consonants:    "+b);
            }
        }
        else
        System.out.println("invalid");
    }
}
                