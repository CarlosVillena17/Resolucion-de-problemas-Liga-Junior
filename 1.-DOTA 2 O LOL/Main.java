import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int n;
        String cadena;
        int cantDota=0;
        int cantLOL=0;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        for(int i=0; i<n; i++){
            cadena=sc.next();
            if(cadena.equals("DOTA")){
                cantDota++;
            }else if(cadena.equals("LOL")){
                cantLOL++;
            }
        }
        System.out.println("DOTA: "+cantDota);
        System.out.println("LOL: "+cantLOL);
    }
}
