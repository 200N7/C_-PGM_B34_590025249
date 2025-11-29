//Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>

int main() {
    int i, j, n, isPrime;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    for (i = 2; i <= n; i++) {  // check each number from 2 to n
        isPrime = 1;  // assume i is prime

        // check divisibility from 2 to sqrt(i) (simpler: 2 to i/2)
        for (j = 2; j <= i/2; j++) {
            if (i % j == 0) { // divisible by j
                isPrime = 0;  // not prime
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
