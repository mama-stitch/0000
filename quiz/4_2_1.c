/*
二つの整数値を読み込んで小さいほうの数以上で
大きいほうの数以下の全整数を加えた値を表示するプログラムを作成せよ

12 15

12+13+14+15 ＝54

*/



#include<stdio.h>

int main(void){
    setvbuf(stdout,NULL,_IONBF,0);
    int a,b;
    int no;
    int sum = 0;
    int lower,upper;

    printf("整数A: ");scanf("%d",&a);
    printf("整数B: ");scanf("%d",&b);

    if(a < b){
        lower = a;
        upper = b;
    }else{
        lower = b;
        upper = a;
    }
    no = lower;
    do{
        sum += no;
        no++;
    }while(no <= upper);

    printf("sum = %d\n", sum);
    return 0;
}






