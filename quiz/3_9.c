#include<stdio.h>


int main(void){
    int n1, n2, deff;

    scanf("%d%d", &n1, &n2);
    deff = n1 > n2 ? n1 - n2 : n2 - n1;
//    printf("%d",n1 > n2 ? n1 -n2 : n2 - n1);
    printf("deff = %d",deff);
    return 0;



}
