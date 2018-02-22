#include<stdio.h>
#include<string.h>  
#include<time.h>
int sleep(unsigned long x){
    clock_t c1 = clock(),c2;

    do{
        if((c2 = clock()) == (clock_t)-1)
            return 0;
    }while(1000.0 * (c2 -c1) / CLOCKS_PER_SEC < x);
    return 1;
}

int main(void){


    char *str = "ABCDEFGHIJK  ";
    int i;
    int cnt = 0;
    int str_num = strlen(str);
    while(1){
        putchar('\r');
        for(i = 0; i < str_num; i++){
            if(cnt + i < str_num)
                putchar(str[cnt + i]);
            else
                putchar(str[cnt + i - str_num]);

        }
        fflush(stdout);
        sleep(150);
        if(cnt > 0)
            cnt--;
        else
            cnt = str_num - 1;
    }
    return 0;
}
