#include<stdio.h>
/*
文字列の配列を読み込んで表示する
    文字列の個数はオブジェクト形式マクロとして定義
    文字列の文字数を128とし、その値もオブジェクト形式マクロとして
    定義する
    文字列の配列を読み込む関数を作成
    文字列"$$$$$"を読み込んだ時点で読み込みを中断、終了する
    $$$$$より前に入力された前文字列を表示する
*/

#define NUM 4
#define LEN 128

void scan_str(char str[][LEN],int num){
    int i;
    for(i = 0; i < num; i++){
        printf("str[%d][%d]",i,LEN);scanf("%s",&str[i][0]);
        if(str[i][0] == '$' && str[i][1] == '$' 
                && str[i][2] == '$' && str[i][3] == '$'
                && str[i][4] == '$'){
            printf("終了\n");
            break;
        }
    }
}
void print(char str[][LEN],int num){
    int i;
    for(i = 0; i < num; i++){
        printf("str[%d] = %s\n",i,str[i]);
        if(str[i][0] == '$' && str[i][1] == '$' 
                && str[i][2] == '$' && str[i][3] == '$'
                && str[i][4] == '$'){
            printf("終了\n");
            break;
        }
    }
}

int main(void){
    char str[NUM][LEN];
    setvbuf(stdout,NULL,_IONBF,0);
    printf("scan_str\n");
    scan_str(str,NUM);
    printf("print\n");
    print(str,NUM);
    return 0;
}
