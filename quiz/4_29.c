#include<stdio.h>

int main(void){
    int n;
    int i,j;
    scanf("%d" ,&n);
    for(i = 1; i <= n; i++){
        for(j=1; j <= i-1; j++){
            printf("_");
        }

        for(j=1; j<= 2*(n-i)-1; j++){
            printf("%d",i % 10);
        }


        putchar('\n');
    }
    //2*n-1
    return 0;
}
