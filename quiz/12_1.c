#include<stdio.h>

struct student{
    char    *name;
    int      height;
    float    weight;
    long     schols;
};

int main(void){

    struct student takao = {
        "たかお"
        ,168
        ,60.5
        ,1111111
    };

    printf("Name   : %s \n",takao.name);
    printf("Height : %d \n",takao.height);
    printf("weight : %d \n",takao.weight);
    printf("schols : %d \n",takao.schols);

    return 0;








}
