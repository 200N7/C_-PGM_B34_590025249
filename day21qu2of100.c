//Write a program to check if a number is a perfect number.

#include <stdio.h>

int main() {
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Not perfect number\n");
        return 0;
    }

    // Loop through all numbers less than num
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;  // add proper divisor
        }
    }

    if (sum == num)
        printf("Perfect number\n");
    else
        printf("Not perfect number\n");

    return 0;
}
