#include <stdio.h>
#include <stdlib.h>

int main()
{
	int j,i,k,a,b,m,n,h;
	do
    {
        printf("��J���y��Ϊ��W������ : ");
        scanf("%d",&m);
        printf("��J���y��Ϊ��U������ : ");
        scanf("%d",&n);
        printf("\n\n\n");
        
        if (((m%2)!=(n%2))||m==n)                                //�W�U�����׻ݦP�ɬ��_�Ʃΰ��ơA�åB�W�U�����۵�
        {
            printf("�L�k�c�����y���,�Э��s��J\n\n\n");
        }
        else if (m>n)                                           //�W�����������p
        {
            for(i=0;i<=(m-n)/2;i++)
            {
                for(j=0;j<=m-i;j++)
                {
                    if(j>=i)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
            break;
        }
        else                                                    //�U�����������p
        {
            for(i=0;i<=(n-m)/2;i++)
            {
                for(j=0;j<=(n-m)/2+m+i;j++)
                {
                    if(j>=(n-m)/2-i+2)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
            break;
        }
    }
    while(1);
	return 0;
}
