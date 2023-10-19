#include <stdio.h>
#include <stdlib.h>

typedef struct list {
    int data;
    struct list* next;
} node;

node* getnode() {
    node* n;
    n = (node*)(malloc(sizeof(node)));
    n->next = NULL;
    return n;
}

node* newnode, *head, *temp;

void create() {
    char ch = 'y'; // Initialize ch to 'y'
    head = NULL;
    do {
        newnode = getnode(); // Allocate memory for newnode
        printf("\nEnter the element to be inserted: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == NULL)
            head = newnode;
        else
            temp->next = newnode;
        temp = newnode;
        printf("Do you want to insert another element? (y/n): ");
        scanf(" %c", &ch); // Read a character and update ch
    } while (ch == 'y' || ch == 'Y');
}

int main() {
    int op;
    printf("\nLinked List Implementation");
    printf("\n1. Create\nEnter your choice: ");
    scanf("%d", &op);
    switch (op) {
    case 1:
        create();
        break;
    default:
        printf("Enter a correct choice.");
    }

    // Free the allocated memory to avoid memory leaks
    

    return 0;
}
