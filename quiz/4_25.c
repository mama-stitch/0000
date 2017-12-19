#include<stdio.h>


int main(void){
    int i,j;
    int no,width;
    setvbuf(stdout,NULL,_IONBF,0);
    printf("no : ");scanf("%d",&no);
    printf("width : ");scanf("%d",&width);
    for(i=0; i<no/width; i++){
        for(j=0; j<width; j++){
            printf("*");
        }
        putchar('\n');
    }
    for(i=0; i<no%width; i++){
        printf("*");
    }
    putchar('\n');
    return 0;

}
