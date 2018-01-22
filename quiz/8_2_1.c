#include<stdio.h>

//2値の大きいほうを求めるマクロを定義


#define max(a,b) (((a) > (b)) ? (a) : (b))

int main(void){
/*
    int a = 9;
    int b = 4;
    */

    double a = 5.5;
    double b = 4.5;

    printf("a = %f,b = %f\n max = %f\n",a,b,max(a,b));


}
