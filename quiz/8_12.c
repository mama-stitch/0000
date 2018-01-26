#include<stdio.h>
int main(void){
    int i,j,ch;
    int cnt[10] = {0};

    while((ch = getchar()) != '!'){
       if(ch <= '9' && ch >= '0')
           cnt[ch - '0']++;
    }

    for(i = 0; i < 10; i++){
        printf("\"%d\" : ",i);
        for(j = 0; j < cnt[i]; j++){
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}
