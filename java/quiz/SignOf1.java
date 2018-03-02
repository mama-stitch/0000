
/*
受け取ったint型の値nが
    負であれば-1を返却
    0であれば0を返却
    正であれば1を返却する

int signOf(int n)
*/

import java.util.Scanner;

public class SignOf1{

    static int signOf(int n){
        if(n == 0){
            return 0;
        }else if ( n < 0){
            return -1;
        }else{
            return 1;
        }
    }

    public static void main(String[] args){

        Scanner stdIn = new Scanner(System.in);
        System.out.print(" >> ");

        int num = stdIn.nextInt();

        SignOf1 s1 = new SignOf1();
        System.out.println("s1                = " + s1.signOf(num));
        System.out.println("SignOf1.singOf    = " + SignOf1.signOf(num));

    }
}

