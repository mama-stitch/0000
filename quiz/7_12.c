#include<stdio.h>
#include<limits.h>


int main(void){

    unsigned a,b,c;
    printf("UINT_MAX = %u\n",UINT_MAX);
    printf("UINT_MAX + 1 = %u\n",UINT_MAX + 1);

    a = UINT_MAX; 
    b = UINT_MAX;
    c = a + b + 2;
    printf("%u",c);
    return 0;
}
