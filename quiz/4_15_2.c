#include<stdio.h>

int main(void){
    int n,i,cnt;
    scanf("%d", &n);
    cnt = n / 10;
    for(i = 1; i <= cnt; i++)
        printf("1234567890");
    for(i = 1; i <= n % 10; i++)
        printf("%d",i);
    return 0;
}
