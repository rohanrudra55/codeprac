import java.util.*;
class Game{
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);
        String a,b;
        int d=0;
        for(int i=1;i<=6;i++){
        System.out.println("Input:______Stone/Paper/Scissior");
        a=sc.nextLine();
        int c=1+(int)(Math.random()*3);
        if(c==1)
        b="Stone";
        else if(c==2)
        b="Paper";
        else
        b="Scissior";
        if(a.equals(b))
        d++;
        System.out.println(b);
    }
    if(d==6)
    System.out.println("Winner");
    else
    System.out.println("Looser");
}
}