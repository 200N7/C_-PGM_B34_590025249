//Show that enums store integers by printing assigned values.

#include <stdio.h>

int main() {
    // Define enum
    enum Status { SUCCESS, FAILURE, TIMEOUT };

    // Print enum names with their corresponding integer values
    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d\n", SUCCESS, FAILURE, TIMEOUT);

    return 0;
}
