#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*

過年到了，與朋友玩「十八仔」的遊戲，遊戲規則為每人一次擲四顆骰子，並再跟莊家比點數大小，這次總共兩人遊玩。
計點方式：
先扣除2顆點數相同的骰子，其餘2顆點數合計即為其所得點數。
若有兩組骰子點數相同，則以點數較大者之合計為其所得點數。
不能有3顆骰子相同且另一顆不同
也不能有四顆不一樣，必要有兩顆一樣為止。
若四顆一樣，則為天牌，大於①~②的牌。
Ex: (6,6,6,6)>(2,2,2,2)>(1,1,1,1)>(6,6,1,1)>(3,3,1,1)>(3,3,1,3)>(4,4,1,2)

*/


int main()
{
    int random[4]={'\0'};
    int small;
    int sum[2] = {'\0'};
    int king[2] = {'\0'};

    srand(time(NULL));
    //printf("How many people want to play the game?Please enter number.");
    //scanf("%d", people);
    for(int i=1; i<3; i++){
            printf("Person %d:\n", i);
    do{
        random[0] = rand()%6+1;
        random[1] = rand()%6+1;
        random[2] = rand()%6+1;
        random[3] = rand()%6+1;
        for(int i=0; i<3; i++){
            small = i;
            for(int j=i+1; j<4; j++){
                if(random[j] < random[small]){
                    int temp = random[j];
                    random[j] = random[small];
                    random[small] = temp;
                }
            }
        }
        printf("%d %d %d %d\n", random[0], random[1], random[2], random[3]);
        if((random[0]==random[1] && random[1]==random[2] && random[2]!=random[3]) || (random[0]!=random[1] && random[1]==random[2] && random[2]==random[3]) || (random[0]!=random[1]&&random[1]!=random[2]&&random[2]!=random[3])){
            printf("Invalid value! Row again!\n\n");
        }
        else{
            printf("Successful!\n\n");
        }

    }while((random[0]==random[1] && random[1]==random[2] && random[2]!=random[3]) || (random[0]!=random[1] && random[1]==random[2] && random[2]==random[3]) || (random[0]!=random[1]&&random[1]!=random[2]&&random[2]!=random[3]));


    if(random[0]==random[1] && random[1]==random[2] && random[2]==random[3]){
        king[i-1] = random[0];
        printf("Person %d, king = %d\n\n", i, king[i-1]);
    }
    else if(random[0]==random[1]){
        sum[i-1] = random[2] + random[3];
        printf("Person %d, sum = %d\n\n", i, sum[i-1]);
    }
    else if(random[1]==random[2]){
        sum[i-1] = random[0] + random[3];
        printf("Person %d, sum = %d\n\n", i, sum[i-1]);
    }
    else{
        sum[i-1] = random[0] + random[1];
        printf("Person %d, sum = %d\n\n", i, sum[i-1]);
    }


    }




    if(king[0]!=0 && king[1]!=0){
        if(king[0]>king[1]){
            printf("Person 1 win!");
        }
        else if(king[0]<king[1]){
            printf("Person 2 win!");
        }
        else{
            printf("Even!");
        }
    }
    else if(king[0]!=0 || king[1]!=0){
        if(king[0]!=0){
            printf("Person 1 win!");
        }
        else{
            printf("Person 2 win!");
        }
    }
    else{
        if(sum[0]>sum[1]){
            printf("Person 1 win!");
        }
        else if(sum[0]<sum[1]){
            printf("Person 2 win!");
        }
        else{
            printf("Even!");
        }
    }







    return 0;
}
