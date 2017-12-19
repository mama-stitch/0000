#include<stdio.h>


int main(void){
    int i,j;
    for(i=9; i>0; i--){
        for(j=1;j<=9-i;j++)
            putchar(' ');
        printf("%d\n",i);
    }

    for( i = 3; i <= 15; i++){
        printf("%d : ", i);
        for(j = 2; j < i; j++){
            if(i % j != 0)
                continue;
            printf("%d ",j);
        }
        putchar('\n');
    }
    return 0;

}









