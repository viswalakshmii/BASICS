#include<stdio.h>
int rec(int x)
{
    if(x==100)
    return 0;
    printf("recursive value:%d\n",x);
  
    rec(x+1);
}
int main()
{
    int n;
    printf("enter value between 1 to 100\n");
    scanf("%d",&n);
    rec(n);

}
