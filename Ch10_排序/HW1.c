/* sorting */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a[25],check[200]={0}; //數字的值，檢查有無重複
    int i=0,j=0, k;
    int kk=24;
    int temp=0;
    srand(time(NULL));


    /* 給值並檢查有無重複 */
    while(i<25)
    {
        a[i]=(rand()%51)+150;  //save random numbers
        if(check[a[i]]==0)
        {
            check[a[i]]=1;
            i++;
        }
    }

    printf("random numbers : \n");
     for(i=0;i<25;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");


    

    return 0;
}
