#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *input, *output;
	//printf("�п�J�@�ӤQ�i���:");
	input = fopen("decimal.txt", "r");
	int i, decimal = 0; 	//�G�i���
	int b = 1; 			//��while�j��ϥ� 
	int num[100] ; 		//�ΨӦs�G�i�Array
	int index = 0;		//Array����}
	int count = -1; 	//�Ψӭp��Aaary���ϥέӼ�, �o�̨ϥ�-1�O�]��Array��}�O�q0�}�l��, -1+1=0���array[0] 
	//scanf("%d",&decimal);
	fscanf(input, "%d", &decimal);
	printf("��J���Q�i��Ƭ�: %d",decimal);
	while (b) 
	{
		num[index] = decimal % 2; //�C���B����l
		decimal /= 2; //�C���B��G�i��ƻݭn���H2
		index++; //�U���@��
		count++; //�C�`���@���N��ܥe�Τ@�Ӧ�m
		
		if (decimal == 0) 
		{
			b = 0;
		}
	}
	fclose(input);
	output = fopen("binary.txt", "w");

	fprintf(output, "�ഫ�᪺�G�i��Ƭ��G");
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
