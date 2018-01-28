#include<stdio.h>
#define MAX 125
#define max2(x,y) (((x) > (y)) ? (x) : (y))
#define swap_int(x,y) do{ int temp = (x); (x) = (y); (y) = (temp); }while(0)

int factorial(int n){
    if(n == 0)
        return 1;
    else
        return n * factorial(n-1);
}
void rec(int n){
    if(n > 0){
        rec(n-1);
        printf("%d",n);
        rec(n-2);
    } 
}
int gcd(int x,int y){

    if(y == 0)
        return x; 
    return gcd(y,x%y);
}
int main(void){

    int x = 4;
    int y = 6;

    setvbuf(stdout,NULL,_IONBF,0);

    //Macro max
    printf("max(x=%d,y=%d)=%d\n",x,y,max2(x,y));
    x = MAX;
    printf("max(x=%d,y=%d)=%d\n",x,y,max2(x,y));

    //Macro swap
    int i;
    int a[] = {1,2,3,4,5,6,7,8,9,0};
    for(i = 0; i < 10; i++){
        printf("a[%d] = %d\n",i,a[i]);
    }
    puts("swap_int()");
    for(i = 0; i < 10/2; i++){
        swap_int(a[i],a[10 - i - 1]);
    }
    for(i = 0; i < 10; i++){
        printf("a[%d] = %d\n",i,a[i]);
    }
    
    //recursive
    x = 2;
    printf("factorial(%d) = %d\n",x,factorial(x));
    rec(x);
    int no = 22;
    printf("no = %d,%d\n",no,'0');
    for(i = 0; i < no; i++){
        printf("%d",i%3+1);

    }
    //GCD
    x = 2418;
    y = 1209;
    putchar('\n');
    printf("gcd(%d,%d) = %d\n",x,y,gcd(x,y));

    //enumration 
    enum RGB { Red, Green,Blue };
    int color;
    printf("0~2の値: ");
    scanf("%d",&color);
    switch(color){
        case Red   : printf("red");      break;
        case Blue  : printf("Blue");     break;
        case Green : printf("Green");    break;

    }
    

    return 0;

}
