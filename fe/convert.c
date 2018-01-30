#include<stdio.h>
#include<string.h>
//void convert(const char *, const char *,char *);
/*
path    変換前のパス
base    カレントディレクトリの絶対パス
result　返還後の絶対パス

pathが相対パス表記であれば、
    baseを基準にした絶対パス表記に変換しresultに格納する。

pathが絶対パス表記であれば、
    resultにはbaseに関係なくpathをそのまま格納する



    / ------f
     |
     |------a------d------e
            |
            |-----file2.txt
            |
            |------b------c
                   |
                   |
                   |------file1.txt
                   |
                   |
                   |------file3.txt

path                base        result
../../b/c           /a/d/e/     /a/b/c/
b/file1.txt         /a/         /a/b/file1.txt
c/                  /a/b/       /a/b/c/
file1.txt           /a/b/       /a/b/file1.txt
./                  /a/b/c/     /a/b/c/
/a/d/e/file4.txt    /a/b/c/     /a/d/e/file4.txt



*/
void convert(const char *path,const char *base, char *result){
    const char *pp, *bp;
    char *rp;
    int length;
    /* pathが絶対パス表記の場合*/
    if(*path == '/'){
        strcpy(result,path);
        return;
    }
    /* pathがカレントディレクトリの場合*/
    if(!strcmp(path,".") || !strcmp(path,"./")){
        strcpy(result,base);
        return;
    }

    length = strlen(base);
    bp = base + length;         /* bpは文字列baseの終端アドレスを指す */
    if(*(bp - 1) == '/')        //終端が/の場合/の前のアドレスまで戻す
        --bp;

    /* pathの先頭部にある".."または"../"を解析することで、
       baseのパス表記のうち、どこまでresultと共通になるかを調べる   */ 
    for(pp = path; *pp != '\0' && *pp == '.';){
        if(!strncmp(pp, "../",3)){
            pp += 3;
            while(bp > base && *--bp != '/')
                ;
        }else if(!strncmp(pp, "./",2)){
            pp += 2;
        }else if(!strncmp(pp, "..\0",3)){
            pp += 2;
            while(bp > base && *--bp != '/')
                ;
        }else{
            break;
        }

    }
    /* baseのパス表記と共通な部分をresultに複写する */
    length = bp - base;
    strncpy(result, base, length);

    rp = result + length;
    *rp++ = '/';

    /* pathの文字列のうち、先頭部分の"./"や"../"を除いた残りの
       部分(ppが指す文字列）を、resultの文字列に追加する。 */
    strcpy(rp,pp);
    return;

}
int main(void){
    char path[] = "../../b/c/index.c";
    char base[] = "/a/d/e/";
    char result[128];

    printf("path %s\n",path);
    printf("base %s\n",base);
//void convert(const char *path,const char *base, char *result){
    convert(path,base,result);
    printf("result %s",result);
    return 0;
}



