#include<stdio.h>

char *strcat(char *s1,char *s2);
char *strncat(char *s1,char *s2,int n);
int strcmp(char *s1,char *s2);
int strncmp(char *s1,char *s2,int n);

int main(void){

    char str1[256] = "ABCDEFG\0";
    char str2[256] = "abcdefg\0";
    printf("%s str1\n",str1);
    printf("%s str2\n",str2);
   
    printf("%s str1+str2\n",strcat(str1,str2));
    printf("%s str1+str2(0-2)\n",strncat(str1,str2,3));
    printf("%d : %s str1+str2\n",strcmp(str1,str2),str1);
    printf("%d : %s str1+str2(0-2)\n",strcmp(str1,str1),str1);
    return 0;
}

char *strcat(char *s1,char *s2){
    char *t = s1;
    while(*s1)
        s1++;
    while(*s1++ = *s2++)
        ;
    return t;
}


char *strncat(char *s1,char *s2,int n){
    char *t = s1;
    while(*s1)
        s1++;
    while(*s1++ = *s2++){

        printf("s1 = %c %d\n",*s1,n--);
        printf("s2 = %c \n",*s2);
        if(n <= 0){
            *s1 = '\0';
            return t;
        }
    }
    return t;
}

int strcmp(char *s1,char *s2){

/*
    もう少しシンプルにできそう
*/
    while(1){
        if(*s1 == *s2){
            s1++;
            s2++;
        }else{
            return (unsigned int)s1 - (unsigned int)s2;
        }
    }
}
int strncmp(char *s1,char *s2,int n){
/*
    これから

*/
}




