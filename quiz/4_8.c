#include<stdio.h>

int main(void){

    int n;
    scanf("%d", &n);

    printf("{");
    if(n > 1){
        int i = 1;
        do{
            printf("%d",i);
            i++;
            if(n < i)
                break;
            printf(",");
        }while(n >= i);
    }
    printf("}");

    return 0;
}
