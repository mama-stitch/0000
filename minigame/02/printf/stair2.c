#include<stdio.h>

int main(void){

    int i;
    int x;

    printf("階段の段数は？ >> ");
    scanf("%d",&x);

    for(i = 0; i <= x; i++){
       printf("%*d\n",i,i % 10); 
    }

    return 0;
}
