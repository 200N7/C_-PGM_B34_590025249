//Find the longest word in a sentence.

#include <stdio.h>

int main() {
    char str[200];
    int i = 0, start = 0, maxLen = 0, maxStart = 0, len = 0;

    // Read sentence including spaces
    fgets(str, 200, stdin);

    while (1) {
        // End of word or end of string
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {
            if (len > maxLen) {
                maxLen = len;
                maxStart = start;
            }
            len = 0;
            start = i + 1;
        } else {
            len++;
        }

        if (str[i] == '\0' || str[i] == '\n') 
            break;

        i++;
    }

    // Print longest word
    for (i = maxStart; i < maxStart + maxLen; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
