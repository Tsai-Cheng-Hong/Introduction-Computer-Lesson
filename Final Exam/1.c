#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int func(int n, FILE *input)
{
    int i=0;

    for(i=2; i<=n; i++)
    {
        while(n!=i)
        {
            if(n%i==0)
            {
                printf("%d*",i);
                fprintf(input, "%d*",i);
                n=n/i;
            }
            else
                break;
        }
    }
    printf("%d\n",n);
    fprintf(input, "%d\n",n);
    return n;
}


int fianl_exam()
{
    int n=0;
    int i=0;
    int ans=0;

    FILE *input;

    input = fopen("test.txt", "w");

    printf("Input¡G");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%d=",i);
        fprintf(input, "%d=",i);
        ans = func(i, input);
    }

}


int main()
{
    fianl_exam();
    return 0;
}
