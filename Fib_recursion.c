#include<stdio.h>
int fib(int x)
{
    if(x<=0)
    return 0;
    else if (x==1)
    
    return 1;
    else
    return fib(x-1)+fib(x-2);

}
int main()
{
    int n; 
    printf("enter the number:");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    printf("fibo series:%d:\n",fib(i));

}