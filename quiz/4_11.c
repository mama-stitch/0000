#include<stdio.h>

int main(void){


    int n;
    int num;
    scanf("%d",&n);
    num = n/2;
    if(n > 0){
        while(num){
            printf("+-");
            num--;
        }
        if(n % 2)
            printf("+");
        putchar('\n');
    }
    return 0;

}
