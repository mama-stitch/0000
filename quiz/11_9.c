#include<stdio.h>
/*

    文字列の中から数字を除去する

*/
void deli_digit(char *s);
int main(void){

    char string[256] = "abjsodijb14651earg65ae1rg65ae1rg";

    deli_digit(string);
    printf("%s",string);
    return 0;
}
void deli_digit(char *s){
    char *t = s;
    while(*s){
        if(*s < '0'|| *s > '9'){
           *t++ = *s;
        }
       s++;
    }
    *t = '\0';

}
