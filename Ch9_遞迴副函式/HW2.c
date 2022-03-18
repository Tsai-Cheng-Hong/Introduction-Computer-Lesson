#include <stdio.h>
#include <stdlib.h>


int fib(int n)
{
    int ans;
    if(n==0){
        ans=0;
    }
    else if(n==1 || n==2){
        ans=1;
    }
    else{
       ans = fib(n-2) + fib(n-1);
    }
    return ans;
}


int main()
{
    int sum=0, n=0;
    int num;
    printf("input number:");
    scanf("%d", &num);
    while(n<=num){
        printf("f(%d)=%d\n", n, fib(n));
        sum=sum+fib(n);
        n++;
    }
    printf("sum=%d\n", sum);
    return 0;
}
