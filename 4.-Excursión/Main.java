import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int n;
        int c;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        c=sc.nextInt();
        int num;
        int []a=new int[n+1];
        int []respuesta=new int[c];
         for(int i=1; i<=n; i++){
             a[i]=sc.nextInt();
         }
        for(int i=0; i<c; i++){
            num=sc.nextInt();
            respuesta[i]=a[num];
        }
        for(int i=0; i<respuesta.length; i++){
            System.out.println(respuesta[i]);
        }
    }
}