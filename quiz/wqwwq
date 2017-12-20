#include<stdio.h>


/*
文字列に特定文字が含まれているかどうか調べる
（添え字を返却）

*/

int str_ch(const char *s, int ch){
    int index = 0;
    while(*s){
       if(*s++ == ch) 
           return index;
        
        index++;
    }
    return -1;
}

int main(void){

    char string[256];
    char ch[10];
    int  index;
    scanf("%s",string);
    scanf("%s",ch);
    printf("%s \n %s \n",string,ch);

    if((index =str_ch(string,ch[0])) == -1){
        printf("err");
    }else{

        printf("%d",index);
    }

    return 0;
    
}

