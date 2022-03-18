#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE * input, * output;                        //pointer to input file, output file
    int year = 0, month = 0, day = 0, sum = 0;     //sum == total days
	int countdown;

    /*開檔*/
    input = fopen("date.txt", "r");
    output = fopen("result.txt", "w");

    /*輸入年月日*/
	printf("請輸入日期(yyyy mm dd): ");
	scanf("%d %d %d", &year, &month, &day);

    fprintf(input, "%d %d %d", year, month, day);

    /*Read data from the file.*/
    fscanf(input,"%d %d %d", &year, &month, &day);

    /*Compute the sum of days according to the month.*/
    switch(month)
    {
    case 1:
        sum = 0;
        break;
    case 2:        //There are 31 days in January.
        sum = 31;
        break;
    case 3:        //There are 28 days in February (Normal year).
        sum = 59;
        break;
    case 4:        //There are 31 days in March.
        sum = 90;
        break;
    case 5:        //There are 30 days in April.
        sum = 120;
        break;
    case 6:       //There are 31 days in May.
        sum = 151;
        break;
    case 7:       //There are 30 days in June.
        sum = 181;
        break;
    case 8:       //There are 31 days in July.
        sum = 212;
        break;
    case 9:       //There are 31 days in August.
        sum = 243;
        break;
    case 10:      //There are 30 days in September.
        sum = 273;
        break;
    case 11:      //There are 31 days in October.
        sum = 304;
        break;
    case 12:      //There are 30 days in November.
        sum = 334;
        break;
    default:
        printf("The month doesn't exist.\n\n");
    }

    sum = sum + day;
	countdown = 365 - sum;
    /*Judge if the year is a leap year or not.*/
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))  //The year is a leap year.
    {
        /*If it is a leap year and the month > 2, it should add 1 to the days.*/
        if(month <= 2)
            countdown = countdown + 1;
    }
    printf("%d",countdown);
    /*Print the result into file. Close files*/
    fprintf(output,"%d days to go before the New Year.", countdown);
    fclose(input);
    fclose(output);

    return 0;
}
