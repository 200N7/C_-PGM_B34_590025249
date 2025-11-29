//Replace spaces with hyphens in a string.

#include <stdio.h>

int main() {
    char str[100];

    // Read string
    fgets(str, 100, stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')   // Ignore newline
            continue;
        if (str[i] == ' ') {
            str[i] = '-';    // Replace space with hyphen
        }
    }

    printf("%s", str);

    return 0;
}
