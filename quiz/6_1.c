#include<stdio.h>
/*
    ２値比較
    小さいほうの値を返す
    int min2(int a, int b);

*/
int min2(int a, int b){

    return (a < b) ? a : b;

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
