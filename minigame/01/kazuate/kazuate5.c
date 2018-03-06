#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX_STAGE 10

void print_history(int history[],int ans,int stage){
    int i;
    for(i = 0; i < stage; i++){ 
        printf("%d回目 : 入力値%d : ( %d )\n",
            i+1 ,history[i],history[i] - ans);
    }

}

int main(void){
    setvbuf(stdout,NULL,_IONBF,0);
    srand(time(NULL));

    int stage = 0;              //回数
    int ans = 1 + rand() % 10;  //1 ~ 100 正解生成
    int no;                    //答え
    int history[MAX_STAGE];     //答え履歴
    do{
        //答え入力
        printf(" のこり'%d'回： 答えは>> ", MAX_STAGE - stage);
        scanf("%d",&no);
        history[stage] = no;
        stage++;

        if(no > ans){
            printf("\a答えはもっとちいさいよ\n");
        }else if(no < ans){
            printf("\a答えはもっとおおきいよ\n");
        }
    }while( stage < MAX_STAGE && ans != no);
    //当たるまで　||　回数制限まで

    if(ans == no){
        printf("%d回であたりました！\n",stage);
    }else{
        printf("\a残念はずれ　答えは%d \n",ans);
    }
    //履歴表示
    puts("----入力履歴----");
    print_history(history,ans,stage);
    printf("終了\n");
    return 0;

}
