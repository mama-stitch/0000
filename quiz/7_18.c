#include<stdio.h>
#include<limits.h>

int main(void){
    int n1 = 17;
    int n2 = 9;
    int n3 = 0;
    printf(" //n1 = 17 = 000010001\n");
    printf(" //n2 = 9  = 000001001\n");
    printf(" //n3 = 0  = 000000000\n");
    printf("n1 & n2   ==       1, %d\n",n1 & n2);
    printf("n2 & n3   ==       0, %d\n",n2 & n3);
    printf("n1 | n2   ==      25, %d\n",n1 | n2);
    printf("n2 | n3   ==       9, %d\n",n2 | n3);
    printf("n1 ^ n2   ==      24, %d\n",n1 ^ n2);
    printf("n2 ^ n3   ==       9, %d\n",n2 ^ n3);
    printf("n1 >> n2  ==       0, %d\n",n1 >> n2);
    printf("n2 << n3  ==       9, %d\n",n2 << n3);

    printf("n1 >>= n2 ==       0, %d\n",n1 >>= n2);
    printf("n2 <<= n3 ==       9, %d\n",n2 <<= n3);
    printf("n1 & (n2 && n3) == 0, %d\n",n1 & (n2 && n3));
    printf("n1 & (n2 || n3) == 0, %d\n",n1 & (n2 || n3));

    printf("int  %d , %d\n",INT_MAX,INT_MIN);
    printf("char %d , %d\n",CHAR_MAX,CHAR_MIN);

    printf("sizeof(char) = %d\n",sizeof(char));

    printf("UINT_MAX + 1 = %d\n",UINT_MAX + 1);


    double a[] = {0,1,2,3,4,5,6,7,8,9,10,11,12};
    printf("a[%d]\n",sizeof(a)/sizeof(a[0]));

    n1 = 77;
    n2 = 80;

    int i;

    for(i = n1; n2 > i; i++)
        printf("%o %d %X \n",i,i,i);






    return 0;
}




