/*
a以上b以下の乱数を生成して、その値を返却するメソッドrandomを作成せよ
内部で乱数を生成する標準ライブラリを呼び出すこと
*/
import java.util.Scanner;
import java.util.Random;
public class RandomTester{

    static int random(int a, int b){
        Random rnd = new Random();

        return a + rnd.nextInt(b - a + 1);
    }

    public static void main(String[] args){

        Scanner stdIn = new Scanner(System.in);

        while(true){

            System.out.println("a >>");
            int a = stdIn.nextInt();

            System.out.println("b >>");
            int b = stdIn.nextInt();

            if(a > b){
                System.out.println("もう一回");
                continue;
            }

            System.out.println("a = " + a + " >> " + random(a,b) + " >> b = " + b);
        }
    }
}
