#include<stdio.h>

int main(void){

    int n1,n2;
    scanf("%d",&n1);
    scanf("%d",&n2);

    printf("%dの値は%dの%f%%です。\n",n1,n2,(double)100 * n1 / n2);

   return 0;
}
