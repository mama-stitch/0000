#include<stdio.h>
/*

要素型がint型、要素数nの配列を受け取って
全要素にvalを代入する
*/
//配列の先頭n個にvalを代入
void ary_set(int v[],int n,int val){
    int i;
    for(i = 0; i < n; i++){
       v[i] = val; 
    }
}

int main(void){
    int array[5];
    ary_set(array,5,99);
    int i;

    for(i = 0; i < 5; i++){
       printf("array[%d] = %d \n",i,array[i]); 
    }
    ary_set(&array[2],2,0);
 
    puts("------------------------------------");
    for(i = 0; i < 5; i++){
       printf("array[%d] = %d \n",i,array[i]); 
    }
    return 0;
}
