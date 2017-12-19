#include<stdio.h>

int main(void){

    int height;
    double weight;
    puts("weight: "); scanf("%d", &height);
    weight = (height - 100) * 0.9;
    printf("%.1fkg\n",weight);
   return 0;
}
