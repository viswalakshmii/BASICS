#include<stdio.h>

int main()
{
    int n,c;
    printf("enter");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        if(n%i==0)
        c=c+1;
    }

    if(c==2)
    {
        printf("not prime");
    }
    else{
        printf("prime");
    }
}