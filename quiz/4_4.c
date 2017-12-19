#include<stdio.h>
/*
    読み込んだ整数を1までカウントダウンする
*/
int main(void){

    int n;
    scanf("%d",&n);
    if(n>=1){
        while(n>=1)
            printf("%d ",n--);
        printf("\n");
    }

    return 0;


}
