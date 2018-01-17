#include<stdio.h>

/* バブルソート */


#define NUMBER 5


void bblsort(int *height,int n){
    int temp;
    int i,j;
    for(i = 0; i < n; i++){
        for( j = n - 1; j > i; j--){
            if(height[j] < height[j - 1]){
                temp = height[j];
                height[j] = height[j - 1];
                height[j - 1] = temp;
            }
        }
    }


}
int main(void){
    int height[NUMBER];
    int i;
    setvbuf(stdout,NULL,_IONBF,0);
    for(i = 0; i < NUMBER; i++){
        printf("height[%d] = ",i);
        scanf("%d",&height[i]);
    }

    putchar('\n');
    bblsort(height,NUMBER);
    for(i = 0; i < NUMBER; i++){
        printf("height[%d] = %d\n",i,height[i]);
    }


    return 0;

}
