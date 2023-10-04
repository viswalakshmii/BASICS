#include <stdio.h>  

int main()
{
    int i, c = 0;
    int n1,n2;
    printf("enter n");
    scanf("%d%d",&n1,&n2);
    
    for(i = n1; i <= n2; i++)
     {
        for(int j=1;j<n1;j++) 
        {
            if(n1%j==0)
            c+=1;
        }
     }
     if(c==2)
     printf("prime");
     else
     printf("not");

return 0;
}