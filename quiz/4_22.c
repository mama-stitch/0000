#include<stdio.h>


int main(void){
    int i,j;
    printf("    | ");
    for(i=1; i<10; i++)
        printf("%3d",i);
    putchar('\n');
    printf("---------------------------------\n");
    for(i=1; i<10; i++){
        printf("%3d | ",i);
        for(j=1; j<10; j++){
            printf("%3d",j*i);
        }
        putchar('\n');
    }

    return 0;

}
