#include<stdio.h>

void put_rgb(int c){
    switch(c){
        case 0 : 
            putchar('R');
            break;
        case 1 :
            putchar('G');
            break;
        case 2 :
            putchar('B');
            break;
    }
}

void put_newline(int n){
    while(n--){
        putchar('*');
        putchar('\n');
    }
}
void put_newline2(int n){
    int i;
    for(i = 0; i < n; i++){
        putchar('+');
        putchar('\n');
    }

}
double ave_of(int a, int b){

    return 1/2.0*(a + b);
}
int scan_a_to_b(int a,int b){
    int temp;
    do{
        printf("temp >>");
        scanf("%d",&temp);
    }while(a >= temp || temp >= b);

    return temp;
}
int scan_a_to_b2(int a,int b){
    int temp;
    while(1){
        printf("temp >>");
        scanf("%d",&temp);
        if(a >= temp || temp >= b)
            return temp;
    }
}
int sign_of(int n){
    int sign = 0;
    if(n > 0)
        sign = 1;
    else if(n < 0)
        sign = -1;
    else if(n == 0)
        sign = 0;
    return sign;

}
int sign_of2(int n){
    if(n > 0)
        return 1;
    else if(n < 0)
        return -1;
    return 0;
}
int main(void){
    int i;
    int n = 5;
    int h = 4;
    for(i = 0; i < 6; i++){
        put_rgb(i % 3);
        putchar('\n');
    }
    put_newline(n);
    put_newline2(n);

    printf("%lf\n",ave_of(n,h));

    setvbuf(stdout,NULL,_IONBF,0);

    int a = -30;
    int b = 56;

    //printf("temp = %d\n",scan_a_to_b(a,b));
    //printf("temp = %d\n",scan_a_to_b2(a,b));
/*
    printf("sign_of()\n");

    switch(sign_of(scan_a_to_b(a,b))){
        case 1:
            printf("sign_of() = +\n");
            break;
        case 0:
            printf("sign_of() = 0 \n");
            break;
        case -1:
            printf("sign_of() = - \n");
            break;
    }
*/
    printf("sign_of2()\n");
    switch(sign_of2(scan_a_to_b(a,b))){
        case 1:
            printf("sign_of() = +\n");
            break;
        case 0:
            printf("sign_of() = 0 \n");
            break;
        case -1:
            printf("sign_of() = - \n");
            break;
    }
    return 0;
}
