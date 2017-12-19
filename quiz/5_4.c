#include<stdio.h>
int main(void){
    int a[5] = {17,23,36};
    int b[5];
    int i;
    for(i = 0; i < 5; i++){
        printf("a[%d] = %d\n",i,a[i]);
    }
    for(i = 0; i < 5; i++){
        b[i] = a[5-i-1];
    }
    putchar('\n');
    for(i = 0; i < 5; i++){
        printf("b[%d] = %d\n",i,b[i]);
    }   
    for(i = 0; i < 5; i++){
        printf("%4d  %4d\n",a[i],b[i]);
    }
    return 0;

}
