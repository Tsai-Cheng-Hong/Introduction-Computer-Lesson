#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int HW1()
{
    int Random_ANS;
    int first, second, third;

    srand(time(NULL));

    Random_ANS = (rand()%100) + 1;  // Generate 1~100 random number

    printf("Hw1 猜數字(簡單版)\n");

//    printf("Answer %d\n", Random_ANS); // 測試用

    printf("First input:");

    scanf("%d", &first);
    if(first==Random_ANS)
    {
        printf("Bingo\n");
        return 0;
    }
    else
    {
        printf("Wrong 1 time\n");
        printf("Second input:");
        scanf("%d", &second);
        if(second==Random_ANS)
        {
            printf("Bingo\n");
            return 0;
        }
        else
        {
            printf("Wrong 2 time\n");
            printf("Third input:");
            scanf("%d", &third);
            if(third==Random_ANS)
            {
                printf("Bingo\n");
                return 0;
            }
            else
            {
                printf("Wrong 3 time\n");
                printf("Answer: %d", Random_ANS);
                return 0;
            }
        }
    }

}

int main()
{
    HW1();
    return 0;
}
