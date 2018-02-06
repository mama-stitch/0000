#include<stdio.h>

/*
    文字列s内のすべての数字文字を削除する
*/

void deli_digit(char s[]){
    int i = 0;
    int j = 0;
    while(s[i]){
        if(s[i] < '0' || s[i] > '9'){
            //s[i]が数字文字じゃなければ
            s[j++] = s[i++]; 
        }else{
            i++;
        }
    }
    s[j] = '\0';
}

int main(void){

    setvbuf(stdout,NULL,_IONBF,0);
    char str[128];

    printf("str >> ");scanf("%s",str);

    printf("printf %s\n",str);
    deli_digit(str);
  
    printf("printf %s\n",str);

    return 0;

}
