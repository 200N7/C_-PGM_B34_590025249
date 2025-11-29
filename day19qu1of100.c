//Write a program to find the LCM of two numbers.

#include <stdio.h>

int main() {
    int num1, num2, max, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Start with the larger of the two numbers
    max = (num1 > num2) ? num1 : num2;

    lcm = max;

    while (1) {
        if (lcm % num1 == 0 && lcm % num2 == 0) {
            break;  // found LCM
        }
        lcm++;  // try next number
    }

    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}
