#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int A;
    int B;
    int C;
    int x;
    printf("input A : ");
    scanf("%d",&A);
    printf("input B : ");
    scanf("%d",&B);
    printf("input Operation : ");
    scanf("%d",&C);

    if (C == 1)
    {
        x = pow(A,B);
        printf("A��B����O : %d",x);
    }
    else if (C == 2)
    {
        x = pow(A,0.5);
        printf("A���}�ڸ��O : %d",x);
    }
    else if (C == 3)
    {
        if (A%2 == 0)
        {
            printf("A�O����");
        }
        else
        {
            printf("A�O���");
        }
    }
    else if (C == 4)
    {
        if (B%2 == 0)
        {
            printf("B�O����");
        }
        else
        {
            printf("B�O���");
        }
    }
    else
    {
        printf("�L�Ī�Operation");
    }

    return 0;
}
