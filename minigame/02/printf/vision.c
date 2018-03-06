#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
視野拡大暗算トレーニング
*/

int sleep(unsigned long x){
    clock_t c1 = clock(),c2;

    do{
        if((c2 = clock()) == (double)-1)
            return 0;
    }while(1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);
    return 1;
    
}
int main(void){

    setvbuf(stdout,NULL,_IONBF,0);
    srand(time(NULL));

    int a;
    int b;
    int c;
    int ans;
    int i;
    int n;
    int stage = 3;
    clock_t start = clock();

    for(i = 0; i < stage; i++){

        a = rand() % 10;
        b = rand() % 10;
        c = rand() % 10;
        n = rand() % 6;
        while(1){
            //空白文字のサイズを調整
            printf("%d%*s + %d%*s + %d%*s = ",a,n,b,n,c,n);

            scanf("%d",&ans);
            if(ans == a + b + c)
                break;
            sleep(100);
        }

    }
    clock_t end = clock();

    double time = (double)(end - start) / CLOCKS_PER_SEC;

    printf("かかった時間は%.3lf秒です",time);

    return 0;
}
