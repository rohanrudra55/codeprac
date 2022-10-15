import java.util.*;
class hardamanmatrix{
    static int n;
   static int arr[][] ;
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number N which should be a power of 2");
        n=sc.nextInt();
        arr =new int[n][n];
        int c=1,d=0,e= (n/2)/2 +1;
        for(int i=0,a=0; i<n ;i+=2){ a++;
        for(int j=0, b=0; j<n ;j+=2){ b++;
        if(a>=e && b>=e){
        c=0; d=1;
    }
    else{
        c=1;d=0; }
            if(((a%2) == 0)&&((b%2) == 0))
            enter(d,c,i,j);
        else 
        enter(c,d,i,j);
        }
  
   }
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
            System.out.print(arr[i][j]);
           
        }
        System.out.println();
    }
    }
    public static void enter(int a, int b, int c,int d){
        arr[c][d]=a;
        arr[c][d+1]=a;
        arr[c+1][d]=a;
        arr[c+1][d+1]=b;
    }
    
}
        
