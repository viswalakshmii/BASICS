#include<stdio.h>
int main()
{
    int n;
    int flag=1;
    printf("enter n:");
    scanf("%d",&n);
    if(n<2)
    {
        flag=0;
    }
    else
    {
        for(int i=2;i<n;i++)

        {
            if(n%i==0)
            {

    
            flag=0;
            break;

            }
        }
    }
    if(flag)
      printf("%d is not prime",n);
    else
      printf("%d is  prime",n);
    return 0;
}