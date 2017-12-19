#include<stdio.h>

int main(void){
  /*  int no;
    scanf("%d", &no);
    switch(no){
        case 3: printf("A");
        case 2: printf("B");break;
        case 1:
        defalut :printf("C");break;
    }
    */

    //3値の中央値を求める
    int a,b,c,mid;
    scanf("%d%d%d",&a,&b,&c);

    if(a>b){
        //b<c
        if(b>c){
            mid=b;
        }else if(a>c){
            mid=c;
         }else{
             mid=a;
         }
    }else if(a>c){//a<b    c a b
        mid=a;
        }else if(b<c){//a<b a<c    a bc  | a cb
            mid=b;
        }else{//a<b a<c b>c    a  c   b
             mid=c;
        }
    printf("%d",mid);
    return 0;

}



