#include <stdio.h>

void counterFunction() {
    static int count = 0;  // STATIC LOCAL VARIABLE
    count++;
    printf("Function called: count = %d\n", count);
}

int main() {
    counterFunction();  // count = 1
    counterFunction();  // count = 2
    counterFunction();  // count = 3

    return 0;
}
