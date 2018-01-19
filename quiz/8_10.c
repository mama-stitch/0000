#include<stdio.h>
int gcd(int x,int y){
    if(y == 0)
        return x;
    else
        return gcd(y, x % y);

}
int main(void){

    int x;
    int y;

    setvbuf(stdout,NULL,_IONBF,0);
    printf("x >> ");scanf("%d",&x);
    printf("y >> ");scanf("%d",&y);
    printf("GCD(%d , %d ) = %d \n",x,y,gcd(x,y));
    return 0;
}
