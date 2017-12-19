#include<stdio.h>

int main(void){
    int v[5];
    int i;

    for(i=0; i<=5; i++){
        v[5-i]=i;
    }
    for(i=0; i<5; i++){
        printf("v[%d] = %d\n",i,v[i]);
    }
    putchar('\n');
    for(i=0; i<5; i++){
        v[i]=5-i;
    }
    for(i=0; i<5; i++){
        printf("v[%d] = %d\n",i,v[i]);
    }   
    return 0;
}
