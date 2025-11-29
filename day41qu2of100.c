//Print each character of a string on a new line.

#include <stdio.h>

int main() {
    char str[100];

    // Read the string
    fgets(str, 100, stdin);

    // Print characters
    for (int i = 0; str[i] != '\0'; i++) {

        if (str[i] == '\n')   // Ignore newline
            continue;

        printf("%c\n", str[i]);
    }

    return 0;
}
