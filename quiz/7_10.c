#include<stdio.h>
#include<limits.h>
/* 符号なし整数xの第posビットから第pos + n - 1 ビットまでのn個のビットを

    1にした値を返す
            unsigned set_n(unsigned x, int pos, int n)

    0にした値を返す
            unsigned reset_n(unsigned x, int pos, int n)

    反転した値を返す
            unsigned reverse_n(unsigned x, int pos, int n)
*/
int bits_count(unsigned x){
    unsigned count = 0;
    while(x){
        if(x & 1U)
            count++;
        x >>= 1;
    }
    return count;
}
int int_bits(){
    return bits_count(UINT_MAX);
}

void print_bits(int x){
    int i;
    for(i = int_bits() - 1; i >= 0; i--){
        putchar((x >> i) & 1U ? '1' : '0');
    }
    putchar('\n');
}
unsigned lshift(unsigned x, int n){
       if(n >= int_bits(x) || n < 0){
            return -1;
       }
       return x <<= n; 
}
unsigned set(unsigned x, int pos){
    return x | lshift(1U,pos);
}
unsigned reset(unsigned x, int pos){
    return x & ~lshift(1U,pos);
}
unsigned inverse(unsigned x, int pos){
    return x ^ ~lshift(1U,pos);
}
unsigned set_n(unsigned x,int pos,int n){
    return x |(lshift(~lshift(UINT_MAX,n),pos));
}
unsigned reset_n(unsigned x, int pos, int n){
    return x & (~lshift(~lshift(UINT_MAX,n),pos));
}
unsigned inverse_n(unsigned x, int pos, int n){
    return x ^ lshift(~lshift(INT_MAX,n),pos);
}

int main(void){

    int x = 127;
    print_bits(x);
    print_bits(x + 1);
    print_bits(lshift(x, 11));
    int i;
    for(i = 0; i < int_bits(); i++){
        print_bits(set(16, i));
    }
    for(i = 0; i < int_bits(); i++){
        print_bits(reset(~0U, i));
    }
    for(i = 0; i < int_bits(); i++){
        print_bits(inverse(~0U, i));
    }
    for(i = 0; i < int_bits(); i++){
        print_bits(inverse(0U, i));
    }
    putchar('\n');
    for(i = 0; i < int_bits(); i++){
        print_bits(set_n(120, i , 2));
    }
    putchar('\n');
    for(i = 0; i < int_bits(); i++){
        print_bits(reset_n(-1, i , 2));
    }  
    putchar('\n');
    for(i = 0; i < int_bits(); i++){
        print_bits(inverse_n(-1, i , 2));
    } 
    for(i = 0; i < int_bits(); i++){
        print_bits(inverse_n(0U, i , 2));
    }
    return 0;
}
