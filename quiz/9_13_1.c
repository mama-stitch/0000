#include<stdio.h>
/*
!//文字列の個数はオブジェクト形式マクロとして定義
!//文字列の文字数を128とし、その値もオブジェクト形式マクロとして定義
!//文字列の配列を読み込む関数を作成する
!//$$$$を読み込んだ時点で読み込みを中断する
!//$$$$より前に入力された全文字列を表示する
*/

#define TURE 1
#define FALSE -1
int scan_str(char str[]);
//文字列の個数はオブジェクト形式マクロとして定義
#define NUM 4

//文字列の文字数を128とし、その値もオブジェクト形式マクロとして定義
#define LEN 128

//文字列の配列を読み込む
int scan_strings(char str[][LEN],int num){
    int i;
    for(i = 0; i < num; i++){ 
        printf("str[%d] >> ",i); 
        scanf("%s",str[i]);
        //$$$$を読み込んだ時点で読み込みを中断する
        if(str[i][0] == '$' && str[i][1] == '$' && str[i][2] == '$' && str[i][3] == '$'){
            break;
        }
    }
    return i;
}
//入力された全文字列を表示
void print_strs(char str[][LEN], int n){

    int i;
    for(i = 0; i < n; i++){
       printf("str[%d] = %s\n",i,str[i]); 
    }
}
int main(void){
    setvbuf(stdout,NULL,_IONBF,0);
    //   str[4][128]
    char str[NUM][LEN];
    int n = scan_strings(str,NUM);
    putchar('\n');
    print_strs(str,n);

    return 0;
}
