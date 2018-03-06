#include<stdio.h>
#include<time.h>

int sleep(unsigned long x){

    clock_t c1 = clock(),c2;

    do{
        if((c2 = clock()) == (clock_t)-1)
            return 0;

    }while(1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);

}

int main(void){
    setvbuf(stdout,NULL,_IONBF,0);


    int i;
    for(i = 0; i < 10; i++){
        printf("\rtest!");
        sleep(1000);
        fflush(stdout);
        printf("\rcheck");
        sleep(1000);
        fflush(stdout);
    }

    printf("test\n");

    return 0;

}
