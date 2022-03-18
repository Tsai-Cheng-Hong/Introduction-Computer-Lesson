/*20191218 Question 1 find the roots by Bisection Method*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX_ITERA 100      //the maximum times of doing iterations

double Func(double);                       //the function to solve
double Bisection(double, double, double);  //Using Bisection Method to get the approximate root

int main()
{
    double up, low, error;   //the interval and the permission error(user-defined)
    double answer;      //the root which found by Bisection Method

    printf("Please enter the interval and error (lower, upper, error):\n");
    scanf("%lf %lf %lf", &low, &up, &error);
    answer = Bisection(low, up, error);
    printf("f(%+e) = %+e\n\n", answer, Func(answer));
    //printf("f(%f) = %.14f\n\n", answer, Func(answer));

    return 0;
}

double Func(double x)
{
    return (x*x*x + 1*x*x - 2*x - 1);                                                                                           //usable case: x*x*x - 5.48*x*x - 1.4883*x + 20.394828
}

double Bisection(double low, double up, double error)
{
    double mid;      //midpoint
    int count = 0;   //count the times for doing iterations

    if(Func(up) * Func(low) > 0)
    {
        printf("There are no roots in interval [%.0f, %.0f]\n\n", low, up);
        return low;
    }
    else if(fabs(Func(up)) < error)  return up;         //up is the root
    else if(fabs(Func(low)) < error)    return low;     //low is the root
    else      //do the iterations
    do
    {
        mid = 0.5 * (up + low);
        if(Func(up) * Func(mid) <= 0.0)        //there is one root in [up,mid]
            low = mid;
        else                                   //there is one root in [mid,low]
            up = mid;
        count++;
    }while(count < MAX_ITERA && fabs(Func(mid)) > error);

    printf("\nDo %d times\n",count);
    return mid;
}
