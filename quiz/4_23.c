#include<stdio.h>


int main(void){
    int i,j;
    int height;
    printf("何段ですか？\n");
    scanf("%d", &height);
    for(i=0; i<height; i++){
        for(j=0; j<height; j++){
            printf("*");
        }
        putchar('\n');
    }
    return 0;

}
