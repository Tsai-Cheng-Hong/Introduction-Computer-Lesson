#include <stdio.h>
#include <stdlib.h>
#include <string.h>  // �ϥΦr�ꪺ���ب禡�����[�J  #include <string.h>

int test1()
{
    int k;
    char str[6];  // ��array�إ߱��ϥΦr�ꪺ����(�r�ꤣ�n�W�X�إߪ��d��)

    printf("Please input a string with English & numbers: ");

    scanf("%s", str);  // %s �Ψ�scanf�r��A�r�ꤣ�Υ['&'

    for(int i=0; i<6; i++)
        str[i] += 1;

    printf("%s", str);

    return 0;
}


int test2()
{
    char str[10];

    printf("Please input a string with English & numbers: ");

    scanf("%s", str);

    printf("Your input is: %s\n", str);

    str[2] = '\0';  // �i�H�N�r��I�_�b�Q�n����m

    printf("Your new string is: %s\n", str);

    return 0;
}


int test3()
{
    char str[10], str2[10], str3[10];

    printf("Please input two string with English & numbers:\n");

    scanf("%s", str);
    scanf("%s", str2);

    printf("\nYour string1 is: %s\n", str);
    printf("Your string length is: %d\n", strlen(str));  // �d�� str �r�����
    printf("\nYour string2 is: %s\n", str2);
    printf("Your string length is: %d\n", strlen(str2));  // �d�� str2 �r�����

    if(strcmp(str, str2) != 0)
    {
        strcpy(str3, str);  // �N �r��(str) �ƻs�� �r��(str3)
        strcpy(str, str2);  // �N �r��(str2) �ƻs�� �r��(str)
        strcpy(str2, str3);  // �N �r��(str3) �ƻs�� �r��(str2)
    }
    else
    {
        printf("same!\n");
    }

    printf("\nYour string1 is: %s\n", str);
    printf("\nYour string2 is: %s\n", str2);

    strcat(str, str2);
    printf("\nConcat two string is: %s\n", str);  // �N �r��(str2) �����e���b �r��(str1) ���᭱�ñN���G�s�J �r��(str1)

    return 0;
}

int HW1()
{
    FILE * input;
    FILE * input2;
    FILE * input3;

    char command[25];
    char account[25], password[25];
    char account_old[25], password_old[25];
//    char account[25], password[25];

    while(1)
    {

        printf("Please input Register or Login or Quit\n");
        printf("=> ");

        scanf("%s", command);

        if(strcmp(command, "Register") == 0)
        {
            int a=0;

            printf("Register\n");

            input = fopen("sql.txt", "r");

            printf("Please input Account and Password\n");

            printf("New Account => ");
            scanf("%s", account);

            printf("New Password => ");
            scanf("%s", password);

            while(fscanf(input, "%s %s", account_old, password_old)!=EOF)
            {
                if(strcmp(account_old, account) == 0)
                    a = 1;
            }

            if(a == 1)
            {
                printf("Repeat");
                fclose(input);
            }
            else
            {
                printf("It's OK to USE\n");
                input2 = fopen("sql.txt", "a");
                fprintf(input2, "%s %s", account, password);
                fprintf(input2, "\n", account, password);
                fclose(input2);
            }

            break;
        }

        else if(strcmp(command, "Login") == 0)
        {
            printf("Login\n");

            input3 = fopen("sql.txt", "r");

            if(input3 = fopen("sql.txt", "r"))
                input3 = fopen("sql.txt", "r");
            else
            {
                printf("Can't find sql.txt");
                break;
            }

//            fscanf(input3, "%s %s", account_old, password_old);

            printf("Please input Account and Password\n");

            printf("Account => ");
            scanf("%s", account);

            printf("Password => ");
            scanf("%s", password);

            while(fscanf(input3, "%s %s", account_old, password_old)!=EOF)
            {
                if(strcmp(account_old, account) != 0 && strcmp(password_old, password) == 0)
                {
                    printf("account fail");
                    break;
                }

                else if(strcmp(account_old, account) == 0 && strcmp(password_old, password) != 0)
                {
                    printf("password fail");
                    break;
                }

                else if(strcmp(account_old, account) == 0 && strcmp(password_old, password) == 0)
                {
                    printf("Login Success");
                    break;
                }

            }

//            printf("Exist: Account: %s\tPassword: %s", account, password);

            fclose(input3);


            break;
        }

        else if(strcmp(command, "Quit") == 0)
        {
            printf("Quit");
            break;
        }
        else
        {
            printf("Error\n");
            fflush(stdin);
        }

    }
    return 0;

}

int main()
{
    HW1();
    return 0;
}
