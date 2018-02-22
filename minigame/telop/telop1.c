#include<stdio.h>
#include<time.h>
/*
    名前をテロップ表示(左方向へ文字を流す)

*/

int sleep(unsigned long x){
    clock_t c1 = clock(),c2;
    do{
        if((c2 = clock()) == (clock_t)-1)
            return 0;
    }while(1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);
    return 1;

}

int len(const char *str){
    int i = 0;
    const char *s = str;
    while(*(s++)){
       // putchar(i);
        i++;
    }
    return i;
}
int main(void){
    

    setvbuf(stdout,NULL,_IONBF,0);
    


    char *str = "ABCDEFGHIJKLMN ";
    printf("len(str) = %d\n",len(str));
    while(1){
        int i,k;
        int j = 0;
        while(j < len(str)){
            for(i = j; i < len(str); i++){
                printf("%c",str[i]);
            }
            sleep(80);
            for(k = 0; k < j; k++){
                printf("%c",str[k]);
            }
            sleep(80);
            j++;

            printf("\r");
        }
    }

    return 0;
}
