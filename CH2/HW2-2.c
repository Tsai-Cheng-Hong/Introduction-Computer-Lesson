#include<stdio.h>
#include<stdlib.h>

int main()
{
	long int i;
	int bonus, bonus1, bonus2, bonus4, bonus6, bonus10;
	printf("請輸入當月利潤: ");
	scanf("%d", &i);
	
	/* 設定基本利潤條件 */
	
	bonus1 = 100000 * 0.1;				//未滿10萬
	bonus2 = bonus1 + 100000 * 0.075;	//10萬 ~ 20萬
	bonus4 = bonus2 + 200000 * 0.05;	//20萬 ~ 40萬
	bonus6 = bonus4 + 200000 * 0.03;	//40萬 ~ 60萬
	bonus10 = bonus6 + 400000 * 0.015;	//60萬 ~ 100萬

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

	printf("總獎金為: %d", bonus);
	
	return 0;
}
