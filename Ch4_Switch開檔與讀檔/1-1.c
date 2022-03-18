#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    FILE * input;
    FILE * output;

    char str[80];
    char file[80];
    char colors[80];
    char numbers;
    int color,number;
    srand(time(NULL));
    input = fopen("card.txt","w");
    printf("Create a random card\n");
    color = (rand()%4)+1;
    number = (rand()%13)+1;
    printf ("your random color is : %d\n",color);
    printf ("your random number is : %d\n",number);

    switch(color)
    {
        case 1:
            fprintf(input, "club-");
            break;
        case 2:
            fprintf(input, "diamond-");
            break;
        case 3:
            fprintf(input, "heart-");
            break;
        case 4:
            fprintf(input, "spade-");
            break;
        default:
            printf("error colors");
    }

    switch(number)
    {
        case 1:
            fprintf(input, "A");
            break;
        case 11:
            fprintf(input, "J");
            break;
        case 12:
            fprintf(input, "Q");
            break;
        case 13:
            fprintf(input, "K");
            break;
        default:
            fprintf(input, "%d",number);
    }

    //fprintf(input, "%s",&str);

    fclose(input);

    output = fopen("card.txt","r");

    if (input == NULL)
    {
        printf("Fail\n");
        return 0;
    }

    //fscanf(output,"%[^\n]", &file);
    fscanf(output,"%s", &file);
    printf("your input is : %s\n",file);
    fclose(output);



    return 0;
}
