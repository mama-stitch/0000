#include<stdio.h>

#define alert2() (printf("/a/a"))
#define print_alert2(str) (alert2(),puts(str))
int main(void){


    char *str = "abc";
    alert2();

    putchar('\n');
    print_alert2(str);


    return 0;

}
