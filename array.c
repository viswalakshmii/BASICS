#include <stdio.h>
#define max 10

// Function declarations
void create();
void searcha();
void displaya();

int m, node, b[20], s; // Declare variables as global

int main() {
    char ch;

    do {
        printf("1. CREATE\n2. DISPLAY\n3. SEARCH\n4. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &m);

        switch (m) {
            case 1:
                create();
                break;
            case 2:
                displaya();
                break;
            case 3:
                searcha();
                break;
            case 4:
                return 0; // Exit the program
            default:
                printf("Enter correct choice\n");
        }

        printf("Do you want to continue (Y/y for Yes, any other key for No): ");
        scanf(" %c", &ch); // Read a character and ignore whitespace
    } while (ch == 'Y' || ch == 'y');

    return 0;
}

void create() {
    printf("Enter the number of nodes: ");
    scanf("%d", &node);

    for (int i = 0; i < node; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &b[i]);
    }
    displaya();
}

void displaya() {
    printf("Elements of the list: ");
    for (int i = 0; i < node; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
}

void searcha() {
    printf("Enter the element to be searched: ");
    scanf("%d", &s);
    int flag = 0;

    for (int i = 0; i < node; i++) {
        if (b[i] == s) {
            printf("Element found at index %d\n", i);
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        printf("Element not found\n");
    }
}
