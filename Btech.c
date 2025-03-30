#include <stdio.h>

int main() {
    int courseChoice;

    printf("Choose a course:\n");
    printf("1. B.tech (CSE)\n");
    printf("2. B.tech (AIML)\n");
    printf("3. B.tech (ECE)\n");
    printf("4. B.tech (Mechanical)\n");
    printf("Enter the number corresponding to your choice: ");
    scanf("%d", &courseChoice);

    switch (courseChoice) {
        case 1:
            printf("You selected CSE.\n");
            break;
        case 2:
            printf("You selected AIML.\n");
            break;
        case 3:
            printf("You selected ECE.\n");
            break;
        case 4:
            printf("You selected Mechanical.\n");
            break;
        default:
            printf("Invalid choice. Please select a number between 1 and 4.\n");
    }

    return 0;
}

