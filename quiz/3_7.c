#include<stdio.h>
int main(void){

    int n1, n2, n3, min;

    scanf("%d%d%d", &n1, &n2, &n3);
/*
    if(n1 < n2)
        if(n1 < n3)
            printf("min = %d",n1);
    else if(n2 < n3)
            printf("min = %d",n2);
    else
        printf("min = %d",n3);
*/
    min = n1;
    if(min > n2)
        min = n2;
    if(min > n3)
        min = n3;

    printf("min = %d",min);
    return 0;
}
