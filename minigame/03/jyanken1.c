#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/*
PCの手を決定する
「じゃんけんぽん」と表示する
プレイヤーが手を入力する
勝敗の判定を行い、その結果を表示する
続行するかどうか尋ね、プレイヤーが希望すれば初めに戻る

human   pc      human - pc  (human - pc + 3) % 3

あいこ
0       0       0           3 % 3       0
1       1       0 
2       2       0

かち
0       1       -1          2 % 3       2
1       2       -1          2 % 3
2       0       2           5 % 3

まけ
0       2       -2          1 % 3       1
1       0       1           4 % 3
2       1       1           4 % 3



*/

typedef enum { GOO, CHOKI, PAR } HAND;
int main(void){

//PCの手を決定する
//乱数で決定
    srand(time(NULL));
    setvbuf(stdout,NULL,_IONBF,0);
    int hand;
    int player;
    int retry;
    int com; 
    do{
        com = rand() % 3;
        //「じゃんけんぽん」と表示する
        printf("じゃん けん... \n");
        do{
            printf("ぐー...0 / ちょき...1 / ぱー...2\n");

            //プレイヤーが手を入力する

            scanf("%d",&hand);
        }while(hand < GOO || hand > PAR);
        /*
            グー(0),  チョキ(1)   パー(2)
        */
        //勝敗の判定を行い、その結果を表示する
        /* 
        (player - com) % 3 == 0 //あいこ
        (player - com) % 3 == 1 //まけ
        (player - com) % 3 == 2 //かち
        */
        printf("ぽん！！！\n");
        int judge = (player - com + 3) % 3;

        printf("comは....\n");
        switch(com){
            case GOO:
                printf("ぐー\n");
                break;
            case CHOKI:
                printf("ちょき\n");
                break;
            case PAR:
                printf("ぱー\n");
                break;
        }


        putchar('\n');
        switch(judge){
            case 0:
                printf("あいこ\n");
                break;
            case 1:
                printf("まけ\n");
                break;
            case 2:
                printf("かち\n");
                break;
        }
        do{
            printf("one more YES...1 / NO...0");
            scanf("%d",&retry);
        }while(retry != 1 && retry != 0);
    }while(retry == 1);
    //続行するかどうか尋ね、プレイヤーが希望すれば初めに戻る
    printf("おつかれさん");

    return 0;

}
