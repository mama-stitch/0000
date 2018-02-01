#include<stdio.h>
/*
受け取った文字列の配列に
格納されているn個の文字列の
文字の並びを反転する関数

*/

#define LEN 128
#define swap(type, x,y) do{ type t = x; x = y; y = t; }while(0)
//文字列数カウント
int len(const char* s){

    int i = 0;
    while(s[i])
        i++;
    return i;
}
//文字列の配列をそれぞれ反転する
void rev_strings(char s[][LEN],int n){
    void rev_string(char s[]);
    int i;
    for(i = 0; i < n; i++){
        rev_string(s[i]);
    }
}
//文字列を反転する
void rev_string(char s[]){
    int ln = len(s);
    int i;
    for(i = 0;i < ln / 2; i++){
        swap(char,s[i],s[ln - i - 1]);
    }
}

void put_strings(char str[][LEN],int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%s\n",str[i]);
    }

}
int main(void){

    char str[][LEN] = {"1testest^","2teerere^","3ttrreeww^"};
    
    int i;
    for(i=0;i<3;i++){
        printf("%s\n",str[i]);
    }

    rev_strings(str,3);
    put_strings(str,3);
    return 0;

}



