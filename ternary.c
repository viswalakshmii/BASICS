#include <stdio.h> 
int main ()
{
    int num1, num2, num3;
    
    num1=12,num2=98,num3=84;
    
    int temp, result;    
    
    
    temp = num1>num2 ? num1:num2;
    
   
    result = temp>num3 ? temp:num3;    
     
    printf(" %d is the largest", result);
    return 0;
}