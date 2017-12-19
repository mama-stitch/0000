#include<stdio.h>

int main(void){

    int x,y;
    int ave;
    printf("整数を入力してください: ");
    scanf("%d",&x);
    scanf("%d",&y);
    ave = (x+y)/2;
    printf("符号を反転した平均値は%d", -ave);
    return 0;

}
