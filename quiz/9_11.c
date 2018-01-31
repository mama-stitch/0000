#include<stdio.h>
//文字列s内の数字文字を削除する関数

void del_digit(char s[]){
    int i = 0;
    int idx = 0;
    while(s[i]){
        if( s[i] < '0' || s[i] > '9'){
            s[idx++] = s[i];
            printf("s[%d] ,s[%d]=%c \n",idx,i,s[i]);
        }
        i++;
    }
    s[idx] = '\0';

}

int main(void){

    char str[128];
    setvbuf(stdout,NULL,_IONBF,0);
    printf("str >> ");scanf("%s",str);
    del_digit(str);
    printf("%s\n",str);

    return 0;

}
