#include<stdio.h>

int main(void){
    int n;
    int i,j;
    scanf("%d" ,&n);
    for(i = 0; i < n; i++){
        for(j=0; j< n-i; j++){
            printf("_");
        }
        for(j=0; j< 2*i-1; j++){
            printf("*");
        }
        putchar('\n');
    }
    //2*n-1
    return 0;
}
