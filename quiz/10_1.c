#include<stdio.h>

/*
nの指す値が0より小さければ0に更新し、
100より大きければ100に更新する

*/

void adjust_point(int *n){

    if(*n < 0)
        *n = 0;
    else if( *n > 100)
        *n = 100;
}
int main(void){
    int n;
    setvbuf(stdout,NULL,_IONBF,0);
    printf("n >> ");
    scanf("%d",&n);
    printf("adjust_point(&n)\n");
    adjust_point(&n);

    printf("n == %d\n",n);

    return 0;

}
