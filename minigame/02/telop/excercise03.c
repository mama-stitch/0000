#include<stdio.h>
#include<time.h>
#include<string.h>
/*
文字列を点滅表示する
文字列sをdミリ秒表示してeミリ秒消去するのをn回繰り返した後呼び出し元に戻る
*/
int sleep(unsigned long x){

    clock_t c1 = clock(),c2;

    do{
        if((c2 = clock()) == (clock_t)-1)
            return 0;
    }while(1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);
    return 1;
}
void bput(const char *s,int d,int e,int n){

    int len = strlen(s);
    int i,j;
    for(i = 0; i < n; i++){
        printf("%s",s);
        sleep(d);
        for(j = 0; j < len;j++){
            printf("\b \b");

        }
        sleep(e);
    }
}
int main(void){
    setvbuf(stdout,NULL,_IONBF,0);

    char *str = "文字列点滅";
    bput(str,500,200,15);
    printf("ok");

    return 0;

}
