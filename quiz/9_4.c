#include<stdio.h>

/*
文字列の配列を読み込んで表示する
$$$$$を読み込んだ時点で読み込みを中断終了する
$$$$$より前に入力された前文字列を表示する
*/

#define NUMBER 10
int main(void){
    char a[NUMBER][128];
    int i;
    int no = 0;
    for(i = 0; i < NUMBER; i++){
        scanf("%s",a[i]);
        if(a[i][0] == '$' && a[i][1] == '$' 
                    && a[i][2] == '$' && a[i][3] == '$' && a[i][4] == '$'){
            no = i;
            break;
        }
    }
    puts("----------------------------------------");
    for(i = 0; i < no; i++){
        printf("a[%d] = %8s\n",i,a[i]);
    }

    

    return 0;
}
