//Remove all vowels from a string.

#include <stdio.h>

int main() {
    char str[100];
    int j = 0;

    // Read string
    fgets(str, 100, stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch == '\n')  // Ignore newline
            continue;

        // Check if character is NOT a vowel
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            str[j] = ch;
            j++;
        }
    }

    str[j] = '\0'; // End the modified string

    printf("%s\n", str);

    return 0;
}
