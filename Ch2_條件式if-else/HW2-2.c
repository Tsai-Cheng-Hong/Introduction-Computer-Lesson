#include<stdio.h>
#include<stdlib.h>

int main()
{
	long int i;
	int bonus, bonus1, bonus2, bonus4, bonus6, bonus10;
	printf("�п�J���Q��: ");
	scanf("%d", &i);
	
	/* �]�w�򥻧Q����� */
	
	bonus1 = 100000 * 0.1;				//����10�U
	bonus2 = bonus1 + 100000 * 0.075;	//10�U ~ 20�U
	bonus4 = bonus2 + 200000 * 0.05;	//20�U ~ 40�U
	bonus6 = bonus4 + 200000 * 0.03;	//40�U ~ 60�U
	bonus10 = bonus6 + 400000 * 0.015;	//60�U ~ 100�U

	if(i<=100000)
	{
		bonus = i * 0.1;
	}
	else if (i>100000)
	{
		if(i>100000 && i<=200000)
		{
			bonus = bonus1 + (i - 100000 )* 0.075;
		}
		else if(i>200000 && i<=400000)
		{
			bonus = bonus2 + (i - 200000) * 0.05;
		}
		else if(i>400000 && i<=600000)
		{
			bonus = bonus4 + (i - 400000) * 0.03;
		}
		else if(i>600000 && i<=1000000)
		{
			bonus = bonus6 + (i - 600000) * 0.015;
		}
		else if(i>1000000)
		{
			bonus = bonus10 + (i - 1000000) * 0.01;
		}
		else{}
	}

	printf("�`������: %d", bonus);
	
	return 0;
}
