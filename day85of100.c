//Assign explicit values starting from 10 and print them.

#include <stdio.h>

int main() {
    // Define enum with explicit values
    enum Letters { A = 10, B, C };

    // Print the values
    printf("A=%d\n", A);
    printf("B=%d\n", B);
    printf("C=%d\n", C);

    return 0;
}
