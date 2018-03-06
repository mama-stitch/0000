#include<stdio.h>
#include<time.h>

int sleep(unsigned long x){
    clock_t c1 = clock(),c2;

    do{ 
        if((c2 = clock()) == (clock_t)-1)
            return 0;

    }while( 1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);

    return 1;

}

int main(void){

    //clock_t c = clock();
    int i;
    for(i = 10; i > 0; i--){
        printf("\r%2d",i);
        fflush(stdout);
        sleep(500);
    }
    clock_t c = clock();
    printf("\r\aFIRE!!");

    printf("%.5f",(double)c/CLOCKS_PER_SEC);

    return 0;
}
