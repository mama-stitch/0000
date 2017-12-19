#include<stdio.h>

int main(void){
    int n;
    int i,j;
    scanf("%d", &n);
    for(i=n; i>0; i--){
        for(j=0; j<i; j++){
            printf("*");
        }
        putchar('\n');
    }

    return 0;
}
