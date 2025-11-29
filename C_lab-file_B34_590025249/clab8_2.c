#include <stdio.h>

int main() {
    int a = 10;
    float b = 20.5;
    char c = 'Z';

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;

    printf("Original Addresses:\n");
    printf("p1 = %p\n", p1);
    printf("p2 = %p\n", p2);
    printf("p3 = %p\n\n", p3);

    p1++;     // moves by 4 bytes
    p2++;     // moves by 4 bytes
    p3++;     // moves by 1 byte

    printf("After Increment:\n");
    printf("p1 = %p (+4 bytes)\n", p1);
    printf("p2 = %p (+4 bytes)\n", p2);
    printf("p3 = %p (+1 byte)\n\n", p3);

    p1--;     // back to original
    p2--;
    p3--;

    printf("After Decrement (Back to Original):\n");
    printf("p1 = %p\n", p1);
    printf("p2 = %p\n", p2);
    printf("p3 = %p\n", p3);

    return 0;
}
