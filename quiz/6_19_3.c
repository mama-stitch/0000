#include<stdio.h>
/* 要素数nの配列aで正の値を持つ要素の中で
    最も末尾に位置する要素の添え字を返却する*/
int search(const int a[], int n){
    int i;
    for(i = n; i > 0; i-- ){
        if(a[i] > 0)
            return i;
    }
    return  -1;
}
/* 配列aの先頭n個の要素にvを代入する    */
void fill(int a[],int v,int n){
    int i;
    for(i = 0; i < n; i++){
        a[i] = v;
    }
}
/* 配列aの先頭n番目まで0で初期化する*/
void fill0(int a[],int n){
    fill(a,0,n);
}
/* nまでの合計値を返す*/
int sumup(int n){
    int sum = 0;
    int i;
    for(i = 1; i <= n; i++){
//        printf("sum = %d\n",sum);
        sum += i;
    }
    return sum;
    
}
/* 配列bの先頭n個の要素を配列aにコピーする */
void cpy_ary(int a[],const int b[],int n){
    int i;
    for(i = 0; i < n; i++){
        a[i] = b[i];
    }
}
int sum_ary2D(int c[][3],int n){
    int sum = 0;
    int i,j;
    for(i = 0; i < n; i++){
        for(j = 0; j < 3; j++){
            sum += c[i][j];
            printf("sum(%d) += c[%d][%d] = %d\n",sum,i,j,c[i][j]);
        }
    }
    return sum;
}
/* 直前に呼び出したval(no)のnoを返す
                        初めに返す値は0　*/
int val(int n){
    int static v;
    int temp = v;
    v = n;
    return temp;
}
int main(void){
    int a[] = {4,5,3,7,6,5,4,-3,90,-100};
    int n = 9;
    setvbuf(stdout,NULL,_IONBF,0);
//search()
    printf("a[%d] = %d\n",search(a,n),a[search(a,n)]);
    
    int i;
    for(i = 0; i < n; i++){
        printf("a[%d] = %d\n",i,a[i]);
    }
//fill()
/*
    printf("fill\n");
    fill(a,-2,9); 
    for(i = 0; i < n; i++){
        printf("a[%d] = %d\n",i,a[i]);
    }   
*/
    //printf("fill0\n");
    //fill0(a,9); 
    //for(i = 0; i < n; i++){
    //    printf("a[%d] = %d\n",i,a[i]);
    //}   
//sumup()
    printf("sumup(%d) = %d\n",n,sumup(n));
//cpy_ary()
    int b[10] = {0};
    for(i = 0; i < n; i++){
        printf("a[%d] = %d\n",i,a[i]);
    }   
    for(i = 0; i < n; i++){
        printf("b[%d] = %d\n",i,b[i]);
    }     
    printf("cpy_ary\n");
    cpy_ary(b,a,n);
    for(i = 0; i < n; i++){
        printf("b[%d] = %d\n",i,b[i]);
    }
//sum_ary2D()
    int c[][3]= {
        {23,43,65}
       ,{43,65,76}
       ,{87,98,90}
       ,{87,98,90}
    };
    int j;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 3; j++){
            printf("c[%d][%d] = %d\n",i,j,c[i][j]);
        }
    }
 
    printf("sum = %d\n",sum_ary2D(c,4));
//val()
    int no;
    while(1){
        printf("no >> ");
        scanf("%d",&no);
        printf("val(no = %d) = %d\n",no,val(no));
    }
    return 0;
}






