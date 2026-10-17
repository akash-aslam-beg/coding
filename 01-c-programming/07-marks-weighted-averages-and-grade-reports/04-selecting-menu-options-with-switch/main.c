#include <stdio.h>

int main(void) {
    int choice;

    printf("Enter a number (1, 2, or 3): ");
    if (scanf("%d", &choice) != 1) return 1;

    switch (choice) {
        case 1:
            printf("You chose option 1.\n");
            break; 

        case 2:
            printf("You chose option 2.\n");
            break;

        case 3:
            printf("You chose option 3.\n");
            break;

        default:
            printf("Invalid choice. Please enter 1, 2, or 3.\n");
            break;
    }

    return 0;
}
