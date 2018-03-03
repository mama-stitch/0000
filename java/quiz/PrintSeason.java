/*
void printSeason(int m)
mで指定された月の季節を表示する
[春] m = 3,4,5
[夏] m = 6,7,8
[秋] m = 9,10,11
[冬] m = 12,1,2
*/
import java.util.Scanner;

public class PrintSeason{

    static String printSeason(int m){

        switch(m){
            case 3:case 4:case 5:  return "春";
            case 6:case 7:case 8:  return "夏";
            case 9:case 10:case 11:return "秋";
            case 12:case 1:case 2: return "冬";
        }
        return "*";
    }

    public static void main(String[] args){
        Scanner stdIn = new Scanner(System.in);
        int month;
        while(true){
            do{
                System.out.print(">> ");
                month = stdIn.nextInt();
            }while(month < 1 || month > 12);
            System.out.println("その月の季節は" + printSeason(month) + "です");
        }
    }
}
