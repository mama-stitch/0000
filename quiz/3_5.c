#include<stdio.h>

int main(void){
    int a,b;

    printf("A: ");scanf("%d", &a);
    printf("B: ");scanf("%d", &b);
    if( b % a)
        printf("BはAの約数です");
    else
        printf("BはAの約数でない");
    return 0;
}
