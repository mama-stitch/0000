#include<stdio.h>

int main(void){
    int no;

    scanf("%d", &no);
    if( 0 > no)
        no =  -no;

    printf("絶対値:%d",no);
    return 0;
}
