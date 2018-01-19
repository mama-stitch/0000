#include<stdio.h>
int factorial_recur(int n){
    if(n == 0)
        return 1;
    return n * factorial_recur(n-1);
}
int factorial(int n){
    int temp = 1;
    while(n > 1){
        temp *= n--;
    }
    return temp;
}
int combination(int n, int r){
    //nCr = n-1Cr-1 + n-1Cr
    //nC0 = nCn = 1, nC1 = n
    if( r == 0 || r == n)
        return 1;
    else if(r == 1)
        return n;
    return combination( n - 1, r - 1) + combination(n - 1, r)
} 

int main(void){

    setvbuf(stdout ,NULL, _IONBF,0);
    int n;
    printf("n >> "); scanf("%d",&n);
    printf("factorial = %d\n",factorial(n));
    printf("factorial_recur = %d\n",factorial_recur(n));

    return 0;
}

