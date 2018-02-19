#include<stdio.h>
#include<math.h>

/*
自動車構造体
現在位置の座標を持つ
対話的に移動可能

移動手段
    移動目的地の座標を入力
    移動距離を座標で入力
*/

#define sqr(n) ((n) * (n))
//座標
typedef struct{
    double x;
    double y;
}Points;

//自動車構造体
typedef struct {
    char *id;           //id
    Points pt;          //現在地 (x,y)座標
    double fuel;        //燃料   L 
    double f_eco;       //燃費   L/km
}Car;


//移動距離に対する使用燃料を返す
double use_fuel(double dest,Car *car){

    return dest / car->f_eco;

}

//現在地からのpoints座標への移動距離を返す
double dest(Car *car, Points *p){
   return sqrt(sqr(p->x - car->pt.x) + sqr(p->y - car->pt.y));
}
void move_direct(Car *car, Points *p){
    printf("直接移動\n");
    printf("x:%lf ,y:%lf\n",p->x,p->y);
    car->pt.x = p->x;
    car->pt.y = p->y;
    putchar('\n');
}
void move(Car *car,Points *p){

    printf("追加移動\n");
    printf("x:%lf ,y:%lf\n",p->x,p->y);
    double tmp = car->fuel;
    double des = dest(car,p);
    printf("移動距離%.2lf\n",des);
    if(tmp  - use_fuel(des,car) >= 0){
        car->pt.x += p->x;
        car->pt.y += p->y;
        car->fuel -= use_fuel(des,car);
    }else
       printf("燃料不足:　不足燃料%lf\n", car->fuel - use_fuel(des,car));
}

void print_car_info(Car *car){

    putchar('\n');
    printf("id  :  %s  ,x : %-8.5lf,  y : %-8.5lf ,fuel : %.2lf ,fuel_economy %.2lf\n"
                    ,car->id ,car->pt.x ,car->pt.y ,car->fuel,car->f_eco);
}

int main(void){

    setvbuf(stdout,NULL,_IONBF,0);
    Car car1 = { "0000" ,{ 0.0, 0.0} ,8.0, 20 };
    Car car2 = { "0001" ,{10.9,10.9} ,100.0 ,1};
    Points p1;
    Points dest;
    print_car_info(&car1);
    print_car_info(&car2);


    //    move_direct(&car1,&p1);
    while(1){
        printf("x > ");scanf("%lf",&p1.x);
        printf("y > ");scanf("%lf",&p1.y);

        move(&car1,&p1);
        print_car_info(&car1);
       
        int b1 = 0;
        if(car1.fuel < 3){
            do{
                printf("給油しますか？yes..1    no..0"); scanf("%d",&b1);
                if(b1 == 1){
                    car1.fuel += 10;
                    printf("10L給油しました\n");
                    break;
                }
                break;
            }while(1);
        }

    }

    return 0;
}
