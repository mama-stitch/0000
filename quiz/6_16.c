#include<stdio.h>
/*
a[][],b[][]を1回目2回目とみる
1回目2回目の合計値をsumに格納する
numは人数

*/
void mat_add(int a[][3],int b[][3],int sum[][3],int num){
    int i,j;
    for(i = 0; i < num; i++){
        for(j = 0; j < 3; j++){
            sum[i][j] = a[i][j] + b[i][j];
            printf("sum[%d][%d] = a[%d][%d] + b[%d][%d]\n\n"
                ,i,j,i,j,i,j);
        }
    }
}
void mat_print(int points[][3],int num){
    int i,j;
    for(i = 0; i < num; i++){
        for(j = 0; j < 3; j++){
            printf(" %3d ",points[i][j]);
        }
        putchar('\n');
    }

}
int main(void){
    int i;
    int points[][4][3] = {
        {{91,63,78},{67,72,46},{89,34,53},{32,54,34},},//points[0]
        {{97,67,82},{73,43,46},{97,56,21},{85,46,35},},//points[1]
    };
    int sum[4][3];
    /*
    mat_add(1回目点数,2回目点数,合計,人数);
    */
    mat_add(points[0],points[1],sum,4);

    //各回の点数を表示
    //mat_print(i回目の点数,人数)
    for(i = 0; i < 2; i++){
        printf("%d回目の点数\n",i);
        mat_print(points[i],4);
    }
    //合計点表示
    //mat_print(合計の点数,人数)
    printf("合計点数\n");
    mat_print(sum,4);
    return 0;

}
