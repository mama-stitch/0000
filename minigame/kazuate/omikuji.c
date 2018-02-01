#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
    おみくじ
*/
int main(void){
    setvbuf(stdout,NULL,_IONBF,0);
    char kuji[][127] = {
        "大吉"      //0
        ,"中吉"     //1
        ,"末吉"     //2
        ,"吉"       //3
        ,"凶"       //4
        ,"大凶"     //5
    };

    srand(time(NULL));
    int n = rand() % 6;
    int i;
    printf("---%s---\n",kuji[n]);
/*
    for(i = 0; i < 6; i++){
        printf("%s\n",kuji[i]);
    }
*/
    return 0;
}




