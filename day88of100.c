//Print all enum names and integer values using a loop.

#include <stdio.h>

int main() {
    // Define enum
    enum Color { RED, YELLOW, GREEN };

    // Array of enum names as strings
    const char *names[] = { "RED", "YELLOW", "GREEN" };
    int n = sizeof(names) / sizeof(names[0]);

    // Print names and their corresponding enum values
    for(int i = 0; i < n; i++) {
        printf("%s=%d\n", names[i], i);
    }

    return 0;
}
