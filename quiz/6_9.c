#include<stdio.h>
/*
７人の学生の点数を読み込んで合格者６０点以上の一覧を表示する
一覧表示は独立した関数とする
*/
#define SIZE 7 //学生人数

/*
学生全員の点数を入力
*/
void scanf_int_array(int *num,int n){
    int i;
    for(i = 0; i < n; i++){
        printf("student[%d] > ",i);
        scanf("%d",&num[i]);
    }
}
/*
６０点以上の学生の点数を出力
*/
void print_pass(int *student){
    int i;
    printf("合格者\n");
    for(i = 0; i < SIZE; i++){
        if(student[i] > 60)
            printf("student[%d] = %d \n",i,student[i]);
    }
}
int main(void){
    setvbuf(stdout,NULL,_IONBF,0);
    int i;
    int student[SIZE];

    scanf_int_array(student,SIZE);

    for(i = 0; i < SIZE; i++){
        printf("%d\n",student[i]);
    }

    print_pass(student);

    return 0;
}
