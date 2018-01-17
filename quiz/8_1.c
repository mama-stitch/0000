#include<stdio.h>
#define diff(x,y) (((x) < (y) )? ((y) - (x) ): ((x) - (y)))
int main(void){
    setvbuf(stdout,NULL,_IONBF,0);

    float a, b;

    printf("a >> ");scanf("%f",&a);
    printf("b >> ");scanf("%f",&b);
    printf("diff(%f,%f) = %f\n",a,b,diff(a,b));

    return 0;
}
