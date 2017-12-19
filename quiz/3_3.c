#include<stdio.h>

int main(void){
    int no;

    scanf("%d", &no);

    if(no == 0)
        printf("0");
    else if(no > 0)
        printf("+");
    else if(no < 0)
        printf("-");
    

    return 0;
}
