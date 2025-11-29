//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>
#include <string.h>

int main() {
    // Define enum for user roles
    enum Role { ADMIN, USER, GUEST };

    char input[20];
    scanf("%s", input);

    enum Role role;

    // Map string input to enum
    if (strcmp(input, "ADMIN") == 0) role = ADMIN;
    else if (strcmp(input, "USER") == 0) role = USER;
    else if (strcmp(input, "GUEST") == 0) role = GUEST;
    else {
        printf("Invalid role!\n");
        return 0;
    }

    // Display message based on role
    switch(role) {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
    }

    return 0;
}
