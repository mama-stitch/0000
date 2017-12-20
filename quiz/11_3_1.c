#include<stdio.h>

int str_ch(const char *string, int ch){
    int idx = 0;
    while(*string != '\0'){
        if(*string++ == ch)
            return idx;
        idx++;
    }
    return -1;
}
int main(void){
    char string[256];
    char ch[10];
    int idx = 0; 
    scanf("%s",string);
    scanf("%s",ch);

    printf("%s\n",string);
    printf("%c\n",ch[0]);
    if((idx = str_ch(string,ch[0])) == -1)
        printf("nothing");
    else
        printf("idx = %d",idx);

    return 0;

}

