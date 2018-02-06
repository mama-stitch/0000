#include<stdio.h>
#include<ctype.h>

/*
文字列s内の英字を大文字/小文字で表示する
*/

void put_upper(char s[]);
void put_lower(char s[]);
int main(void){

    setvbuf(stdout,NULL,_IONBF,0);

    char str[128];
    scanf("%s",str);
    printf("大文字 : ");put_upper(str);
    printf("\n\n");
    printf("小文字 : ");put_lower(str);

    return 0;
}


void put_lower(char s[]){
    int i = 0;
    while(s[i]){
        putchar(tolower(s[i++]));
    }
}
void put_upper(char s[]){
    int i = 0;
    while(s[i]){
        putchar(toupper(s[i++]));
    }

}
