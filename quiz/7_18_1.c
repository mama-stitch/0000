#include<stdio.h>
#include<limits.h>

int bit_count(unsigned x){
    int count = 0;
    while(x){
        if(x & 1U)
            count++;
        x >>= 1;
    }   
    return count;
}
void print_bits(unsigned n){
    int i;
    for(i = bit_count(UINT_MAX) - 1; i >= 0; i--){
        putchar((1U & (n >> i)) ? '1' : '0');
    }
}
/* 全ビットを反転した値を返却 */
unsigned rev_of(unsigned x){
    return (~x);
}
/* 全ビットが0である符号なし整数を返却 */
unsigned all0(void){
    return 0U;
}
/* 全ビットが1である符号なし整数を返却 */
unsigned all1(void){
    return ~0U;
}
/* xの最下位ビットを１にして返却*/
unsigned setLSB(unsigned *x){

    return *x | 1U;
}
/* xの最下位ビットを0にして返却*/
unsigned resetLSB(unsigned *x){

    return *x & 0U;
}
/* xの最下位ビットを反転して返却*/
unsigned invLSB(unsigned *x){

    return *x ^ 1U;
}
/* xの最下位ビットを0か1で返却*/
unsigned LSBof(unsigned *x){

    return *x & 1U;
}
/* xの第nビットを0か1で返却*/
unsigned Bitof(unsigned *x,int n){

    return *x >> n & 1U;
}
int main(void){
    unsigned n = -132;
    
    printf("n\n");
    printf("%d\n",n);
    print_bits(n);
    printf("\n");

    printf("rev_of\n");
    n = rev_of(n);
    printf("%d\n",n);
    print_bits(n);
    printf("\n");

  
    printf("all0\n");
    n = all0();
    printf("%d\n",n);
    print_bits(n);
    printf("\n");

  
    printf("all1\n");
    n = all1();
    printf("%d\n",n);
    print_bits(n);
    printf("\n");

    printf("all0 + 4 \n");
    n = all0() + 4;
    print_bits(n);
    printf("\n");
    printf("%d\n",n);
    
    printf("setLSB \n");
    n = setLSB(&n);
    printf("%d\n",n);
    print_bits(n);
    printf("\n");


    printf("all0 \n");
    n = all0();
    printf("%d\n",n);
    print_bits(n);
    printf("\n");

    printf("setLSB \n");
    n = setLSB(&n);

    printf("%d\n",n);
    print_bits(n);
    printf("\n");

    printf("resetLSB \n");
    n = resetLSB(&n);

    printf("%d\n",n);
    print_bits(n);
    printf("\n");

    printf("inverse \n");
    n = invLSB(&n);

    printf("%d\n",n);
    print_bits(n);
    printf("\n");


    printf("inverse \n");
    n = invLSB(&n);

    printf("%d\n",n);
    print_bits(n);
    printf("\n");
    printf("all0 \n");
    n = all0();
    printf("%d\n",n);
 

    printf("LSBof(&n) \n");
    n = LSBof(&n);
    print_bits(n);
    printf("\n");
    
    printf("all1\n");
    n = all1();
    printf("%d\n",n);
    
    printf("LSBof(&n) \n");
    n = LSBof(&n);
    print_bits(n);
    printf("\n");
    printf("\n");

    n = 21;
    printf("Bitof(&n,0) = %d\n",Bitof(&n,0));
    print_bits(n);
    printf("\n");

    printf("Bitof(&n,1) = %d\n",Bitof(&n,1));
    print_bits(n);
    printf("\n");

    printf("Bitof(&n,2) = %d\n",Bitof(&n,2));
    print_bits(n);
    printf("\n");

    printf("Bitof(&n,4) = %d\n",Bitof(&n,4));
    print_bits(n);
    printf("\n");

    printf("Bitof(&n,3) = %d\n",Bitof(&n,3));
    print_bits(n);
    printf("\n");
    return 0;

}
