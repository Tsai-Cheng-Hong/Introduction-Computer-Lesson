#include <stdio.h>
#include <stdlib.h>

int main()
{


    int fib[31];//0~30
    int i, j;
    int sum = 0;

    fib[0] = 0;
    fib[1] = 1;
    fib[2] = 1;


    printf("f[0] = %d\n", 0);
    printf("f[1] = %d\n", 1);
    

    for(i=0; i<=28; i++){

        fib[i+2] = fib[i+1] +fib[i];
        printf("f[%d] = %d\n", i+2, fib[i+2]);
    }

    for(j=0; j<=30;j++){
        sum = sum + fib[j];
    }

    printf("sum = %d", sum);

    return 0;
}
  /*
    int var;
    int sum=0;

    for(var=1; var<=50; var++){
        if(var%2==0){
            sum = sum - pow(var, 2);
            //printf("%d^2 - %d^2 = %d^2", va)
        }
        else{
            sum = sum + pow(var, 2);
        }

    }

    printf("sum = %d", sum);

    */
