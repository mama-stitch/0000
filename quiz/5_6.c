#include<stdio.h>
int main(void){
    double a;
    int b;
    b = a = 1.5;
    printf("b = a = 1.5; \n");
    printf("double a = %.2f\nint b = %d\n",a,b);
    putchar('\n');
    a = b = 1.5;
    printf("a = b = 1.5; \n");
    printf("double a = %.2f\nint b = %d\n",a,b);
    return 0;
}
