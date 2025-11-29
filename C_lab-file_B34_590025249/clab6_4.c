#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int low, high;

    printf("Enter lower and upper range: ");
    scanf("%d %d", &low, &high);

    if (low > high) {
        int temp = low;
        low = high;
        high = temp;
    }

    printf("Prime numbers between %d and %d:\n", low, high);
    int found = 0;

    for (int i = low; i <= high; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found)
        printf("No primes found.");

    return 0;
}
