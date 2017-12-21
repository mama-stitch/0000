#include<stdio.h>
// 文字列出力
void put_string(const char *s){
    while(*s){
        putchar(*s++);
    }
}
//文字列sから文字cの数をカウントし、カウント数を返す
int str_chnum(const char *s, char c){
    int count = 0;
    while(*s){
        if(*s++ == c)
            count++;
    }
    return count;
}
int main(void){

    char *string = "test123446test";
    char ch = '4';
    put_string(string);
    printf("\nchar \'%c\' count = %d\n",ch ,str_chnum(string,ch));

    return 0;

}
