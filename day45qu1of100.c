//Count frequency of a given character in a string.

#include <stdio.h>

int main() {
    char str[100], ch;
    int count = 0;

    // Read string
    fgets(str, 100, stdin);

    // Read character to count
    scanf(" %c", &ch);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')   // Ignore newline
            continue;
        if (str[i] == ch) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
