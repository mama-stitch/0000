#include<stdio.h>
#include<time.h>
#include<string.h>
/*
文字を1文字ずつ表示してから
後ろから1文字ずつ消去する
これらをくりかえす
*/
int sleep(unsigned long n){
    clock_t c1 = clock(),c2;

    do{
        if((c2 = clock()) == (clock_t)-1)
            return 0;

    }while(1000.0 * (c2 - c1)/CLOCKS_PER_SEC < n);
    return 1;
}
int main(void){


    char * str = "ABCDEFG";
    int i;
    while(1){
        for(i = 0; i < strlen(str); i++){
            putchar(str[i]);
            fflush(stdout);
            sleep(30);
        }
        for(i = 0; i < strlen(str); i++){
            printf("\b \b");
            fflush(stdout);
            sleep(30);
        }
    }
    return 0;
}
