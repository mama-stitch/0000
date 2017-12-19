#include<stdio.h>


int main(void){


    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a == b && b == c && c == a)
        printf("abcは等値");
    else if(a == b || b == c || c == a)
        printf("2つは等値");
    else
        puts("3つは値は異なる");

    return 0;

}
