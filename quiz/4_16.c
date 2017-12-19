#include<stdio.h>


int main(void){

    setvbuf(stdout, NULL, _IONBF,0);
    int upper, lower, steps;
    int height;    

    printf("何cmから\n"); scanf("%d", &upper);
    printf("何cmまで\n"); scanf("%d", &lower);
    printf("何cmごと\n"); scanf("%d", &steps);

    for(height = lower; height <= upper; height += steps){
        printf("%dcm : %.2fkg\n",height,(height - 100) * 0.9); 
    }
    


    return 0;
}
