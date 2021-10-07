import java.util.*;


public class Main {

    public static void main(String[] args) {
        int n;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        int v=0;
        int [][]a=new int[n][n];
        int [][]b=new int[n][n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                b[i][j]=sc.nextInt();
            }
        }

        for(int i=0; i<n; i++){
            for(int j=i; j<n-i; j++){
                a[i][j]=v;
                a[n-i-1][j]=v;
                a[j][i]=v;
                a[j][n-i-1]=v;
            }
            v++;
        }
        boolean concentrica=true;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(a[i][j]==b[i][j]){
                    continue;
                }else{
                    concentrica=false;
                }
            }
        }
        if(concentrica){
            System.out.println("1");
        }else{
            System.out.println("0");
        }

    }


}