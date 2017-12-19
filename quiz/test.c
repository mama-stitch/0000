#include<stdio.h>



int main(void){

    printf("[%d]\n",1234);// [1234]
    printf("[%6d]\n",1234);// [001234]
    printf("[%5d]\n",1234);// [ 1234]
    printf("[%-5d]\n",1234); // [1234 ]
    printf("[%10.6f]\n",123.45); // [123.450000]
    printf("[%6.2f]\n",123.45);   //[123.45]
    printf("[%7.2f]\n",123.454);  //[ 123.45]
    


/*
    puts("%%%%%%\n");
    printf("%%%%%%\n");

    double r;
    printf("半径:"); scanf("%lf", &r);
    printf("%.3f", 3.14 * r * r);
    
    putchar('\n'); 
    int a = 12;
    int b = 10;
    printf("a値= %d:bの値= %d :a/b=%d%%です\n",a ,b ,100 * a / b);


    putchar('\n'); 
    
    printf("%d", 1234); printf("=1234\n");
    printf("%.3d", 1234); printf("=1234\n");
    printf("%.5d", 1234); printf("=01234\n");
    printf("%3d", 1234); printf("=1234\n");
    printf("%5d", 1234); printf("= 1234\n");
    printf("%03d", 1234); printf("=1234\n");
    printf("%05d", 1234); printf("=01234\n");
    printf("%-3d", 1234); printf("=1234\n");
    printf("%-5d", 1234); printf("=1234_ \n");


    putchar('\n'); 

    printf("%f",      12.34); printf("=12.34\n");
    printf("%.0f",      12.34); printf("=12\n");
    printf("%.1f",      12.34); printf("=12.3\n");
    printf("%.2f",      12.34); printf("=12.34\n");
    printf("%5.1f",      12.34); printf("= 12.3\n");
    printf("%6.1f",      12.34); printf("=  12.3\n");
    printf("%7.1f",      12.34); printf("=   12.3\n");

*/

    int x;
    int y;

    puts("二つの整数を入力してください");
    printf("x :"); scanf("%d", &x);
    printf("y :"); scanf("%d", &y);

    printf("x=%d,y=%d,平均値=%f",x,y,(x+y)/2.0);











    return 0;
}
