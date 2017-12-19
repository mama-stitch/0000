#include<stdio.h>


int main(void){

    int a,b,deff;
    scanf("%d%d",&a,&b);
    deff = a > b ? a - b : b - a;
    if(deff <= 10)
        printf("差は10以下　=　%d\n", deff);
    else
        printf("差は10より大きい= %d\n",deff);
    return 0;


}
