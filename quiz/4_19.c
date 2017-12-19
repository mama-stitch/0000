#include<stdio.h>

int main(void){

    int n;
    scanf("%d", &n);

    int i;
    for(i = 1; i<=n; i++){
        printf("*");
        if(i % 5 == 0)
            putchar('\n');    
    }

    return 0;

}
