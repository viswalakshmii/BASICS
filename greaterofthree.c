#include <stdio.h>

int main() {
    // Write C code here
    int a,b,c;
    printf("enter 3 numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)

    {
        printf("a is greater");
    }
    else if(b>a && b>c)
    {
        printf("b is greater");
    }
    else
    {
        printf("c");
    }
  
    return 0;
}