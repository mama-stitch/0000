#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*


残りゲーム回数
実行ゲーム回数
追加予定
入力履歴保存
*/

int main(void){

    setvbuf(stdout,NULL,_IONBF,0);
    srand(time(NULL));

    int num,ans;
    int i;
    int game_count = 10;

    ans = rand() % 2000 - 1000;

    do{    
        game_count--;

        do{
            printf("num >> ");scanf("%d",&num);
        }while(1000 < num || -1000 > num);

        if(ans > num)
            printf("ansはもっと大きい : gamecount %2d",game_count);
        else if(ans < num)
            printf("ansはもっと小さい : gamecount %2d",game_count);

    }while(game_count >= 0 && ans != num);

    if(ans == num){
        printf("正解 :  %d : gamecount :%d\n",ans,game_count);
    }else{
        printf("残念 :  %d : gamecount :%d\n",ans,game_count);
    }

    return 0;
}
