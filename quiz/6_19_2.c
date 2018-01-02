#include<stdio.h>
int max2(int x,int y){

    return x > y ? x : y;
}
int max4(int a,int b,int c,int d){
    return max2(max2(a,b),max2(c,d));

}

int counter(void){
    static int count;
    count++;
    return count;
}
void ary34_set0(int v[][4]){

    int i,j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            v[i][j] = 0;
        }
    }
}
/* 要素nの配列aで、btm以上top以下の値を持つ要素のなかで
 　もっとも先頭側に位置する要素の添え字を返却する      */
int search_range(const int a[], int btm, int top,int n){

    int i;
    for(i = 0; i < n; i++){
        if(btm <= a[i] && a[i] <= top)
            return i;
    }
    return -1;
}
int main(void){

// max2()
    int x = -3;
    int y = -17;
    printf("%d\n",max2(x,y));
//max4()
    int a,b,c,d;
    a = 1;
    b = 2;
    c = 3;
    d = 4;
    printf("%d\n",max4(a,b,c,d));
//counter()
    printf("1 - %d\n",counter());
    printf("2 - %d\n",counter());
    printf("3 - %d\n",counter());
    printf("4 - %d\n",counter());
    printf("5 - %d\n",counter());
//ary34_set0()
    int i,j;
    int v[3][4];
    printf("v[3][4]\n");
    ary34_set0(v);
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            printf("v[%d][%d] = %d\n",i,j,v[i][j]);
        }
    }
    printf("ary34_set0()\n");
    ary34_set0(v);
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            printf("v[%d][%d] = %d\n",i,j,v[i][j]);
        }
    }
    int a1[] = {1,2,3,-4,5,-6,7,-8,9};
    int btm = 6, top = 9,n = 9;
    printf("a1[%d] = %d\n",search_range(a1,btm,top,n)
                        ,a1[search_range(a1,btm,top,n)]);
    return 0;
}
