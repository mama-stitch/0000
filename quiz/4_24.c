#include<stdio.h>
int main(void){
/*
//横長の長方形を作ります
1辺　:  scanf
1辺　:  scanf
大  列 column
小  行 row
*/
    int a,b;
    int column, row;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a <= b){
        column = b;
        row = a;
    }else{
        column = a;
        row = b;
    }
    int i,j;
    for(i = 0; i<row; i++){
        for(j = 0; j<column; j++){
            printf("*");
        }
        putchar('\n');
    }

    return 0;


}
