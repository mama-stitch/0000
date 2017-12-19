#include<stdio.h>


int main(void){

    int tate;
    int area;
    scanf("%d", &area);
    for(tate = 1; tate < area; tate++){
        if(tate * tate > area) break;
        if(area % tate != 0) continue;
        printf("%d * %d = %d \n", tate, area/tate, area/tate*tate);
    }
    return 0;

}
