#include<stdio.h>


//XYZ構造体
struct xyz{
    int    x;
    long   y;
    double z;
};

struct xyz scan_xyz(){
    struct xyz temp;
    printf("xyz.x >> ");scanf("%d" ,&temp.x);
    printf("xyz.y >> ");scanf("%ld",&temp.y);
    printf("xyz.z >> ");scanf("%lf",&temp.z);
    return temp;
}

int main(void){
    setvbuf(stdout,NULL,_IONBF,0);

    struct xyz xyz;

    xyz = scan_xyz();

    printf("x = %d\n"  , xyz.x);
    printf("y = %ld\n" , xyz.y);
    printf("z = %lf\n" , xyz.z);

    return 0;
}


