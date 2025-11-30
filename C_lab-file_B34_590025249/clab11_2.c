//Write a program to apply left shift and right shift operator

#include <stdio.h>

int main() {
    unsigned int num, shift;

    printf("Enter a number: ");
    scanf("%u", &num);

    printf("Enter number of positions to shift: ");
    scanf("%u", &shift);

    printf("Left Shift (num << shift)  = %u\n", num << shift);
    printf("Right Shift (num >> shift) = %u\n", num >> shift);

    return 0;
}
