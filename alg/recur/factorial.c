#include<stdio.h>

int factorial(int n){

    if(n == 1){
        return 1;
    }else if(n == 0){
        return 1;
    }else{
       return n * factorial(n - 1);
    }

}

int main(){
    int n, result;
    scanf("%d",&n);
    printf("%d\n",n);
    result = factorial(n);
    printf("%d",result);
    return 0;
}

