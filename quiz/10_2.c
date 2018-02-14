#include<stdio.h>
// y年は閏年か？
int isLeap(int y){
    return y % 4 == 0 && y % 100 != 0 || y % 400 == 0;
}

// y年m月の日数
int days_of_month(int y, int m){
    int mdays[][12] = {
       // 1  2  3  4  5  6  7  8  9 10 11 12
        {31,28,31,30,31,30,31,31,30,31,30,31}, //平年
        {31,29,31,30,31,30,31,31,30,31,30,31}, //閏年
    };
    return mdays[isLeap(y)][m - 1];
}

void decrement_date(int *year,int *month,int *day){

    if(*day > 1){
        --*day;
    }else{
        if(--*month < 1){
            *month = 12;
            --*year;
        }
        *day = days_of_month(*year,*month);
    }
    //printf("in func de\n");
}

void increment_date(int *year,int *month,int *day){
    int d = days_of_month(*year,*month);
    if(++*day > d){
        if(++*month > 12){
            ++*year;
            *month = 1;
        }
        *day = 1;
    }
   // printf("in func in\n");
}
int main(void){

    setvbuf(stdout,NULL,_IONBF,0);

    int year;
    int month;
    int day;
    int n;

    printf("year >> "); scanf("%d" ,&year);
    printf("month >> ");scanf("%d",&month);
    printf("day >> ");  scanf("%d"  ,&day);

    printf("%d年%d月%d日\n",year,month,day);


    printf("何日戻しますか？>>　");scanf("%d",&n);
    int i;
    for(i = 0; i < n; i++){
        //n日戻す
        decrement_date(&year,&month,&day);
    }
    printf("%d日戻しました\n",n);
    printf("%d年%d月%d日\n",year,month,day);


    printf("何日進めますか？>>　");scanf("%d",&n);
    printf("%d日進めました\n",n);
    for(i = 0; i < n; i++){
        //n日進める
        increment_date(&year,&month,&day);
    }
    printf("%d年%d月%d日\n",year,month,day);

    //days_of_month(year,month);


    return 0;

}
