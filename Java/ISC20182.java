import java.util.*;
class ISC20182{
    public static void main(){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number of teams");
        int n=sc.nextInt();
        String arr[][]=new String[n][20];
        if((n>2)&&(n<9)){
            System.out.println("Enter the name of the teams.PLEASE ENTER ONE CHARACTER IN ONE LINE");
            for(int i=0;i<n;i++){
                for(int j=0;j<20;j++){
                    arr[i][j]= sc.nextLine();
                }
                System.out.println();
            }
            int c=0;
            for(int i=0;i<20;i++){
                for(int j=0;j<n;j++){
                    System.out.print(arr[i][j]+"           ");
                }
                System.out.println();
            }
                }
}
}
    
               


            
            