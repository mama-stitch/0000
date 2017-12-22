#include<stdio.h>
#include<ctype.h>
/*
文字列を大文字にする

*/
void str_toupper(char *s){
    char *t = s;
    while(*s){
       *s = toupper(*s);
        s++;
    }
    printf("toupper = %p\n",t);
}
/*

文字列を小文字にする
*/
void str_tolower(char *s){
    char *t = s;
     while(*s){
       *s = tolower(*s);
        s++;
    }   
    printf("tolower = %p\n",t);

}
int main(void){

    char string[256] = "ABcdEfgHIjk";
    
    printf("original = %s %p\n",string,&string);
    str_toupper(string);
    

    printf("toupper = %s\n",string);

    str_tolower(string);
    printf("tolower = %s %p\n",string,&string);
    return 0;
}
