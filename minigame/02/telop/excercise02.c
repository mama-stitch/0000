#include<stdio.h>
#include<time.h>
/*
void gput(const char *s, int speed);
文字列を先頭から1文字ずつ表示する

sは表示する文字列
speedはミリ秒単位の表示速

gput("ABC",100);
と呼び出すとまず'A'を表示しその100ミリ秒後に'B'を表示
さらにその100ミリ秒後に'C'を表示する
"ABC"の全文字を表示すると呼び出し元に戻る
*/

int sleep(unsigned long x){
    clock_t c1 = clock(),c2;
    do{
        if((c2 = clock()) == (clock_t)-1)
            return 0;
    }while(1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);
    return 1;
}
void gput(const char *s, int speed){

    while(*s){
        printf("%c",*s++);
        sleep(speed);
    }
}

int main(void){
    setvbuf(stdout,NULL,_IONBF,0);
    char *str = "telop tester";
    gput(str,1000);
    return 0;
}
