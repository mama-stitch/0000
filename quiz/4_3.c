#include<stdio.h>

/*
整数を読み込んで0までカウントダウンするプログラムを作成せよ
*/
int main(void){

    int n;

    scanf("%d",&n);
    if(n >= 0){
        while(n>0){
            printf("%d",n);
            n--;
        }
        printf("0\n");
    }

    return 0;


}
