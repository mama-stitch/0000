#include<stdio.h>


int main(void){

    int n;
    scanf("%d", &n);
    int i;
    if(n > 0){
        for(i = 0; i < n/5; i++)
            puts("*****");
        for(i = 0; n % 5 > i; i++)
            printf("*");
        putchar('\n');
    }
    return 0;

}
