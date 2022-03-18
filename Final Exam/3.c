#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input[24] = {1,11,5,2,6,7,3,13,9,12,7,16,14,3,25,19,18,22,23,13,29,24,4,28};
    int i,j=0;
    printf("Input : ");
    for (i=0;i<24;i++)
    {
        printf("%d  ",input[i]);
    }
    printf("\n");
    //printf("Left : ");
    int L[8]={0},H[8]={0},R[8]={0};
    for (i=0;i<8;i++)  //Left
    {
        L[i] = input[j];
        //printf("%d  ",L[i]);
        j=j+3;
    }
   // printf("\n");

    j = 1;
    //printf("Height : ");
    for (i=0;i<8;i++)  //Height
    {
        H[i] = input[j];
        //printf("%d  ",H[i]);
        j=j+3;
    }
   // printf("\n");
   // printf("Right : ");
    j=2;
    for (i=0;i<8;i++)  //Right
    {
        R[i] = input[j];
        //printf("%d  ",R[i]);
        j=j+3;
    }

i=0;
int M,a;
  int LL[30]={0};
  while(i<8)
     {
        if(R[i]>M)   M=R[i];
        for(a=L[i];a<R[i];a++)
           if(H[i]>LL[a])
              LL[a]=H[i];
              i++;
     }
  int last=0;
     for(a=0;a<M;a++)
        if(LL[a]!=last)
          {
             printf("%d %d ",a,LL[a]);
             last=LL[a];
          }
          printf("%d %d\n",M,0);

    return 0;
}
