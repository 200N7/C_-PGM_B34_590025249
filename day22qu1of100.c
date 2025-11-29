//Write a program to check if a number is a strong number.

#include <stdio.h>

// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1, i;
    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, temp, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Not strong number\n");
        return 0;
    }

    temp = num;

    while (temp > 0) {
        digit = temp % 10;           // get last digit
        sum += factorial(digit);     // add factorial of digit
        temp = temp / 10;            // remove last digit
    }

    if (sum == num)
        printf("Strong number\n");
    else
        printf("Not strong number\n");

    return 0;
}
