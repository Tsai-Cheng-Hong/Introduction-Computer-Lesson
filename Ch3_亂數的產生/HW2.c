#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int n1, n2, i;
	char choose;

	srand(time(NULL));

	printf("翻一張牌(y/n)");
	scanf("%c",&choose);
    n1 = (rand()%12)+1;		//1~13
	n2 = (rand()%12)+1;		//1~13
	i = (rand()%12)+1;

	if(choose == 'y')
	{
		if(n1>n2)
		{
			if(i<n1 && i>n2)
				printf("過關!\n");

			else if(i>n1 || i<n2)
				printf("賠錢!\n");

			else if(i == n1 || i == n2)
				printf("撞柱，賠雙倍!\n");

			printf("n2 = %d, n1 = %d, 你翻的是 %d\n", n2, n1, i);
		}
		else if (n1<n2)
		{
			if(i>n1 && i<n2)
				printf("過關!\n");

			else if(i<n1 || i>n2)
				printf("賠錢!\n");

			else if(i == n1 || i == n2)
				printf("撞柱，賠雙倍!\n");

			printf("n1 = %d, n2 = %d, 你翻的是 %d\n", n1, n2, i);
		}
		else{
            printf("重來一次！\n");
            printf("n1 = %d, n2 = %d", n1, n2);
		}

	}
	else if (choose == 'n')
	{
		printf("你不翻要玩屁!\n");
	}

	//printf("Game over!");

	return 0;
 }
