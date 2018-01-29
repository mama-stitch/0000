#include<stdio.h>
int main(void){
    char s[] = "ABC";
    
    char str[48];

    scanf("%s",str);

    printf("s = %s\n",s);
    printf("str = %s\n",str);

    s[0] = '\0';
    str[0] = '\0';

    printf("s = \"%s\"\n",s);
    printf("str = %s\n",str);

    return 0;

}
