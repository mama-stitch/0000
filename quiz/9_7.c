#include<stdio.h>

//9_7   文字列sの中に文字cが含まれている個数を返す
int str_chnum(char *s,int ch){
    int num = 0;
    int i = 0;

    for(i = 0; s[i] != 0;i++){
        if(s[i] == ch)
            num++;
    }
    return num;
}


//9_8  文字列sをn回だけ連続して表示する関数 
void put_stringn(const char *s,int n){
    while(n--){
        printf("%s",s);
    }
    putchar('\n');
}

//文字列の長さを取得する関数
int len(char* s){
    int n = 0;
    while(s[n])
        n++;
    return n;
}

//9_9   文字列を後ろから逆に表示する関数
void put_stringr(char *s){
    int n = len(s);
    while(n)
        printf("%c",s[(n--)-1]);
}

//9_10  文字列２の文字の並びを反転する関数
void rev_string(char s[]){
    int n = len(s);
    int i;
    for(i = 0; i < n; i++){
        char tmp = s[i];
        s[i] = s[n-i];
        s[n-i] = s[i];
    }
}


int main(void){

    char str[128];
    char ch[10];

    setvbuf(stdout,NULL,_IONBF,0);

    scanf("%s",str);
    scanf("%s",ch);
    printf("str = %s,ch = %c,%d\n",str,ch[0],str_chnum(str,ch[0]));

    put_stringn(str,3);

    printf("len(str) = %d\n",len(str));

    put_stringr(str);
    rev_string(str);

    printf("%s\n",str);
    return 0;

}
