//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    int numerator = 2;     // first numerator
    int denominator = 3;   // first denominator

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (double)numerator / denominator; // add current term
        numerator += 2;     // next numerator increases by 2
        denominator += 4;   // next denominator increases by 4
    }

    printf("Approximate sum: %.2lf\n", sum);

    return 0;
}
