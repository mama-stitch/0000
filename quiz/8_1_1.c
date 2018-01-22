#include<stdio.h>
//x とy の差を求めるマクロを定義
#define diff(x,y)  (((x) > (y)) ? ((x) - (y)): ((y) - (x)))
int main(void){

    int x = 1,y = 3;
    float fx = 1.4,fy = 3.6;

    printf("x = %d \ny = %d\n%d\n",x,y,diff(x,y));
    printf("fx = %f \nfy = %f\n%f\n",fx,fy,diff(fx,fy));

    return 0;
}
