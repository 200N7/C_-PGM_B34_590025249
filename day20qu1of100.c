//Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int num, digit;
    long product = 1; // use long for bigger numbers
    int hasOdd = 0;   // flag to check if any odd digit exists

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
        num = -num; // make positive if negative

    while (num > 0) {
        digit = num % 10;  // get last digit
        if (digit % 2 != 0) { // check if odd
            product *= digit;
            hasOdd = 1;      // mark that odd digit exists
        }
        num = num / 10;      // remove last digit
    }

    if (!hasOdd)
        product = 1;         // no odd digits, assume 1

    printf("Product of odd digits is: %ld\n", product);

    return 0;
}
