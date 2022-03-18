#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int test()
{
    int ASCII=0;

    for(ASCII=0; ASCII<128; ASCII++)
    {
        // \t => TAB
        // \" => "
        printf("%d\t\"%c\"\n", ASCII, ASCII);
    }

    return 0;
}


int test2()
{
    int a[5]={1,2,3,4,5};

    char b[]="test12234";

    printf("a = %d\n", a[0]);

    printf("b = %s\n", b);

    return 0;
}

int HW1()
{
    int dice;
    int one=0, two=0, three=0, four=0, five=0, six=0;

    srand(time(NULL));

    dice = rand()%6+1;
//    printf("dice :%d\n", dice);

    for(int i=0;i<6000;i++)
    {
        dice = rand()%6+1;
//        printf("dice :%d\n", dice);
        switch(dice)
        {
        case 1:
            one+=1;
            break;
        case 2:
            two+=1;
            break;
        case 3:
            three+=1;
            break;
        case 4:
            four+=1;
            break;
        case 5:
            five+=1;
            break;
        case 6:
            six+=1;
            break;
        default:
            printf("Out of range\n");
        }
    }

    printf("face\t numbers\n");
    printf("one:\t %d\n",one);
    printf("two:\t %d\n",two);
    printf("three:\t %d\n",three);
    printf("four:\t %d\n",four);
    printf("five:\t %d\n",five);
    printf("six:\t %d\n",six);

    int sum;

    sum = one + two + three + four + five + six;

    printf("sum: %d\n",sum);

    return 0;

}


int main()
{
    HW1();
    return 0;
}
