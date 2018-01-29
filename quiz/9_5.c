#include<stdio.h>
//文字列sを空文字列にする
void null_string(char s[]){
    s[0] = '\0';
}
int main(void){

    char str[128];
    scanf("%s",str);

    putchar('\n');
    printf("%s \n",str);
    puts("----------------------------");

    puts("null_string");
    null_string(str);
    printf("\"%s\"",str);
   
    return 0;

}
