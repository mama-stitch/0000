#include<stdio.h>
void mat_mul(const int a[3][3],const int b[3][3],int c[3][3]){
    int i,j,k;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            for(k = 0; k < 3; k++){
               c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
int main(void){

    setvbuf(stdout,NULL,_IONBF,0);

    int a[3][3] = {0};
    int b[3][3] = {0};
    int c[3][3] = {0};
    int i,j,k;
    printf("input a[][]\n");
    for(i = 0; i < 3; i++){
        for(j = 0;j < 3;j++){
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("input b[][]\n");
    for(i = 0; i < 3; i++){
        for(j = 0;j < 3;j++){
            printf("b[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
/*
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            for(k = 0; k < 3; k++){
               c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
*/

    printf("mat_mul(a,b,c); \n");
    mat_mul(a,b,c);
    printf("output a[][]\n");
    for(i = 0; i < 3; i++){
        for(j = 0;j < 3;j++){
            printf("a[%d][%d] = %d\n",i,j,a[i][j]);
        }
    }
    printf("output b[][]\n");
    for(i = 0; i < 3; i++){
        for(j = 0;j < 3;j++){
            printf("b[%d][%d] = %d\n",i,j,b[i][j]);
        }
    }
    printf("output c[][]\n");
    for(i = 0; i < 3; i++){
        for(j = 0;j < 3;j++){
            printf("c[%d][%d] = %d\n",i,j,c[i][j]);
        }
    }
    return 0;

}
