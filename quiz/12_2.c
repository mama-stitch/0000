#include<stdio.h>

#define NAME_LEN    64
typedef struct student{
    char    *name;
    int      height;
    float    weight;
    long     schols;
}Student;

//stdが指す学生の身長を180まで伸ばし体重を80kgまで減らす
void hiroko(Student *std){

    if(std->height < 180)
        std->height = 180;

    if(std->height > 80)
        std->weight = 80;
}

void printStudent(Student *std){
    puts("int printStudent()");
    printf("name   : %s\n",std->name);
    printf("height : %d\n",std->height);
    printf("weight : %lf\n",std->weight);
    printf("schols : %ld\n",std->schols);
}

int main(void){
    Student tanaka = {
        "さなか"
        ,168
        ,120.4
        ,2000000
    };

    printStudent(&tanaka);
    hiroko(&tanaka);
    putchar('\n');
    printStudent(&tanaka);
    return 0;

}

