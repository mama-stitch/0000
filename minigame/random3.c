#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){

    setvbuf(stdout,NULL,_IONBF,0);
    srand(time(NULL));

    int ans = rand() % 999 + 1;
    int n;

    do{
        printf("答えは>> ");scanf("%d",&n);
        if(ans > n){
            printf("答えはもっと大きい\n");
        }else if(ans < n){
            printf("答えはもっと小さい\n");
        }else{
            printf(":l@;/:l;:/l@@;正解@@;:.@l;\n");
        }
    }while(ans != n);

    printf("ans = %d\n",ans);
    return 0;

}
