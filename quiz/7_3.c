#include<stdio.h>
/* 文字型と整数型の大きさを表示する*/
int main(void){
    printf("char型  %ubyte\n",(unsigned)sizeof(char));
    printf("short型  %ubyte\n",(unsigned)sizeof(short));
    printf("int型   %ubyte\n",(unsigned)sizeof(int));
    printf("long型   %ubyte\n",(unsigned)sizeof(long));

    return 0;
}

