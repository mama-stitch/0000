/*
    1~nまでの全整数の和を求めて返却するメソッドを作成

*/
import java.util.Scanner;
public class SumUp1{
    static int sumUp(int n){
        int sum = 0;
        for(int i = 1; i <= n; i++){
            sum += i;
        }
        return sum;
    }
    static int sumUp2(int n){

        int sum = 0;
        while(n > 0){
            sum += n--;
        }
        return sum;

    }
    public static void main(String[] args){

        Scanner stdIn = new Scanner(System.in);
        int num;
        do{
            System.out.println("1 ~ n までの整数和を求める");
            System.out.print(">> ");
            num = stdIn.nextInt();
        }while(num <= 0);
        System.out.println("1 ~ " + num + "までの和は" + sumUp(num) + "です");
        //System.out.println("1 ~ " + num + "までの和は" + sumUp2(num) + "です");
    }
}
