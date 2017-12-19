#include<stdio.h>
#include<stdlib.h>

int main(void){
 
    if ( setvbuf(stdout, NULL, _IONBF, 0) !=0 ) {
        fprintf(stderr, "バッファの設定に失敗しました.\n");
        return  EXIT_FAILURE;
    }
    int retry;

    do{
        int no;
        printf("整数を入力してください\n");
        scanf("%d",&no);


        if(no < 0){
            printf("負の値：%d\n",no);
        }else{
            printf("正の値：%d\n",no);
        }

        do{
            printf("one more? [yes-0 / no-9] \n");
            scanf("%d",&retry);
        }while(retry != 0 && retry != 9);
    }while(retry==0);
    return 0;
}
