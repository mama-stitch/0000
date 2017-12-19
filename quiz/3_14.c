#include<stdio.h>

/*

二つの整数を読み込んで、それらが等しければ
「２つの値は同じです」

そうでなければ
小さい値
大きい値の両方を表示する


*/
int main(void){
    int a,b;

    scanf("%d%d",&a,&b);
    if(a == b)
        puts("両方の値は等しい");
    else {
        int min,max;
        if(a < b){
            min = a;
            max = b;
        }else{
            min = b;
            max = a;
        }
        printf("max = %d\nmin = %d\n",max,min);
    }
    return 0;
}
