#include<stdio.h>
int main()
{
    int n1,n2,c=0;
    printf("enter 2\n");
    scanf("%d%d",&n1,&n2);
     for(int i=n1;i<=n2;i++)
    {
        if(i%2==0)
        printf("%d",i);
    }
        
}