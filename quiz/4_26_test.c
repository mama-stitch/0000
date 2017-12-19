#include<stdio.h>
int main(void){

    int no,width;
    printf("何個表示しますか？: ");       scanf("%d", &no);
    printf("何個ごとに改行しますか？: "); scanf("%d", &width);
    if(no > 0){
        int i,j;
        int rem = no % width;
        int wid = width / 2;
        int odd = width % 2;
        for(i = 0; i < no / width / 2; i++){
            for(j = 0; j < wid; j++)
                printf("+-");
            if(odd)
                putchar('+');
            putchar('\n'); 
            for(j = 0; j < wid; j++)
                printf("-+");
            if(odd)
                putchar('-');
            putchar('\n');
        }
        if( no / width %2){
            for(j = 0; j < wid; j++)
                printf("+-");
            if(odd)
                putchar('+');
            putchar('\n');

        }


    }
    return 0;

}
