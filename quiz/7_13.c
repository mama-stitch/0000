#include<stdio.h>
#include<limits.h>

int main(void){
    float f;
    double d;
    long double ld;
    setvbuf(stdout,NULL,_IONBF,0);
    printf("float       ");scanf("%f",&f);
    printf("double      ");scanf("%lf",&d);
    printf("long double ");scanf("%Lf",&ld);
    printf("float       %f\n",f);
    printf("double      %lf\n",d);
    printf("long double %lf\n",ld);
    printf("long double %lf\n",LLONG_MAX);
    return 0;

}
