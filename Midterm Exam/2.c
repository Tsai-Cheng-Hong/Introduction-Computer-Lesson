#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *input, *output;
	//printf("請輸入一個十進制數:");
	input = fopen("decimal.txt", "r");
	int i, decimal = 0; 	//二進制數
	int b = 1; 			//給while迴圈使用 
	int num[100] ; 		//用來存二進制的Array
	int index = 0;		//Array的位址
	int count = -1; 	//用來計算Aaary的使用個數, 這裡使用-1是因為Array位址是從0開始的, -1+1=0表示array[0] 
	//scanf("%d",&decimal);
	fscanf(input, "%d", &decimal);
	printf("輸入的十進制數為: %d",decimal);
	while (b) 
	{
		num[index] = decimal % 2; //每次運算取餘
		decimal /= 2; //每次運算二進制數需要除以2
		index++; //下移一位
		count++; //每循環一次就表示占用一個位置
		
		if (decimal == 0) 
		{
			b = 0;
		}
	}
	fclose(input);
	output = fopen("binary.txt", "w");

	fprintf(output, "轉換後的二進制數為：");
	for (i = count; i >= 0; i--)
	{
		//printf("%d",num[i]);
		fprintf(output, "%d", num[i]);
		if(i % 4 == 0)
			//printf(" ");
			fprintf(output, " ");
	}
	fclose(output);
	return 0;
}
