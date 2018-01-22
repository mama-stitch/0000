#include<stdio.h>

enum SEX {Male, Female};
enum SEASON { Spring, Summer, Autumn, Winter};

enum SEX select_sex(void){
    enum SEX tmp;
    do{
        printf("sex_select >> man...0    women...1 \n");
        scanf("%d",&tmp);
    }while(tmp < Male || tmp > Female);
    return tmp;
}

enum SEASON select_season(void){
    enum SEASON tmp;
    do{
        printf("season select >> \n");
        printf("春...0  夏...1  秋...2  冬...3\n");
        scanf("%d",&tmp);
    }while(tmp < Spring || tmp > Winter);
    return tmp;
}



int main(void){
    enum SEX sex; 
    enum SEASON season; 
    setvbuf(stdout,NULL,_IONBF,0);
    sex = select_sex();
    switch(sex){
        case Male   : printf("man\n");break;
        case Female : printf("woman\n");break;
    }
    season = select_season();
    switch(season){
        case Spring     :   printf("春\n");break;
        case Summer     :   printf("夏\n");break;
        case Autumn     :   printf("秋\n");break;
        case Winter     :   printf("冬\n");break;

    }

    return 0;
}
