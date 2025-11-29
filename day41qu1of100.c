//Count characters in a string without using built-in length functions.

#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    // Read the string
    fgets(str, 100, stdin);

    // Count characters until '\0'
    for (int i = 0; str[i] != '\0'; i++) {

        if (str[i] == '\n')   // Ignore newline from fgets
            continue;

        count++;
    }

    printf("%d", count);

    return 0;
}
