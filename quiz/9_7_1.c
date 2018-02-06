#include<stdio.h>

#define swap(type,x,y) do{ type t = x; x = y; y = t; }while(0)

/*
9_7
    文字列sのなかに文字cが含まれている個数を返す
    含まれていなければ0を返す
*/
int str_chnum(const char s[],int c){
    /*
    printf("in function %s\n",s);
    printf("in function %c\n",c);
    */
    int count = 0;
    int i = 0;
    while(s[i] != '\0'){
        if(s[i] == c)
            count++;
        i++;
    }
    return count;
    
}
/*
9_8
    文字列sをn回だけ連続して表示する
*/
void put_stringn(const char s[],int n){
    /*
    printf("in function %s\n",s);
    printf("in function %d\n",n);
    */
  
    while(n--){
        printf("%s",s);
    }

}


int length(const char s[]){
    int count = 0;
    int i = 0;
    while(s[count]){
        count++;
    }
    return count;

}
/*
9_9
    文字列を後ろから逆に”表示”する
*/
void put_stringr(const char s[]){
    int len = length(s); 
    printf("len = %d\n",len);
    while(len){
        putchar(s[len - 1]);
        len--;
    }
    putchar('\n');

}
/*
9_10
    文字列sの並びを反転する
*/
void rev_string(char s[]){

    int len = length(s);
    int i;
    for(i = 0; i < len/2; i++){
        swap(char,s[i],s[len - i - 1]);
    }

}

int main(void){

    char str[128];
    char ch; 

    setvbuf(stdout,NULL,_IONBF,0);

    printf("文字列s >> ");scanf("%s",str);
    getchar();
    printf("文字c >> ");scanf("%c",&ch);

    printf("%c は%d個\n",ch,str_chnum(str,ch));

    put_stringn(str,3);
    putchar('\n');

    put_stringr(str);

    rev_string(str);

    int i;
    for(i = 0; i < length(str); i++){
        printf("str[%d] = %c\n",i,str[i]);
    }


    return 0;

}
