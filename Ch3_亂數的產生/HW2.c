#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int n1, n2, i;
	char choose;

	srand(time(NULL));

	printf("½�@�i�P(y/n)");
	scanf("%c",&choose);
    n1 = (rand()%12)+1;		//1~13
	n2 = (rand()%12)+1;		//1~13
	i = (rand()%12)+1;

	if(choose == 'y')
	{
		if(n1>n2)
		{
			if(i<n1 && i>n2)
				printf("�L��!\n");

			else if(i>n1 || i<n2)
				printf("�߿�!\n");

			else if(i == n1 || i == n2)
				printf("���W�A������!\n");

			printf("n2 = %d, n1 = %d, �A½���O %d\n", n2, n1, i);
		}
		else if (n1<n2)
		{
			if(i>n1 && i<n2)
				printf("�L��!\n");

			else if(i<n1 || i>n2)
				printf("�߿�!\n");

			else if(i == n1 || i == n2)
				printf("���W�A������!\n");

			printf("n1 = %d, n2 = %d, �A½���O %d\n", n1, n2, i);
		}
		else{
            printf("���Ӥ@���I\n");
            printf("n1 = %d, n2 = %d", n1, n2);
		}

	}
	else if (choose == 'n')
	{
		printf("�A��½�n����!\n");
	}

	//printf("Game over!");

	return 0;
 }
