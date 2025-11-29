//Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits;
    int swapped;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
        num = -num;  // make positive if negative

    last = num % 10; // last digit

    digits = 0;
    int temp = num;
    while (temp > 0) {
        temp /= 10;
        digits++;      // count number of digits
    }

    first = num / pow(10, digits - 1); // first digit

    if (digits == 1) {
        swapped = num;  // single-digit number remains same
    } else {
        swapped = last * pow(10, digits - 1);             // new first digit
        swapped += num % (int)pow(10, digits - 1);        // middle digits + old last
        swapped -= last;                                  // remove old last digit from end
    }

    printf("Number after swapping first and last digit: %d\n", swapped);

    return 0;
}
