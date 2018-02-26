#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
    暗算トレーニング改
*/
int main(void){

    srand(time(NULL)); 
    setvbuf(stdout,NULL,_IONBF,0);

    int a;
    int b;
    int c;
    int n;
    int i;
    int ans;
    int game_count;
    double time = 0;;
    double timeArray[3] = {0};

    do{
        printf("1 - 9 ... game count >> ");
        scanf("%d",&game_count);
    }while(game_count > 10 || game_count < 1);

    for(i = 0; i < game_count; i ++){
        clock_t start = clock();
        a = rand() % 100;
        b = rand() % 100;
        c = rand() % 100;
        n = rand() % 15;

        while(1){
            printf("%d%*s + %*s%d%*s + %*s%d%*s = ?\n",a,n,"",n,"",b,n,"",n,"",c,n,"");
            printf(" >> "); scanf("%d",&ans);

            if(ans == (a + b + c)){
                clock_t cycle = clock();
                time = (double)(cycle - start)/CLOCKS_PER_SEC;
                printf("正解     %.3lf秒\n",time);
                timeArray[i] += time;
                break;
            }else{
                printf("不正解,もう一回\n");
            }

        }
    }
    double sum = 0;
    for(i = 0; i < game_count; i++){
       sum += timeArray[i]; 
       printf("%2d回目   :    %.3lf秒\n",i,timeArray[i]);
    }

    printf("合計時間     %.3lf秒\n",sum);
    printf("平均時間     %.3lf秒\n",(double)sum/game_count);

    return 0;
}

