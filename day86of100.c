//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include <stdio.h>
#include <string.h>

int main() {
    // Define enum for menu choices
    enum Menu { ADD, SUBTRACT, MULTIPLY };

    char choice[20];
    int a, b;

    // Input choice and numbers
    scanf("%s %d %d", choice, &a, &b);

    enum Menu option;

    // Map string input to enum
    if (strcmp(choice, "ADD") == 0) option = ADD;
    else if (strcmp(choice, "SUBTRACT") == 0) option = SUBTRACT;
    else if (strcmp(choice, "MULTIPLY") == 0) option = MULTIPLY;
    else {
        printf("Invalid choice\n");
        return 0;
    }

    // Perform operation based on enum
    switch(option) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
    }

    return 0;
}
