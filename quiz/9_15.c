#include<stdio.h>


void null_string(char str[]);
int isABC(const char str[]);
int str_digits_num(const char s[]);
int str_length(const char s[]);
int str_put(const char s[]);
int str_putr(const char s[]);
int is_palindrome(const char s[]);
int main(void){
    char str[] = "740\0Li";

    printf("%s\n",str);
    printf("740\n");
    printf(" \"\"   1 = %u\n",(unsigned)sizeof(""));
    printf(" X6   3 = %u\n",(unsigned)sizeof("X6"));
    printf(" X\\0X 4 = %u\n",(unsigned)sizeof("X\0X")); 

    setvbuf(stdout,NULL,_IONBF,0);

    char yourname[128];

    printf("May I have your name ? : ");
    scanf("%s",yourname);
    printf("Hello! %s\n",yourname);
  
    printf("null_string()\n");
    null_string(yourname);
    printf("%s",yourname);
    
    printf("str >> ");scanf("%s",str);
    if(isABC(str))
        printf("%s is \"ABC\"\n",str);
    else
        printf("%s is not \"ABC\"\n",str);

    char str1[128];
    printf("str1 >> ");scanf("%s",str1);
    printf("in main str_digits_num = %d\n",str_digits_num(str1));
    printf("in main str_length = %d\n",str_length(str1));
    printf("in main str_put = %d\n",str_put(str1));
    putchar('\n');
    printf("in main str_putr = %d\n",str_putr(str1));
    
    if(is_palindrome(str1))
        printf("%s is palindrome\n",str1);
    else
        printf("%s is not palindrome\n",str1);

    char str2[] = "ABCDEFG1234567890";
    printf("%s\n",        str2);
    printf("%4s\n",      str2);
    printf("%.4s\n",      str2);
    printf("%9s\n",      str2);
    printf("%-9s\n",      str2);
    return 0;
}
void null_string(char str[]){
    str[0] = '\0';
}

int isABC(const char str[]){

    if(str[0] != 'A')return 0;
    if(str[1] != 'B')return 0;
    if(str[2] != 'C')return 0;
    if(str[3] != '\0')return 0;
    return 1;
}
int str_digits_num(const char s[]){
    int count = 0;
    int i = 0;
    for(i = 0; s[i] != '\0'; i++){
        if(s[i] >= '0' && s[i] <= '9')
            count++;
    }
    
    return count;
}

int str_length(const char s[]){
    int len = 0;
    while(s[len])
        len++;
    return len;

}

//文字列sを表示
//文字列の長さを返す
int str_put(const char s[]){ 
    int len = 0; 
    while(s[len])
        putchar(s[len++]);
    putchar('\n');
    return len;
}
//文字列sを逆から表示
//文字列の長さも返す
int str_putr(const char s[]){
    int len = 0;
    while(s[len])
       len++;
    int i = len;
    while(i >= 0)
        putchar(s[i--]);
    return len; 
}
//回文かどうかチェック
int is_palindrome(const char s[]){
    int i;
    int len = 0;
    while(s[len])
        len++;
    printf("len = %d\n",len);
    for(i = 0; i < len/2; i++){
/*        printf("s[i] = %c\n",s[i]);
        printf("s[len - i - 1] = %c\n",s[len - i - 1]);
*/      
        printf("%d \n %c : %c \n",i,s[i],s[len - i - 1]);
        if(s[i] != s[len - i - 1])
           return 0; //not 回文 
    }
    //回文
    return 1;
        
}



