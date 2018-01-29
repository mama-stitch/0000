#include<stdio.h>

/*
文字列sの中に文字cが含まれていれば、その添え字を返し
含まれていなければ-1を返す
*/

#define NUMBER 128
int main(void){

    char str[NUMBER];
    char ch[10];
    int i;
    
    setvbuf(stdout,NULL,_IONBF,0);

    printf("str >> ");scanf("%s",str);
    printf("ch  >> ");scanf("%s",ch);

    for(i = 0;str[i] != '\0';i++){
        printf("%c",str[i]);
    }

    putchar('\n');
    printf("\nch = %s\n",ch);
    putchar('\n');
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == ch[0])
            printf("index is %3d\n",i);
    }
    return 0;

}
