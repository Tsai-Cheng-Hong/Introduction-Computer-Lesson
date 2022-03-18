#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int HW1_1()
{
    FILE *input;

    input = fopen("password.txt", "r");

    int a;
    int status;
    int ans[7] = {0};

    status = fscanf(input, "%d", &a);

    while(status!=EOF)
    {
        printf("origin : %d\n", a);

        int new_ans = 0;
        int n=1;
        for(int i=0;i<7;i++)
        {
            ans[i] = a % 10;
            a /= 10;
            ans[i] += 3;

            if(ans[i]>9)
                ans[i] = ans[i] % 10;

            new_ans += ans[i] * n;
            n *= 10;
        }
        printf("after : %d\n", new_ans);

//        fscanf(input, "%d", &a);
        status = fscanf(input, "%d", &a);
    }

    fclose(input);

}


int test()
{
    int a = 0;

    int ans[7]={0};

    a = 1314520;
    int new_ans = 0;
    int n=1;

    for(int i=0;i<7;i++)
    {
        ans[i] = a % 10;
        a /= 10;
        ans[i] += 3;

        new_ans += ans[i] * n;
        n *= 10;
    }
    printf("after : %d", new_ans);

}


int main()
{
    HW1_1();
//    test();
    return 0;
}
