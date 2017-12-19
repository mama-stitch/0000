#include<stdio.h>
int main(void){
    int len;
    int i,j;
    scanf("%d", &len);

    for(i = 1; i <= len; i++){

        for(j = 1; j < i; j++){
            putchar('_');
        }

        for(j = 0; j <= len - i; j++){
            putchar('*');
        }

        putchar('\n');
    }


    return 0;

}
