#include <stdio.h>
int main() {
    int choice;
    printf(" WELCOME TO SECURE VAULT v1 \n");
    printf("1. Create New Entry\n");
    printf("2. View Saved Entries\n");
    printf("3. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("\nOpening encryption module (Entry Saved!)\n");
            break;
        case 2:
            printf("\nAccessing database No entries found.\n");
            break;
        case 3:
            printf("\nShutting down. Goodbye!\n");
            break;
        default:
            printf("\nInvalid Access Code.\n");
    }
    return 0;
}