#include<stdio.h>

/* 正の整数値を10進数で読み込んで、その値を8進数および16進数で
   整数定数と同じ形式で表示する                               */



int main(void){
    int n;
    setvbuf(stdout,NULL,_IONBF,0);

    printf("n >> ");
    scanf("%d",&n);

    printf("dec n == %d\n",n);
    printf("hex n == %x\n",n);
    printf("HEX n == %X\n",n);
    printf("oct n == %o\n",n);



    return 0;
}
