#include<stdio.h>

#define alert2() (printf("/a/a"))
#define puts_alert2(str) alert2(),puts(str)
int main(void){
    setvbuf(stdout,NULL,_IONBF,0);
    int n;
    printf("in > ");
    scanf("%d",&n);
    if(n)
        puts_alert2("not 0\n");
    else
        puts_alert2("00000\n");
    return 0;
}
