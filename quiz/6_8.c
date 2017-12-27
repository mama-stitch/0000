#include<stdio.h>

/*
２つのint型の整数の平均値をint型で返却する
*/
int ave_of(int a,int b){

    return (int)((a + b) / 2);

}

int main(void){

    int a,b;
    setvbuf(stdout,NULL,_IONBF,0);

    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    
    printf("average = %d\n",ave_of(a,b));
    return 0;

}
