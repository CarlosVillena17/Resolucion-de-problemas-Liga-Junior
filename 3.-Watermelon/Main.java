import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int peso;
        peso=sc.nextInt();
        if(peso%2==0 &&peso!=2){
            System.out.println("SI");
        }else{
            System.out.println("NO");
        }
    }

}