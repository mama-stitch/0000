#include<stdio.h>

char *str_copy(char *d, const char *s){

    char *t = d;

    while(*d++ = *s++)
        ;
    return t;
}

int main(void){

    char str[256] = "ABCDEFG"; 
    char temp[256];

    printf("str = %s\n",str);

    scanf("%s",temp);
    printf("コピーするのは%s\n",temp);
    printf("str = %s\n",str_copy(str,temp));

    return 0;

}
