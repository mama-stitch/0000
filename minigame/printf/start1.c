#include<stdio.h>
/*
数字階段を出力
*/

int main(void){

    setvbuf(stdout,NULL,_IONBF,0);
    int i,j;
    int num;
    printf("階段の段数は？ >> ");scanf("%d",&num);
    for(i = 1; i <= num; i++){
        for(j = 1;j <= i; j++){
            if(j < i)
                putchar(' ');
            else
                printf("%d",j % 10);
        }
        putchar('\n');
    }
    return 0;
}
