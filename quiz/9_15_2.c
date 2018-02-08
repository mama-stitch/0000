#include<stdio.h>

/*
文字列s1の中に文字列s2が含まれていれば
その先頭の添え字を返す
*/

int strstr_idx(const char s1[],char s2[]){

    int i,j;
    for(i = 0; s1[i] != '\0'; i++){
        for(j = 0; s2[j] != '\0' || s1[j] != '\0';j++){
            if(s1[i + j] != s2[j]){
                break;
            }
        }
        if(s2[j] == '\0')
            return i;
    }
    return -1;
}

int strstr_idx2(const char s1[], const char s2[]){
    int i;
    if( s2[0] == '\0') //s2が空のときは探索不要
        return -1;
    for(i = 0; s1[i] != '\0'; i++){
        if(s1[i] == s2[0]){
            int j = 0;
            do{
                if(s2[++j] == '\0')
                    return i;
            }while(s1[i + j] == s2[j]);
        }
    }
    return -1;


}
int main(void){
    setvbuf(stdout,NULL,_IONBF,0);

    char str1[128];
    char str2[128];

    printf("str1 >> ");scanf("%s",str1);
    printf("str2 >> ");scanf("%s",str2);

    int idx = strstr_idx2(str1,str2);
    if(idx == -1){
        printf("nothing!\n");
    }else{
        printf("%c",str1[idx]);
    }
    

    return 0;

}

