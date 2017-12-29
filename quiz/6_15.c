#include<stdio.h>
/*
3行2列の行列a
2行3列の行列b
3行3列の行列c
a ×b = c
を求める関数
*/

//行列(n,3)を出力
void print_array(int c[][3],int n){
    
    int i,j;
    for(i = 0; i<n; i++){
        for(j = 0; j<3; j++){
            printf("c[%d][%d] = %d\n",i,j,c[i][j]);
        }
    }
}
//行列(3,2) ×行列(2,3)＝行列(3,3)
void mat_mul(int a[3][2],int b[2][3],int c[3][3] ){
    
        int i,j,k;
        for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                c[i][j] = 0;
                 
                for(k = 0; k < 2; k++){
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }


}
int main(void){

    setvbuf(stdout,NULL,_IONBF,0);

    int a[3][2];
    int b[2][3];
    int c[3][3];
    int i,j;

    printf("a[][]\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("b[][]\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            printf("b[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
    } 
    printf("mat_mul\n");
    mat_mul(a,b,c);

    printf("c[][]\n");
    print_array(c,3);

    return 0;

}
