#include<stdio.h>

int main(void){


    int i;
    int n;

    scanf("%d", &n);
    if(n >= 0){
        for(i = 0; i <= n; i++)
            printf("%d",i % 10);
        putchar('\n');    
    }

    return 0;
}
