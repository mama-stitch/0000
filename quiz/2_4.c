#include<stdio.h>

int main(void){

    int x,y;

    printf("整数を入力してください: ");
    scanf("%d",&x);
    scanf("%d",&y);
//   printf("%dの値は%dの%d%%です",x ,y ,100 * x / y)
    printf("和は%d、差は%dです\n",x + y, x - y);
    return 0;

}
