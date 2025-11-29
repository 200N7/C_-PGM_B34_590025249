//Reverse each word in a sentence without changing the word order.

#include <stdio.h>

int main() {
    char str[200];
    int i = 0, start, end;

    // Read sentence including spaces
    fgets(str, 200, stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        // Find start of word
        start = i;

        // Move i to end of word
        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            i++;
        }
        end = i - 1;

        // Print word in reverse
        for (int j = end; j >= start; j--) {
            printf("%c", str[j]);
        }

        // Print space if not end of string
        if (str[i] == ' ') {
            printf(" ");
            i++;
        }
    }

    printf("\n");
    return 0;
}
