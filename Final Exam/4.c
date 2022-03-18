#include <stdio.h>
#include <stdlib.h>

int value[4]={0};
int coin[4];
int change, max;
const char strfmt[5][20] = { "" , "(%d)\n" , "(%d,%d)\n" , "(%d,%d,%d)\n" , "(%d,%d,%d,%d)\n"};
int counter=0;
FILE * input;


void search(int sum, int lv)
{
    for (int i = 0; sum < change; i++)
    {
        if (lv < max){
            search(sum, lv + 1);
        }
        sum += value[lv];
        coin[lv]++;
    }
    if (sum == change){
        printf(strfmt[counter], coin[0], coin[1], coin[2], coin[3]);
        input = fopen("output_609415036.txt", "a");
        fprintf(input, strfmt[counter], coin[0], coin[1], coin[2], coin[3]);
        fclose(input);
    }
    coin[lv] = 0;
}



int main()
{
    printf("請輸入有哪幾種面值的銅板(<5,>0)：\n");
/*
    while(scanf("%d", &value[counter]) != EOF){
        counter++;
    }
*/
    if(scanf("%d,%d,%d,%d", &value[0], &value[1], &value[2], &value[3]) > 0){
        for(int i=0; i<4; i++){
            if(value[i] != 0){
               // printf("%d ", value[i]);
                counter++;
            }
        }
    }

    printf("請輸入需要找零的金額(<101,>0)：\n");
    scanf("%d", &change);
    max = counter-1;
    printf("輸出結果為：\n");
    search(0,0);

    return 0;
}
