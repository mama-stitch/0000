#include<stdio.h>

/*
文字列の配列を読み込んで表示する
$$$$$を入力した時点で読み込みを中断・終了する
$$$$$より前に入力された全文字列を表示する
*/
#define NUM 10
int main(void){

    int i,j;
    char str[NUM][128];
    int no;

    setvbuf(stdout,NULL,_IONBF,0);
    for(i = 0; i < NUM;i++){
        printf("str[%d] >> ",i); scanf("%s",str[i]);
        if(str[i][0] == '$' && str[i][1] == '$' && str[i][2] == '$'
            && str[i][3] == '$' && str[i][4] == '$' && str[i][5]=='\0'){
            printf("break\n");
            break;
        }
    }
    puts("--------------------------------");
    for(j = 0; j < i; j++){
        printf("str[%d] = %s\n",j,str[j]);
    }
    return 0;
}
