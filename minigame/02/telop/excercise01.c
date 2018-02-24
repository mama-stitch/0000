#include<stdio.h>
#include<time.h>
/*
プログラム開始からの経過時間を表示する
クロック数も表示する
*/
int sleep(unsigned long x){
    clock_t c1 = clock(),c2;
    do{
        if((c2 = clock()) == (clock_t)-1)
            return 0;
    }while(1000.0 * (c2 - c1)/ CLOCKS_PER_SEC < x);
    return 1;
}   

int main(void){

    setvbuf(stdout,NULL,_IONBF,0);

    int i = 0;
    unsigned long sum = 0;
    while(1){
        printf("%d : ",i);      //秒表示
        printf("%d",sum);       //クロック表示
        sum += CLOCKS_PER_SEC;
        sleep(1000);
        putchar('\n');
    }
    return 0;
}
