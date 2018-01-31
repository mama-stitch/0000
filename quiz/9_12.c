#include<stdio.h>
#include<ctype.h>
/*
文字列s内の英字を大文字/小文字で表示する関数
*/
void put_upper(const char s[]){
    int i = 0;
    while(s[i]){
        putchar(toupper(s[i++]));
    }
}
void put_lower(const char s[]){
    int i = 0;
    while(s[i]){
        putchar(tolower(s[i++]));
    }
}
int main(void){

    char str[128];
    setvbuf(stdout,NULL,_IONBF,0);

    printf("str >> \n");scanf("%s",str);
    putchar('\n');
    put_upper(str);
    putchar('\n');
    put_lower(str);

    return 0;

}
