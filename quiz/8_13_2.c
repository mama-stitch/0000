#include<stdio.h>
/*
キーボードから読み込んだ文字を画面に出力するとともに、
読み込んだ文字数、改行数、ここの数字文字数をカウントして表示するプログラム
*/
int main(void){

    int ch_count = 0; //読み込んだ文字数  
    int n_count = 0;  //改行数
    int num[10] = {0}; //数字文字数

    //文字取得 
    int ch; 
    while((ch = getchar()) != '!'){
        //文字分類およびカウント
        if(ch == '\n')
            n_count++;
        if(ch >= '0' && ch <= '9')
            num[ch - '0']++;
        ch_count++;
    }
    //カウント数表示
    printf("ch_count = %d\n",ch_count);
    printf("n_count = %d\n",n_count);

    int i;
    for(i = 0; i < 10; i++){
        printf("\'%d\' : %d\n",i,num[i]);

    }
    return 0;
}
