#include<stdio.h>
//1からカウントアップ

int main(void){
    int n;
    scanf("%d",&n);

    if(n > 0){
        int i=1;
        while(i <= n)
            printf("%d",i++);
        printf("\n");
    }
    return 0;
}
