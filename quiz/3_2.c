#include<stdio.h>

int main(void) {
    int x,y;
    scanf("%d%d", &x,&y);
    if(x % y)
        printf("%dは%dで割り切れない",x,y );
    else
        printf("%dは%dで割り切れる",x,y );
    return 0;
}
