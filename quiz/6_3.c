#include<stdio.h>
/*
    整数の３乗値を返す
    int cube(int x)
*/
int cube(int x){
    return x * x * x;
}
int main(void){
    int x;
    setvbuf(stdout,NULL,_IONBF,0);
    printf("x = ");
    scanf("%d",&x);
    putchar('\n');

    printf("%d^3 = %d\n",x,cube(x));

    return 0;
}
