#include<stdio.h>

/*
正の整数のみ
1963
3691


*/
int main(void){

    int n;
    do{
        printf("正の整数を入力してください\n");
        scanf("%d", &n);
        if(n < 0)
            printf("正でない数を入力しないでください\n");
    }while(n < 0);
    printf("%dを逆から読むと",n);
    while(n > 0){
        printf("%d",n % 10);
        n /= 10;
    }
    printf("です");
    return 0;


}
