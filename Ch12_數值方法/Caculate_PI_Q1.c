/*20191218 using the given formula to calculate PI*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i;                    //denominator used for calculation
    double N;                 //total terms
    double sum = 0;

    printf("Please enter a number: N = ");
    scanf("%lf", &N);

    for(i = 1; i <= N; i++)
    {
        if(i%2 == 0)                     //i is even
            sum = sum - (1/(i*2.0 - 1));
        else                             //i is odd
            sum = sum + (1/(i*2.0 - 1));
    }
    sum *= 4;
    printf("%.12f\n", sum);

    return 0;
}
