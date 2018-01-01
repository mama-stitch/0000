#include<stdio.h>

int diff(int a, int b){
    return a > b ? a - b : b - a;
}
int plus_of(const int a[], int b[], int n){

    int i;
    int count = 0;
    for(i = 0; i < n; i++){
       if(a[i] > 0){
           b[count++] = a[i];
       }
    }
    return count;
}
double power1(double x, int n){
    int i;
    double temp = 1.0;
    for(i = 0 ; i < n; i++){
        temp *= x;
    }
    return temp;

}
double power2(double x, int n){
    double temp = 1.0;
    while(n-- > 0)
        temp *= x;
    return temp;

}
int main(void){
    int a[] = {23,43,-7,0,-34,43,65,76,-54,23,43};
    int b[128];
    int n = 11;
    int c = 0;

    //diff()
    printf("dif(5,3) = %d \n",diff(5 , 3));
    printf("dif(3,5) = %d \n",diff(3 , 5));
    
    //plus_of()
    printf("count = %d\n",plus_of(a,b,n));
    int i;
    for(i = 0; i < n; i++){
        printf("a[%d] = %d\n",i,a[i]);
    }
    for(i = 0; i < plus_of(a,b,n); i++){
        printf("b[%d] = %d\n",i,b[i]);
    }

    //power()
    double x = 2.4;
    n = 6;
    printf("%.5lf^%d = %lf\n",x,n,power1(x,n));
    printf("%.5lf^%d = %lf\n",x,n,power2(x,n));
    return 0;
}
