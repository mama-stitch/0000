#include<stdio.h>

#define NUMBER 80

int main(void){
    int point[NUMBER];
    int num;
    int dist[11]={0};
    int i,j;
    setvbuf(stdout,NULL,_IONBF,0);
    do{
        scanf("%d", &num);
        if(num < 0 || num > NUMBER)
            printf("\aone more! 1-%d \n", NUMBER);
    }while(num < 0 || num > NUMBER);

    for(i=1; i<=num; i++){
        printf("%2d番 : ",i);
        do{
            scanf("%d", &point[i]);
            if( point[i] < 0 || point[i] > 100){
                printf("\aone more! 1-100 \n");
            }
        }while(point[i] < 0 || point[i] > 100);
    }



    for(i=0; i<num; i++){
        dist[point[i]/10]++;
    }
    for(i=0; i<10; i++){
        printf("%2d ~ %2d :",i*10,i*10+9);
        for(j=0; j<dist[i]; j++){
            printf("*");
        }
        putchar('\n');
    }
    printf("    100 : ");
    for(j=0; j<dist[10]; j++){
            printf("*");
    }
    return 0;


}
