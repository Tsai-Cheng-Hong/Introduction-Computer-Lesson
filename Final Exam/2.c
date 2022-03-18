#include <stdio.h>
#include <time.h>

void printArray(int arr[])
{
	int i;
    for (i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
void leftRotatebyOne(int arr[])
{
    int temp = arr[0], i;
    for (i = 0; i < 10 - 1; i++)
        arr[i] = arr[i + 1];
    arr[10-1] = temp;
}
void leftRotate(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        leftRotatebyOne(arr);
    printf("result: ");
    printArray(arr);
}
void sortArray(int arr[])
{
	int i, j, temp;
	for (i=0; i<10; i++)
    {
        for (j=i+1; j<10; j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("after sorting: ");
    printArray(arr);
}
void randArray(int arr[])
{
	srand(time(NULL));
	int i, j, b=0;
    for(i=0; i<10; i++)
    {
        do
        {
            arr[i]=rand()%100+1;
            b=0;
            for(j=0;j;j++)
            {
                if(arr[i]==arr[j])
                {
                    b=1;
                }
            }
        }while(b==1);
    }
    printf("original array:");
    printArray(arr);
 } 
void writeFile(int arr[])
{
	int i;
	FILE *inp;
	inp = fopen("result.txt","w");
	fprintf(inp,"result: ");
	for(i=0; i<10; i++)
	{
		fprintf(inp,"%d ",arr[i]);
	}
	fclose(inp);
}

int main()
{
    int arr[10], i, j, n, temp;
	randArray(arr);
    sortArray(arr);
    
    printf("\nPlease enter index: ");
    scanf("%d", &n);
    
    leftRotate(arr, n);
    writeFile(arr);
    return 0;
}
