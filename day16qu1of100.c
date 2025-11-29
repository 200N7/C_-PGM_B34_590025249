// Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main() {
    int num, copy, i;

    printf("Enter a non-negative number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    // Find the highest power of 2 less than or equal to num
    copy = num;
    int power = 1;
    while (power <= copy)
        power *= 2;
    power /= 2;

    printf("Binary: ");
    while (power > 0) {
        if (num >= power) {
            printf("1");
            num -= power;
        } else {
            printf("0");
        }
        power /= 2;
    }
    printf("\n");

    return 0;
}
