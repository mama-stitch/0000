#include<stdio.h>

int main(void){

    double d1,d2;
    scanf("%lf",&d1);
    scanf("%lf",&d2);

    printf("%fの値は%fの%f%%です。\n",d1, d2, d1 / d2 * 100);

   return 0;
}
