#include<stdio.h>
//#include<stdlib.h>

/*
atoi atol atofと同じ内容の関数
int    strtoi(const char *nptr);
long   strtol(const char *nptr);
double strtof(const char *nptr);
*/


//数字文字列(char *)から整数値(int)に変換
int strtoi(const char *nptr){

    int temp[128] = {0};
    int i,j,n,sum,num,sign;
    i = j = n = sum = num = 0;
    /*
     + - の符号に対応
    */
    sign = 1;
    if(*nptr == '-'){
        nptr++;
        sign = -1;
    }else if(*nptr == '+'){
        nptr++;
        sign = 1;
    }
    /*
    数字文字列を一桁の数値に変換
    配列に格納
    */

    while(*nptr){
        temp[n] = ((int)*nptr++) - 48;
        //printf("temp[%d] = %d\n",n, temp[n]);
        n++;
    }
   // printf("n = %d\n",n);
    /*
    桁の重みづけを行う
    配列から一つの数値に変換する
    */
    for(i = 0; i < n; i++){
        num = temp[i];
        for(j = n - i - 1; j > 0; j--){
            num *= 10;
        }
        sum += num;
    } 
    sum *= sign;
    return sum;
}
//文字chは空白類文字か
int is_whitespace(int ch){

    return ch == ' '|| ch == '\f' || ch == '\n' ||
           ch == '\r'|| ch == '\t' || ch == '\v';
}
long strtol(const char *nptr){
    int sign = 1;//符号
    long x = 0;  //変換した整数
    
    //空白類文字を読み飛ばす
    while(is_whitespace(*nptr))
        nptr++;
    //符号チェック
    switch(*nptr){
        case '+' :
            nptr++;
            break;
        case '-' :
            nptr++;
            sign = -1;
            break;
    }
    for(x = 0; *nptr >='0' && '9' >= *nptr; nptr++){
        x = x * 10 + (*nptr - '0');
    }
    return sign * x;
}
double strtof(const char *nptr);

int main(void){
    char str[128];
    scanf("%s",str);
    printf("strtol(Str) = %ld\n",strtol(str));

   return 0;
}
