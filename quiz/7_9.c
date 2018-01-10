#include<stdio.h>
#include<limits.h>
/*  
    符号なし整数xの第posビットを1にした値を返す
    unsigned set( unsigned x, int pos)

    符号なし整数xの第posビットを0にした値を返す
    unsigned reset(unsigned x, int pos)

    符号なし整数xの第posビットを反転した値を返す
    unsigned inverse(unsigned x, int pos)
*/
int count_bits(unsigned x){
    int count = 0;
    while(x){
        if(x & 1U){
            count++;
        }
        x >>= 1;
    }
    return count;
}
int int_bits(){

    return count_bits(UINT_MAX);
}
int char_bits(){

    return count_bits(UCHAR_MAX);
}
void print_bits(unsigned x){
    int i;
    for(i = int_bits() - 1; i >= 0; i--){
        putchar(((x >> i) & 1U) ? '1':'0'); 
    }
    putchar('\n');
}
unsigned inverse(unsigned x, int pos){
    return x ^ (1U << pos);
}
unsigned set(unsigned x, int pos){
    return x | (1U << pos);
}
unsigned reset(unsigned x, int pos){
    return x & (~(1U << pos)); 
}
int main(void){
    unsigned x = UINT_MAX;
    printf("int %u\n",int_bits());
    printf("char %u\n",char_bits());
    print_bits(21);

    // set
    int i;
    for(i = 0; i < int_bits(); i++){
        print_bits(set(21,i));
    }
    putchar('\n');
    // reset
    for(i = 0; i < int_bits(); i++){
        print_bits(reset(UINT_MAX,i));
    }
    putchar('\n');
    // inverse
    for(i = 0; i < int_bits(); i++){
        print_bits(inverse(1431655765,i));
    }
    return 0;
}

