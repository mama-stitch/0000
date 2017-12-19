#include<stdio.h>

int print(int n){
    if(n < 5){ //ベースケース、 n = ５で再帰終了
        return 0;
    }else if(n > 0){
        printf("print(%d)\n",n);
        print(n - 1);
    }
}

int main(){

    int n;
    scanf("%d",&n);
    print(n);
    return 0;
}
