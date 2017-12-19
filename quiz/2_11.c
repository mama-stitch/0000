#include<stdio.h>

int main(void){

    int n1,n2,height;
    double area;
    printf("upper"); scanf("%d",&n1);
    printf("lower"); scanf("%d",&n2);
    printf("height"); scanf("%d",&height);

    area = (n1 + n2) * height / 2.0;
    printf("上底%d\n下底%d\n高さ%d\n面積：%f",n1,n2,height,area);

   return 0;
}
