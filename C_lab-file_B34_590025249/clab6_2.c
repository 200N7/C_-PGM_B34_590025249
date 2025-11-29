#include <stdio.h>

// Recursive GCD using Euclid algorithm
int gcd(int a, int b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 == 0 && num2 == 0) {
        printf("GCD undefined for both numbers zero.\n");
        return 0;
    }

    printf("GCD(%d, %d) = %d\n", num1, num2, gcd(num1, num2));
    return 0;
}
