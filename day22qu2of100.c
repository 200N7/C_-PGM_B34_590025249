//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    int numerator = 1;      // first numerator
    int denominator = 1;    // first denominator

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (double)numerator / denominator; // add current term
        numerator += 2;  // next numerator increases by 2 (1,3,5,7...)
        denominator += 2; // next denominator increases by 2 (1,3,5,7...)
    }

    printf("Approximate sum: %.2lf\n", sum);

    return 0;
}
