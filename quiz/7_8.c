#include<stdio.h>
#include<limits.h>

/* 符号なし整数xを右にnビット回転する関数rrotate() */
/* 符号なし整数xを左にnビット回転する関数lrotate() */


int count_bits(unsigned x){
   int i;
   int count = 0;
   while(x){
       if(x & 1U)
           count++;
       x >>= 1;
   }
   //printf("count_bits : count = %d \n",count);
   return count;
}
int int_bits(unsigned x){
    int i;
    int count = 0;
    for(i = count_bits(UINT_MAX) - 1; i >= 0; i--){
        count++;
        putchar((x >> i) & 1U ? '1' : '0'); 
    }
    //printf("int_bits : count = %d \n",count);
    return count;
}

unsigned rrotate(unsigned x, int n){
    n = n % count_bits(UINT_MAX);
    return ((x >> n) | (x << count_bits(UINT_MAX) - n));
}
unsigned lrotate(unsigned x, int n){
    n = n % count_bits(UINT_MAX);
    return ((x << n) | (x >> count_bits(UINT_MAX) - n));
}
void print_bits(unsigned x){
    int_bits(x);
}

int main(void){
    unsigned x = 298; 
    int      n = 10;
    //printf("main : count = %d\n",int_bits(x));
    printf("rrotate(%uを,みぎに%dしふと) = %u\n",x,n,rrotate(x,n));
    printf("lrotate(%uを,ひだり%dしふと) = %u\n",x,n,lrotate(x,n));

    printf("          ");
    print_bits(x);
    putchar('\n');
    printf("rrotate : ");
    print_bits(rrotate(x,n));
    printf("\nlrotate : ");
    print_bits(lrotate(x,n));
    return 0;

}
