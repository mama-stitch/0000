#include<stdio.h>

//文字列sの中に文字cが含まれている個数
int str_chnum(char *s,int ch){
    int num = 0;
    int i = 0;

    for(i = 0; s[i] != 0;i++){
        if(s[i] == ch)
            num++;
    }
    return num;
}


/
int main(void){

    char str[128];
    char ch[10];
    setvbuf(stdout,NULL,_IONBF,0);
    scanf("%s",str);
    scanf("%s",ch);
    printf("str = %s,ch = %c,%d\n",str,ch[0],str_chnum(str,ch[0]));


    return 0;

}
