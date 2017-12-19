#include<stdio.h>


int main(void){
//読み込んだ値の約数をすべて表示
//約数の個数を表示
    int n;
    int count = 0;
    scanf("%d", &n);

    int i;
    if(n > 0){
        for(i = 1; i<n; i++){
            if(n % i == 0){
                printf("%d ",i);
                count++;
            }
        }
        putchar('\n');
    }
    printf("約数の個数%d",count);


    return 0;


}
