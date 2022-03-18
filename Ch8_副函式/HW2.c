#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int color(int i)
{
    int color,number;
    srand(time(NULL)*i);
    color = (rand()%4)+1;

    switch(color)
    {
        case 1:
            printf("club-");
            break;
        case 2:
            printf("diamond-");
            break;
        case 3:
            printf("heart-");
            break;
        case 4:
            printf("spade-");
            break;
        default:
            printf("error colors");
    }
    return color;
}

int number(int i)
{
    int number;
    srand(time(NULL)*i);
    number = (rand()%13)+1;
    switch(number)
    {
        case 1:
            printf("A\n");
            break;
        case 11:
            printf("J\n");
            break;
        case 12:
            printf("Q\n");
            break;
        case 13:
            printf("K\n");
            break;
        default:
            printf("%d\n",number);
    }
    return number;
}

int compare(int a_color,int a_num,int b_color,int b_num)
{
    int result;
    /*大老二規則版
    if (a_num<3)
    {
        a_num = a_num + 13;
    }
    if (b_num<3)
    {
        b_num = b_num + 13;
    }
    */

    if (a_num>b_num)
    {
        printf("A win\n");
    }
    else if (a_num<b_num)
    {
        printf("B win\n");
    }
    else
    {
        if (a_color > b_color)
        {
            printf("A win\n");
        }
        else if (a_color < b_color)
        {
            printf("B win\n");
        }
        else
        {
            printf("Tie\n");
        }
    }
}

int main()
{
    int a_color,a_num,b_color,b_num;
    printf ("A's card is : ");
    a_color = color(1);
    a_num = number(1);
    printf ("B's card is : ");
    b_color = color(5);
    b_num = number(5);
    compare(a_color,a_num,b_color,b_num);
    return 0;
}
