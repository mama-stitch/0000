#include<stdio.h>

typedef enum month { January = 1, February,March,
             April,May,June,July,Augst,
             September,October,November,December
}MONTH;

void print_season(MONTH month){
    switch(month){
        case March:
        case April:
        case May:
            printf("春\n");break;
        case June:
        case July:
        case Augst:
            printf("夏\n");break;
        case September:
        case October:
        case November:
            printf("秋\n");break;
        case December:
        case January:
        case February:ber:
            printf("冬\n");break;
        default:
            printf("nothing");break;
    }
}
MONTH select_season(void){
    MONTH month;
    printf("season_choice >> ");
    scanf("%d",&month);
    return month;
}
int main(void){

    setvbuf(stdout,NULL,_IONBF,0);
    print_season(select_season());

    return 0;
}
