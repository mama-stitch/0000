#include<stdio.h>
#include<limits.h>

int main(void){

    printf("signed short int %d ~ %d\n",SHRT_MIN,SHRT_MAX);
    printf("signed int       %d ~ %d\n",INT_MIN,INT_MAX);
    printf("signed long int  %ld ~ %ld\n",LONG_MIN,LONG_MAX);
 
    printf("unsinged signed short int %u ~ %u\n",0,USHRT_MAX);
    printf("unsinged signed int       %u ~ %u\n",0,UINT_MAX);
    printf("unsinged signed long int  %lu ~ %lu\n",0,ULONG_MAX);   
    return 0;
}
