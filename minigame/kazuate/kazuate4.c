#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*


*/
int main(void){
    setvbuf(stdout,NULL,_IONBF,0);
    srand(time(NULL));
    int const max_stage = 10;
    int ans = 1 + rand() % 100;
    int n;
    int remain = max_stage;
    printf("1 ~ 100の整数を当ててください\n\n");
    do{
        printf("残り%d回:答えは？ >> ",remain);scanf("%d",&n);
        remain--;
        if(n < ans)
            printf("答えはもっと大きい\n");
        else if(n > ans)
            printf("答えはもっと小さい\n");
    }while(ans != n && remain > 0);
    if(ans == n){
        printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
        printf("%d回で正解！、答えは%dでした!!!\n"
                                    ,max_stage - remain,ans);
    } else if(remain == 0){
        printf("むむむむむむむむむむむむむむむむむむむむむむむむむ\n");
        printf("残念！正解は%dでした・・・\n",ans);
    }
    printf("bye!!");
    return 0;
}
