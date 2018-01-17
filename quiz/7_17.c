#include<stdio.h>
/*
    0.0 ~ 1.0 まで0.01ずつ増やした値すべての類型を求めよ
*/
int main(void){
    float i;
    int j;

    float sum = 0;
    for(i = 0.01; i <= 1.00; i += 0.01)
        sum += i;

    printf("sum += 0.01i = %f\n",sum);

    sum = 0;
    for(j = 1; j <= 100; j++)
        (sum += j)/100;

    printf("(sum += j)/100 = %f\n",sum);

    return 0;
}



