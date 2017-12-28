#include<stdio.h>
/*
線形探索  
*/
#define NUMBER 6
#define FAILED -1
int search(const int *array, int key,int n){

    int idx;
    for(idx = 0; idx < n; idx++){
        if(array[idx] == key)
            return idx;
    }
    return FAILED;
}
void scan_int(int *array,int n){
    int i;
    for(i = 0; i < n; i++){
        printf("array[%d] >> ",i);
        scanf("%d",&array[i]);
    }

}
void print_array(int *array, int n){
    int i;
    printf("print_array(int *array int n);\n");
    for(i = 0; i < n; i++){
        printf("array[%d] = %d\n",i,array[i]);
    }
}
int main(void){

    setvbuf(stdout,NULL,_IONBF,0);

    int array[NUMBER];
    int key;
    int idx;

    scan_int(array,NUMBER);

    printf("key = ");
    scanf("%d",&key);
    //print_array(array,NUMBER);

    if((idx = search(array,key,NUMBER)) == FAILED){
        printf("探索失敗\n");
    }else{
        printf("探索成功\n");
        printf("array[%d] = %d" ,idx,array[idx]); 
    }
    return 0; 
}
