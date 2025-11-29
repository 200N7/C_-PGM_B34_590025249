//Toggle case of each character in a string.

#include <stdio.h>

int main() {
    char str[100];

    // Read string
    fgets(str, 100, stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')   // Ignore newline
            continue;

        // If uppercase, convert to lowercase
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        // If lowercase, convert to uppercase
        else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("%s", str);

    return 0;
}
