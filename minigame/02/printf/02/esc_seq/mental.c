#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/*

暗算トレーニング
3つの値を足し合わせる

*/
int main(void){
    
    setvbuf(stdout,NULL,_IONBF,0);
    srand(time(NULL));

    int a = rand() % 1000;
    int b = rand() % 1000;
    int c = rand() % 1000;
    int ans;

    //計測開始
    clock_t start = clock();

    while(1){
        printf("%3d + %3d + %3d = ?\n",a,b,c);
        scanf("%d",&ans);
        if(ans == (a + b + c))
            break;
        
        printf("もういっかい\n");
    }   
    if((a + b + c) == ans){
        printf("正解 %d\n",ans); 
    }else{
        printf("err");
    }
    
    //計測終了
    clock_t end = clock();

    double req_time = (double)(end - start) / CLOCKS_PER_SEC;
    printf("かかった時間は%.3lfです\n",req_time);

    if(req_time > 30.0)
        printf("がんばれー\n");
    else if(req_time > 17.0)
        printf("おーけー\n");
    else
        printf("はやい! \n");


    

    return 0;

}
