#include<stdio.h>

int main(void){
    double r;
    double area;
    puts("実数を入力してください");
    scanf("%lf", &r);
    area = r * r * 3.14;
    printf("円の面積は%f\n",area);
    return 0;

}
