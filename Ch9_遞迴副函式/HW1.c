#include <stdio.h>

int count = 0;

int HW1(int n, char A, char B, char C)
{
    if (n == 1)
    {
        printf("n = %d: number: %d from %c to %c!\n", count++, n, A, C);
    }
    else
    {
        HW1(n - 1, A, C, B);
        printf("n = %d: number: %d from %c to %c\n", count++, n, A, C);
        HW1(n - 1, B, A, C);
    }
}

int main()
{
    int n;
    printf("layer num¡G");
    scanf("%d", &n);
    HW1(n, 'A', 'B', 'C');
    printf("hanoi layer %d ----> move  %d times\n", n, count);
    return 0;
}
