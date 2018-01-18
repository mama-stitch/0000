#include<stdio.h>

enum sex { Male, Female };
enum season {Spring, Summer, Autumn, Winter};
enum sex select_sex(void){
    int tmp;
    do{
        printf("0..man  1..women : ");
        scanf("%d",&tmp);
    }while(tmp < Male || tmp > Female);
    return tmp;

}
enum season select_season(void){
    int tmp;
    do{
        printf("0..春 1..夏 2..秋 3..冬 ");
        scanf("%d",&tmp);
    }while(tmp < Spring || tmp > Winter);
    return tmp;
}

void print_sex(enum sex sex){
    switch(sex){
        case Male:  printf("man\n");  break;
        case Female:printf("women\n");break;
    }
}

void print_season(enum season season){

    switch(season){
        case Spring : printf("spring\n");break;
        case Summer : printf("summer\n");break;
        case Autumn : printf("autumn\n");break;
        case Winter : printf("winter\n");break;
    }
}
int main(void){
    enum sex your_sex;
    enum season your_season;
    setvbuf(stdout,NULL,_IONBF,0);
    your_sex = select_sex();
    print_sex(your_sex);

    your_season = select_season();
    print_season(your_season); 
    return 0;

}
