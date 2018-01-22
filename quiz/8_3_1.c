#include<stdio.h>


#define swap(type,a,b) do{ type t = a; a = b; b = t; }while(0)


int main(void){

    int a = 10;
    int b = 100;
    int z = 3;
    printf("a = %d\nb= %d\n",a,b);
    swap(int,a,b);
    printf("swap(a,b)\n");
    printf("a = %d\nb= %d\n",a,b);
    
    putchar('\n');
    printf("a = %d\nb= %d\nz = %d\n",a,b,z);
    if(a<b)
        swap(int,a,b);
    else
        swap(int,a,z);

    printf("swap(a,b)\n");
    printf("a = %d\nb= %d\nz = %d",a,b,z);
    return 0;

}
