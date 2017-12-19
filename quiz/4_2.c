#include<stdio.h>

void setBuf(){
    if(setvbuf(stdout,NULL,_IONBF,0) != 0){
        puts("err");
    }
}
int main(void){

   // setBuf();

    int no1,no2;
    int sum = 0;
    int lower,upper,num;
    scanf("%d%d",&no1,&no2);

    if(no1 > no2){
        lower = no2;
        upper = no1;

    }else{
        lower = no1;
        upper = no2;
    }


    num = lower;
    do{
        sum = sum + num;
        num = num + 1;

    }while(upper >= num);

    printf("%dから%dの合計は%d\n",lower,upper,sum);

    return 0;

}









