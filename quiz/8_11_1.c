#include<stdio.h>

int main(void){
    char ch;
    int n_count= 0;
    /*
    while((ch = getchar()) != '\t'){
        if(ch == '\n')
            n_count++;
    }

    printf("\\n = %d\n",n_count);

*/

    int cnt[10] = {0};
    /*
    while((ch = getchar()) != '\t'){
        switch(ch){
            case '0': cnt[0]++; break;
            case '1': cnt[1]++; break;
            case '2': cnt[2]++; break;
            case '3': cnt[3]++; break;
            case '4': cnt[4]++; break;
            case '5': cnt[5]++; break;
            case '6': cnt[6]++; break;
            case '7': cnt[7]++; break;
            case '8': cnt[8]++; break;
            case '9': cnt[9]++; break;
        }
    }
    for(i = 0; i < 9; i++){
        printf("cnt[%d] = %d\n",i,cnt[i]);
    }
    */
    while((ch = getchar()) != '\t'){

        if('0' <= ch  && ch <= '9')
            cnt[ch - '0']++;
    }

    int i,j;
    int cnt_max = 0;
    for(i = 0; i < 10; i++){
       printf("cnt[%d] = %d \n", i, cnt[i]); 
    }
    for(i = 0; i < 10; i++){
        if(cnt[i] > cnt_max)
            cnt_max = cnt[i];

    }
    printf("%d\n",cnt_max);
    for(i = cnt_max; i >= 1; i--){
        for(j = 0; j < 10; j++){
            if(cnt[j] >= i){
                printf("* ");
            }else if(cnt[j] < i){
                printf("  ");
            }
        }
        printf("\n");
    }
    for(i = 0 ; i < 10; i++){
        printf("%-2d",i);

    } 
    printf("\nEOF = %d \n",EOF);
    /*
    for(i = 0; i < 10; i++){
        printf("%d : ",i);
        for(j = 0; j < cnt[i]; j++){
            putchar('*');
        }
        putchar('\n');
    }
    */
    return 0;

}














