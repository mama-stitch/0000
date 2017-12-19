#include<stdio.h>
/* */
int main(void){ 
    int i,j;

    int n;
    scanf("%d" ,&n);
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n - i; j++ ){
            printf("_");
        }
        for(j = 1; j <= i; j++){
            printf("*");
        }
        putchar('\n');
    }
    return 0;
}
