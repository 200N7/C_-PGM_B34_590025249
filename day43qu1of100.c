//Reverse a string.

#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    // Read string
    fgets(str, 100, stdin);

    // Calculate length manually (ignore newline)
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') 
            break;
        length++;
    }

    // Print string in reverse
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}
