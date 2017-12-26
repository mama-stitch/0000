#include<stdio.h>
/*
    1~nまでの全整数の和を返す
    int sum(int n)
*/
int sum(int n){
    int sum = 0;
    while(n){
        sum += n--;
    }
    return sum;
}
int main(void){

    int x;
    setvbuf(stdout,NULL,_IONBF,0);
    scanf("%d",&x);
    printf("1 ～%dまでの全整数和は%d\n",x,sum(x));
    return 0;

}
