#include<stdio.h>

#define alert2() (printf("/a/a\n"))
#define puts_alert2(str) (alert2(),puts(str))
int main(void){
    int n;

    setvbuf(stdout,NULL,_IONBF,0);
    printf("整数入力");
    scanf("%d",&n);

    if(n)
        puts_alert2("not_zero\n");
    else
        puts_alert2("exactly_zero\n");
    return 0;
}
