#include<stdio.h>
/*
int型、要素数nの配列の最小値の要素を返却する
*/
#define NUMBER 5 
typedef struct{

    int math;
    int lang;

}STUDENT;

int scanf_int(STUDENT *student,int n){
    int i;
    for(i = 0; i < n; i++){
        printf("student[%d]\n",i);
        printf("    math =");
        scanf("%d",&(student[i].math));
        printf("    lang =");
        scanf("%d",&(student[i].lang));
    }
}
void print_array(STUDENT *student,int n){
    int i;
    for(i = 0; i < n; i++){
        printf("student[%d]\n",i);
        printf("    math = %d\n",student[i].math);
        printf("    lang = %d\n",student[i].lang);
    }
}
int min_of_math(const STUDENT *student, int n){
    int i;
    int min = student[0].math;
    for(i = 0; i < n; i++){
        if(min > student[i].math)
            min = student[i].math;
    }
    return min;

}
int min_of_lang(const STUDENT *student, int n){
    int i;
    int min = student[0].lang;
    for(i = 0; i < n; i++){
        if(min > student[i].lang)
            min = student[i].lang;
    }
    return min;

}
int main(void){
    setvbuf(stdout,NULL,_IONBF,0);
    STUDENT students[NUMBER];
    scanf_int(students,NUMBER);
    print_array(students,NUMBER);
    printf("min_math = %d \n",min_of_math(students,NUMBER));
    printf("min_lang = %d \n",min_of_lang(students,NUMBER));
    return 0;
}
