#include<stdio.h>
/*
学生    　　4人
科目　  　  3科目
テスト回数  2回

点数は3次元配列
合計値出力関数

students[テスト回数][人数][科目数]
{
    {{60,70,90} ,{55,65,85} ,{72,82,92},{56,67,89}}
    ,{{60,70,90} ,{55,65,85} ,{72,82,92},{98,99,100}}
}
*/
int exam_count = 2;
int num = 4;
int sbj_num = 3;
int sum[4][3] = {0};
int students[2][4][3] = {
        {{60,70,90} ,{55,65,85} ,{72,82,92},{56,67,89}},
        {{60,70,90} ,{55,65,85} ,{72,82,92},{98,99,100}},
    };
void mat_add(const int students[][4][3],int sum[][3],const int n){
    int i,j,k;
    //合計値
    for(i = 0; i < n; i++){
        for(j = 0; j < sbj_num; j++){
            for(k = 0; k < exam_count; k++)
                sum[i][j] += students[k][i][j];
        }
    }
}
void print_array(){
    printf("output \n");
    int i,j,k;
    for(i = 0; i < exam_count; i++){
        for(j = 0; j < num; j++){
            for(k = 0; k < sbj_num; k++){
                printf("students[%d][%d][%d] = %d\n"
                                ,i,j,k,students[i][j][k]);
            }
        }
    
    }
}
void print_mat(int sum[][3],int sbj_num,int num){
    //合計値出力
    int i,j;
    for(i = 0; i < num; i++){
        for(j = 0; j < sbj_num; j++){
            printf("sum[%d][%d] = %d\n",i,j,sum[i][j]);
        }
    }
}
int main(void){
    setvbuf(stdout,NULL,_IONBF,0);
    mat_add(students, sum,num);
    print_array();
    print_mat(sum,sbj_num,num);
   return 0;
}



