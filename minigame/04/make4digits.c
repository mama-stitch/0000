#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*
3重ループで4つのint値を持つ配列を生成
重複なし
前ゼロあり
*/

#define DIGITS 4
int main(void){

    srand(time(NULL));
    int num[DIGITS] = {0};
    int digits = DIGITS;
    int i,j;
    int tmp;
    int count = 0;

    while(count < 10){
        for(i = 0; i < digits; i++){
            do{
                tmp = rand() % 10;
                for(j = 0; j < i; j++){
                    if(num[j] == tmp)
                        break;
                }
            }while(i > j);
            num[i] = tmp;
        }


        printf("%2d : ",count);
        for(j = 0; j < digits; j++){
            printf("%d",num[j]);
        }
        putchar('\n');
        count++;
    }
    return 0;
}
