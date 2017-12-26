#include<stdio.h>
/*
引数の２乗値を返す関数
int sqr(int x)
引数の４乗値を返す関数
int pow4(int x)
*/

int sqr(int x){
    return x * x;
}

int pow4(int x){
    return sqr(sqr(x));
}
int main(void){
    int x;
    setvbuf(stdout,NULL,_IONBF,0);
    printf("x = ");
    scanf("%d",&x);

    printf("sqr( %d ) = %d \n",x,sqr(x));
    printf("pow4( %d ) = %d \n",x,pow4(x));

    return 0;

}
