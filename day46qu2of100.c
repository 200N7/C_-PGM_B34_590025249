//Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0}; // Frequency array for 'a' to 'z'

    // Read string
    fgets(str, 100, stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;

            if (freq[ch - 'a'] == 2) { // First character repeated
                printf("%c\n", ch);
                return 0;
            }
        }
    }

    printf("No repeating lowercase letter\n");
    return 0;
}
