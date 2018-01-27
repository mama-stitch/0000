#include<stdio.h>

#define sqr(x) ((x)*(x))
#define cube(x) ((x)*(x)*(x))
#define abs(x) ((x) > 0 ? (x) : (-x))
#define min_of(x,y) ((x) > (y) ? (y) : (x))
#define max_of(x,y) ((x) > (y) ? (x) : (y))
#define diff(x,y) ((x) > (y) ? ((x)-(y)) : ((y)-(x)))
#define swap(type,x,y) do{ type tmp = x; x = y; y = tmp; }while(0)
#define put_alert2(str) (putchar('\a'),puts(str))
void reverse(double v[],int n){
    int i;
    for(i = 0; i < n/2; i++){
         swap(double,v[i],v[n-i-1]);
    }
}

void print_v(double v[],int n){
    int i;
    for(i = 0;i < n; i++){
        printf("v[%d] = %lf\n",i,v[i]);
    }
}

void bsort(double *v,int n){
    int i,j;
    for(i = 0; i < n; i++){
        for(j = n-1; j > i; j--){
            if(v[j] < v[j-1])
                swap(double ,v[j], v[j-1]);
        }
    }
}

int main(void){

    int n1 = 21;
    int n2 = 6;
    int n3 = 0;
    int x = 15;
    int y = 5;
    double v[] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.2 };
    char *str = "awefoawiejfaowiejf";
    print_v(v,10);
    reverse(v,10);
    print_v(v,10);
    bsort(v,10);
    print_v(v,10);
    put_alert2(str);
    printf("x = %d, y = %d \n",x,y);
    swap(double,x,y);
    printf("x = %d, y = %d \n",x,y);
    swap(double,x,y);


    printf("\"ABC\"\n");
    printf("\'ABC\'\n");
    printf("'ABC'\n");
    putchar('\"');
    putchar('\n');
    putchar(7 + '0');
    putchar('\n');
    printf("5 = %d \n",'5'- '0');
    printf("diff(x++,y) = %d = 10\n",diff(x++,y));
    printf("diff(++x,y) = %d = 12\n",diff(++x,y));
    printf("diff(%d,%d) = %d\n",n1,n2,diff(n1,n2));
    printf("diff(%d,%d) = %d\n",n2,n1,diff(n2,n1));
    printf("min_of(%d,%d) = %d\n",n2,n1,min_of(n2,n1));
    printf("min_of(%d,%d) = %d\n",n2,n1,min_of(n2,n1));
    printf("max_of(%d,%d) = %d\n",n1,n2,max_of(n1,n2));
    printf("max_of(%d,%d) = %d\n",n2,n1,max_of(n2,n1));
    printf("abs(-%d) = %d \n",n1,abs(-n1));
    printf("abs(%d) = %d \n",n1,abs(n1));
    printf("sqr(%d) = %d \n",n1,sqr(n1));
    printf("cube(%d) = %d \n",n1,cube(n1));
    printf("21,6     n1   = %2d ,n2   = %2d\n",n1 ,n2);
    printf("6 ,0     n2   = %2d ,n3   = %2d\n",n2 ,n3);
    printf("21,6     n1++ = %2d ,n2++ = %2d\n",n1++ ,n2++);
    printf("1 ,7     1    = %2d ,n2   = %2d\n",1 ,n2);
    printf("22,7     n1 = %2d   ,n2   = %2d\n",n1 ,n2);
    printf("%2d,7    n1 = (n1,n2)\n",n1 = (n1,n2));
    printf("%2d,7    n1 / (n2,++n3)\n",n1 / (n2,++n3));
    printf("\a");
    printf("\b");
    printf("\\");
    printf("\r");
    printf("\'");
    printf("\n");
    printf("\t");
    printf("\"");

    printf("EOF = %d (EOF < 0 ) == %d",EOF,EOF < 0);
    return 0;

}
