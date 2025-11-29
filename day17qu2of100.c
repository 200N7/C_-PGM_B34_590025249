//Write a program to check if a number is prime.

#include <stdio.h>

int main() {
    int num, i, isPrime = 1;  // isPrime = 1 means assume prime

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Not prime\n");
        return 0;
    }

    // check for divisors from 2 to num/2
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0;  // found a divisor
            break;
        }
    }

    if (isPrime)
        printf("Prime\n");
    else
        printf("Not prime\n");

    return 0;
}
