#include<stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    if(n > 0){
        while(n > 0){
            printf("+");
            n--;
            if(n > 0){
                printf("-");
                n--;
            }
        }
        putchar('\n');
    }
    return 0;

}
