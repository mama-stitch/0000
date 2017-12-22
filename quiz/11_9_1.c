#include<stdio.h>
#include<ctype.h>

void str_upper(char *s);
void str_lower(char *s);
void dele_digits(char *s);

int main(void){
    
    char strings[256] = "Aafdfwi30E564bhG76jg2Nn23f2gsd";
    printf("strings             = %s\n",strings);
    str_upper(strings);
    printf("strings _ upper     = %s\n",strings);
    str_lower(strings);
    printf("strings _ lower     = %s\n",strings);
    dele_digits(strings);
    printf("strings _ digits    = %s\n",strings);
    return 0;
}
void str_upper(char *s){
    char *t = s;
    while(*s){
        *s = toupper(*s);
        s++;
    }
}
void str_lower(char *s){
    char *t = s;
    while(*s){
        *s = tolower(*s);
        s++;
    }
}
void dele_digits(char *s){
    char *t = s;
    while(*s){
        if(*s < '0' || *s > '9'){
            *t = *s;
            t++;
        }
        s++;
    }
    *t = '\0';
}




