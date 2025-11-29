//Print the initials of a name.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    // Read the full name including spaces
    fgets(str, 100, stdin);

    // Print first character as initial
    if (str[i] != '\n' && str[i] != '\0') {
        printf("%c.", str[i]);
    }

    while (str[i] != '\0' && str[i] != '\n') {
        // Check for space, next character is an initial
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0' && str[i + 1] != '\n') {
            printf("%c.", str[i + 1]);
        }
        i++;
    }

    printf("\n");
    return 0;
}
