#include<stdio.h>
/*
３つの整数値の最小値を返す
int min3(int a,int b,int c)
*/
int min3(int a,int b,int c){

    int min = a;
    if(min > b)
        min = b;
    if(min > c)
        min = c;
    return min;
}
int main(void){

    int a,b,c;

    setvbuf(stdout,NULL,_IONBF,0);

    printf("a = ");
    scanf("%d",&a);
    putchar('\n');

    printf("b = ");
    scanf("%d",&b);
    putchar('\n');

    printf("c = ");
    scanf("%d",&c);
    putchar('\n');

    printf("min = %d\n",min3(a,b,c));

    return 0;
}
