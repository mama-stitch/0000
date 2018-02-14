#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
    おみくじ
*/
typedef struct{
    int prob;        //出現確立 まだ使ってない 
    char *str;       //くじ内容
    int count;       //出現回数
}KUJI;


int main(void){
    setvbuf(stdout,NULL,_IONBF,0);
/*    char kuji[][127] = {
        名前        index   出現確立
        "大吉"      //0     20
        ,"中吉"     //1     30
        ,"吉"       //2     20
        ,"末吉"     //3     15
        ,"凶"       //4     10
        ,"大凶"     //5     5
    };
*/

    srand(time(NULL));
    KUJI kuji[] ={
         {0,"大吉",0}
        ,{0,"中吉",0}
        ,{0,"吉  ",0}
        ,{0,"末吉",0}
        ,{0,"凶  ",0}
        ,{0,"大凶",0}
    };
    int n;
    int retry;
    int i,j;
    int all_prob = 100;
    int prob;
   
    printf("確率の設定\n");
    for(i = 0; i < 6; i++){
        do{
            printf("%sの確率",kuji[i].str);
            printf("%d : ",i);scanf("%d",&kuji[i].prob);
        }while(kuji[i].prob < 0 || kuji[i].prob > 100);

        if((all_prob - kuji[i].prob) <= 0){
            kuji[i].prob = all_prob;
            for(j = i + 1; j < 6;j++){ 
                kuji[j].prob = 0;
                printf("%s,%d\n",kuji[j].str,kuji[j].prob);
            }
            break;
        }
        all_prob -= kuji[i].prob;
        if(i == 5) 
            kuji[i].prob = all_prob; 
    
        printf("all_prob = %d\n",all_prob);
    
    }
    /*
    printf("確率設定test \n");
    for(i = 0; i < 6; i++){
        printf("%s : %d\n",kuji[i].str,kuji[i].prob);
    }
    */



    /*
    おみくじの確立を昇順にソートする
    乱数nの値と比較する
    昇順にソートされた確立と乱数nを比較する
    乱数が確立を下回ればif文をtureで出力
    n = rand() % 100;
    sort(kuji);

    kuji[i].prob    10  20      30          20      10  10
                    |   |       |           |       |   |
srt kuji[i].prob    10  10  10  20      30
                    |   |   |   |       |               |

               乱数n を↑のおみくじ確率の枠に投げ込むイメージ
*/
    do{
        
        n = rand() % 100;
        printf("%d\n",n);
        /*
        条件式変更予定
        if(n < kuji[0].prob){
            printf("大吉\n");     //0     20
            kuji[0].count++;
        }else if(n > kuji[1].prob){
            printf("中吉\n");     //1     30
            kuji[1].count++;
        }else if(n > kuji[2].prob){
            printf("吉\n");       //2     20 
            kuji[2].count++;
        }else if(n > kuji[3].prob){
            printf("末吉\n");     //3     15
            kuji[3].count++;
        }else if(n > kuji[4].prob){
            printf("凶\n");       //4     10
            kuji[4].count++;
        }else if(n > kuji[5].prob){
            printf("大凶\n");     //5     5
            kuji[5].count++;
        }
        */
        printf("retry?\nYES:1   NO:0\n>> ");
        scanf("%d",&retry);
    }while(retry == 1);

    //くじ実績表示
    for(i = 0;i < 6; i++){
       printf("%s : %d : %d%\n" ,kuji[i].str,kuji[i].count,kuji[i].prob);

    }
    return 0;
}




