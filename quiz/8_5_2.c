#include<stdio.h>
#define NUMBER 5
#define swap(type ,a,b) do{type t = a; a = b; b = t;}while(0)
void bsort(int *array, int n){
    int i,j;
    for(i = 0; i < n; i++){
        for(j = n - 1; j > i; j--){
            if(array[j - 1] > array[j]){
                swap(int,array[j - 1],array[j]);
            }

        }
    }

}
int main(void){

    int array[NUMBER];
    int i;
    setvbuf(stdout,NULL,_IONBF,0);

    for(i = 0; i < NUMBER; i++){
        printf("array[%d] = ",i);
        scanf("%d",&array[i]);    
    }

    puts("bsort");
    bsort(array,NUMBER);

    for(i = 0; i < NUMBER; i++){
        printf("array[%d] = %d\n",i,array[i]);
    }
}
