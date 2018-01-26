#include<stdio.h>


int conbination(int n,int r){
    if(n == 0 || n == r)
        return 1;
    else if(r == 1)
        return n;
    return conbination(n - 1,r - 1) + conbination(n - 1,r);
}

int main(void){

    
    printf("%d",conbination(5,3));
/*
nCr = n-1Cr-1 + n-1Cr 

*/
    return 0;
}
