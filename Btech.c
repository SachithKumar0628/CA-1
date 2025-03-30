#include <stdio.h>

int main() {
    int choice;

    printf("Select an option:\n");
    printf("1. B.Tech (CSE)\n");
    printf("2. B.Tech (AIML)\n");
    printf("3. B.Tech (ECE)\n");
    printf("4. B.Tech (Mechanical)\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
	    case 1:
            printf("You have selected CSE\n");
            break;
	    case 2:
            printf("You have selected AIML\n");
            break;
	    case 3:
            printf("You have selected ECE\n");
            break;
	    }
    return 0;
}


