#include<stdio.h>

/*
数当てゲーム
*/
int main(void){

    int n;
    int ans = 7;
    setvbuf(stdout,NULL,_IONBF,0);

    printf("0 ~ 9の値を充ててください\n");
    do{
        printf("nはいくつ？ >> ");
        scanf("%d",&n);
        if(ans < n){
            printf("答えはもっと小さい\n");
        }else if(ans > n){
            printf("答えはもっと大きい\n");
        }else if(ans == n){
            printf("正解です\n");
        }
    }while(ans != n);
    printf("終了");

    return 0;

}
