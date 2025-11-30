//Write a program to apply bitwise OR, AND and NOT operators on bit level.

#include <stdio.h>

int main() {
    unsigned int a, b;

    printf("Enter two integers (a and b): ");
    scanf("%u %u", &a, &b);

    printf("Bitwise AND (a & b) = %u\n", a & b);
    printf("Bitwise OR  (a | b) = %u\n", a | b);
    printf("Bitwise XOR (a ^ b) = %u\n", a ^ b);
    printf("Bitwise NOT (~a) = %u\n", ~a);
    printf("Bitwise NOT (~b) = %u\n", ~b);

    return 0;
}
