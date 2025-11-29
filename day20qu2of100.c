//Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main() {
    long binary, rev = 0, temp, digit;
    long place = 1;

    printf("Enter a binary number: ");
    scanf("%ld", &binary);

    temp = binary;

    // Reverse the number to process from left to right
    while (temp > 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }

    printf("1's complement: ");
    // Process each digit
    while (rev > 0) {
        digit = rev % 10;
        if (digit == 0)
            printf("1");
        else if (digit == 1)
            printf("0");
        else {
            printf("\nInvalid binary number!\n");
            return 0;
        }
        rev /= 10;
    }
    printf("\n");

    return 0;
}
