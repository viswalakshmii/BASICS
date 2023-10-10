#include<stdio.h>
int main()
{
    int s=0,r;

    for (int i=10;i<=100;i++)
    {

    
    while(i>0)
    {
        r=i%10;
        s=s+(r*r*r);
        i=i/10;
        printf("%d",i);
        

    }
    }
    
    }
