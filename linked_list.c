#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
//#include<malloc.h>
typedef struct list
{
    int data;
    struct list*next;
}node;
node* newnode,*head,*temp;
node *getnode()
{
    node* n;
    n=(node*)(malloc(sizeof(node)));
    n->next =NULL;
    return(n);
}

void create()
{
    char ch='y';
    printf("\ncreating new node:");
    head=NULL;
    do
    {
        newnode=getnode();
       printf("\nenter the element to be inserted:");
       scanf("%d",&newnode->data);
       if(head==NULL)
        head=newnode;
       else
        temp->next=newnode;
       temp=newnode;
       printf("do you want to continue?:");
      scanf("%c",&ch);
    } while (ch=='y'||ch=='Y');

    
     
}
int main()
{
    int op;
    printf("\nlinked list implementation");
    printf("\n1.create");
    printf("\nenter your choice:");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
        create();
        break;
        default:
        printf("enter correct choice");
    }
return 0;


}