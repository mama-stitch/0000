#include<stdio.h>

//1-nまでの和を求める
int main(void){
    int n,i;
    int sum = 0;
    scanf("%d",&n);
    for(i = 0; i <= n; i++){
        sum += i; 
    }
    printf("%d", sum);

    return 0;

}
