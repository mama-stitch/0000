#include<stdio.h>

int main(void){
    float f = 0.0;
    int   n = 0;
    int   i;
    for(i = 0; i < 100; i++){
       printf("f = %f\n", f += 0.01); 
    }
    for(i = 0; i < 100; i++,n++){
       printf("f = %d\n", n); 
    }
    printf("n = %d\n", n); 
    printf("n/100.0 = %f\n",n/100.0);

    return 0;

}
