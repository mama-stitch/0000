#include<stdio.h>
//整数を読み込んで偶数か奇数を判定する

int main(void){

    int no;

    scanf("%d",&no);
    switch(no % 2){
        case 0:
            puts("even");
            break;
        case 1:
            puts("odd");
            break;

    }
    return 0;
}
