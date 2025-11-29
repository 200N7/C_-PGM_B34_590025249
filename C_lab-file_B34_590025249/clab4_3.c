#include <stdio.h>

int main() {

    printf("Entering block...\n");

    {
        int blockVar = 100;   // BLOCK SCOPE VARIABLE
        printf("Inside block: blockVar = %d\n", blockVar);
    }

    printf("Outside block: blockVar is NOT accessible here.\n");

    return 0;
}
