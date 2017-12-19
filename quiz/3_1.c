#include<stdio.h>

int main(void) {
    int x;
    scanf("%d", &x);
    if(x % 10)
        printf("x=%dは10で割り切れない",x );

    return 0;
}
