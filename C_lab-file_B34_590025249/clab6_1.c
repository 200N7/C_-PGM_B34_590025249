#include <stdio.h>

// Recursive factorial
long long factRec(int n) {
    if (n < 0) return -1;
    if (n == 0) return 1;
    return n * factRec(n - 1);
}

// Non-recursive factorial
long long factNonRec(int n) {
    if (n < 0) return -1;
    long long result = 1;
    for (int i = 1; i <= n; i++)
        result *= i;
    return result;
}

// Binomial coefficient nCr = n! / (r! * (n-r)!)
long long binomial(int n, int r) {
    if (n < 0 || r < 0 || r > n)
        return -1;
    long long a = factNonRec(n);
    long long b = factNonRec(r);
    long long c = factNonRec(n - r);
    return a / (b * c);
}

int main() {
    int n, r;

    printf("Enter n and r for nCr: ");
    scanf("%d %d", &n, &r);

    if (n < 0 || r < 0 || r > n) {
        printf("Invalid input! n and r must be non-negative and r <= n.\n");
        return 0;
    }

    printf("Recursive Factorial of %d = %lld\n", n, factRec(n));
    printf("Non-Recursive Factorial of %d = %lld\n", n, factNonRec(n));
    printf("Binomial Coefficient %dC%d = %lld\n", n, r, binomial(n, r));

    return 0;
}
