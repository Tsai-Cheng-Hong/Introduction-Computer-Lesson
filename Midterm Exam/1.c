#include <stdio.h>
#include <stdlib.h>


int mid_test()
{
    FILE *input;

    int n = 0;
    int ASICII[25]= {0};

    input = fopen("ans.txt", "w");

    while(1)
    {
        printf("Input layer n :");
        scanf("%d", &n);

        if(n<=26)
        {
//            fprintf(input,"Input layer n :%d\n\n", n);

            for(int i=0; i<n; i++)
            {
                for(int i=0; i<n; i++)
                    ASICII[i] = 65 + i;
                for(int c=0; c<n-i; c++)
                    fprintf(input," ");
                for(int j=0; j<i*2+1; j++)
                    fprintf(input,"%c", ASICII[i]);
                fprintf(input,"\n");
            }

            int a = ASICII[n-1]-1;

            for(int m=0; m<n-1; m++)
            {
                for(int i=0; i<n; i++)
                    ASICII[i] = a - i;
                for(int f=0; f<m+2; f++)
                    fprintf(input," ");
                for(int h=0; h<(2*n-1)-(m*2+1)-1; h++)
                    fprintf(input,"%c", ASICII[m]);
                fprintf(input,"\n");
            }
            fclose(input);
            break;
        }

        printf("error again\n");
        fflush(stdin);
    }

    return 0;
}

int main()
{
    mid_test();
    return 0;
}
