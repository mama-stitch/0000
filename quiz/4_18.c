#include<stdio.h>



int main(void){

    int n;
    scanf("%d",&n);
    int i;
    for(i = 1; i <= n; i++ )
        printf("%dの二乗 %d\n",i ,i * i);

    return 0;

}
