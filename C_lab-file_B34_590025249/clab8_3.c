#include <stdio.h>

void modifyValues(int *x, int *y) {
    *x = *x + 10;   // modify the original value
    *y = *y * 2;
}

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("\nBefore Modification:\n");
    printf("a = %d, b = %d\n", a, b);

    modifyValues(&a, &b);   // pass by reference

    printf("\nAfter Modification (Inside Function):\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
