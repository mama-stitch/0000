#include<stdio.h>
/*

文字列をコピーする関数str_copy()

char *str_(char *d, const char *s)

*/

char *str_(char *destination, const char *source){
    
    char *temp = destination;
    while(*destination++ = *source++)
        ;
    return temp;
}
int main(void){
    char fromStr[256];
    char toStr[256];
    char *str;
    scanf("%s",fromStr);
    str = str_(toStr ,fromStr);
 
    printf("fromStr = %s\n",fromStr);
    //printf("toStr = %s\n",toStr);
    printf("str = %s\n",str);

    return 0;
}
