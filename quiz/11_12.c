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
        printf("temp[%d] = %d\n",n, temp[n]);
        n++;
    }
    printf("n = %d\n",n);
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
long   strtol(const char *nptr);
double strtof(const char *nptr);

int main(void){
    char str[128];
    scanf("%s",str);
    printf("%d\n",strtoi(str));

   return 0;
}
