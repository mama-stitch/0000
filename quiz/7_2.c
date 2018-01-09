#include<stdio.h>
#include<limits.h>
int main(void){

    printf("文字型は%dビット\n",CHAR_BIT);
    printf("char            : %d ~ %d \n",CHAR_MIN,CHAR_MAX);
    printf("signed char     : %d ~ %d \n",SCHAR_MIN,SCHAR_MAX);
    printf("unsigned char   ; %d ~ %d \n",0         ,UCHAR_MAX);
    return 0;

}
