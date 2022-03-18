#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r, circle = 0;
    int sphere = 0;
    printf("input r :");
    scanf("%d",&r);

    circle = 3.14*r*r;
    sphere = (3.14*r*r*r)*4/3;

    printf("circle: %d, sphere: %d",circle, sphere);

    return 0;
}
