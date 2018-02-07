#include<stdio.h>

/*
    文字列s内の数字文字以外のすべての文字を削除する
*/
void del_non_digit(char s[]){
    int i;
    int idx = 0;
    for(i = 0; s[i] != '\0'; i++){
        if(s[i] >= '0' && s[i] <= '9'){
            s[idx] = s[i];
            idx++;
        }
    }
    s[idx] = '\0';
}

//文字列を出力
void put_str10ary(const char v[][10], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("v[%d] = \"%s\"\n",i,v[i]);
    }


}
//文字列を一文字ずつ出力
void put_str10ary1(const char v[][10], int n){
    int i,j;

    for(i = 0; i < n; i++){
        printf("v[%d] = \"",i);
        for(j = 0;v[i][j] != '\0';j++)
            putchar(v[i][j]);
        printf("\"\n");
    }
}
//文字列s2をs1にコピーする
void str_copy(char s1[],const char s2[]){
    int i = 0;

    for(i = 0; s2[i] != '\0'; i++){
        s1[i] = s2[i]; 
    }
    s1[i] = '\0';
}
//文字列s1とs2を比較する
//一致すれば1
//不一致ならば0
int str_eq(const char s1[], const char s2[]){
    int i;
    for(i = 0; s1[i] != '\0' || s2[i] != '\0'; i++){
        if(s1[i] != s2[i])
            return 0;
    }
    return 1;
}
//文字列sから含まれている文字cの添え字を返す(もっとも先頭側)
int str_idx(const char* s, int c){
    int idx = 0;
    int i;
    for(i = 0; s[i] != '\0'; i++){
        if(s[i] == c){
            return i;
        }
    }
    return -1;
}

//文字列sから含まれている文字cの添え字を返す(もっとも後方側)
int str_ridx(const char* s, int c){
    int idx = 0;
    int i;
    for(i = 0; s[i] != '\0'; i++){
        if(s[i] == c){
            idx = i;
        }
    }
    return -1;
 
}
/*
文字列s1の中に文字列s2が含まれていれば、その先頭の添え字を返す
     012345678
s1 = ABCAICCAI
s2 =   CAI
return 2
無限ループに陥る不具合あり
*/
int strstr_idx(const char s1[],const char s2[]){

    int i,j;

    for(i = 0; s1[i] != '\0'; i++){
        for(j = 0; s2[j] != '\0'; j++){
            if(s1[i + j] != s2[j])
                break;
        }
        if(s2[j] == '\0')
            return i;
    }
    return -1;
}
/*
 文字列s2に含まれないすべての文字を文字列s1から取り除く
 不具合あり
*/
void str_rmv(char s1[],const char s2[]){
    int i,j,k;
    k = 0;
    for(i = 0; s1[i] != '\0'; i++){
        for(j = 0;s2[j] != '\0'; j++){
            if(s1[i] == s2[j]){
                s1[k++] = s1[j];
                break;
            }
        }
    }
    s1[k]='\0';
}
int main(void){

    setvbuf(stdout,NULL,_IONBF,0);

//    char str1[] = "ABCAICCAI";
//    char str2[] = "CAI";
    char str1[128];
    char str2[128];
    printf("str1 >> ");scanf("%s",str1);
    printf("str2 >> ");scanf("%s",str2);

    int idx = strstr_idx(str1,str2);
    int i = 0;
    int j = idx;

    printf("%s\n",str1);
    while(j){
        putchar(' '); 
        j--;
    }
    printf("%s  ",str2);
    printf("[%d] \n",idx);

    puts("------------------------------------------");

    printf("str_rmv\n ");
    str_rmv(str1,str2);
    printf("%s  ",str1);
    return 0;

}








