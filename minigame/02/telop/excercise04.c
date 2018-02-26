#include<stdio.h>
#include<string.h>
#include<time.h>

/*
void telop(const char *s, int direction, int speed, int n);
s         :  表示する文字列
direction :  文字列を流す方向 右1, 左0
speed     :  ミリ秒単位の速度
n       　:  表示回数
*/

int sleep(unsigned long x){
    clock_t c1 = clock(),c2;

    do{
        if((c2 = clock()) == (clock_t)-1)
            return 0;
    }while(1000.0*(c2 - c1) / CLOCKS_PER_SEC < x);
    return 1;
}
void ltelop(const char *s,int speed,int n){

    int len = strlen(s);
    int i,j;
    int cnt = 0;

    if(speed > 0){
        for(j = 0; j < (n * len + 1); j++){

            putchar('\r');

            for(i = 0; i < len; i++){
                if(cnt + i < len)
                    putchar(s[cnt + i]);
                else
                    putchar(s[cnt + i - len]);
            }

            sleep(speed);

            if(cnt < len - 1)
                cnt++;
            else
                cnt = 0;
       }
   }
}

void rtelop(const char *s,int speed,int n){

    //printf("rtelop\n");

    int i,j;
    int len = strlen(s);
    int cnt = 0;
    if(speed > 0){
        for(i = 0; i < (n * len + 1); i++){
            putchar('\r');
            for(j = 0; j < len; j++){
                if(cnt + j < len)
                    putchar(s[cnt + j]);
                else
                    putchar(s[cnt + j - len]);
            }
            sleep(speed);
            if(cnt > 0)
                cnt--;
            else
                cnt = len - 1;
        }
    }
}
void telop(const char *s, int direction, int speed, int n){

    switch(direction){
        case 0 :
            ltelop(s,speed,n);
            break;
        case 1 :
            rtelop(s,speed,n);
            break;
        default:
            printf("無効な値です\n");
    }
}

int main(void){

    setvbuf(stdout,NULL,_IONBF,0);

    char *str = "ABCDEFG ";
    int i;
    telop(str,0,200,5);
    telop(str,1,200,5);
    return 0;

}
