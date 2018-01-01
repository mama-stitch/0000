#include<stdio.h>
/* 呼び出された回数を表示する関数put_count */
void put_count(void){
    static int count;
    printf("put_count : %d \n",++count);
}
int main(void){
    int i,n;
    scanf("%d",&n);
    for(i = 1; i <= n; i++){
        put_count();
    }
    return 0;

}
