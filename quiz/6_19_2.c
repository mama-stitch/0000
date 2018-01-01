#include<stdio.h>
int max2(int x,int y){

    return x > y ? x : y;
}
int max4(int a,int b,int c,int d){
    return max2(max2(a,b),max2(c,d));

}

int counter(void){
    static int count;
    count++;
    return count;
}

int main(void){

// max2()
    int x = -3;
    int y = -17;
    printf("%d\n",max2(x,y));
//max4()
    int a,b,c,d;
    a = 1;
    b = 2;
    c = 3;
    d = 4;
    printf("%d\n",max4(a,b,c,d));
//counter()
    printf("1 - %d\n",counter());
    printf("2 - %d\n",counter());
    printf("3 - %d\n",counter());
    printf("4 - %d\n",counter());
    printf("5 - %d\n",counter());
    return 0;
}
