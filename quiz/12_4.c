#include<stdio.h>
#include<string.h>

/*
5人の学生を表す構造体の配列を作り、その配列をソートする
名前や身長などのデータはキーボード入力
身長の昇順にソートするのか、名前の昇順でソートするのか選べるようにする
*/

#define NUMBER      2
#define NAME_LEN    64

typedef struct {
    char   name[NAME_LEN];
    int    height;
    double weight;
    long   schols;
}Student;

//Student型を指すポインタを交換
void swap(Student *a, Student *b){

    Student t = *a;
    *a = *b;
    *b = t;
}

//先頭n個の要素を身長の昇順にソート
void sort_by_height(Student *std, int n){
    puts("height sort");
    
    int i,j;
    for(i = 0; i < n; i++){
        for(j = n - 1; i < j; j--){
            if(std[j - 1].height > std[j].height)
                swap(&std[j - 1],&std[j]);
        }
    }
}

//先頭n個の要素を身長の昇順にソート
void sort_by_name(Student *std,int n){
    puts("name sort");
    int i,j;
    for(i = 0; i < n; i++){
        for(j = n - 1; i < j; j--){
            if(strcmp(std[j - 1].name,std[j].name) > 0)
                swap(&std[j - 1],&std[j]);
        }
    }
}

//student[]の全要素を出力
void print_students(Student *student,int n){

    int i;
    for(i = 0; i < n; i++){
        puts("-------------------------");
        printf("name        hei  wei  sch\n");
        printf("%-10s  %3d  %.1f  %ld\n",student[i].name,student[i].height
                    ,student[i].weight,student[i].schols);
        puts("-------------------------");
    }
}

/*  関数ポインタでソートを切り分ける */
//ソートするデータの種類を指定
typedef enum { name, height, invalid }SW;

SW select(void){

    int temp;
    do{
        printf("0..by_name, 1..by_height, other...exit\n >> ");
        scanf("%d",&temp);

    }while(temp < 0 || temp > 2);
    return temp;
}
int main(void){

    setvbuf(stdout,NULL,_IONBF,0);

    Student student[NUMBER];
    void (*sort[])(Student *,int) = { sort_by_name,sort_by_height };

    int i;
    for(i = 0; i < NUMBER; i++){
        printf("%2d番目の学生",i + 1);
        printf("name   >> ");scanf("%s",  student[i].name);
        printf("height >> ");scanf("%d", &student[i].height);
        printf("weight >> ");scanf("%lf",&student[i].weight);
        printf("schols >> ");scanf("%ld",&student[i].schols);
    }

    // 身長の昇順にソートする
    puts("身長の昇順にソートする");
    sort[select()](student,NUMBER);
    print_students(student,NUMBER);


    // 名前の昇順でソートする
    puts("名前の昇順でソートする ");
    sort[select()](student,NUMBER);
    print_students(student,NUMBER);

    return 0;

}


