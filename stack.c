#include<stdio.h>
int stack[100],choice,top,i,n,x;
void push(void);
void pop(void);
void display(void);
int main()
{
    top=-1;
    printf("enter teh size of stack:\n");
    scanf("%d",&n);
    printf("STACK OPERATIONS\n");
    printf("1.push\n2.pop\n3.display\n4.delete");
    do
    {
      printf("enter the choice:");
      scanf("%d",&choice);
      switch(choice)
      {
        case 1:
        {
        push();
        break;
        }
        case 2:
        {
        pop();
        break;
        }
        case 3:
        {
        display();
        break;
        }
        case 4:
        {
        printf("exit point");
        break;
        }
        default:
        {
            printf("enter correct value");
        }

      }
      
    
    } while (choice!=4);
    return 0;
}

void push()
{
    if(top>=n-1)
    {
        printf("stack is overflow");
    }
    else{
        printf("enter the value to be pushed:\n");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\nstack underflow");
    }
    else{
        printf("\npopped element is %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\nelements in stack\n");
        for(i=top;i>=0;i--)
        {
            printf("\n%d",stack[i]);
        }
            printf("\n press next choice");

        
    }
        else{
            printf("stack is empty");
        }
    }
