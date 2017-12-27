#include<stdio.h>
/*
int型、要素数nの配列の最小値の要素を返却する
*/
#define NUMBER 5
int scanf_int(int *num,int n){
    int i;
    for(i = 0; i < n; i++){
        printf("array[%d] = ",i);
        scanf("%d",&num[i]);
    }
}
void print_array(int *array,int n){
    int i;
    for(i = 0; i < n; i++)
        printf("array[%d] = %d\n",i,array[i]);
}
int min_of(const int *array, int n){
    int i;
    int min = array[0];
    for(i = 0; i < n; i++){
        if(min > array[i])
            min = array[i];
    }
    return min;

}
int main(void){
    setvbuf(stdout,NULL,_IONBF,0);
    int array[NUMBER];

    scanf_int(array,NUMBER);
    print_array(array,NUMBER);
    printf("min = %d \n",min_of(array,NUMBER));
    return 0;
}
