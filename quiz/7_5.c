#include<stdio.h>
/* 符号なし整数を左右にシフトした値が、上位ビットがはじき出されない限り
　2のべき上での除算や乗算の演算結果と一致することを確認する　　　　　*/

//2^xを返す
int pow2(unsigned x){
    unsigned pw = 1;
    while(x--){
       pw *= 2; 
    }

    return pw;
}
int main(void){
    setvbuf(stdout,NULL,_IONBF,0);

    unsigned l_shift, r_shift;
    unsigned m_pow,d_pow;
    unsigned x,n;
  
    printf("xをnビットシフトします\n");
    printf("x >");
    scanf("%u",&x);
    printf("n >");
    scanf("%u",&n);
   
    r_shift = x >> n;
    l_shift = x << n;
    printf("l_shift  %u \n",l_shift);
    printf("r_shift  %u \n",r_shift);
    
    m_pow = x * pow2(n);
    d_pow = x / pow2(n);
    
    printf("m_pow = %u\n",m_pow);
    printf("d_pow = %u\n",d_pow);

    return 0;

}
