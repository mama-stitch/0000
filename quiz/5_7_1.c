#include<stdio.h>


#define NUMBER 96

int main(void){
    setvbuf(stdout, NULL, _IONBF,0);
    int no;
    int a[NUMBER];
    printf("データ数　：");
    do{
        scanf("%d",&no);
        if(no < 1 || no > NUMBER)
            printf("\aone more 1 ~ %d\n",NUMBER);
    }while(no < 1 || no > NUMBER);
    int i;
    for(i=0; i<no; i++){
        printf("%2d番目: ",i+1); scanf("%d",&a[i]);
    }
    printf("{");
    for(i=0; i<no-1; i++)
        printf("%d, " ,a[i]);
    printf("%d} \n",a[i]);
    return 0;
}
