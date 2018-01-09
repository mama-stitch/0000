#include<stdio.h>
#include<limits.h>
/* 整数x中のセットされたビット数を返す*/
int count_bits(unsigned x){
    int bits = 0; 
    while(x){
        if(x & 1U)
            bits++;
        x = x >> 1;
    }
    return bits;
}

/* unsigned型のビット数を返す*/
int int_bits(void){
    //return count_bits(~0U);
    return count_bits(UINT_MAX);
}
int main(void){

    int i;
    int x;
    setvbuf(stdout,NULL,_IONBF,0);

    printf("x > ");
    scanf("%d",&x);
    int count = 0;
    for(i = int_bits() - 1; i >= 0; i--){
        count++;
        putchar((x >> i) & 1U ? '1' : '0');
    }
    printf("\ncount = %d\n",count);
    return 0;

}
