/*

ランダムに出題する3ケタの暗算トレーニングプログラム
x + y + z
x + y - z
x - y + z
x - y - z
*/


import java.util.Random;
import java.util.Scanner;

public class MentalArithmetic{
    static Scanner stdIn = new Scanner(System.in);

    static boolean confirmRetry(){
        System.out.println("もう一度？ YES...1 / NO...0");
        int retry;
        do{
            System.out.println(" >> ");
            retry = stdIn.nextInt();
        }while(retry != 0 && retry != 1);

        if(retry == 1)
            return true;
        return false;
        
    }
    public static void main(String[] args){

        Random rnd = new Random();
        
        do{
            int x = 10 + rnd.nextInt(90);
            int y = 10 + rnd.nextInt(90);
            int z = 10 + rnd.nextInt(90);
            int patern = rnd.nextInt(4);
            int ans;

            System.out.println("x = " + x);
            System.out.println("y = " + y);
            System.out.println("z = " + z);

            switch(patern){
                case 0:  ans = x + y + z;break;
                case 1:  ans = x + y - z;break;
                case 2:  ans = x - y + z;break;
                default :  ans = x - y - z;break;
            }
            System.out.println("patern = " + patern);

            //System.out.println("ans = " + ans);

            int reply;

            while(true){
                System.out.println(x + (patern < 2 ? "+" : "-") + y + (patern % 2 == 0 ? "+" : "-") + z);
                System.out.print(">>");
                reply = stdIn.nextInt();
                if(reply == ans){
                    System.out.println("正解");
                    break;
                }
                System.out.println("one more !!");
            }
        }while(confirmRetry());
        System.out.println(" おつかれ !!");
    }
}



