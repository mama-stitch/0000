#include<stdio.h>

int factorial(int n){
    int tmp = 1;
    while(n){
        tmp *= n--;
    }
    return tmp;
}
int main(void){
    int n;
    setvbuf(stdout,NULL,_IONBF,0);
    do{
        printf("n >> ");
        scanf("%d",&n);
        if(n > 0)
            break;
    }while(1);
    printf("%d! = %d",n,factorial(n));

    return 0;
}
