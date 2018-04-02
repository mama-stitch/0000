#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){

    srand(time(NULL));
    int i;
    int digits = 4;
    int num;
    int count = 10;
    while(count-- > 0){
        for(i = 0; i < digits; i++){
            if(i == 0)
                num = 1 + rand() % 9;
            else
                num += rand() % 10;

            if(i == digits - 1)
                break;
            num *= 10;
        }
        putchar('\n');
        printf("%d\n",num);
    }
    return 0;
}
