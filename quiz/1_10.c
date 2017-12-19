#include<stdio.h>

int main(void){

    int x;
    int y;
    int seki;
    puts("2つの整数を入力してください");
    printf("整数1");
    scanf("%d",&x);
    printf("整数2");
    scanf("%d",&y);
    seki = x * y;
    printf("\nそれらの積は%d\n",seki);
    return 0;

}
