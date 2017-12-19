#include<stdio.h>


int main(void){

    int num;
    int i;
    scanf("%d", &num);

    for(i = 1; i <= num; i += 2){
        printf("%d ",i);
    }
    return 0;

}
