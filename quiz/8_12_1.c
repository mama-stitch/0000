#include<stdio.h>
/*

標準入力から入力された0から9の数字の出現回数をカウントし
縦のグラフとして出力

入力
0112334444566

出力
        *
        *
  *   * *   *
* * * * * * *
0 1 2 3 4 5 6 7 8 9 


*/

int main(void){

    int cnt[10] = {0};
    int ch;
    int i,j;
    //０－９の数字文字を整数として取得
    while((ch = getchar()) != '!'){
        if(ch <= '9' && ch >= '0')
            cnt[ch - '0']++;
    }

    //出現数字の最大カウント回数を取得
    int maxcnt = 0;
    for(i = 0; i < 10; i++){
        if(maxcnt < cnt[i])
            maxcnt = cnt[i];
    }
    //printf("maxcnt = %d\n",maxcnt);

    //グラフ作成
    for(i = 1; i <= maxcnt; i++){
        for(j = 0; j < 10; j++){
            if((maxcnt - (i - 1)) <= cnt[j])
                printf(" * ");
             else
                printf("   ");
       }  
       putchar('\n');
    }
    // 尺度数字表示
    for(i = 0; i < 10; i++){
        printf("%2d ",i);  

    }


    return 0;
}



