#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'X';

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;

    printf("INTEGER POINTER:\n");
    printf("Value of a = %d\n", a);
    printf("Address in p1 = %p\n", p1);
    printf("Value pointed by p1 = %d\n\n", *p1);

    printf("FLOAT POINTER:\n");
    printf("Value of b = %.2f\n", b);
    printf("Address in p2 = %p\n", p2);
    printf("Value pointed by p2 = %.2f\n\n", *p2);

    printf("CHAR POINTER:\n");
    printf("Value of c = %c\n", c);
    printf("Address in p3 = %p\n", p3);
    printf("Value pointed by p3 = %c\n", *p3);

    return 0;
}
