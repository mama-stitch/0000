#include<stdio.h>


#define NUMBER 96

int main(void){

    setvbuf(stdout,NULL,_IONBF,0);
    int no;
    int a[NUMBER];
    do{
        printf("Number of allay is ...\n");
        scanf("%d", &no);
        if(no > 0 && no < NUMBER)
            break;
        printf("one more!\n");
    }while(no < 0 || no > NUMBER);

    int i;
    printf("input!\n");
    for(i = 0; i<no; i++){
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("output!\n");
    printf("{");
    for(i = 0; i<no; i++){
        printf("%d",a[i]);
        if(i == no-1)
            break;
        putchar(',');
    }
    printf("}");
    return 0;

}
