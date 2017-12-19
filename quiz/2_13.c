#include<stdio.h>

int main(void){
//BIM weight(kg) * height(m)^2 = 0.00
    double weight, height, BMI;
    printf("height[ccm]: "); scanf("%lf", &height);
    printf("weight[kg]: "); scanf("%lf", &weight);
    BMI = weight / ((height/100.0) * (height/100.0));
    printf("BMI : %.2f\n",BMI);
   return 0;
}
