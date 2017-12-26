#include<stdio.h>
/*
    ２値比較
    小さいほうの値を返す
    int min2(int a, int b);

*/
int min2(int a, int b){
    int min = a;

    if(min > b)
        min = b;

    return min;

}
int main(void){

    int a;
    int b;


    setvbuf(stdout,NULL,_IONBF,0);
    printf("a : ");
    scanf("%d",&a);
    printf("b : ");
    scanf("%d",&b);

    printf("min = %d\n",min2(a,b));
    return 0;
}
