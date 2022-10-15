import java.io.*;
class pattern6{
public static void main(String args[]){
	for(int i=1;i<=6;i++){
	for(int j=6;j>i;j--){
	System.out.print(" ");
	}
	for(int k=1;k<=i;k++){
	System.out.print(k);
	}
	for(int p=i-1;p>=1;p--){
	System.out.print(p);
	}
	System.out.println();
	}
    }
}