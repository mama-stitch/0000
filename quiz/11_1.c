#include<stdio.h>



/*
    p = "456" + 1

    *
    123

     *
    456

*/

int main(void){
    char* p = "123";
    printf("p =  \" %s \" \n",p);

    p = "456" + 1;
    printf("p = \" %s \" \n",p);
    return 0;
}
