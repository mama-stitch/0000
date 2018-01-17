#include<stdio.h>
#define max(x,y) (((x) > (y)) ? (x) : (y) ) 
int main(void){
    int a = 0;
    int b = 10;
    int c = 24;
    int d = 1;
    
    printf("max(max(a,b),max(c,d))) = %d \n",max(max(a,b),max(c,d)));



    printf("max(max(a,b),c),d) = %d \n",max(max(a,b),c),d);
    return 0;
}
