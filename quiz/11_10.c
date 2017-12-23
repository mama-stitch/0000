#include<stdio.h>
#include<string.h>
/*
    文字列を数える
        strlen(char *s)
    文字列をコピーする
        strncpy(char *s)
*/
int main(void){

    char *str1;
    char str2[128];

    setvbuf(stdout,NULL,_IONBF,0);
    printf("文字列入力str1 >> ");
    scanf("%s",str1);

    printf("%s\n",str1);
    printf("文字数: %d\n",strlen(str1));

    strcpy(str2,str1);          printf("strcpy(str2,str1);            str2 = %s \n",str2);
    strncpy(str2,"123456789",3);printf("strncpy(str2,\"123456789\",3);str2 = %s \n",str2);
/*
    文字列連結
    strcat(char *str1, char *str2);
        str1 + str2

    strncat(char *str1, char *str2, int n);
        str1 + (str2の先頭からn番まで)
*/
    strcat(str1,str2);
    printf("strcat(str1, str2  ); str1 = %s\n",str1);
    strncat(str2,str1,3);
    printf("strncat(str2,str1,3); str2 = %s\n",str2);

/*
    文字列比較
    strcmp(char *str1, char *str2)
    strncmp(char *str1, char *str2 ,int n)

*/

    scanf("%s",str1);
    scanf("%s",str2);
    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);
    printf("strcmp(str1, str2) = %d\n",strcmp(str1, str2) );
    printf("strcnmp(str1, str2, 3) = %d\n",strncmp(str1, str2 ,3) );
/*
    繰り返し比較
*/
    printf("終了条件XXXXX\n");
    while(1){
        char *str;
        printf("str >> ");
        scanf("%s",str);
        if((strcmp(str,"XXXXX")) == 0){
            printf("おつかれさま\n");
            return 0;
        }
        printf("strcmp(\"ABCDE\",str) = %d\n",strcmp("ABCDE",str));
    }
    return 0;
}

