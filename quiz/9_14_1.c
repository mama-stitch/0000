#include<stdio.h>
/*
受け取った文字列の配列に格納されているn個の文字列の文字の並びを反転する
*/

#define LEN 128
#define NUM 4
#define swap(type,x,y)do{ type t = x; x = y; y = t; }while(0)
int scan_str(char str[][LEN],int n){
    int i;
    for(i = 0; i < n; i++){
        printf("str[%d] >> ", i);scanf("%s",str[i]);
        if(str[i][0] == '$' && str[i][1] == '$' && str[i][2] == '$' && str[i][3] == '$'){
                break;
        }
    }
    return i;
}
void print_str(char str[][LEN],int n){
    int i;
    for(i = 0; i < n; i++){
        printf("str[%d] = %s\n",i,  str[i]);
    }
}
int length(const char *str){
    int len = 0; 
    while(str[len] != '\0'){
        len++;
    }
    return len;
}
void rev_str(char str[][LEN],int n){
    void rev(char str[],int n);
    int i;
    for(i = 0; i < n; i++){
        rev(str[i],length(str[i]));
    }
}
void rev(char str[],int n){
    int i;
    for(i = 0; i < n/2; i++){
        swap(char,str[i],str[n - i - 1]);
    }
}
int main(void){

    setvbuf(stdout,NULL,_IONBF,0);
    char str[NUM][LEN];
    
    printf("入力\n");
    int num = scan_str(str,NUM);
    
    printf("\n表示\n");
    print_str(str,num);
    printf("\n反転\n");
    rev_str(str,num);
    printf("\n表示\n");
    print_str(str,num);
    
    return 0;

}
