#include<stdio.h>
int main()
{
    int a,b,x,big;
    printf("enter:");
    scanf("%d%d",&a,&b);
    (a>b)?(big=a):(big=b);
    printf("biggest\n%d",big);

}