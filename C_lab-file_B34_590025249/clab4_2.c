#include <stdio.h>

void myFunction() {
    int localVar = 50;   // LOCAL VARIABLE
    printf("Inside myFunction: localVar = %d\n", localVar);
}

int main() {
    myFunction();

    // Below line will cause ERROR if uncommented, because localVar is not accessible here
    // printf("%d", localVar);

    printf("localVar cannot be accessed outside myFunction.\n");

    return 0;
}
