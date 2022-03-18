#include<stdio.h>
#include<stdlib.h>
#define max 10

int main()
{
	int i=0, j, sum=0; 
	int a, b=1;
	int array[max];
	while (b)
	{
		printf("Please enter number: ");
		scanf("%d",&a);
		printf("you enter ( %d ) in array[%d] \n", a, i);
		array[i] = a;
		
		if(i==9 || a==0){
			b=0;
		}
		else{
			i++;
		}
	}
	printf("\n");
	for (j=0;j<i;j++)
	{
		printf("%d ",array[j]);
		sum += array[j];
	}
	printf("\nSUM = %d",sum);

	return 0;
}

