#include<stdio.h>
/*
要素数がnであるintの配列array1の
要素の並びを反転し、配列array2へ格納する

void intary_rcpy(int *array1 ,int *array2 ,int n)
*/
#define NUMBER 5
void intary_rcpy(const int *array1 ,int *array2 ,int n){
    int i;
    for(i = 0; i < n; i++){
        array2[i] = array1[n - 1 - i];
    }
}
void rev_intary(int *array,int n){
    int i;
    int temp;
    for(i = 0; i < n / 2; i++){
        temp = array[i];
        array[i] = array[n - 1 - i];
        array[n - 1 - i] = temp;
    }
}
void scan_int(int *array, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("array[%d] = ",i);
        scanf("%d",&array[i]);
    }
}
void print_array(int *array, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("array[%d] = %d\n",i,array[i]);
    }
}
int main(void){

    setvbuf(stdout,NULL,_IONBF,0);

    int array1[NUMBER];
    int array2[NUMBER];

    scan_int(array1,NUMBER);
    putchar('\n');
    intary_rcpy(array1,array2,NUMBER);
    print_array(array1,NUMBER);
    putchar('\n');
    print_array(array2,NUMBER);

    return 0;

}

