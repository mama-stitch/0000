#include<stdio.h>


int main(void){
    int n;
    scanf("%d", &n);
    if(n > 0){
        while(n-- > 0)
            printf("*");
        putchar('\n');    
    }
    return 0;


}
