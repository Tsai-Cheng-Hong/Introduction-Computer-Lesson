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
        printf("A的B平方是 : %d",x);
    }
    else if (C == 2)
    {
        x = pow(A,0.5);
        printf("A的開根號是 : %d",x);
    }
    else if (C == 3)
    {
        if (A%2 == 0)
        {
            printf("A是雙數");
        }
        else
        {
            printf("A是單數");
        }
    }
    else if (C == 4)
    {
        if (B%2 == 0)
        {
            printf("B是雙數");
        }
        else
        {
            printf("B是單數");
        }
    }
    else
    {
        printf("無效的Operation");
    }

    return 0;
}
