#include<stdio.h>

const char *str_char(const char *s, char ch){
    while(*s){
        if(*s++ == ch)
            return s;
    }
}

int main(void){
    char ch;
    const char *string = "ABCDEFGHIJK";
    const char *p;
    setvbuf(stdout,NULL,_IONBF,0);
    printf("検索対象文字%s\n",string);
    printf("検索文字->");
    scanf("%c",&ch);
    if((p = str_char(string ,ch)) == '\0')
        printf("見つからなかった\n");
    else
       printf("検索文字以降の文字列は%s\n",p);
    return 0;

}
