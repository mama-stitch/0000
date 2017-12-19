#include<stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    int i,j;
    for(i=1; i<=n; i++){
        for(j=0; j<i; j++){
            printf("*");
        }
        putchar('\n');
    }
    return 0;

}
