#include <stdio.h>
#include <stdlib.h>

int main()
{
    int S0=1,S1=0;
    int out=0;
    int in=0;
    printf("Finite State Machine\n");
    printf("The Present State is S0\n");
    printf("Please input next data : ");
    scanf("%d",&in);
    while(1)
    {
        if (in == 0 && S0 == 1)
        {
            S0=0;S1=1;
            out=0;
            printf("Present state is S1\n");
            printf("Present output is %d\n",out);
        }
        else if (in == 0 && S1 == 1)
        {
            S0=0;S1=1;
            out=0;
            printf("Present state is S1\n");
            printf("Present output is %d\n",out);
        }
        else if (in == 1 && S1==1)
        {
            S0=1;S1=0;
            out=1;
            printf("Present state is S0\n");
            printf("Present output is %d\n",out);
        }
        else
        {
            S0=1;S1=0;
            out=0;
            printf("Present state is S0\n");
            printf("Present output is %d\n",out);
        }
    printf("\n-----------------------\n");
    printf("Please input next data : ");
    scanf("%d",&in);
    }
    return 0;
}
