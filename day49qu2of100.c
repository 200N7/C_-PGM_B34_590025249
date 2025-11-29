//Print initials of a name with the surname displayed in full.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, lastSpace = -1;

    // Read full name including spaces
    fgets(str, 100, stdin);

    // Find last space index (before surname)
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ' ') {
            lastSpace = i;
        }
        i++;
    }

    // Print initials for all words before surname
    i = 0;
    while (i <= lastSpace) {
        // Print first character and dot if it's start of word
        if (i == 0 || str[i - 1] == ' ') {
            printf("%c.", str[i]);
        }
        i++;
    }

    // Print surname in full
    for (i = lastSpace + 1; str[i] != '\0' && str[i] != '\n'; i++) {
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}
