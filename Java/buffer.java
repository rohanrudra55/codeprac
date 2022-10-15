import java.util.*;
class buffer{
 public static void input(int n[]){
        int s;
        for(int i=0;i<n.length;i++){
            s=9*n[i];
            System.out.println();
            System.out.printf("%04d",s);
        }
    }
    public static void main(int n[]){
for(int i=0;i<n.length-1;i++){
for(int j=0;j<n.length-1;j++){ 
if(n[j]>n[j+1]){
int t=n[j];
n[j]=n[j+1];
n[j+1]=t;
}
}
}
for (int i=0;i<n.length;i++){
    System.out.println(n[i]);
}
}
public static void shot(int n[]){
    for(int i=0;i<n.length-1;i++){
       int s=n[i],pos=i;
        for(int j=i+1;j<n.length;j++){
            if(s>n[j]){
                s=n[j];
                pos=j;
            }
        }
        n[pos]=n[i];
        n[i]=s;
    }
    for (int i=0;i<n.length;i++){
    System.out.println(n[i]);
}
} 
public static void ron(){
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter an integer");
   int n;
    for(int i=0;true;i++){
        if(sc.hasNextInt()){
        n=sc.nextInt();
        break;}
        else
        System.out.println("Enter an integer");
    }
    System.out.println(n);
}
}

        
    
    
 