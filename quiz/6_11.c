#include<stdio.h>
/*
要素数がnであるintの配列vの要素の並びを反転する
void rev_intary(int *array ,int n)
*/
#define NUMBER 5
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

    int array[NUMBER];

    scan_int(array,NUMBER);
    putchar('\n');
    rev_intary(array,NUMBER);
    print_array(array,NUMBER);

    return 0;

}

