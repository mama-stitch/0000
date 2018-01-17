#include<stdio.h>
#define swap(type, x,y) do{ type temp =  x; x = y; y = temp; }while(0)
    


int main(void){

    int a = 0;
    int b = 12; 
    swap(int ,a,b);

    printf("a = 0 = %d\n",a);
    printf("b = 12 = %dbefore\n",b);


    if(a > b)
        swap(int,a,b);
    else
        swap(int,a,b);
    printf("a = 0 = %d\n",a);
    printf("b = 12 = %d\n",b);

    return 0;

}
