#include<stdio.h>

typedef enum MONTH {
    January = 1, February,March,April,May,June,
    July,August,September,October,November,December,
}MONTH;

MONTH select_month(void){
    int tmp;
    do{
        printf("select month >> ");
        scanf("%d",&tmp);
    }while(tmp < January || December < tmp);
    return tmp;
}

void print_season(MONTH your_month){
    
    switch(your_month){
        case December :
        case January  : 
        case February : printf("winter"); break;

        case March  :
        case April  : 
        case May    :   printf("spring"); break;

        case June  :
        case July  : 
        case August :   printf("summer"); break;

        case September :
        case October   : 
        case November  : printf("autumn"); break;
        default:
            printf("err");
    }

}

int main(void){

   setvbuf(stdout,NULL,_IONBF,0);

   MONTH your_month;
   your_month = select_month();
   print_season(your_month);

   return 0;

}
