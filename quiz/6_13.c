#include<stdio.h>
/*
線形探索  
key値と等しい要素の添え字を配列に格納して返却する
*/
#define NUMBER 6
#define FAILED -1
int search(const int *array, int *idx, int key,int n){

    int i;
    int j = 0;
    for(i = 0; i < n; i++){
        if(array[i] == key){
            idx[j++] = i;
        }
    }
    return j;
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
    int key,num;
    int idx[NUMBER];

    scan_int(array,NUMBER);

    printf("key = ");
    scanf("%d",&key);
    //print_array(array,NUMBER);

    if((num = search(array,idx,key,NUMBER)) == 0){
        printf("探索失敗\n");
    }else{
        printf("探索成功\n");
        int i;
        printf("num = %d\n",num);
        for(i = 0; i < num; i++)
            printf("array[%d] = %d\n" ,idx[i],array[idx[i]]); 
    }
    return 0; 
}
