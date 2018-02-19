#include<stdio.h>


int fexits(const char *fname){

    FILE *fp;
    if((fp = fopen(fname,"r")) == NULL)
        return 0;
    else
        fclose(fp);
        return 1;
}

int main(void){
    setvbuf(stdout,NULL,_IONBF,0);

    char fname[128];

    printf("file name >> ");
    scanf("%s",fname);

    if(fexits(fname))
        printf("あります");
    else
        printf("ありません");


    return 0;
}
