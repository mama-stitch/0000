#include<stdio.h>
/*
3つの値を昇順にソートする
*/

void swap(int *a, int *b){
    int temp = *a;
        *a = *b;
        *b = temp;
}

void sort3(int *a,int *b,int *c){
    if(*a > *b)swap(a,b);
    if(*b > *c)swap(b,c);
    if(*a > *b)swap(a,b);
}

int main(void){

    setvbuf(stdout,NULL,_IONBF,0);
    puts("3つの値を入力して下さい");

    int na,nb,nc;

    printf("na >> ");scanf("%d",&na);
    printf("nb >> ");scanf("%d",&nb);
    printf("nc >> ");scanf("%d",&nc);

    sort3(&na,&nb,&nc);

    printf("昇順にソートしました\n");
    printf("a = %d\n",na);
    printf("b = %d\n",nb);
    printf("c = %d\n",nc);

    return 0;

}
