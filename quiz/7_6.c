#include<stdio.h>

int main(void){
    unsigned a,b,c;

    setvbuf(stdout,NULL,_IONBF,0);
    printf("a > ",a);
    scanf("%u",&a);
    printf("b > ",b);
    scanf("%u",&b);
    printf("c > ",c);
    scanf("%u",&c);
    
    printf("a & b == b & c の値は%d", a & b == b & c);

    return 0;
}

