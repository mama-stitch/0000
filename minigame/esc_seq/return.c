#include<stdio.h>
#include<time.h>

int sleep(unsigned long x){


    clock_t c1 = clock();
    clock_t c2;

    do{
        if((c2 = clock()) == (clock_t)-1)
            return 0;

    }while((c2-c1)*1000.0 / CLOCKS_PER_SEC < x);

}


int main(void){
    setvbuf(stdout,NULL, _IONBF,0);

    printf("test");
    fflush(stdout);
    sleep(1000);

    printf("\rabcd");
    fflush(stdout);
    sleep(1000);

    printf("\ryahoo");
    fflush(stdout);
    sleep(1000);

    return 0;

}
