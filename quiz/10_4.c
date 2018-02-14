#include<stdio.h>
/*
要素型がint型で要素数がnの配列を受け取って、
全要素に添え字と同じ値を代入する
*/

void set_idx(int *array,int n){
    int i;
    for(i = 0; i<n; i++){
        array[i] = i;
    }
}

int main(void){

    int array[5];

    set_idx(array,5);

    int i;
    for(i = 0; i < 5; i++){
        printf("array[%d] = %d\n",i,array[i]);
    }

    return 0;
}
