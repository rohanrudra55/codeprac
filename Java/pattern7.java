import java.io.*;
class pattern7{
    public static void mian(int l){
       try{
        PrintWriter ab=new PrintWriter(new BufferedWriter(new FileWriter("name.txt")));
        for(int i=6;i>=1;i--){
            for(int j=i;j<6;j++){
                System.out.print(" ");
            }
            for(int k=i;k>=1;k--){
                System.out.print(k);
                ab.print(k);
            }
            for(int p=2;p<=i;p++){
                System.out.print(p);
                ab.print(p);
            }
            System.out.println();
            ab.println();
        }
        ab.close();
    }
    
    catch(IOException e){
        System.err.println(e);
    }
}
}
                    