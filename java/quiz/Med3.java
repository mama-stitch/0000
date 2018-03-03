import java.util.Scanner;

public class Med3{

    static int med(int a, int b, int c){

        if(a > b){ 
            // (c)  a  (c)  b  (c)
            if(a > c){
                //   a  (c)  b  (c)
                if(b > c){
                    return b;
                    //   a   b  c
                }else{
                    //   a  c  b  
                    return c;
                }
            }else{
                // c  a    b  
                return a;
            }
        // (c)  b  (c)  a  (c)
        }else if(a > c){
            //   b   a  (c)
            return a;
        }else{
            // (c)  b  (c)  a  
            if(c > b){
                // (c)  b   a  
                return b;
            }else{
                //  b  (c)  a  
                return c;
            }
        }
    }

    public static void main(String[] args){
        int[][] array = new int[8024][3];
        for(int i = -10 ; i < 4; i++){
            for(int j = -10; j < 4; j++){
                for(int k = -10 ; k < 4;k++){
                    System.out.printf("%3d %3d %3d : %3d\n",i,j,k,med(i,j,k));
                }
            }
        }
    }
}
