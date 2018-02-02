#include<stdio.h>

/*
文字列sの中に、文字cが含まれていれば、その添え字を返し、含まれていなければ-1を返す
*/

int search(char str[], char ch){
    int i = 0;
    while(str[i] != '\0'){
        if(ch == str[i])
            return i;
        i++;
    }
    return -1;
}
 
int main(void){

    char str[128];
    char ch;    
    setvbuf(stdout,NULL,_IONBF,0);
    printf("検索対象文字列 >> ");scanf("%s",str);
    (void)getchar();
    printf("検索文字 >> ");      scanf("%c",&ch);

    printf("str = %s\n",str);
    printf("ch = %c\n",ch);
    printf("str[%d] = %c\n", search(str,ch),str[search(str,ch)]);
    return 0;

}
