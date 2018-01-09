#include<stdio.h>

int main(void){
    int n;
    printf("sizeof 1                  = %u\n",sizeof 1);
    printf("int型のサイズ\n\n");
    printf("sizeof +1                 = %u\n",sizeof +1);
    printf("int型のサイズ\n\n");
    printf("sizeof -1                 = %u\n",sizeof -1);
    printf("int型のサイズ\n\n");
    printf("sizeof (unsigned)-1       = %u\n",sizeof (unsigned)-1);
    printf("unsigned型(int型)のサイズから1を引く\n\n");
    printf("sizeof (double)-1         = %u\n",sizeof (double)-1);
    printf("double型のサイズから1を引く\n\n");
    printf("sizeof((double)-1)        = %u\n",sizeof((double)-1));
    printf("-1をdouble型にキャストする\n\n");
    printf("sizeof n+2                = %u\n",sizeof n+2);
    printf("int型に+2する\n\n");
    printf("sizeof(n+2)               = %u\n",sizeof(n+2));
    printf("int型のサイズ\n\n");
    printf("sizeof(n+2.0)             = %u\n",sizeof(n+2.0));
    printf("double型のサイズ\n\n");
    return 0;

}
