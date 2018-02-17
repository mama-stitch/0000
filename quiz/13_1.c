#include<stdio.h>

/*
キーボードからファイル名を読み込む
そのファイルが存在すれば「そのファイルは存在します」
そのファイルが存在しなければ「そのファイルは存在しません」
と出力する
*/


int main(void){

    setvbuf(stdout,NULL,_IONBF,0);

    FILE *fp;
    char fname[256];


    printf("ファイル名は?\n>> ");scanf("%s",fname);

    fp = fopen(fname,"r"); //ファイルオープン

    if(fp == NULL)
        printf("ファイルは存在しない\n");
    else{
        printf("ファイルは存在する\n");
        fclose(fp);
    }


    return 0;

}
