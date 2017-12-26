#include<stdio.h>
/*
関数の汎用化の例
*/
//文字chをn個並べる改行なし
void put_chars(char ch,int n){
    int i;
    for(i = 0; i < n; i++){
        putchar(ch);
    }
}
//文字chをn個並べる改行あり
void put_chars_line(char ch, int n){
    put_chars(ch,n);
    putchar('\n');
}
//警報をn回連続して発する関数
void alert(int n){
    put_chars_line('\a',n);
}
int main(void){
    setvbuf(stdout,NULL,_IONBF,0);
    put_chars_line('=',20);
    alert(9);
    put_chars_line('*',20);
    return 0;
}
