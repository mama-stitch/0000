#include<stdio.h>
int main(void){
// 19
//2 4 8 16 
    int n;
    scanf("%d",&n);
    int num = 2;
    if(n >= 1){
        while(num < n){
            printf("%d ",num);
            num *= 2;
        }
        printf("\n");
    }

    return 0;
}
