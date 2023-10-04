#include<stdio.h>
#define max 10
void create();
void searcha();
void displaya();
int m,node,b[20],s;
    int main()
     
    {
        
        char ch;
        do
        {
         
         printf("1.CREATE\n2.DISPLAY\n3.SEARCH\n4.EXIT");
         printf("enter your choice\n");
         scanf("%d\n",&m);
         switch(m) 
        {
            case 1:
            create();
            break;
            case 2:
            displaya();
            break;
            case 3:
            searcha();
            break;
            
            default:
            printf("enter correct choice");
        }
        printf("do you want to continue:\n");
        scanf("\n%c",&ch);
        
        } while ( ch=='Y' || ch=='y');
    }
        void create()
        {
            printf("enter the number of nodes:");
            scanf("%d",&node);
            
            for(int i=1;i<=node;i++)
            {
                printf("enter the elements:"),i+1;
                scanf("%d",&b[i]);
            }
            displaya();

        }
        void displaya()
        {
            printf("elements of list:");
            for(int i=1;i<node;i++)
            {
                printf("%d",b[i]);
            }           
        }
        void searcha()
        {
            printf("enter the element to be searched:");
            scanf("%d",&s);
             int flag=0;
            for(int i=0;i<node;i++)
   {
    if(b[i]==s)
    {
        
        printf("element found at %d",i+1);
        flag=1;
        break;
    }
   }
    if(flag==0)
    {
        printf("not found");
    }

        }
        

