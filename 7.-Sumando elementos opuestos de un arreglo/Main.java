import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int  n;
        n=sc.nextInt();
        int []a=new int[n];
        int []sum=new int[n/2];

        for(int i=0; i<n; i++){
            a[i]=sc.nextInt();
        }
        for(int i=0; i<n/2; i++){
            sum[i]=a[i]+a[n-1-i];
        }
        for(int i: sum){
            System.out.print(i+" ");
        }

    }

}