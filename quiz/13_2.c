#include<stdio.h>
/*

キーボードからファイル名を読み込んで
その名前のファイルの中身を消去する

*/

int main(void){
    setvbuf(stdout,NULL,_IONBF,0);

    FILE *fp;
    char fname[128];

    printf("ファイルの中身を消去する\n");
    printf("file name > ");
    scanf("%s",fname);
    
    fp = fopen(fname,"w");
    fclose(fp);

    return 0;

}
