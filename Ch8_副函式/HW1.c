#include <stdio.h>
#include <stdlib.h>

void twoSum(int);

int main()
{
    int sum = 7;
    printf("Given target = %d", sum);
    twoSum(sum);
    return 0;
}

void twoSum(int target)
{
    FILE *inp;
    inp = fopen("list.txt","r");
    int array[10]={0};
    int num, i, j, n=0;
    printf("\n\nInput array is: ");
    while(fscanf(inp, "%d", &num) != EOF)
    {
        array[n] = num;
        printf("%d ",array[n]);
        n++;
    }
    printf("\n\nOutput is :\n");
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if(array[i] + array[j] == target)
            {
                printf("\tarray[%d], array[%d]\n",i, j);
            }
        }
    }
    fclose(inp);
}
