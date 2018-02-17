#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*
実行ゲーム回数
追加予定
入力履歴保存
*/

int main(void){

    setvbuf(stdout,NULL,_IONBF,0);
    srand(time(NULL));

    int num;
    int remains = 10;
    int game_count = 0;
    int history[10]; 

    printf("-999　～ 999　のあいだの数を当ててください \n");
    int ans = rand() % 2000 - 1000;
    do{
        do{
            printf("num >> ");scanf("%d",&num);
        }while(1000 < num || -1000 > num);

        if(remains >= 0){
            history[game_count] = num;
            game_count++;
        }
    

        remains--;

        if(ans > num)
            printf("ansはもっと大きい : %2d回目 残り%2d回\n",game_count,remains);
        else if(ans < num)
            printf("ansはもっと小さい : %2d回目 残り%2d回\n",game_count,remains);
        putchar('\n');

    }while(0 < remains && ans != num);

    if(ans == num){
        printf("正解     :  %d : %2d回目 残り%2d回\n",ans,game_count,remains);
    }else{
        printf("残念 答え:  %d : %2d回目 残り%2d回\n",ans,game_count,remains);
    }

    int i;
    for(i = 0; i < game_count; i++){
        printf("history[%d] = %d\n",i,history[i]);
    }
    return 0;
}
