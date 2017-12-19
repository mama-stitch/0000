#include<stdio.h>
int main(void){

    int x,y,z,sum;
    printf("整数1"); scanf("%d" ,&x);
    printf("整数2"); scanf("%d" ,&y);
    printf("整数3"); scanf("%d" ,&z);

    sum = x + y + z;
    printf("合計値は%dです", sum);
    return 0;
}
