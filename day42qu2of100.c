//Convert a lowercase string to uppercase without using built-in functions.

#include <stdio.h>

int main() {
    char str[100];

    // Read string
    fgets(str, 100, stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch >= 'a' && ch <= 'z') {
            // Convert to uppercase by subtracting 32
            str[i] = ch - 32;
        }
    }

    printf("%s", str);

    return 0;
}
