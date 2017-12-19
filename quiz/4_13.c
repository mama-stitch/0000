#include<stdio.h>

//正の整数
//その桁数を表示する
int main(void){
    setvbuf(stdout,NULL,_IONBF,0);
    int n,temp;
    printf("正の整数を入力してください\n");
    do{
        scanf("%d" , &n);
        if(n <= 0)
            printf("正の整数を入力してください\n");
    }while(n <= 0);

    int digits = 0;
    temp = n;
    while(temp){
        temp /= 10;
        digits++;
    }
    printf("%dは%d桁です\n",n,digits);

    return 0;
}
