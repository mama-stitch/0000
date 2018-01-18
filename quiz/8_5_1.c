#include<stdio.h>

#define NUMBER 5
#define swap(a,b) do{ int temp = a; a = b; b = temp; }while(0)


void bsort(int *num, int n){
   int i,j;
   for(i = 0; i < n; i++){
       for(j = 0; j < n - 1; j++){
           if(num[j] > num[j + 1]){
              swap(num[j],num[j + 1]);
              /* int temp = num[j];
               num[j] = num[j + 1];
               num[j + 1] = temp;
               */
           }
       }
           
   }

}
int main(void){

    int num[NUMBER]; 
    int i;
    setvbuf(stdout, NULL,_IONBF,0);

    for(i = 0; i < NUMBER; i++){
        printf("num[%d] = ", i);scanf("%d",&num[i]);
    }

    bsort(num,NUMBER);
    putchar('\n');

    for(i = 0; i < NUMBER; i++){
        printf("num[%d] = %d\n",i,num[i]);
    }
    return 0;

}
