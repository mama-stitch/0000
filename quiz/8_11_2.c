#include<stdio.h>
/*
    標準入力に現れた行数をカウントする
*/
int main(void){
    int count = 0;
    char ch;

    while((ch = getchar()) != '!'){
        if(ch == '\n')
            count++;
    }

    int cnt[10] = {0};
    printf("0-9 >> !まで\n");
    while((ch = getchar()) != '!'){
       if('0' <= ch && '9' >= ch)
            cnt[ch - '0']++;
    }
    printf("\\n count = %d",count);

    int i;
    for(i = 0; i < 10; i++){
        printf("cnt[%d] = %d\n",i,cnt[i]);
    }
    return 0;

}



