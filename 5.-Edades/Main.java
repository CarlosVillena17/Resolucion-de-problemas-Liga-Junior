import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n;
        int num;
        n=sc.nextInt();
        int []a=new int[40];
        for(int i=0; i<n; i++){
            num=sc.nextInt();
            a[num]++;
        }

        for(int i=0; i<40; i++){
            if(a[i]!=0){
                System.out.println(i+" "+a[i]);
            }
        }
    }
}