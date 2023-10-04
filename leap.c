#include<stdio.h>
int main()
{
    int n;
    printf("enter the year:");
    scanf("%d",&n);
    if(n%400==0)
    {
        printf("%d is leap",n);
    }
    else
    {
        printf("not");
    }
    
    return 0;

}