#include<stdio.h>
int main(void){

    int ch;
    int n_count = 0;//改行文字の数
    while((ch = getchar()) != '\t'){
        if(ch == '\n')
            n_count++;
    }
    printf("改行文字数%d\n",n_count);

    printf("%x\n",EOF); 
    printf("%x\n",''); 

    return 0;
}

