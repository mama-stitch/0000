#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
    おみくじ
*/
typedef struct{
    int freq;        //出現確立 まだ使ってない 
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
        {79,"大吉",0}
        ,{49,"中吉",0}
        ,{79,"吉",0}
        ,{24,"末吉",0}
        ,{14,"凶",0}
        ,{5,"大凶",0}
    };
    int n;
    int retry;
    //くじ出現確立を変更
    do{
        n = rand() % 100;
        printf("%d\n",n);
        if(n > 79){
            printf("大吉\n");      //0     20
            kuji[0].count++;
        }else if(n > 49){
            printf("中吉\n");       //1     30
            kuji[1].count++;
        }else if(n > 24){
            printf("吉\n");       //2     20 
            kuji[2].count++;
        }else if(n > 14){
            printf("末吉\n");     //3     15
            kuji[3].count++;
        }else if(n > 9){
            printf("凶\n");       //4     10
            kuji[4].count++;
        }else if(n > 4){
            printf("大凶\n");     //5     5
            kuji[5].count++;
        }
        printf("retry?\nYES:1   NO:0\n>> ");
        scanf("%d",&retry);
    }while(retry == 1);

    //くじ実績表示
    int i;
    for(i = 0;i < 6; i++){
       printf("%s : %d\n" ,kuji[i].str,kuji[i].count);

    }
    return 0;
}




