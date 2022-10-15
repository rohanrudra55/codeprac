import java.util.*;
class ISC20172{
    public static char enc(char n){
        
        int a= 'A' ,b='a',c='z',d='Z',e='0' ;
        int r=n; char t=' ';
        if(r<(e-1)&&r>(e+10)){
        if((r>a&&r<(a+13))||(r>b&&r<(b+13)))
        t=(char)(r+13);
        if((r<c&&r>(c-13))||(r<d&&r>(d-13)))
        t=(char)(r-13);
    }
        else
        t=(char)(r+13);
        return t;
    }
        
    public static void main(){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the text");
        String n=sc.nextLine();
        String m=" ", r=" ";
        n=n.trim() + " ";
        if((n.length()>2)&&(n.length()<100)){
            for(int i=0;i<(n.length()); ){
                int a=n.indexOf(i,' ');
                r=n.substring(i,a);
                if(r!=" "){
                    for(int j=0;j<(r.length());j++){
                        m=m+enc(r.charAt(j));
                    }
                }
                else
                m=m+" ";
                i=i+a;
        }
}
System.out.println(m);
}
}