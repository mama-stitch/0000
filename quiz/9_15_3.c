#include<stdio.h>
/*
    文字列s2に含まれないすべての文字を、文字列s1から取り除く
*/

void str_rmv(char s1[], const char s2[]){
    int idx = 0;
    int i,j;
    for(i = 0; s1[i] != '\0'; i++){ 
        for(j = 0; s2[j] != '\0'; j++){
            if(s1[i] == s2[j]){
                s1[idx++] = s1[i];
                break;
            }
        }
    }
    s1[idx] = '\0';
}

int main(void){

    char str1[128];
    char str2[128];

    setvbuf(stdout,NULL,_IONBF,0);

    printf("str1\n");scanf("%s",str1);
    printf("\nstr2\n");scanf("%s",str2);

    str_rmv(str1,str2);
    printf("\nstr_rmv\n\n");
    printf("str1\n%s\n",str1);

    return 0;

}
