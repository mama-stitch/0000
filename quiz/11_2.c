#include<stdio.h>


int main(void){
    

    int i;
    char a[][6] = {
        "test"
        ,"hei"
        ,"youyo"
        ,"mADPIE"
    };

    char* p[] = {
        "ouou"
        ,"ouo2ju"
        ,"ouoweu"

    };

    for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++){

        printf("a[%d] = \"%s\"\n",i,a[i]);

    }
    putchar('\n');
    for(int i = 0; i < sizeof(p)/sizeof(p[0]); i++){

        printf("p[%d] = \"%s\"\n",i,p[i]);

    }
    return 0;

}
