#include<stdio.h>

int main(void){
/*

正の値を読み込む
その値の面積を持つ
縦横の辺の長さが整数値
縦の長さが横の長さ以下
長方形「たて×よこ」の形式で列挙する

面積：３２(enter)
１　＊　３２
２　＊　１６
４　＊　８
*/

    int tate = 1;
    int area;
    scanf("%d", &area);
    while(tate * tate < area){
        if(area % tate == 0)
            printf("%d  *  %d = %d\n", tate, area/tate, tate*area/tate);
        tate++;
    }


    return 0;

}
