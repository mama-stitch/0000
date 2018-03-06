#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void){
    setvbuf(stdout,NULL,_IONBF,0);

    int retry;

    srand(time(NULL));

    printf("この処理系では0 ~ %dまで生成できます\n",RAND_MAX);
    
    do{
        printf("\n乱数%dを生成しました\n",rand());
        printf("もう一度? はい(1)    いいえ(0) ");
        scanf("%d",&retry);

    }while(retry == 1);

    return 0;

}
