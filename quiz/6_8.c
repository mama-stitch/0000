#include<stdio.h>

/*
２つのint型の整数の平均値をint型で返却する
*/
int ave_of(int a,int b){

    return (int)((a + b) / 2);

}
/*
int型の整数値を読み込んで返却
*/
int scan_int(void){
    int temp;
    printf("整数値:");
    scanf("%d",&temp);
    return temp;
}
int main(void){

    int a,b,ave;
    setvbuf(stdout,NULL,_IONBF,0);

    a = scan_int();
    b = scan_int();
    
    if((ave = ave_of(a,b)) == 0){
        printf("aとbの平均値は0 ,ave =%d\n",ave);
    }else if(ave >0){
        printf("aとbの平均値は正,ave =%d\n",ave);
    }else{
        printf("aとbの平均値は負,ave =%d\n",ave);
    }

    return 0;

}
