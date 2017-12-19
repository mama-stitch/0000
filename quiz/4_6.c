#include<stdio.h>

/*

正の整数値を
    読み込んで

読み込まれた整数値以下である
正の偶数を

    順に表示する

*/
steps_by_asc(int n,int steps){
    while(n >= 1){
        printf("%d ",n);
        n -= steps; 
    }
    printf("\n");
}

}
//
//
void step_2(int n){
    while(n >= 1){
        printf("%d ",n);
        n -= 2;
    }
    printf("\n");
}
int main(void){
    int n;
    scanf("%d",&n);

    if(n >= 1){
        if(n % 2){
            //odd
            n -= 1;
            step_2(n);
        }else{
            //even
            step_2(n);
        }
   } 
   return 0;
}
